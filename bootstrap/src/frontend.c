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
static struct { VBlob sym; char bytes[11]; } _V10string_D310 = { { VSTRING, 11 }, "/bin/rm ~A" };
static struct { VBlob sym; char bytes[12]; } _V0delete__file = { { VSYMBOL, 12 }, "delete-file" };
static struct { VBlob sym; char bytes[87]; } _V10string_D309 = { { VSTRING, 87 }, "program has toplevel expressions in multiple files, and so it generated multiple mains" };
static struct { VBlob sym; char bytes[51]; } _V10string_D308 = { { VSTRING, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[10]; } _V0num__mains = { { VSYMBOL, 10 }, "num-mains" };
static struct { VBlob sym; char bytes[7]; } _V0stdout = { { VSYMBOL, 7 }, "stdout" };
static struct { VBlob sym; char bytes[2]; } _V10string_D307 = { { VSTRING, 2 }, " " };
static struct { VBlob sym; char bytes[10]; } _V10string_D306 = { { VSTRING, 10 }, "gcc -o ~A" };
static struct { VBlob sym; char bytes[8]; } _V0command = { { VSYMBOL, 8 }, "command" };
static struct { VBlob sym; char bytes[6]; } _V10string_D305 = { { VSTRING, 6 }, " -O~A" };
static struct { VBlob sym; char bytes[40]; } _V10string_D304 = { { VSTRING, 40 }, " -rdynamic -Wmissing-braces -masm=intel" };
static struct { VBlob sym; char bytes[6]; } _V0flags = { { VSYMBOL, 6 }, "flags" };
static struct { VBlob sym; char bytes[20]; } _V10string_D303 = { { VSTRING, 20 }, " -Wl,--no-as-needed" };
static struct { VBlob sym; char bytes[15]; } _V10string_D302 = { { VSTRING, 15 }, " -fPIC -shared" };
static struct { VBlob sym; char bytes[11]; } _V10string_D301 = { { VSTRING, 11 }, " -lvscheme" };
static struct { VBlob sym; char bytes[4]; } _V10string_D300 = { { VSTRING, 4 }, " -c" };
static struct { VBlob sym; char bytes[4]; } _V10string_D299 = { { VSTRING, 4 }, " -g" };
static struct { VBlob sym; char bytes[9]; } _V0cc__files = { { VSYMBOL, 9 }, "cc-files" };
static struct { VBlob sym; char bytes[6]; } _V10string_D298 = { { VSTRING, 6 }, "/tmp/" };
static struct { VBlob sym; char bytes[9]; } _V0read__all = { { VSYMBOL, 9 }, "read-all" };
static struct { VBlob sym; char bytes[6]; } _V10string_D297 = { { VSTRING, 6 }, "a.out" };
static struct { VBlob sym; char bytes[6]; } _V10string_D296 = { { VSTRING, 6 }, ".escm" };
static struct { VBlob sym; char bytes[3]; } _V10string_D295 = { { VSTRING, 3 }, ".c" };
static struct { VBlob sym; char bytes[49]; } _V10string_D294 = { { VSTRING, 49 }, "FIXME: -c and -t and -E can only handle one file" };
static struct { VBlob sym; char bytes[56]; } _V10string_D293 = { { VSTRING, 56 }, "Cannot specify '-c' or '-t' or '-E' with multiple files" };
static struct { VBlob sym; char bytes[54]; } _V10string_D292 = { { VSTRING, 54 }, "Cannot specify '-c' or '-t' or '-E' with object files" };
static struct { VBlob sym; char bytes[44]; } _V10string_D291 = { { VSTRING, 44 }, "Only one of '-c' or '-t' or '-E' can be set" };
static struct { VBlob sym; char bytes[23]; } _V10string_D290 = { { VSTRING, 23 }, "No input file provided" };
static struct { VBlob sym; char bytes[19]; } _V10string_D289 = { { VSTRING, 19 }, "Unknown CLI option" };
static struct { VBlob sym; char bytes[30]; } _V10string_D288 = { { VSTRING, 30 }, "Wrapper flag -W missing comma" };
static struct { VBlob sym; char bytes[67]; } _V10string_D287 = { { VSTRING, 67 }, "Wrapper flag -W can only pass args to the C compiler, eg -Wc,-Ilib" };
static struct { VBlob sym; char bytes[57]; } _V10string_D286 = { { VSTRING, 57 }, "Expand flag -E expects integer between 0 and 2 inclusive" };
static struct { VBlob sym; char bytes[63]; } _V10string_D285 = { { VSTRING, 63 }, "Optimization flag -O expects integer between 0 and 3 inclusive" };
static struct { VBlob sym; char bytes[3]; } _V10string_D284 = { { VSTRING, 3 }, ".o" };
static struct { VBlob sym; char bytes[10]; } _V0benchmark = { { VSYMBOL, 10 }, "benchmark" };
static struct { VBlob sym; char bytes[11]; } _V0keep__temps = { { VSYMBOL, 11 }, "keep-temps" };
static struct { VBlob sym; char bytes[8]; } _V0version = { { VSYMBOL, 8 }, "version" };
static struct { VBlob sym; char bytes[5]; } _V0help = { { VSYMBOL, 5 }, "help" };
static struct { VBlob sym; char bytes[7]; } _V0shared = { { VSYMBOL, 7 }, "shared" };
static struct { VBlob sym; char bytes[13]; } _V10string_D283 = { { VSTRING, 13 }, "vgtco:O:E:W:" };
static struct { VBlob sym; char bytes[29]; } _V10string_D282 = { { VSTRING, 29 }, "Vanity Scheme Compiler 0.0.0" };
static struct { VBlob sym; char bytes[37]; } _V10string_D281 = { { VSTRING, 37 }, "Copyright (C) 2023 Richard Van Natta" };
static struct { VBlob sym; char bytes[16]; } _V0display__version = { { VSYMBOL, 16 }, "display-version" };
static struct { VBlob sym; char bytes[29]; } _V10string_D280 = { { VSTRING, 29 }, "Usage: vsc [options] file..." };
static struct { VBlob sym; char bytes[9]; } _V10string_D279 = { { VSTRING, 9 }, "Options:" };
static struct { VBlob sym; char bytes[92]; } _V10string_D278 = { { VSTRING, 92 }, "  -O<num>       Compile with optimization levels 0 (slowest codegen) to 3 (fastest codegen)" };
static struct { VBlob sym; char bytes[43]; } _V10string_D277 = { { VSTRING, 43 }, "  -g            Compile with debug symbols" };
static struct { VBlob sym; char bytes[116]; } _V10string_D276 = { { VSTRING, 116 }, "  -E<num>       Expand only, do not compile or link. 0: macros only, 1: continuation passing style, 2: optimization" };
static struct { VBlob sym; char bytes[55]; } _V10string_D275 = { { VSTRING, 55 }, "  -t            Transpile only, do not compile or link" };
static struct { VBlob sym; char bytes[66]; } _V10string_D274 = { { VSTRING, 66 }, "  -c            Transpile, compile, and assemble, but do not link" };
static struct { VBlob sym; char bytes[45]; } _V10string_D273 = { { VSTRING, 45 }, "  -o <file>     Place the output into <file>" };
static struct { VBlob sym; char bytes[43]; } _V10string_D272 = { { VSTRING, 43 }, "  -v            Show intermediate commands" };
static struct { VBlob sym; char bytes[55]; } _V10string_D271 = { { VSTRING, 55 }, "  -Wc,<option>  Pass comma seperated to the C compiler" };
static struct { VBlob sym; char bytes[1]; } _V10string_D270 = { { VSTRING, 1 }, "" };
static struct { VBlob sym; char bytes[42]; } _V10string_D269 = { { VSTRING, 42 }, "  --shared      Compile as shared library" };
static struct { VBlob sym; char bytes[74]; } _V10string_D268 = { { VSTRING, 74 }, "  --keep-temps  Keep temporary compilation files, such as C intermediates" };
static struct { VBlob sym; char bytes[36]; } _V10string_D267 = { { VSTRING, 36 }, "  --help        You know about this" };
static struct { VBlob sym; char bytes[44]; } _V10string_D266 = { { VSTRING, 44 }, "  --version     Show version and build info" };
static struct { VBlob sym; char bytes[13]; } _V0display__help = { { VSYMBOL, 13 }, "display-help" };
static struct { VBlob sym; char bytes[8]; } _V0decomma = { { VSYMBOL, 8 }, "decomma" };
static struct { VBlob sym; char bytes[9]; } _V0basename = { { VSYMBOL, 9 }, "basename" };
static struct { VBlob sym; char bytes[17]; } _V0change__extension = { { VSYMBOL, 17 }, "change-extension" };
static struct { VBlob sym; char bytes[10]; } _V0extension = { { VSYMBOL, 10 }, "extension" };
static struct { VBlob sym; char bytes[11]; } _V0benchmark_Q = { { VSYMBOL, 11 }, "benchmark\?" };
static struct { VBlob sym; char bytes[10]; } _V0c__options = { { VSYMBOL, 10 }, "c-options" };
static struct { VBlob sym; char bytes[9]; } _V0out__file = { { VSYMBOL, 9 }, "out-file" };
static struct { VBlob sym; char bytes[4]; } _V0api = { { VSYMBOL, 4 }, "api" };
static struct { VBlob sym; char bytes[13]; } _V0optimization = { { VSYMBOL, 13 }, "optimization" };
static struct { VBlob sym; char bytes[9]; } _V0verbose_Q = { { VSYMBOL, 9 }, "verbose\?" };
static struct { VBlob sym; char bytes[7]; } _V0debug_Q = { { VSYMBOL, 7 }, "debug\?" };
static struct { VBlob sym; char bytes[8]; } _V0object_Q = { { VSYMBOL, 8 }, "object\?" };
static struct { VBlob sym; char bytes[11]; } _V0transpile_Q = { { VSYMBOL, 11 }, "transpile\?" };
static struct { VBlob sym; char bytes[6]; } _V0keep_Q = { { VSYMBOL, 6 }, "keep\?" };
static struct { VBlob sym; char bytes[8]; } _V0expand_Q = { { VSYMBOL, 8 }, "expand\?" };
static struct { VBlob sym; char bytes[8]; } _V0shared_Q = { { VSYMBOL, 8 }, "shared\?" };
static struct { VBlob sym; char bytes[10]; } _V0obj__files = { { VSYMBOL, 10 }, "obj-files" };
static struct { VBlob sym; char bytes[10]; } _V0scm__files = { { VSYMBOL, 10 }, "scm-files" };
static struct { VBlob sym; char bytes[10]; } _V10string_D265 = { { VSTRING, 10 }, "transpile" };
static struct { VBlob sym; char bytes[4]; } _V10string_D264 = { { VSTRING, 4 }, "cps" };
static struct { VBlob sym; char bytes[7]; } _V10string_D263 = { { VSTRING, 7 }, "expand" };
static struct { VBlob sym; char bytes[7]; } _V10string_D262 = { { VSTRING, 7 }, "getopt" };
static struct { VBlob sym; char bytes[6]; } _V10string_D261 = { { VSTRING, 6 }, "match" };
static struct { VBlob sym; char bytes[10]; } _V10string_D260 = { { VSTRING, 10 }, "variables" };
static struct { VBlob sym; char bytes[21]; } _V10string_D259 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static void global_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k1, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.2 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _var0
    );
 }
}
static void global_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k2, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.3 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _var0
    );
 }
}
static void global_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k3, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.4 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _var0
    );
 }
}
static void global_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k4, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.5 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _var0
    );
 }
}
static void global_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k5, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.6 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _var0
    );
 }
}
static void global_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k6, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.7 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _var0
    );
 }
}
static void global_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k7, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.8 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _var0
    );
 }
}
static void _V0extension_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0extension_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_k10, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.10 3 0) (bruijn ##x.12 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0extension_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0extension_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (- (close _V0extension_k10) (bruijn ##x.13 0 0) 1)
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k10, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0extension_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0extension_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-length (close _V0extension_k9) (bruijn file 2 1))
V_CALL(VLookupGlobalVarFast("string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k9, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k14, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.14 4 0) (bruijn ##x.17 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.16 0 0) (substring (bruijn ##k.14 3 0) (bruijn file 5 1) (bruijn i 3 1)) (- (close _V0loop_k14) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("substring"), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k14, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
}
 }
}
static void _V0loop_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eq? (close _V0loop_k13) #\. (bruijn ##x.18 0 0))
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k13, env)}),
      VEncodeChar('.'),
      _var0
    );
 }
}
static void _V0loop_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.15 0 0) ((bruijn ##k.14 1 0) #f) (string-ref (close _V0loop_k12) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
} else {
V_CALL(VLookupGlobalVarFast("string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k12, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V0loop_k11) (bruijn i 0 1) 0)
V_CALL(VLookupGlobalVarFast("<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k11, env)}),
      _var1,
      VEncodeInt(0l)
    );
 }
}
static void _V0extension_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_lambda2, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0extension_k8) (bruijn loop 0 1) (close _V0loop_lambda3))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k8, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda3, env)})
    );
 }
}
static void _V0extension_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0extension_lambda1, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_lambda1, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0extension_lambda2) (bruijn ##k.9 0 0) #f)
V_CALL_FUNC(_V0extension_lambda2, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0change__extension_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0change__extension_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_k17, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.20 3 0) (bruijn ##x.22 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0change__extension_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0change__extension_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (- (close _V0change__extension_k17) (bruijn ##x.23 0 0) 1)
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k17, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0change__extension_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0change__extension_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-length (close _V0change__extension_k16) (bruijn file 2 1))
V_CALL(VLookupGlobalVarFast("string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k16, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k21, runtime, upenv, 1, argc, _var0) {
  // (string-append (bruijn ##k.24 4 0) (bruijn ##x.27 0 0) (bruijn new 6 2))
V_CALL(VLookupGlobalVarFast("string-append"), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0loop_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k22, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.24 4 0) (bruijn ##x.28 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.26 0 0) (substring (close _V0loop_k21) (bruijn file 5 1) 0 (bruijn i 3 1)) (- (close _V0loop_k22) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("substring"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k21, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(0l),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k22, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
}
 }
}
static void _V0loop_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eq? (close _V0loop_k20) #\. (bruijn ##x.29 0 0))
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k20, env)}),
      VEncodeChar('.'),
      _var0
    );
 }
}
static void _V0loop_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.25 0 0) (string-append (bruijn ##k.24 1 0) (bruijn file 3 1) (bruijn new 3 2)) (string-ref (close _V0loop_k19) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("string-append"), runtime,
      upenv->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2]
    );
} else {
V_CALL(VLookupGlobalVarFast("string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k19, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V0loop_k18) (bruijn i 0 1) 0)
V_CALL(VLookupGlobalVarFast("<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k18, env)}),
      _var1,
      VEncodeInt(0l)
    );
 }
}
static void _V0change__extension_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0change__extension_k15) (bruijn loop 0 1) (close _V0loop_lambda6))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k15, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda6, env)})
    );
 }
}
static void _V0change__extension_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0change__extension_lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0change__extension_lambda5) (bruijn ##k.19 0 0) #f)
V_CALL_FUNC(_V0change__extension_lambda5, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0basename_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0basename_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_k25, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.31 3 0) (bruijn ##x.33 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0basename_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0basename_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (- (close _V0basename_k25) (bruijn ##x.34 0 0) 1)
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k25, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0basename_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0basename_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-length (close _V0basename_k24) (bruijn file 2 1))
V_CALL(VLookupGlobalVarFast("string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k24, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k29, runtime, upenv, 1, argc, _var0) {
  // (substring (bruijn ##k.35 4 0) (bruijn file 6 1) (bruijn ##x.38 0 0))
V_CALL(VLookupGlobalVarFast("substring"), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      _var0
    );
 }
}
static void _V0loop_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k30, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.35 4 0) (bruijn ##x.39 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.37 0 0) (+ (close _V0loop_k29) (bruijn i 3 1) 1) (- (close _V0loop_k30) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("+"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k29, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
} else {
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k30, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
}
 }
}
static void _V0loop_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eq? (close _V0loop_k28) #\/ (bruijn ##x.40 0 0))
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k28, env)}),
      VEncodeChar('/'),
      _var0
    );
 }
}
static void _V0loop_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.36 0 0) ((bruijn ##k.35 1 0) (bruijn file 3 1)) (string-ref (close _V0loop_k27) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VLookupGlobalVarFast("string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k27, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V0loop_k26) (bruijn i 0 1) 0)
V_CALL(VLookupGlobalVarFast("<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k26, env)}),
      _var1,
      VEncodeInt(0l)
    );
 }
}
static void _V0basename_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0basename_k23) (bruijn loop 0 1) (close _V0loop_lambda9))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k23, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda9, env)})
    );
 }
}
static void _V0basename_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0basename_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0basename_lambda8) (bruijn ##k.30 0 0) #f)
V_CALL_FUNC(_V0basename_lambda8, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0decomma_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0decomma_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_k33, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.42 3 0) (bruijn ##x.44 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0decomma_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0decomma_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (- (close _V0decomma_k33) (bruijn ##x.45 0 0) 1)
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k33, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0decomma_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0decomma_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-length (close _V0decomma_k32) (bruijn str 2 1))
V_CALL(VLookupGlobalVarFast("string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k32, env)}),
      upenv->up->vars[1]
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
  // ((bruijn loop 6 1) (bruijn ##k.46 5 0) (bruijn ##x.50 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
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
  // (- (close _V0loop_k38) (bruijn i 4 1) 1)
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k38, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l)
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
  // ((bruijn loop 5 1) (bruijn ##k.46 4 0) (bruijn ##x.51 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.48 0 0) (string-set! (close _V0loop_k37) (bruijn str 5 1) (bruijn i 3 1) #\space) (- (close _V0loop_k39) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("string-set!"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k37, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->up->up->vars[1],
      VEncodeChar(' ')
    );
} else {
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k39, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
}
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
  // (eq? (close _V0loop_k36) #\, (bruijn ##x.52 0 0))
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k36, env)}),
      VEncodeChar(','),
      _var0
    );
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
  // (if (bruijn ##p.47 0 0) ((bruijn ##k.46 1 0) (bruijn str 3 1)) (string-ref (close _V0loop_k35) (bruijn str 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VLookupGlobalVarFast("string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k35, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (< (close _V0loop_k34) (bruijn i 0 1) 0)
V_CALL(VLookupGlobalVarFast("<"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k34, env)}),
      _var1,
      VEncodeInt(0l)
    );
 }
}
static void _V0decomma_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0decomma_k31) (bruijn loop 0 1) (close _V0loop_lambda12))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k31, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda12, env)})
    );
 }
}
static void _V0decomma_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0decomma_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0decomma_lambda11) (bruijn ##k.41 0 0) #f)
V_CALL_FUNC(_V0decomma_lambda11, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0display__help_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k53, runtime, upenv, 1, argc, _var0) {
  // (displayln (bruijn ##k.53 14 0) (##string ##string.266))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VGetArg(upenv, 14-1, 0),
      VEncodePointer(&_V10string_D266.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k53) (##string ##string.267))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k53, env)}),
      VEncodePointer(&_V10string_D267.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k52) (##string ##string.268))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k52, env)}),
      VEncodePointer(&_V10string_D268.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k51) (##string ##string.269))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k51, env)}),
      VEncodePointer(&_V10string_D269.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k50) (##string ##string.270))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k50, env)}),
      VEncodePointer(&_V10string_D270.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k49) (##string ##string.271))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k49, env)}),
      VEncodePointer(&_V10string_D271.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k48) (##string ##string.272))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k48, env)}),
      VEncodePointer(&_V10string_D272.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k47) (##string ##string.273))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k47, env)}),
      VEncodePointer(&_V10string_D273.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k46) (##string ##string.274))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k46, env)}),
      VEncodePointer(&_V10string_D274.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k45) (##string ##string.275))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k45, env)}),
      VEncodePointer(&_V10string_D275.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k44) (##string ##string.276))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k44, env)}),
      VEncodePointer(&_V10string_D276.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k43) (##string ##string.277))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k43, env)}),
      VEncodePointer(&_V10string_D277.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k42) (##string ##string.278))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k42, env)}),
      VEncodePointer(&_V10string_D278.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k41) (##string ##string.279))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k41, env)}),
      VEncodePointer(&_V10string_D279.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_lambda13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k40) (##string ##string.280))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k40, env)}),
      VEncodePointer(&_V10string_D280.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__version_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0display__version_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__version_k54, runtime, upenv, 1, argc, _var0) {
  // (displayln (bruijn ##k.68 1 0) (##string ##string.281))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D281.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__version_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0display__version_lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__version_lambda14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__version_k54) (##string ##string.282))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k54, env)}),
      VEncodePointer(&_V10string_D282.sym, VPOINTER_OTHER)
    );
 }
}
static void global_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k57, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.70 3 0) (bruijn ##x.72 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void global_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (getopt (close global_k57) (##string ##string.283) (bruijn ##x.73 0 0) (##inline ##sys.qcons (##inline ##sys.qcons (quote shared) (##inline ##sys.qcons (quote #f) (##inline ##sys.qcons (quote shared) (quote ())))) (##inline ##sys.qcons (##inline ##sys.qcons (quote help) (##inline ##sys.qcons (quote #f) (##inline ##sys.qcons (quote help) (quote ())))) (##inline ##sys.qcons (##inline ##sys.qcons (quote api) (##inline ##sys.qcons (quote #t) (##inline ##sys.qcons (quote api) (quote ())))) (##inline ##sys.qcons (##inline ##sys.qcons (quote version) (##inline ##sys.qcons (quote #f) (##inline ##sys.qcons (quote version) (quote ())))) (##inline ##sys.qcons (##inline ##sys.qcons (quote keep-temps) (##inline ##sys.qcons (quote #f) (##inline ##sys.qcons (quote keep-temps) (quote ())))) (##inline ##sys.qcons (##inline ##sys.qcons (quote benchmark) (##inline ##sys.qcons (quote #f) (##inline ##sys.qcons (quote benchmark) (quote ())))) (quote ()))))))))
V_CALL(VLookupGlobalVarFast("getopt"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k57, env)}),
      VEncodePointer(&_V10string_D283.sym, VPOINTER_OTHER),
      _var0,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0shared.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodeBool(false),
      VInlineCons(
VEncodePointer(&_V0shared.sym, VPOINTER_OTHER),
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0help.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodeBool(false),
      VInlineCons(
VEncodePointer(&_V0help.sym, VPOINTER_OTHER),
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0api.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodeBool(true),
      VInlineCons(
VEncodePointer(&_V0api.sym, VPOINTER_OTHER),
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0version.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodeBool(false),
      VInlineCons(
VEncodePointer(&_V0version.sym, VPOINTER_OTHER),
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0keep__temps.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodeBool(false),
      VInlineCons(
VEncodePointer(&_V0keep__temps.sym, VPOINTER_OTHER),
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0benchmark.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodeBool(false),
      VInlineCons(
VEncodePointer(&_V0benchmark.sym, VPOINTER_OTHER),
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

    )

    );
 }
}
static void global_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (command-line (close global_k56))
V_CALL(VLookupGlobalVarFast("command-line"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k56, env)})
    );
 }
}
static void _V0loop_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.103 5 0) obj-files (bruijn ##x.105 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0obj__files.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cons (close _V0loop_k67) (bruijn ##x.106 0 0) obj-files)
V_CALL(VLookupGlobalVarFast("cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k67, env)}),
      _var0,
      VLookupGlobalVarFast("obj-files")
    );
 }
}
static void _V0loop_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.103 5 0) scm-files (bruijn ##x.107 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0scm__files.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cons (close _V0loop_k69) (bruijn ##x.108 0 0) scm-files)
V_CALL(VLookupGlobalVarFast("cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k69, env)}),
      _var0,
      VLookupGlobalVarFast("scm-files")
    );
 }
}
static void _V0loop_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.104 0 0) (cdar (close _V0loop_k66) (bruijn args 8 1)) (cdar (close _V0loop_k68) (bruijn args 8 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k66, env)}),
      VGetArg(upenv, 8-1, 1)
    );
} else {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k68, env)}),
      VGetArg(upenv, 8-1, 1)
    );
}
 }
}
static void _V0loop_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (equal? (close _V0loop_k65) (bruijn ##x.109 0 0) (##string ##string.284))
V_CALL(VLookupGlobalVarFast("equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k65, env)}),
      _var0,
      VEncodePointer(&_V10string_D284.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0loop_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (extension (close _V0loop_k64) (bruijn ##x.110 0 0))
V_CALL(VLookupGlobalVarFast("extension"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k64, env)}),
      _var0
    );
 }
}
static void _V0loop_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.103 6 0) out-file (bruijn ##x.116 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V0out__file.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k81, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.123 0 0) (<= (bruijn ##k.122 1 0) 0 optimization 3) ((bruijn ##k.122 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("<="), runtime,
      upenv->vars[0],
      VEncodeInt(0l),
      VLookupGlobalVarFast("optimization"),
      VEncodeInt(3l)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if optimization (integer? (close _V0loop_k81) optimization) ((bruijn ##k.122 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast("optimization"))) {
V_CALL(VLookupGlobalVarFast("integer?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k81, env)}),
      VLookupGlobalVarFast("optimization")
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k84, runtime, upenv, 1, argc, _var0) {
  // (error (bruijn ##k.103 12 0) (##string ##string.285) (bruijn ##x.120 0 0))
V_CALL(VLookupGlobalVarFast("error"), runtime,
      VGetArg(upenv, 12-1, 0),
      VEncodePointer(&_V10string_D285.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.119 0 0) (cdar (close _V0loop_k84) (bruijn args 16 1)) ((bruijn ##k.103 11 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k84, env)}),
      VGetArg(upenv, 16-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close _V0loop_k83) (bruijn ##x.121 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k83, env)}),
      _var0
    );
 }
}
static void _V0loop_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k80) (close _V0loop_k82))
V_CALL_FUNC(_V0loop_k80, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k82, env)})
    );
 }
}
static void _V0loop_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0loop_k79) optimization (bruijn ##x.124 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k79, env)}),
      VEncodePointer(&_V0optimization.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string->number (close _V0loop_k78) (bruijn ##x.125 0 0))
V_CALL(VLookupGlobalVarFast("string->number"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k78, env)}),
      _var0
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
  // (if (bruijn ##p.132 0 0) (<= (bruijn ##k.131 1 0) 0 expand? 2) ((bruijn ##k.131 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("<="), runtime,
      upenv->vars[0],
      VEncodeInt(0l),
      VLookupGlobalVarFast("expand?"),
      VEncodeInt(2l)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
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
  // (if expand? (integer? (close _V0loop_k90) expand?) ((bruijn ##k.131 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast("expand?"))) {
V_CALL(VLookupGlobalVarFast("integer?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k90, env)}),
      VLookupGlobalVarFast("expand?")
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k93, runtime, upenv, 1, argc, _var0) {
  // (error (bruijn ##k.103 13 0) (##string ##string.286) (bruijn ##x.129 0 0))
V_CALL(VLookupGlobalVarFast("error"), runtime,
      VGetArg(upenv, 13-1, 0),
      VEncodePointer(&_V10string_D286.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.128 0 0) (cdar (close _V0loop_k93) (bruijn args 17 1)) ((bruijn ##k.103 12 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k93, env)}),
      VGetArg(upenv, 17-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
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
  // (not (close _V0loop_k92) (bruijn ##x.130 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k92, env)}),
      _var0
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k89) (close _V0loop_k91))
V_CALL_FUNC(_V0loop_k89, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k91, env)})
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
  // (set! (close _V0loop_k88) expand? (bruijn ##x.133 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k88, env)}),
      VEncodePointer(&_V0expand_Q.sym, VPOINTER_OTHER),
      _var0
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
  // (string->number (close _V0loop_k87) (bruijn ##x.134 0 0))
V_CALL(VLookupGlobalVarFast("string->number"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k87, env)}),
      _var0
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
  // (if (bruijn ##p.151 1 0) (error (bruijn ##k.152 0 0) (##string ##string.287)) ((bruijn ##k.152 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D287.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k106, runtime, upenv, 1, argc, _var0) {
  // (eq? (bruijn ##k.146 2 0) (bruijn ##x.147 0 0) #\,)
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodeChar(',')
    );
 }
}
static void _V0loop_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-ref (close _V0loop_k106) (bruijn ##x.148 0 0) 1)
V_CALL(VLookupGlobalVarFast("string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k106, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.145 1 0) (cdar (close _V0loop_k105) (bruijn args 22 1)) ((bruijn ##k.146 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k105, env)}),
      VGetArg(upenv, 22-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k109, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.142 1 0) (error (bruijn ##k.143 0 0) (##string ##string.288)) ((bruijn ##k.143 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D288.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.103 23 0) c-options (bruijn ##x.138 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 23-1, 0),
      VEncodePointer(&_V0c__options.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cons (close _V0loop_k114) (bruijn ##x.139 0 0) c-options)
V_CALL(VLookupGlobalVarFast("cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k114, env)}),
      _var0,
      VLookupGlobalVarFast("c-options")
    );
 }
}
static void _V0loop_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (decomma (close _V0loop_k113) (bruijn ##x.140 0 0))
V_CALL(VLookupGlobalVarFast("decomma"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k113, env)}),
      _var0
    );
 }
}
static void _V0loop_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (substring (close _V0loop_k112) (bruijn ##x.141 0 0) 1)
V_CALL(VLookupGlobalVarFast("substring"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k112, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cdar (close _V0loop_k111) (bruijn args 24 1))
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k111, env)}),
      VGetArg(upenv, 24-1, 1)
    );
 }
}
static void _V0loop_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k109) (close _V0loop_k110))
V_CALL_FUNC(_V0loop_k109, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k110, env)})
    );
 }
}
static void _V0loop_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close _V0loop_k108) (bruijn ##x.144 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k108, env)}),
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
  // ((close _V0loop_k104) (close _V0loop_k107))
V_CALL_FUNC(_V0loop_k104, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k107, env)})
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
  // (>= (close _V0loop_k103) (bruijn ##x.149 0 0) 2)
V_CALL(VLookupGlobalVarFast(">="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k103, env)}),
      _var0,
      VEncodeInt(2l)
    );
 }
}
static void _V0loop_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-length (close _V0loop_k102) (bruijn ##x.150 0 0))
V_CALL(VLookupGlobalVarFast("string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k102, env)}),
      _var0
    );
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
  // (cdar (close _V0loop_k101) (bruijn args 18 1))
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k101, env)}),
      VGetArg(upenv, 18-1, 1)
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
  // ((close _V0loop_k99) (close _V0loop_k100))
V_CALL_FUNC(_V0loop_k99, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k100, env)})
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close _V0loop_k98) (bruijn ##x.153 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k98, env)}),
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
  // (eq? (close _V0loop_k97) (bruijn ##x.154 0 0) #\c)
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k97, env)}),
      _var0,
      VEncodeChar('c')
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
  // (string-ref (close _V0loop_k96) (bruijn ##x.155 0 0) 0)
V_CALL(VLookupGlobalVarFast("string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k96, env)}),
      _var0,
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k116, runtime, upenv, 1, argc, _var0) {
  // (exit (bruijn ##k.103 10 0) 0)
V_CALL(VLookupGlobalVarFast("exit"), runtime,
      VGetArg(upenv, 10-1, 0),
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k118, runtime, upenv, 1, argc, _var0) {
  // (exit (bruijn ##k.103 11 0) 0)
V_CALL(VLookupGlobalVarFast("exit"), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodeInt(0l)
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
  // (set! (bruijn ##k.103 14 0) api (bruijn ##x.162 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 14-1, 0),
      VEncodePointer(&_V0api.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string->number (close _V0loop_k122) (bruijn ##x.163 0 0))
V_CALL(VLookupGlobalVarFast("string->number"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k122, env)}),
      _var0
    );
 }
}
static void _V0loop_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k128, runtime, upenv, 1, argc, _var0) {
  // (error (bruijn ##k.103 18 0) (##string ##string.289) (bruijn ##x.168 0 0))
V_CALL(VLookupGlobalVarFast("error"), runtime,
      VGetArg(upenv, 18-1, 0),
      VEncodePointer(&_V10string_D289.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cdar (close _V0loop_k128) (bruijn args 22 1))
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k128, env)}),
      VGetArg(upenv, 22-1, 1)
    );
 }
}
static void _V0loop_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (newline (close _V0loop_k127))
V_CALL(VLookupGlobalVarFast("newline"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k127, env)})
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
  // (write (close _V0loop_k126) (bruijn ##x.169 0 0))
V_CALL(VLookupGlobalVarFast("write"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k126, env)}),
      _var0
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
  // (if (bruijn ##p.165 0 0) (set! (bruijn ##k.103 14 0) benchmark? #t) (caar (close _V0loop_k125) (bruijn args 19 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 14-1, 0),
      VEncodePointer(&_V0benchmark_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast("caar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k125, env)}),
      VGetArg(upenv, 19-1, 1)
    );
}
 }
}
static void _V0loop_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.164 0 0) (set! (bruijn ##k.103 13 0) keep? #t) (eqv? (close _V0loop_k124) (bruijn ##x.1 15 0) (quote benchmark)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 13-1, 0),
      VEncodePointer(&_V0keep_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k124, env)}),
      VGetArg(upenv, 15-1, 0),
      VEncodePointer(&_V0benchmark.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.161 0 0) (cdar (close _V0loop_k121) (bruijn args 17 1)) (eqv? (close _V0loop_k123) (bruijn ##x.1 14 0) (quote keep-temps)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k121, env)}),
      VGetArg(upenv, 17-1, 1)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k123, env)}),
      VGetArg(upenv, 14-1, 0),
      VEncodePointer(&_V0keep__temps.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.160 0 0) (set! (bruijn ##k.103 11 0) shared? #t) (eqv? (close _V0loop_k120) (bruijn ##x.1 13 0) (quote api)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V0shared_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k120, env)}),
      VGetArg(upenv, 13-1, 0),
      VEncodePointer(&_V0api.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.158 0 0) (display-version (close _V0loop_k118)) (eqv? (close _V0loop_k119) (bruijn ##x.1 12 0) (quote shared)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("display-version"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k118, env)})
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k119, env)}),
      VGetArg(upenv, 12-1, 0),
      VEncodePointer(&_V0shared.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.156 0 0) (display-help (close _V0loop_k116)) (eqv? (close _V0loop_k117) (bruijn ##x.1 11 0) (quote version)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("display-help"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k116, env)})
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k117, env)}),
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V0version.sym, VPOINTER_OTHER)
    );
}
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
  // (if (bruijn ##p.135 0 0) (cdar (close _V0loop_k95) (bruijn args 13 1)) (eqv? (close _V0loop_k115) (bruijn ##x.1 10 0) (quote help)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k95, env)}),
      VGetArg(upenv, 13-1, 1)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k115, env)}),
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V0help.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.126 0 0) (cdar (close _V0loop_k86) (bruijn args 12 1)) (eqv? (close _V0loop_k94) (bruijn ##x.1 9 0) (quote #\W)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k86, env)}),
      VGetArg(upenv, 12-1, 1)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k94, env)}),
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('W')
    );
}
 }
}
static void _V0loop_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.117 0 0) (cdar (close _V0loop_k77) (bruijn args 11 1)) (eqv? (close _V0loop_k85) (bruijn ##x.1 8 0) (quote #\E)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k77, env)}),
      VGetArg(upenv, 11-1, 1)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k85, env)}),
      VGetArg(upenv, 8-1, 0),
      VEncodeChar('E')
    );
}
 }
}
static void _V0loop_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.115 0 0) (cdar (close _V0loop_k75) (bruijn args 10 1)) (eqv? (close _V0loop_k76) (bruijn ##x.1 7 0) (quote #\O)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k75, env)}),
      VGetArg(upenv, 10-1, 1)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k76, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('O')
    );
}
 }
}
static void _V0loop_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.114 0 0) (set! (bruijn ##k.103 4 0) object? #t) (eqv? (close _V0loop_k74) (bruijn ##x.1 6 0) (quote #\o)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V0object_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k74, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('o')
    );
}
 }
}
static void _V0loop_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.113 0 0) (set! (bruijn ##k.103 3 0) transpile? #t) (eqv? (close _V0loop_k73) (bruijn ##x.1 5 0) (quote #\c)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V0transpile_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k73, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('c')
    );
}
 }
}
static void _V0loop_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.112 0 0) (set! (bruijn ##k.103 2 0) debug? #t) (eqv? (close _V0loop_k72) (bruijn ##x.1 4 0) (quote #\t)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V0debug_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k72, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('t')
    );
}
 }
}
static void _V0loop_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.111 0 0) (set! (bruijn ##k.103 1 0) verbose? #t) (eqv? (close _V0loop_k71) (bruijn ##x.1 3 0) (quote #\g)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->vars[0],
      VEncodePointer(&_V0verbose_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k71, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('g')
    );
}
 }
}
static void _V0loop_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.102 1 0) (cdar (close _V0loop_k63) (bruijn args 5 1)) (eqv? (close _V0loop_k70) (bruijn ##x.1 2 0) (quote #\v)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k63, env)}),
      VGetArg(upenv, 5-1, 1)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k70, env)}),
      upenv->up->vars[0],
      VEncodeChar('v')
    );
}
 }
}
static void _V0loop_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k130, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 1) (bruijn ##k.98 6 0) (bruijn ##x.101 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0loop_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cdr (close _V0loop_k130) (bruijn args 5 1))
V_CALL(VLookupGlobalVarFast("cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k130, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0loop_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k62) (close _V0loop_k129))
V_CALL_FUNC(_V0loop_k62, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k129, env)})
    );
 }
}
static void _V0loop_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eqv? (close _V0loop_k61) (bruijn ##x.1 0 0) (quote #t))
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k61, env)}),
      _var0,
      VEncodeBool(true)
    );
 }
}
static void _V0loop_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.99 0 0) (caar (close _V0loop_k60) (bruijn args 2 1)) ((bruijn ##k.98 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("caar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k60, env)}),
      upenv->up->vars[1]
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close _V0loop_k59) (bruijn ##x.170 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k59, env)}),
      _var0
    );
 }
}
static void _V0loop_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (null? (close _V0loop_k58) (bruijn args 0 1))
V_CALL(VLookupGlobalVarFast("null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k58, env)}),
      _var1
    );
 }
}
static void global_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)global_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close global_k55) (bruijn loop 0 1) (close _V0loop_lambda16))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k55, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda16, env)})
    );
 }
}
static void global_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k132, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.172 1 0) (null? (bruijn ##k.173 0 0) obj-files) ((bruijn ##k.173 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("null?"), runtime,
      _var0,
      VLookupGlobalVarFast("obj-files")
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k133, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.171 0 0) (error ##sys.next (##string ##string.290)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("error"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V10string_D290.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k132) (close global_k133))
V_CALL_FUNC(global_k132, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k133, env)})
    );
 }
}
static void global_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k134, runtime, upenv, 1, argc, _var0) {
  // (if transpile? (if object? ((bruijn ##k.175 0 0) expand?) ((bruijn ##k.175 0 0) #f)) ((bruijn ##k.175 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("expand?")
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k135, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.174 0 0) (error ##sys.next (##string ##string.291)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("error"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V10string_D291.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k136, runtime, upenv, 1, argc, _var0) {
  // (if transpile? ((bruijn ##k.180 0 0) transpile?) (if object? ((bruijn ##k.180 0 0) object?) ((bruijn ##k.180 0 0) expand?)))
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("transpile?")
    );
} else {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("object?")
    );
} else {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("expand?")
    );
}
}
 }
}
static void global_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k139, runtime, upenv, 1, argc, _var0) {
  // (not (bruijn ##k.178 1 0) (bruijn ##x.179 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void global_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.177 1 0) (null? (close global_k139) obj-files) ((bruijn ##k.178 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k139, env)}),
      VLookupGlobalVarFast("obj-files")
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k140, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.176 0 0) (error ##sys.next (##string ##string.292)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("error"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V10string_D292.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k138) (close global_k140))
V_CALL_FUNC(global_k138, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k140, env)})
    );
 }
}
static void global_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k141, runtime, upenv, 1, argc, _var0) {
  // (if transpile? ((bruijn ##k.186 0 0) transpile?) (if object? ((bruijn ##k.186 0 0) object?) ((bruijn ##k.186 0 0) expand?)))
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("transpile?")
    );
} else {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("object?")
    );
} else {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("expand?")
    );
}
}
 }
}
static void global_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k145, runtime, upenv, 1, argc, _var0) {
  // (not (bruijn ##k.183 2 0) (bruijn ##x.184 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void global_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (null? (close global_k145) (bruijn ##x.185 0 0))
V_CALL(VLookupGlobalVarFast("null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k145, env)}),
      _var0
    );
 }
}
static void global_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.182 1 0) (if out-file (cdr (close global_k144) scm-files) ((bruijn ##k.183 0 0) #f)) ((bruijn ##k.183 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
if(VDecodeBool(
VLookupGlobalVarFast("out-file"))) {
V_CALL(VLookupGlobalVarFast("cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k144, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k146, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.181 0 0) (error ##sys.next (##string ##string.293)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("error"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V10string_D293.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k143) (close global_k146))
V_CALL_FUNC(global_k143, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k146, env)})
    );
 }
}
static void global_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k147, runtime, upenv, 1, argc, _var0) {
  // (if transpile? ((bruijn ##k.192 0 0) transpile?) (if object? ((bruijn ##k.192 0 0) object?) ((bruijn ##k.192 0 0) expand?)))
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("transpile?")
    );
} else {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("object?")
    );
} else {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("expand?")
    );
}
}
 }
}
static void global_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k151, runtime, upenv, 1, argc, _var0) {
  // (not (bruijn ##k.189 2 0) (bruijn ##x.190 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void global_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (null? (close global_k151) (bruijn ##x.191 0 0))
V_CALL(VLookupGlobalVarFast("null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k151, env)}),
      _var0
    );
 }
}
static void global_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.188 1 0) (cdr (close global_k150) scm-files) ((bruijn ##k.189 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k150, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k152, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.187 0 0) (error ##sys.next (##string ##string.294)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("error"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V10string_D294.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k149) (close global_k152))
V_CALL_FUNC(global_k149, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k152, env)})
    );
 }
}
static void global_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k156, runtime, upenv, 1, argc, _var0) {
  // (change-extension (bruijn ##k.195 2 0) (bruijn ##x.196 0 0) (##string ##string.284))
V_CALL(VLookupGlobalVarFast("change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D284.sym, VPOINTER_OTHER)
    );
 }
}
static void global_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (basename (close global_k156) (bruijn ##x.197 0 0))
V_CALL(VLookupGlobalVarFast("basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k156, env)}),
      _var0
    );
 }
}
static void global_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k158, runtime, upenv, 1, argc, _var0) {
  // (change-extension (bruijn ##k.195 2 0) (bruijn ##x.198 0 0) (##string ##string.295))
V_CALL(VLookupGlobalVarFast("change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D295.sym, VPOINTER_OTHER)
    );
 }
}
static void global_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (basename (close global_k158) (bruijn ##x.199 0 0))
V_CALL(VLookupGlobalVarFast("basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k158, env)}),
      _var0
    );
 }
}
static void global_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k160, runtime, upenv, 1, argc, _var0) {
  // (change-extension (bruijn ##k.195 2 0) (bruijn ##x.200 0 0) (##string ##string.296))
V_CALL(VLookupGlobalVarFast("change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D296.sym, VPOINTER_OTHER)
    );
 }
}
static void global_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (basename (close global_k160) (bruijn ##x.201 0 0))
V_CALL(VLookupGlobalVarFast("basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k160, env)}),
      _var0
    );
 }
}
static void global_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if object? (car (close global_k155) scm-files) (if transpile? (car (close global_k157) scm-files) (if expand? (car (close global_k159) scm-files) ((bruijn ##k.195 0 0) (##string ##string.297)))))
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
V_CALL(VLookupGlobalVarFast("car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k155, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
V_CALL(VLookupGlobalVarFast("car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k157, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
if(VDecodeBool(
VLookupGlobalVarFast("expand?"))) {
V_CALL(VLookupGlobalVarFast("car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k159, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D297.sym, VPOINTER_OTHER)
    );
}
}
}
 }
}
static void global_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! ##sys.next out-file (bruijn ##x.194 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0out__file.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.193 0 0) ((close global_k154) (close global_k161)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(global_k154, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k161, env)})
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0read__all_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0read__all_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0read__all_k164, runtime, upenv, 1, argc, _var0) {
  // (cons (bruijn ##k.202 3 0) (bruijn expr 2 0) (bruijn ##x.204 0 0))
V_CALL(VLookupGlobalVarFast("cons"), runtime,
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0read__all_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0read__all_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0read__all_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.203 0 0) ((bruijn ##k.202 2 0) (quote ())) (read-all (close _V0read__all_k164) (bruijn port 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VNULL
    );
} else {
V_CALL(VLookupGlobalVarFast("read-all"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__all_k164, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0read__all_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0read__all_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0read__all_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eof-object? (close _V0read__all_k163) (bruijn expr 0 0))
V_CALL(VLookupGlobalVarFast("eof-object?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__all_k163, env)}),
      _var0
    );
 }
}
static void _V0read__all_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0read__all_lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0read__all_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (read (close _V0read__all_k162) (bruijn port 0 1))
V_CALL(VLookupGlobalVarFast("read"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__all_k162, env)}),
      _var1
    );
 }
}
static void global_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k165, runtime, upenv, 1, argc, _var0) {
  // (if transpile? ((bruijn ##k.211 0 0) transpile?) ((bruijn ##k.211 0 0) expand?))
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("transpile?")
    );
} else {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("expand?")
    );
}
 }
}
static void global_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k169, runtime, upenv, 1, argc, _var0) {
  // (make-temporary-file (bruijn ##k.208 2 0) (bruijn ##x.209 0 0) (##string ##string.295))
V_CALL(VLookupGlobalVarFast("make-temporary-file"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D295.sym, VPOINTER_OTHER)
    );
 }
}
static void global_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-append (close global_k169) (##string ##string.298) (bruijn ##x.210 0 0))
V_CALL(VLookupGlobalVarFast("string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k169, env)}),
      VEncodePointer(&_V10string_D298.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to global_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (basename (close global_k168) (bruijn file 0 1))
V_CALL(VLookupGlobalVarFast("basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k168, env)}),
      _var1
    );
 }
}
static void global_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.206 1 0) (list (bruijn ##k.207 0 0) out-file) (map (bruijn ##k.207 0 0) (close global_lambda18) scm-files))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("list"), runtime,
      _var0,
      VLookupGlobalVarFast("out-file")
    );
} else {
V_CALL(VLookupGlobalVarFast("map"), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda18, env)}),
      VLookupGlobalVarFast("scm-files")
    );
}
 }
}
static void global_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next cc-files (bruijn ##x.205 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0cc__files.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k167) (close global_k170))
V_CALL_FUNC(global_k167, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k170, env)})
    );
 }
}
static void global_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k172, runtime, upenv, 1, argc, _var0) {
  // (if debug? ((bruijn ##k.219 0 0) (##string ##string.299)) ((bruijn ##k.219 0 0) (##string ##string.270)))
if(VDecodeBool(
VLookupGlobalVarFast("debug?"))) {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D299.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D270.sym, VPOINTER_OTHER)
    );
}
 }
}
static void global_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k174, runtime, upenv, 1, argc, _var0) {
  // (if object? ((bruijn ##k.218 0 0) (##string ##string.300)) ((bruijn ##k.218 0 0) (##string ##string.301)))
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D300.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D301.sym, VPOINTER_OTHER)
    );
}
 }
}
static void global_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k176, runtime, upenv, 1, argc, _var0) {
  // (if shared? ((bruijn ##k.217 0 0) (##string ##string.302)) ((bruijn ##k.217 0 0) (##string ##string.303)))
if(VDecodeBool(
VLookupGlobalVarFast("shared?"))) {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D302.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D303.sym, VPOINTER_OTHER)
    );
}
 }
}
static void global_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next flags (bruijn ##x.212 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0flags.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-append (close global_k178) (##string ##string.304) (bruijn ##x.213 3 0) (bruijn ##x.214 2 0) (bruijn ##x.215 1 0) (bruijn ##x.216 0 0))
V_CALL(VLookupGlobalVarFast("string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k178, env)}),
      VEncodePointer(&_V10string_D304.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void global_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k176) (close global_k177))
V_CALL_FUNC(global_k176, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k177, env)})
    );
 }
}
static void global_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k174) (close global_k175))
V_CALL_FUNC(global_k174, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k175, env)})
    );
 }
}
static void global_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k172) (close global_k173))
V_CALL_FUNC(global_k172, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k173, env)})
    );
 }
}
static void global_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next command (bruijn ##x.220 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0command.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.221 1 0) command (bruijn ##x.222 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->vars[0],
      VEncodePointer(&_V0command.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to global_lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (string-append (close global_k181) command (##string ##string.307) (bruijn file 0 1))
V_CALL(VLookupGlobalVarFast("string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k181, env)}),
      VLookupGlobalVarFast("command"),
      VEncodePointer(&_V10string_D307.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void global_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (for-each ##sys.next (close global_lambda19) (bruijn ##x.223 0 0))
V_CALL(VLookupGlobalVarFast("for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda19, env)}),
      _var0
    );
 }
}
static void global_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.224 1 0) command (bruijn ##x.225 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->vars[0],
      VEncodePointer(&_V0command.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to global_lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (string-append (close global_k182) command (bruijn option 0 1))
V_CALL(VLookupGlobalVarFast("string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k182, env)}),
      VLookupGlobalVarFast("command"),
      _var1
    );
 }
}
static void global_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! ##sys.next command (bruijn ##x.226 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0command.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next stdout (bruijn ##x.227 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0stdout.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next num-mains (bruijn ##x.228 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0num__mains.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k187, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn x 1 1) ((bruijn ##k.231 0 0) 1) ((bruijn ##k.231 0 0) 0))
if(VDecodeBool(
upenv->vars[1])) {
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
static void global_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k188, runtime, upenv, 1, argc, _var0) {
  // (+ (bruijn ##k.229 1 0) (bruijn acc 1 2) (bruijn ##x.230 0 0))
V_CALL(VLookupGlobalVarFast("+"), runtime,
      upenv->vars[0],
      upenv->vars[2],
      _var0
    );
 }
}
static void global_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to global_lambda21, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda21, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close global_k187) (close global_k188))
V_CALL_FUNC(global_k187, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k188, env)})
    );
 }
}
static void global_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (fold (close global_k186) (close global_lambda21) 0 (bruijn ##x.232 0 0))
V_CALL(VLookupGlobalVarFast("fold"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k186, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda21, env)}),
      VEncodeInt(0l),
      _var0
    );
 }
}
static void global_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k202, runtime, upenv, 1, argc, _var0) {
  // (apply (bruijn ##k.234 14 0) printout2 (bruijn ##x.238 0 0))
V_CALL(VLookupGlobalVarFast("apply"), runtime,
      VGetArg(upenv, 14-1, 0),
      VLookupGlobalVarFast("printout2"),
      _var0
    );
 }
}
static void global_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cons (close global_k202) debug? (bruijn ##x.239 0 0))
V_CALL(VLookupGlobalVarFast("cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k202, env)}),
      VLookupGlobalVarFast("debug?"),
      _var0
    );
 }
}
static void global_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cons (close global_k201) shared? (bruijn funs 0 0))
V_CALL(VLookupGlobalVarFast("cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k201, env)}),
      VLookupGlobalVarFast("shared?"),
      _var0
    );
 }
}
static void global_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (to-functions (close global_k200) (bruijn bruijn 0 0))
V_CALL(VLookupGlobalVarFast("to-functions"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k200, env)}),
      _var0
    );
 }
}
static void global_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.237 0 0) (for-each (bruijn ##k.234 10 0) write (bruijn opt 1 0)) (map (close global_k199) bruijn-ify (bruijn opt 1 0)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("for-each"), runtime,
      VGetArg(upenv, 10-1, 0),
      VLookupGlobalVarFast("write"),
      upenv->vars[0]
    );
} else {
V_CALL(VLookupGlobalVarFast("map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k199, env)}),
      VLookupGlobalVarFast("bruijn-ify"),
      upenv->vars[0]
    );
}
 }
}
static void global_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eq? (close global_k198) expand? 2)
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k198, env)}),
      VLookupGlobalVarFast("expand?"),
      VEncodeInt(2l)
    );
 }
}
static void global_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k203, runtime, upenv, 1, argc, _var0) {
  // (deannotate-lambdas (bruijn ##k.240 1 0) (bruijn ##x.241 0 0))
V_CALL(VLookupGlobalVarFast("deannotate-lambdas"), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void global_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to global_lambda24, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (optimize (close global_k203) (bruijn expr 0 1))
V_CALL(VLookupGlobalVarFast("optimize"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k203, env)}),
      _var1
    );
 }
}
static void global_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.236 0 0) (for-each (bruijn ##k.234 8 0) write (bruijn cps 1 0)) (map (close global_k197) (close global_lambda24) (bruijn cps 1 0)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("for-each"), runtime,
      VGetArg(upenv, 8-1, 0),
      VLookupGlobalVarFast("write"),
      upenv->vars[0]
    );
} else {
V_CALL(VLookupGlobalVarFast("map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k197, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda24, env)}),
      upenv->vars[0]
    );
}
 }
}
static void global_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eq? (close global_k196) expand? 1)
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k196, env)}),
      VLookupGlobalVarFast("expand?"),
      VEncodeInt(1l)
    );
 }
}
static void global_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k204, runtime, upenv, 1, argc, _var0) {
  // (annotate-lambdas (bruijn ##k.242 1 0) (bruijn ##x.243 0 0))
V_CALL(VLookupGlobalVarFast("annotate-lambdas"), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void global_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to global_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (to-cps (close global_k204) (bruijn expr 0 1))
V_CALL(VLookupGlobalVarFast("to-cps"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k204, env)}),
      _var1
    );
 }
}
static void global_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (map (close global_k195) (close global_lambda25) (bruijn ##x.244 0 0))
V_CALL(VLookupGlobalVarFast("map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k195, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda25, env)}),
      _var0
    );
 }
}
static void global_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.235 0 0) (for-each (bruijn ##k.234 5 0) write (bruijn expanded 1 0)) (apply (close global_k194) append (bruijn expanded 1 0)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("for-each"), runtime,
      VGetArg(upenv, 5-1, 0),
      VLookupGlobalVarFast("write"),
      upenv->vars[0]
    );
} else {
V_CALL(VLookupGlobalVarFast("apply"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k194, env)}),
      VLookupGlobalVarFast("append"),
      upenv->vars[0]
    );
}
 }
}
static void global_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eq? (close global_k193) expand? 0)
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k193, env)}),
      VLookupGlobalVarFast("expand?"),
      VEncodeInt(0l)
    );
 }
}
static void global_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (map (close global_k192) expand-toplevel (bruijn file 0 0))
V_CALL(VLookupGlobalVarFast("map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k192, env)}),
      VLookupGlobalVarFast("expand-toplevel"),
      _var0
    );
 }
}
static void global_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (append (close global_k191) (bruijn ##x.245 0 0))
V_CALL(VLookupGlobalVarFast("append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k191, env)}),
      _var0
    );
 }
}
static void global_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (read-all (close global_k190) (bruijn ##x.246 0 0))
V_CALL(VLookupGlobalVarFast("read-all"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k190, env)}),
      _var0
    );
 }
}
static void global_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (open-input-file (close global_k189) (bruijn scm-file 1 1))
V_CALL(VLookupGlobalVarFast("open-input-file"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k189, env)}),
      upenv->vars[1]
    );
 }
}
static void global_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to global_lambda22, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda22, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (with-output-to-file (bruijn ##k.233 0 0) (bruijn cc-file 0 2) (close global_lambda23))
V_CALL(VLookupGlobalVarFast("with-output-to-file"), runtime,
      _var0,
      _var2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda23, env)})
    );
 }
}
static void global_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k205, runtime, upenv, 1, argc, _var0) {
  // (if shared? (> (bruijn ##k.248 0 0) num-mains 0) ((bruijn ##k.248 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast("shared?"))) {
V_CALL(VLookupGlobalVarFast(">"), runtime,
      _var0,
      VLookupGlobalVarFast("num-mains"),
      VEncodeInt(0l)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k206, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.247 0 0) (error ##sys.next (##string ##string.308)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("error"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V10string_D308.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k207, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.249 0 0) (error ##sys.next (##string ##string.309)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("error"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V10string_D309.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0delete__file_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0delete__file_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0delete__file_k208, runtime, upenv, 1, argc, _var0) {
  // (system (bruijn ##k.250 1 0) (bruijn ##x.251 0 0))
V_CALL(VLookupGlobalVarFast("system"), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0delete__file_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0delete__file_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0delete__file_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (sprintf (close _V0delete__file_k208) (##string ##string.310) (bruijn f 0 1))
V_CALL(VLookupGlobalVarFast("sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete__file_k208, env)}),
      VEncodePointer(&_V10string_D310.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void global_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k210, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.257 1 0) (not (bruijn ##k.258 0 0) expand?) ((bruijn ##k.258 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("not"), runtime,
      _var0,
      VLookupGlobalVarFast("expand?")
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k212, runtime, upenv, 1, argc, _var0) {
  // (if verbose? (displayln (bruijn ##k.256 0 0) command) ((bruijn ##k.256 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast("verbose?"))) {
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      _var0,
      VLookupGlobalVarFast("command")
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k215, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.255 0 0) (for-each ##sys.next delete-file cc-files) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VLookupGlobalVarFast("delete-file"),
      VLookupGlobalVarFast("cc-files")
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close global_k215) keep?)
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k215, env)}),
      VLookupGlobalVarFast("keep?")
    );
 }
}
static void global_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (system (close global_k214) command)
V_CALL(VLookupGlobalVarFast("system"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k214, env)}),
      VLookupGlobalVarFast("command")
    );
 }
}
static void global_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.252 0 0) ((close global_k212) (close global_k213)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(global_k212, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k213, env)})
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to global_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k210) (close global_k211))
V_CALL_FUNC(global_k210, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k211, env)})
    );
 }
}
void toplevel0() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k1, env)}),
      VEncodePointer(&_V10string_D259.sym, VPOINTER_OTHER)
    );
}
void toplevel1() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k2, env)}),
      VEncodePointer(&_V10string_D260.sym, VPOINTER_OTHER)
    );
}
void toplevel2() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k3, env)}),
      VEncodePointer(&_V10string_D261.sym, VPOINTER_OTHER)
    );
}
void toplevel3() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k4, env)}),
      VEncodePointer(&_V10string_D262.sym, VPOINTER_OTHER)
    );
}
void toplevel4() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k5, env)}),
      VEncodePointer(&_V10string_D263.sym, VPOINTER_OTHER)
    );
}
void toplevel5() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k6, env)}),
      VEncodePointer(&_V10string_D264.sym, VPOINTER_OTHER)
    );
}
void toplevel6() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k7, env)}),
      VEncodePointer(&_V10string_D265.sym, VPOINTER_OTHER)
    );
}
void toplevel7() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0scm__files.sym, VPOINTER_OTHER),
      VNULL
    );
}
void toplevel8() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0obj__files.sym, VPOINTER_OTHER),
      VNULL
    );
}
void toplevel9() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0shared_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel10() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0expand_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel11() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0keep_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel12() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0transpile_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel13() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0object_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel14() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0debug_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel15() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0verbose_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel16() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0optimization.sym, VPOINTER_OTHER),
      VEncodeInt(1l)
    );
}
void toplevel17() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0api.sym, VPOINTER_OTHER),
      VEncodeInt(1l)
    );
}
void toplevel18() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0out__file.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel19() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0c__options.sym, VPOINTER_OTHER),
      VNULL
    );
}
void toplevel20() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0benchmark_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel21() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0extension.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_lambda1, env)})
    );
}
void toplevel22() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0change__extension.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_lambda4, env)})
    );
}
void toplevel23() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0basename.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_lambda7, env)})
    );
}
void toplevel24() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0decomma.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_lambda10, env)})
    );
}
void toplevel25() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0display__help.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_lambda13, env)})
    );
}
void toplevel26() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0display__version.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_lambda14, env)})
    );
}
void toplevel27() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL_FUNC(global_lambda15, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodeBool(false)
    );
}
void toplevel28() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k131, env)}),
      VLookupGlobalVarFast("scm-files")
    );
}
void toplevel29() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL_FUNC(global_k134, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k135, env)})
    );
}
void toplevel30() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL_FUNC(global_k136, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k137, env)})
    );
}
void toplevel31() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL_FUNC(global_k141, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k142, env)})
    );
}
void toplevel32() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL_FUNC(global_k147, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k148, env)})
    );
}
void toplevel33() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k153, env)}),
      VLookupGlobalVarFast("out-file")
    );
}
void toplevel34() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0read__all.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__all_lambda17, env)})
    );
}
void toplevel35() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL_FUNC(global_k165, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k166, env)})
    );
}
void toplevel36() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k171, env)}),
      VEncodePointer(&_V10string_D305.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast("optimization")
    );
}
void toplevel37() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k179, env)}),
      VEncodePointer(&_V10string_D306.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast("out-file")
    );
}
void toplevel38() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k180, env)}),
      VLookupGlobalVarFast("obj-files"),
      VLookupGlobalVarFast("cc-files")
    );
}
void toplevel39() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda20, env)}),
      VLookupGlobalVarFast("c-options")
    );
}
void toplevel40() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k183, env)}),
      VLookupGlobalVarFast("command"),
      VLookupGlobalVarFast("flags")
    );
}
void toplevel41() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("current-output-port"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k184, env)})
    );
}
void toplevel42() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k185, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda22, env)}),
      VLookupGlobalVarFast("scm-files"),
      VLookupGlobalVarFast("cc-files")
    );
}
void toplevel43() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL_FUNC(global_k205, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k206, env)})
    );
}
void toplevel44() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast(">"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k207, env)}),
      VLookupGlobalVarFast("num-mains"),
      VEncodeInt(1l)
    );
}
void toplevel45() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0delete__file.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete__file_lambda26, env)})
    );
}
void toplevel46() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k209, env)}),
      VLookupGlobalVarFast("transpile?")
    );
}
int main(int argc, char ** argv) {
  void (*toplevels[])() = {
    toplevel0,    toplevel1,    toplevel2,    toplevel3,    toplevel4,    toplevel5,    toplevel6,    toplevel7,    toplevel8,    toplevel9,    toplevel10,    toplevel11,    toplevel12,    toplevel13,    toplevel14,    toplevel15,    toplevel16,    toplevel17,    toplevel18,    toplevel19,    toplevel20,    toplevel21,    toplevel22,    toplevel23,    toplevel24,    toplevel25,    toplevel26,    toplevel27,    toplevel28,    toplevel29,    toplevel30,    toplevel31,    toplevel32,    toplevel33,    toplevel34,    toplevel35,    toplevel36,    toplevel37,    toplevel38,    toplevel39,    toplevel40,    toplevel41,    toplevel42,    toplevel43,    toplevel44,    toplevel45,    toplevel46,  
};
  VArgc = argc; VArgv = argv;  return VStart(sizeof toplevels / sizeof *toplevels, toplevels);
}
