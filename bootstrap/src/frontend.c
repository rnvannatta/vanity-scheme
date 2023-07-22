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
static struct { VBlob sym; char bytes[11]; } _V10string_D261 = { { VSTRING, 11 }, "/bin/rm ~A" };
static struct { VBlob sym; char bytes[12]; } _V0delete__file = { { VSYMBOL, 12 }, "delete-file" };
static struct { VBlob sym; char bytes[87]; } _V10string_D260 = { { VSTRING, 87 }, "program has toplevel expressions in multiple files, and so it generated multiple mains" };
static struct { VBlob sym; char bytes[51]; } _V10string_D259 = { { VSTRING, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[10]; } _V0num__mains = { { VSYMBOL, 10 }, "num-mains" };
static struct { VBlob sym; char bytes[7]; } _V0stdout = { { VSYMBOL, 7 }, "stdout" };
static struct { VBlob sym; char bytes[2]; } _V10string_D258 = { { VSTRING, 2 }, " " };
static struct { VBlob sym; char bytes[10]; } _V10string_D257 = { { VSTRING, 10 }, "gcc -o ~A" };
static struct { VBlob sym; char bytes[8]; } _V0command = { { VSYMBOL, 8 }, "command" };
static struct { VBlob sym; char bytes[6]; } _V10string_D256 = { { VSTRING, 6 }, " -O~A" };
static struct { VBlob sym; char bytes[11]; } _V10string_D255 = { { VSTRING, 11 }, " -lvscheme" };
static struct { VBlob sym; char bytes[20]; } _V10string_D254 = { { VSTRING, 20 }, " -Wl,--no-as-needed" };
static struct { VBlob sym; char bytes[15]; } _V10string_D253 = { { VSTRING, 15 }, " -fPIC -shared" };
static struct { VBlob sym; char bytes[4]; } _V10string_D252 = { { VSTRING, 4 }, " -c" };
static struct { VBlob sym; char bytes[4]; } _V10string_D251 = { { VSTRING, 4 }, " -g" };
static struct { VBlob sym; char bytes[40]; } _V10string_D250 = { { VSTRING, 40 }, " -rdynamic -Wmissing-braces -masm=intel" };
static struct { VBlob sym; char bytes[6]; } _V0flags = { { VSYMBOL, 6 }, "flags" };
static struct { VBlob sym; char bytes[6]; } _V10string_D249 = { { VSTRING, 6 }, "/tmp/" };
static struct { VBlob sym; char bytes[9]; } _V0cc__files = { { VSYMBOL, 9 }, "cc-files" };
static struct { VBlob sym; char bytes[9]; } _V0read__all = { { VSYMBOL, 9 }, "read-all" };
static struct { VBlob sym; char bytes[6]; } _V10string_D248 = { { VSTRING, 6 }, "a.out" };
static struct { VBlob sym; char bytes[6]; } _V10string_D247 = { { VSTRING, 6 }, ".escm" };
static struct { VBlob sym; char bytes[3]; } _V10string_D246 = { { VSTRING, 3 }, ".c" };
static struct { VBlob sym; char bytes[49]; } _V10string_D245 = { { VSTRING, 49 }, "FIXME: -c and -t and -E can only handle one file" };
static struct { VBlob sym; char bytes[56]; } _V10string_D244 = { { VSTRING, 56 }, "Cannot specify '-c' or '-t' or '-E' with multiple files" };
static struct { VBlob sym; char bytes[54]; } _V10string_D243 = { { VSTRING, 54 }, "Cannot specify '-c' or '-t' or '-E' with object files" };
static struct { VBlob sym; char bytes[44]; } _V10string_D242 = { { VSTRING, 44 }, "Only one of '-c' or '-t' or '-E' can be set" };
static struct { VBlob sym; char bytes[23]; } _V10string_D241 = { { VSTRING, 23 }, "No input file provided" };
static struct { VBlob sym; char bytes[19]; } _V10string_D240 = { { VSTRING, 19 }, "Unknown CLI option" };
static struct { VBlob sym; char bytes[57]; } _V10string_D239 = { { VSTRING, 57 }, "Expand flag -E expects integer between 0 and 2 inclusive" };
static struct { VBlob sym; char bytes[63]; } _V10string_D238 = { { VSTRING, 63 }, "Optimization flag -O expects integer between 0 and 3 inclusive" };
static struct { VBlob sym; char bytes[3]; } _V10string_D237 = { { VSTRING, 3 }, ".o" };
static struct { VBlob sym; char bytes[11]; } _V0keep__temps = { { VSYMBOL, 11 }, "keep-temps" };
static struct { VBlob sym; char bytes[8]; } _V0version = { { VSYMBOL, 8 }, "version" };
static struct { VBlob sym; char bytes[5]; } _V0help = { { VSYMBOL, 5 }, "help" };
static struct { VBlob sym; char bytes[7]; } _V0shared = { { VSYMBOL, 7 }, "shared" };
static struct { VBlob sym; char bytes[11]; } _V10string_D236 = { { VSTRING, 11 }, "vgtco:O:E:" };
static struct { VBlob sym; char bytes[29]; } _V10string_D235 = { { VSTRING, 29 }, "Vanity Scheme Compiler 0.0.0" };
static struct { VBlob sym; char bytes[37]; } _V10string_D234 = { { VSTRING, 37 }, "Copyright (C) 2023 Richard Van Natta" };
static struct { VBlob sym; char bytes[16]; } _V0display__version = { { VSYMBOL, 16 }, "display-version" };
static struct { VBlob sym; char bytes[29]; } _V10string_D233 = { { VSTRING, 29 }, "Usage: vsc [options] file..." };
static struct { VBlob sym; char bytes[9]; } _V10string_D232 = { { VSTRING, 9 }, "Options:" };
static struct { VBlob sym; char bytes[92]; } _V10string_D231 = { { VSTRING, 92 }, "  -O<num>       Compile with optimization levels 0 (slowest codegen) to 3 (fastest codegen)" };
static struct { VBlob sym; char bytes[43]; } _V10string_D230 = { { VSTRING, 43 }, "  -g            Compile with debug symbols" };
static struct { VBlob sym; char bytes[116]; } _V10string_D229 = { { VSTRING, 116 }, "  -E<num>       Expand only, do not compile or link. 0: macros only, 1: continuation passing style, 2: optimization" };
static struct { VBlob sym; char bytes[55]; } _V10string_D228 = { { VSTRING, 55 }, "  -t            Transpile only, do not compile or link" };
static struct { VBlob sym; char bytes[66]; } _V10string_D227 = { { VSTRING, 66 }, "  -c            Transpile, compile, and assemble, but do not link" };
static struct { VBlob sym; char bytes[45]; } _V10string_D226 = { { VSTRING, 45 }, "  -o <file>     Place the output into <file>" };
static struct { VBlob sym; char bytes[43]; } _V10string_D225 = { { VSTRING, 43 }, "  -v            Show intermediate commands" };
static struct { VBlob sym; char bytes[1]; } _V10string_D224 = { { VSTRING, 1 }, "" };
static struct { VBlob sym; char bytes[42]; } _V10string_D223 = { { VSTRING, 42 }, "  --shared      Compile as shared library" };
static struct { VBlob sym; char bytes[74]; } _V10string_D222 = { { VSTRING, 74 }, "  --keep-temps  Keep temporary compilation files, such as C intermediates" };
static struct { VBlob sym; char bytes[36]; } _V10string_D221 = { { VSTRING, 36 }, "  --help        You know about this" };
static struct { VBlob sym; char bytes[44]; } _V10string_D220 = { { VSTRING, 44 }, "  --version     Show version and build info" };
static struct { VBlob sym; char bytes[13]; } _V0display__help = { { VSYMBOL, 13 }, "display-help" };
static struct { VBlob sym; char bytes[9]; } _V0basename = { { VSYMBOL, 9 }, "basename" };
static struct { VBlob sym; char bytes[17]; } _V0change__extension = { { VSYMBOL, 17 }, "change-extension" };
static struct { VBlob sym; char bytes[10]; } _V0extension = { { VSYMBOL, 10 }, "extension" };
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
static struct { VBlob sym; char bytes[10]; } _V10string_D219 = { { VSTRING, 10 }, "transpile" };
static struct { VBlob sym; char bytes[4]; } _V10string_D218 = { { VSTRING, 4 }, "cps" };
static struct { VBlob sym; char bytes[7]; } _V10string_D217 = { { VSTRING, 7 }, "expand" };
static struct { VBlob sym; char bytes[7]; } _V10string_D216 = { { VSTRING, 7 }, "getopt" };
static struct { VBlob sym; char bytes[6]; } _V10string_D215 = { { VSTRING, 6 }, "match" };
static struct { VBlob sym; char bytes[10]; } _V10string_D214 = { { VSTRING, 10 }, "variables" };
static struct { VBlob sym; char bytes[21]; } _V10string_D213 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static void global_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k1, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.2 0 0))
    V_CALL_FUNC2(VMultiDefine2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      _var0
    );
 }
}
static void global_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k2" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k2, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.3 0 0))
    V_CALL_FUNC2(VMultiDefine2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      _var0
    );
 }
}
static void global_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k3" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k3, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.4 0 0))
    V_CALL_FUNC2(VMultiDefine2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      _var0
    );
 }
}
static void global_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k4" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k4, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.5 0 0))
    V_CALL_FUNC2(VMultiDefine2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      _var0
    );
 }
}
static void global_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k5" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k5, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.6 0 0))
    V_CALL_FUNC2(VMultiDefine2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      _var0
    );
 }
}
static void global_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k6" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k6, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.7 0 0))
    V_CALL_FUNC2(VMultiDefine2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      _var0
    );
 }
}
static void global_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k7" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k7, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.8 0 0))
    V_CALL_FUNC2(VMultiDefine2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      _var0
    );
 }
}
static void _V0extension_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_k10" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0extension_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0extension_k10, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.10 3 0) (bruijn ##x.12 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0extension_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_k9" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0extension_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0extension_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (- (close _V0extension_k10) (bruijn ##x.13 0 0) 1)
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("-")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0extension_k10, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0extension_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_k8" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0extension_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0extension_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-length (close _V0extension_k9) (bruijn file 2 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-length")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0extension_k9, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k14" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k14, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.14 4 0) (bruijn ##x.17 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k13" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.16 0 0) (substring (bruijn ##k.14 3 0) (bruijn file 5 1) (bruijn i 3 1)) (- (close _V0loop_k14) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("substring")), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("-")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k14, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
}
 }
}
static void _V0loop_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k12" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eq? (close _V0loop_k13) #\. (bruijn ##x.18 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eq?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k13, env)}),
      VEncodeChar('.'),
      _var0
    );
 }
}
static void _V0loop_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k11" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.15 0 0) ((bruijn ##k.14 1 0) #f) (string-ref (close _V0loop_k12) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-ref")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k12, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda3" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V0loop_k11) (bruijn i 0 1) 0)
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("<=")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k11, env)}),
      _var1,
      VEncodeInt(0l)
    );
 }
}
static void _V0extension_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0extension_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0extension_lambda2, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0extension_k8) (bruijn loop 0 1) (close _V0loop_lambda3))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0extension_k8, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda3, env)})
    );
 }
}
static void _V0extension_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0extension_lambda1" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0extension_lambda1, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0extension_lambda1, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0extension_lambda2) (bruijn ##k.9 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0extension_lambda2, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0change__extension_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_k17" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0change__extension_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0change__extension_k17, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.20 3 0) (bruijn ##x.22 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0change__extension_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_k16" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0change__extension_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0change__extension_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (- (close _V0change__extension_k17) (bruijn ##x.23 0 0) 1)
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("-")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0change__extension_k17, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0change__extension_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_k15" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0change__extension_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0change__extension_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-length (close _V0change__extension_k16) (bruijn file 2 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-length")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0change__extension_k16, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k21" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k21, runtime, upenv, 1, argc, _var0) {
  // (string-append (bruijn ##k.24 4 0) (bruijn ##x.27 0 0) (bruijn new 6 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-append")), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0loop_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k22" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k22, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.24 4 0) (bruijn ##x.28 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k20" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.26 0 0) (substring (close _V0loop_k21) (bruijn file 5 1) 0 (bruijn i 3 1)) (- (close _V0loop_k22) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("substring")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k21, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(0l),
      upenv->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("-")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k22, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
}
 }
}
static void _V0loop_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k19" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eq? (close _V0loop_k20) #\. (bruijn ##x.29 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eq?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k20, env)}),
      VEncodeChar('.'),
      _var0
    );
 }
}
static void _V0loop_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k18" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.25 0 0) (string-append (bruijn ##k.24 1 0) (bruijn file 3 1) (bruijn new 3 2)) (string-ref (close _V0loop_k19) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-append")), runtime,
      upenv->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-ref")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k19, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda6" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V0loop_k18) (bruijn i 0 1) 0)
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("<=")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k18, env)}),
      _var1,
      VEncodeInt(0l)
    );
 }
}
static void _V0change__extension_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0change__extension_lambda5" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0change__extension_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0change__extension_k15) (bruijn loop 0 1) (close _V0loop_lambda6))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0change__extension_k15, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda6, env)})
    );
 }
}
static void _V0change__extension_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0change__extension_lambda4" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0change__extension_lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0change__extension_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0change__extension_lambda5) (bruijn ##k.19 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0change__extension_lambda5, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0basename_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basename_k25" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basename_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0basename_k25, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.31 3 0) (bruijn ##x.33 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0basename_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basename_k24" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basename_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0basename_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (- (close _V0basename_k25) (bruijn ##x.34 0 0) 1)
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("-")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0basename_k25, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0basename_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basename_k23" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basename_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0basename_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-length (close _V0basename_k24) (bruijn file 2 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-length")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0basename_k24, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k29" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k29, runtime, upenv, 1, argc, _var0) {
  // (substring (bruijn ##k.35 4 0) (bruijn file 6 1) (bruijn ##x.38 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("substring")), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      _var0
    );
 }
}
static void _V0loop_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k30" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k30, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.35 4 0) (bruijn ##x.39 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k28" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.37 0 0) (+ (close _V0loop_k29) (bruijn i 3 1) 1) (- (close _V0loop_k30) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("+")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k29, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("-")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k30, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
}
 }
}
static void _V0loop_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k27" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eq? (close _V0loop_k28) #\/ (bruijn ##x.40 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eq?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k28, env)}),
      VEncodeChar('/'),
      _var0
    );
 }
}
static void _V0loop_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k26" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.36 0 0) ((bruijn ##k.35 1 0) (bruijn file 3 1)) (string-ref (close _V0loop_k27) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      upenv->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-ref")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k27, env)}),
      upenv->up->up->vars[1],
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
  // (<= (close _V0loop_k26) (bruijn i 0 1) 0)
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("<=")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k26, env)}),
      _var1,
      VEncodeInt(0l)
    );
 }
}
static void _V0basename_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0basename_lambda8" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0basename_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0basename_k23) (bruijn loop 0 1) (close _V0loop_lambda9))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0basename_k23, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda9, env)})
    );
 }
}
static void _V0basename_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0basename_lambda7" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0basename_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0basename_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0basename_lambda8) (bruijn ##k.30 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0basename_lambda8, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0display__help_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k43" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0display__help_k43, runtime, upenv, 1, argc, _var0) {
  // (displayln (bruijn ##k.41 13 0) (##string ##string.220))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("displayln")), runtime,
      VGetArg(upenv, 13-1, 0),
      VEncodePointer(&_V10string_D220.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k42" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0display__help_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k43) (##string ##string.221))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("displayln")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0display__help_k43, env)}),
      VEncodePointer(&_V10string_D221.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k41" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0display__help_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k42) (##string ##string.222))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("displayln")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0display__help_k42, env)}),
      VEncodePointer(&_V10string_D222.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k40" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0display__help_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k41) (##string ##string.223))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("displayln")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0display__help_k41, env)}),
      VEncodePointer(&_V10string_D223.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k39" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0display__help_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k40) (##string ##string.224))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("displayln")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0display__help_k40, env)}),
      VEncodePointer(&_V10string_D224.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k38" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0display__help_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k39) (##string ##string.225))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("displayln")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0display__help_k39, env)}),
      VEncodePointer(&_V10string_D225.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k37" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0display__help_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k38) (##string ##string.226))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("displayln")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0display__help_k38, env)}),
      VEncodePointer(&_V10string_D226.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k36" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0display__help_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k37) (##string ##string.227))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("displayln")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0display__help_k37, env)}),
      VEncodePointer(&_V10string_D227.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k35" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0display__help_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k36) (##string ##string.228))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("displayln")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0display__help_k36, env)}),
      VEncodePointer(&_V10string_D228.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k34" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0display__help_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k35) (##string ##string.229))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("displayln")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0display__help_k35, env)}),
      VEncodePointer(&_V10string_D229.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k33" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0display__help_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k34) (##string ##string.230))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("displayln")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0display__help_k34, env)}),
      VEncodePointer(&_V10string_D230.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k32" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0display__help_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k33) (##string ##string.231))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("displayln")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0display__help_k33, env)}),
      VEncodePointer(&_V10string_D231.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k31" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0display__help_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k32) (##string ##string.232))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("displayln")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0display__help_k32, env)}),
      VEncodePointer(&_V10string_D232.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_lambda10" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0display__help_lambda10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k31) (##string ##string.233))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("displayln")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0display__help_k31, env)}),
      VEncodePointer(&_V10string_D233.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__version_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_k44" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__version_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0display__version_k44, runtime, upenv, 1, argc, _var0) {
  // (displayln (bruijn ##k.55 1 0) (##string ##string.234))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("displayln")), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D234.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__version_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_lambda11" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__version_lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0display__version_lambda11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__version_k44) (##string ##string.235))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("displayln")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0display__version_k44, env)}),
      VEncodePointer(&_V10string_D235.sym, VPOINTER_OTHER)
    );
 }
}
static void global_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k47" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k47, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.57 3 0) (bruijn ##x.59 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void global_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k46" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (getopt (close global_k47) (##string ##string.236) (bruijn ##x.60 0 0) (##inline ##sys.qcons (##inline ##sys.qcons (quote shared) (##inline ##sys.qcons (quote #f) (##inline ##sys.qcons (quote shared) (quote ())))) (##inline ##sys.qcons (##inline ##sys.qcons (quote help) (##inline ##sys.qcons (quote #f) (##inline ##sys.qcons (quote help) (quote ())))) (##inline ##sys.qcons (##inline ##sys.qcons (quote api) (##inline ##sys.qcons (quote #t) (##inline ##sys.qcons (quote api) (quote ())))) (##inline ##sys.qcons (##inline ##sys.qcons (quote version) (##inline ##sys.qcons (quote #f) (##inline ##sys.qcons (quote version) (quote ())))) (##inline ##sys.qcons (##inline ##sys.qcons (quote keep-temps) (##inline ##sys.qcons (quote #f) (##inline ##sys.qcons (quote keep-temps) (quote ())))) (quote ())))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("getopt")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k47, env)}),
      VEncodePointer(&_V10string_D236.sym, VPOINTER_OTHER),
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
      VNULL
    )

    )

    )

    )

    )

    );
 }
}
static void global_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k45" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (command-line (close global_k46))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("command-line")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k46, env)})
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.85 6 0) obj-files (bruijn ##x.88 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetGlobalVar2, env)}, runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V0obj__files.sym, VPOINTER_OTHER),
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
  // (cons (close _V0loop_k56) (bruijn ##x.89 0 0) obj-files)
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cons")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k56, env)}),
      _var0,
      VLookupGlobalVarFast("obj-files")
    );
 }
}
static void _V0loop_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k58" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.85 6 0) scm-files (bruijn ##x.90 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetGlobalVar2, env)}, runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V0scm__files.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k57" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cons (close _V0loop_k58) (bruijn ##x.91 0 0) scm-files)
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cons")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k58, env)}),
      _var0,
      VLookupGlobalVarFast("scm-files")
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.87 0 0) (cdar (close _V0loop_k55) (bruijn args 8 1)) (cdar (close _V0loop_k57) (bruijn args 8 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdar")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k55, env)}),
      VGetArg(upenv, 8-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdar")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k57, env)}),
      VGetArg(upenv, 8-1, 1)
    );
}
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
  // (equal? (close _V0loop_k54) (bruijn ##x.92 0 0) (##string ##string.237))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("equal?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k54, env)}),
      _var0,
      VEncodePointer(&_V10string_D237.sym, VPOINTER_OTHER)
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
  // (extension (close _V0loop_k53) (bruijn ##x.93 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("extension")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k53, env)}),
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
  // (set! (bruijn ##k.85 7 0) out-file (bruijn ##x.99 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetGlobalVar2, env)}, runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V0out__file.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k72" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k72, runtime, upenv, 1, argc, _var0) {
  // (error (bruijn ##k.85 14 0) (##string ##string.238) (bruijn ##x.103 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VGetArg(upenv, 14-1, 0),
      VEncodePointer(&_V10string_D238.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k71" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.102 0 0) (cdar (close _V0loop_k72) (bruijn args 17 1)) ((bruijn ##k.85 13 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdar")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k72, env)}),
      VGetArg(upenv, 17-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 0)), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k70" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close _V0loop_k71) (bruijn ##x.104 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k71, env)}),
      _var0
    );
 }
}
static void _V0loop_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k74" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k74, runtime, upenv, 1, argc, _var0) {
  // (error (bruijn ##k.85 13 0) (##string ##string.238) (bruijn ##x.103 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VGetArg(upenv, 13-1, 0),
      VEncodePointer(&_V10string_D238.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k73" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.102 0 0) (cdar (close _V0loop_k74) (bruijn args 16 1)) ((bruijn ##k.85 12 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdar")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k74, env)}),
      VGetArg(upenv, 16-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 0)), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k69" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.105 0 0) (<= (close _V0loop_k70) 0 optimization 3) (not (close _V0loop_k73) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("<=")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k70, env)}),
      VEncodeInt(0l),
      VLookupGlobalVarFast("optimization"),
      VEncodeInt(3l)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k73, env)}),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k76" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k76, runtime, upenv, 1, argc, _var0) {
  // (error (bruijn ##k.85 12 0) (##string ##string.238) (bruijn ##x.103 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VGetArg(upenv, 12-1, 0),
      VEncodePointer(&_V10string_D238.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k75" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.102 0 0) (cdar (close _V0loop_k76) (bruijn args 15 1)) ((bruijn ##k.85 11 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdar")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k76, env)}),
      VGetArg(upenv, 15-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 0)), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k68" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if optimization (integer? (close _V0loop_k69) optimization) (not (close _V0loop_k75) #f))
if(VDecodeBool(
VLookupGlobalVarFast("optimization"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("integer?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k69, env)}),
      VLookupGlobalVarFast("optimization")
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k75, env)}),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k67" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0loop_k68) optimization (bruijn ##x.106 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k68, env)}),
      VEncodePointer(&_V0optimization.sym, VPOINTER_OTHER),
      _var0
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string->number (close _V0loop_k67) (bruijn ##x.107 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string->number")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k67, env)}),
      _var0
    );
 }
}
static void _V0loop_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k84" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k84, runtime, upenv, 1, argc, _var0) {
  // (error (bruijn ##k.85 15 0) (##string ##string.239) (bruijn ##x.111 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VGetArg(upenv, 15-1, 0),
      VEncodePointer(&_V10string_D239.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k83" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.110 0 0) (cdar (close _V0loop_k84) (bruijn args 18 1)) ((bruijn ##k.85 14 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdar")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k84, env)}),
      VGetArg(upenv, 18-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 0)), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k82" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close _V0loop_k83) (bruijn ##x.112 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k83, env)}),
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
  // (error (bruijn ##k.85 14 0) (##string ##string.239) (bruijn ##x.111 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VGetArg(upenv, 14-1, 0),
      VEncodePointer(&_V10string_D239.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k85" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.110 0 0) (cdar (close _V0loop_k86) (bruijn args 17 1)) ((bruijn ##k.85 13 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdar")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k86, env)}),
      VGetArg(upenv, 17-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 0)), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k81" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.113 0 0) (<= (close _V0loop_k82) 0 expand? 2) (not (close _V0loop_k85) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("<=")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k82, env)}),
      VEncodeInt(0l),
      VLookupGlobalVarFast("expand?"),
      VEncodeInt(2l)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k85, env)}),
      VEncodeBool(false)
    );
}
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
  // (error (bruijn ##k.85 13 0) (##string ##string.239) (bruijn ##x.111 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VGetArg(upenv, 13-1, 0),
      VEncodePointer(&_V10string_D239.sym, VPOINTER_OTHER),
      _var0
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
  // (if (bruijn ##p.110 0 0) (cdar (close _V0loop_k88) (bruijn args 16 1)) ((bruijn ##k.85 12 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdar")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k88, env)}),
      VGetArg(upenv, 16-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 0)), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k80" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if expand? (integer? (close _V0loop_k81) expand?) (not (close _V0loop_k87) #f))
if(VDecodeBool(
VLookupGlobalVarFast("expand?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("integer?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k81, env)}),
      VLookupGlobalVarFast("expand?")
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k87, env)}),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k79" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0loop_k80) expand? (bruijn ##x.114 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k80, env)}),
      VEncodePointer(&_V0expand_Q.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k78" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string->number (close _V0loop_k79) (bruijn ##x.115 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string->number")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k79, env)}),
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
  // (exit (bruijn ##k.85 10 0) 0)
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("exit")), runtime,
      VGetArg(upenv, 10-1, 0),
      VEncodeInt(0l)
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
  // (exit (bruijn ##k.85 11 0) 0)
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("exit")), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k96" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.85 14 0) api (bruijn ##x.122 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetGlobalVar2, env)}, runtime,
      VGetArg(upenv, 14-1, 0),
      VEncodePointer(&_V0api.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k95" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string->number (close _V0loop_k96) (bruijn ##x.123 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string->number")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k96, env)}),
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
  // (error (bruijn ##k.85 17 0) (##string ##string.240) (bruijn ##x.127 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VGetArg(upenv, 17-1, 0),
      VEncodePointer(&_V10string_D240.sym, VPOINTER_OTHER),
      _var0
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
  // (cdar (close _V0loop_k101) (bruijn args 20 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdar")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k101, env)}),
      VGetArg(upenv, 20-1, 1)
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
  // (newline (close _V0loop_k100))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("newline")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k100, env)})
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
  // (write (close _V0loop_k99) (bruijn ##x.128 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("write")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k99, env)}),
      _var0
    );
 }
}
static void _V0loop_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k97" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.124 0 0) (set! (bruijn ##k.85 13 0) keep? #t) (caar (close _V0loop_k98) (bruijn args 17 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetGlobalVar2, env)}, runtime,
      VGetArg(upenv, 13-1, 0),
      VEncodePointer(&_V0keep_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("caar")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k98, env)}),
      VGetArg(upenv, 17-1, 1)
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.121 0 0) (cdar (close _V0loop_k95) (bruijn args 16 1)) (eqv? (close _V0loop_k97) (bruijn ##x.1 12 1) (quote keep-temps)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdar")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k95, env)}),
      VGetArg(upenv, 16-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k97, env)}),
      VGetArg(upenv, 12-1, 1),
      VEncodePointer(&_V0keep__temps.sym, VPOINTER_OTHER)
    );
}
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
  // (if (bruijn ##p.120 0 0) (set! (bruijn ##k.85 11 0) shared? #t) (eqv? (close _V0loop_k94) (bruijn ##x.1 11 1) (quote api)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetGlobalVar2, env)}, runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V0shared_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k94, env)}),
      VGetArg(upenv, 11-1, 1),
      VEncodePointer(&_V0api.sym, VPOINTER_OTHER)
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.118 0 0) (display-version (close _V0loop_k92)) (eqv? (close _V0loop_k93) (bruijn ##x.1 10 1) (quote shared)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("display-version")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k92, env)})
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k93, env)}),
      VGetArg(upenv, 10-1, 1),
      VEncodePointer(&_V0shared.sym, VPOINTER_OTHER)
    );
}
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
  // (if (bruijn ##p.116 0 0) (display-help (close _V0loop_k90)) (eqv? (close _V0loop_k91) (bruijn ##x.1 9 1) (quote version)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("display-help")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k90, env)})
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k91, env)}),
      VGetArg(upenv, 9-1, 1),
      VEncodePointer(&_V0version.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k77" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.108 0 0) (cdar (close _V0loop_k78) (bruijn args 12 1)) (eqv? (close _V0loop_k89) (bruijn ##x.1 8 1) (quote help)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdar")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k78, env)}),
      VGetArg(upenv, 12-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k89, env)}),
      VGetArg(upenv, 8-1, 1),
      VEncodePointer(&_V0help.sym, VPOINTER_OTHER)
    );
}
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.100 0 0) (cdar (close _V0loop_k66) (bruijn args 11 1)) (eqv? (close _V0loop_k77) (bruijn ##x.1 7 1) (quote #\E)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdar")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k66, env)}),
      VGetArg(upenv, 11-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k77, env)}),
      VGetArg(upenv, 7-1, 1),
      VEncodeChar('E')
    );
}
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
  // (if (bruijn ##p.98 0 0) (cdar (close _V0loop_k64) (bruijn args 10 1)) (eqv? (close _V0loop_k65) (bruijn ##x.1 6 1) (quote #\O)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdar")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k64, env)}),
      VGetArg(upenv, 10-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k65, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeChar('O')
    );
}
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
  // (if (bruijn ##p.97 0 0) (set! (bruijn ##k.85 5 0) object? #t) (eqv? (close _V0loop_k63) (bruijn ##x.1 5 1) (quote #\o)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetGlobalVar2, env)}, runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0object_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k63, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeChar('o')
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
  // (if (bruijn ##p.96 0 0) (set! (bruijn ##k.85 4 0) transpile? #t) (eqv? (close _V0loop_k62) (bruijn ##x.1 4 1) (quote #\c)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetGlobalVar2, env)}, runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V0transpile_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k62, env)}),
      upenv->up->up->up->vars[1],
      VEncodeChar('c')
    );
}
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.95 0 0) (set! (bruijn ##k.85 3 0) debug? #t) (eqv? (close _V0loop_k61) (bruijn ##x.1 3 1) (quote #\t)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetGlobalVar2, env)}, runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V0debug_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k61, env)}),
      upenv->up->up->vars[1],
      VEncodeChar('t')
    );
}
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
  // (if (bruijn ##p.94 0 0) (set! (bruijn ##k.85 2 0) verbose? #t) (eqv? (close _V0loop_k60) (bruijn ##x.1 2 1) (quote #\g)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetGlobalVar2, env)}, runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V0verbose_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k60, env)}),
      upenv->up->vars[1],
      VEncodeChar('g')
    );
}
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
  // (if (bruijn ##p.86 0 0) (cdar (close _V0loop_k52) (bruijn args 5 1)) (eqv? (close _V0loop_k59) (bruijn ##x.1 1 1) (quote #\v)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdar")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k52, env)}),
      VGetArg(upenv, 5-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k59, env)}),
      upenv->vars[1],
      VEncodeChar('v')
    );
}
 }
}
static void _V0loop_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda14" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (eqv? (close _V0loop_k51) (bruijn ##x.1 0 1) (quote #t))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k51, env)}),
      _var1,
      VEncodeBool(true)
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
  // ((bruijn loop 6 1) (bruijn ##k.81 5 0) (bruijn ##x.84 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      VGetArg(upenv, 5-1, 0),
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cdr (close _V0loop_k103) (bruijn args 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdr")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k103, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0loop_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k50" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_lambda14) (close _V0loop_k102) (bruijn ##x.129 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda14, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k102, env)}),
      _var0
    );
 }
}
static void _V0loop_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k49" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.82 0 0) (caar (close _V0loop_k50) (bruijn args 2 1)) ((bruijn ##k.81 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("caar")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k50, env)}),
      upenv->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k48" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close _V0loop_k49) (bruijn ##x.130 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k49, env)}),
      _var0
    );
 }
}
static void _V0loop_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda13" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (null? (close _V0loop_k48) (bruijn args 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("null?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k48, env)}),
      _var1
    );
 }
}
static void global_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda12" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)global_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close global_k45) (bruijn loop 0 1) (close _V0loop_lambda13))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k45, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda13, env)})
    );
 }
}
static void global_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k105" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k105, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.131 0 0) (error ##sys.next (##string ##string.241)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V10string_D241.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k104" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.132 0 0) (null? (close global_k105) obj-files) (##sys.next #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("null?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k105, env)}),
      VLookupGlobalVarFast("obj-files")
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k107" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k107, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.134 0 0) (error ##sys.next (##string ##string.243)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V10string_D243.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k106" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close global_k107) (bruijn ##x.136 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k107, env)}),
      _var0
    );
 }
}
static void global_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k109" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k109, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.134 0 0) (error ##sys.next (##string ##string.243)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V10string_D243.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k108" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close global_k109) (bruijn ##x.136 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k109, env)}),
      _var0
    );
 }
}
static void global_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k111" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k111, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.134 0 0) (error ##sys.next (##string ##string.243)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V10string_D243.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k110" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close global_k111) (bruijn ##x.136 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k111, env)}),
      _var0
    );
 }
}
static void global_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k114" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k114, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.137 0 0) (error ##sys.next (##string ##string.244)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V10string_D244.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k113" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close global_k114) (bruijn ##x.139 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k114, env)}),
      _var0
    );
 }
}
static void global_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k112" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (null? (close global_k113) (bruijn ##x.140 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("null?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k113, env)}),
      _var0
    );
 }
}
static void global_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k117" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k117, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.137 0 0) (error ##sys.next (##string ##string.244)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V10string_D244.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k116" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close global_k117) (bruijn ##x.139 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k117, env)}),
      _var0
    );
 }
}
static void global_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k115" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (null? (close global_k116) (bruijn ##x.140 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("null?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k116, env)}),
      _var0
    );
 }
}
static void global_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k120" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k120, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.137 0 0) (error ##sys.next (##string ##string.244)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V10string_D244.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k119" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close global_k120) (bruijn ##x.139 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k120, env)}),
      _var0
    );
 }
}
static void global_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k118" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (null? (close global_k119) (bruijn ##x.140 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("null?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k119, env)}),
      _var0
    );
 }
}
static void global_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k123" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k123, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.141 0 0) (error ##sys.next (##string ##string.245)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V10string_D245.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k122" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close global_k123) (bruijn ##x.143 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k123, env)}),
      _var0
    );
 }
}
static void global_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k121" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (null? (close global_k122) (bruijn ##x.144 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("null?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k122, env)}),
      _var0
    );
 }
}
static void global_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k126" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k126, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.141 0 0) (error ##sys.next (##string ##string.245)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V10string_D245.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k125" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close global_k126) (bruijn ##x.143 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k126, env)}),
      _var0
    );
 }
}
static void global_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k124" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (null? (close global_k125) (bruijn ##x.144 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("null?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k125, env)}),
      _var0
    );
 }
}
static void global_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k129" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k129, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.141 0 0) (error ##sys.next (##string ##string.245)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V10string_D245.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k128" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close global_k129) (bruijn ##x.143 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k129, env)}),
      _var0
    );
 }
}
static void global_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k127" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (null? (close global_k128) (bruijn ##x.144 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("null?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k128, env)}),
      _var0
    );
 }
}
static void global_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k133" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! ##sys.next out-file (bruijn ##x.146 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0out__file.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k132" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (change-extension (close global_k133) (bruijn ##x.147 0 0) (##string ##string.237))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("change-extension")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k133, env)}),
      _var0,
      VEncodePointer(&_V10string_D237.sym, VPOINTER_OTHER)
    );
 }
}
static void global_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k131" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (basename (close global_k132) (bruijn ##x.148 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("basename")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k132, env)}),
      _var0
    );
 }
}
static void global_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k136" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! ##sys.next out-file (bruijn ##x.146 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0out__file.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k135" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (change-extension (close global_k136) (bruijn ##x.149 0 0) (##string ##string.246))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("change-extension")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k136, env)}),
      _var0,
      VEncodePointer(&_V10string_D246.sym, VPOINTER_OTHER)
    );
 }
}
static void global_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k134" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (basename (close global_k135) (bruijn ##x.150 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("basename")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k135, env)}),
      _var0
    );
 }
}
static void global_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k139" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! ##sys.next out-file (bruijn ##x.146 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0out__file.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k138" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (change-extension (close global_k139) (bruijn ##x.151 0 0) (##string ##string.247))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("change-extension")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k139, env)}),
      _var0,
      VEncodePointer(&_V10string_D247.sym, VPOINTER_OTHER)
    );
 }
}
static void global_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k137" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (basename (close global_k138) (bruijn ##x.152 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("basename")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k138, env)}),
      _var0
    );
 }
}
static void global_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k130" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.145 0 0) (if object? (car (close global_k131) scm-files) (if transpile? (car (close global_k134) scm-files) (if expand? (car (close global_k137) scm-files) (set! ##sys.next out-file (##string ##string.248))))) (##sys.next #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("car")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k131, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("car")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k134, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
if(VDecodeBool(
VLookupGlobalVarFast("expand?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("car")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k137, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0out__file.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D248.sym, VPOINTER_OTHER)
    );
}
}
}
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0read__all_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0read__all_k142" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0read__all_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0read__all_k142, runtime, upenv, 1, argc, _var0) {
  // (cons (bruijn ##k.154 2 0) (bruijn expr 2 1) (bruijn ##x.156 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cons")), runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0read__all_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0read__all_k141" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0read__all_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0read__all_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.155 0 0) ((bruijn ##k.154 1 0) (quote ())) (read-all (close _V0read__all_k142) (bruijn port 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VNULL
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("read-all")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0read__all_k142, env)}),
      upenv->up->up->vars[1]
    );
}
 }
}
static void _V0read__all_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0read__all_lambda16" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0read__all_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (eof-object? (close _V0read__all_k141) (bruijn expr 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eof-object?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0read__all_k141, env)}),
      _var1
    );
 }
}
static void _V0read__all_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0read__all_k140" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0read__all_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0read__all_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0read__all_lambda16) (bruijn ##k.153 1 0) (bruijn ##x.157 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0read__all_lambda16, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0read__all_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0read__all_lambda15" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0read__all_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0read__all_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (read (close _V0read__all_k140) (bruijn port 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("read")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0read__all_k140, env)}),
      _var1
    );
 }
}
static void global_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k143" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next cc-files (bruijn ##x.158 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0cc__files.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k144" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next cc-files (bruijn ##x.158 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0cc__files.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k146" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k146, runtime, upenv, 1, argc, _var0) {
  // (make-temporary-file (bruijn ##k.160 2 0) (bruijn ##x.161 0 0) (##string ##string.246))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("make-temporary-file")), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D246.sym, VPOINTER_OTHER)
    );
 }
}
static void global_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k145" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-append (close global_k146) (##string ##string.249) (bruijn ##x.162 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-append")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k146, env)}),
      VEncodePointer(&_V10string_D249.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda17" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (basename (close global_k145) (bruijn file 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("basename")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k145, env)}),
      _var1
    );
 }
}
static void global_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k147" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next cc-files (bruijn ##x.158 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0cc__files.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k148" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next cc-files (bruijn ##x.158 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0cc__files.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k150" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k150, runtime, upenv, 1, argc, _var0) {
  // (make-temporary-file (bruijn ##k.160 2 0) (bruijn ##x.161 0 0) (##string ##string.246))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("make-temporary-file")), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D246.sym, VPOINTER_OTHER)
    );
 }
}
static void global_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k149" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-append (close global_k150) (##string ##string.249) (bruijn ##x.162 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-append")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k150, env)}),
      VEncodePointer(&_V10string_D249.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda18" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (basename (close global_k149) (bruijn file 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("basename")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k149, env)}),
      _var1
    );
 }
}
static void global_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k152" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next flags (bruijn ##x.163 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0flags.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k153" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next flags (bruijn ##x.163 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0flags.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k154" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next flags (bruijn ##x.163 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0flags.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k155" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next flags (bruijn ##x.163 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0flags.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k156" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next flags (bruijn ##x.163 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0flags.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k157" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next flags (bruijn ##x.163 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0flags.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k158" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next flags (bruijn ##x.163 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0flags.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k159" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next flags (bruijn ##x.163 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0flags.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k151" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if debug? (if object? (if shared? (string-append (close global_k152) (##string ##string.250) (bruijn ##x.164 0 0) (##string ##string.251) (##string ##string.252) (##string ##string.253)) (string-append (close global_k153) (##string ##string.250) (bruijn ##x.164 0 0) (##string ##string.251) (##string ##string.252) (##string ##string.254))) (if shared? (string-append (close global_k154) (##string ##string.250) (bruijn ##x.164 0 0) (##string ##string.251) (##string ##string.255) (##string ##string.253)) (string-append (close global_k155) (##string ##string.250) (bruijn ##x.164 0 0) (##string ##string.251) (##string ##string.255) (##string ##string.254)))) (if object? (if shared? (string-append (close global_k156) (##string ##string.250) (bruijn ##x.164 0 0) (##string ##string.224) (##string ##string.252) (##string ##string.253)) (string-append (close global_k157) (##string ##string.250) (bruijn ##x.164 0 0) (##string ##string.224) (##string ##string.252) (##string ##string.254))) (if shared? (string-append (close global_k158) (##string ##string.250) (bruijn ##x.164 0 0) (##string ##string.224) (##string ##string.255) (##string ##string.253)) (string-append (close global_k159) (##string ##string.250) (bruijn ##x.164 0 0) (##string ##string.224) (##string ##string.255) (##string ##string.254)))))
if(VDecodeBool(
VLookupGlobalVarFast("debug?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("shared?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-append")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k152, env)}),
      VEncodePointer(&_V10string_D250.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10string_D251.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D252.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D253.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-append")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k153, env)}),
      VEncodePointer(&_V10string_D250.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10string_D251.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D252.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D254.sym, VPOINTER_OTHER)
    );
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("shared?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-append")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k154, env)}),
      VEncodePointer(&_V10string_D250.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10string_D251.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D255.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D253.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-append")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k155, env)}),
      VEncodePointer(&_V10string_D250.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10string_D251.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D255.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D254.sym, VPOINTER_OTHER)
    );
}
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("shared?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-append")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k156, env)}),
      VEncodePointer(&_V10string_D250.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10string_D224.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D252.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D253.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-append")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k157, env)}),
      VEncodePointer(&_V10string_D250.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10string_D224.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D252.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D254.sym, VPOINTER_OTHER)
    );
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("shared?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-append")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k158, env)}),
      VEncodePointer(&_V10string_D250.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10string_D224.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D255.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D253.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-append")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k159, env)}),
      VEncodePointer(&_V10string_D250.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10string_D224.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D255.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D254.sym, VPOINTER_OTHER)
    );
}
}
}
 }
}
static void global_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k160" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next command (bruijn ##x.168 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0command.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k162" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.169 1 0) command (bruijn ##x.170 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetGlobalVar2, env)}, runtime,
      upenv->vars[0],
      VEncodePointer(&_V0command.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda19" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (string-append (close global_k162) command (##string ##string.258) (bruijn file 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-append")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k162, env)}),
      VLookupGlobalVarFast("command"),
      VEncodePointer(&_V10string_D258.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void global_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k161" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (for-each ##sys.next (close global_lambda19) (bruijn ##x.171 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("for-each")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_lambda19, env)}),
      _var0
    );
 }
}
static void global_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k163" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! ##sys.next command (bruijn ##x.172 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0command.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k164" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next stdout (bruijn ##x.173 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0stdout.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k166" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next num-mains (bruijn ##x.174 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0num__mains.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "global_lambda20" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to global_lambda20, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_lambda20, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn x 0 1) (+ (bruijn ##k.175 0 0) (bruijn acc 0 2) 1) (+ (bruijn ##k.175 0 0) (bruijn acc 0 2) 0))
if(VDecodeBool(
_var1)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("+")), runtime,
      _var0,
      _var2,
      VEncodeInt(1l)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("+")), runtime,
      _var0,
      _var2,
      VEncodeInt(0l)
    );
}
 }
}
static void global_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k165" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (fold (close global_k166) (close global_lambda20) 0 (bruijn ##x.177 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("fold")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k166, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_lambda20, env)}),
      VEncodeInt(0l),
      _var0
    );
 }
}
static void global_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k180" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k180, runtime, upenv, 1, argc, _var0) {
  // (apply (bruijn ##k.188 2 0) printout2 (bruijn ##x.189 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("apply")), runtime,
      upenv->up->vars[0],
      VLookupGlobalVarFast("printout2"),
      _var0
    );
 }
}
static void global_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k179" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cons (close global_k180) debug? (bruijn ##x.190 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cons")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k180, env)}),
      VLookupGlobalVarFast("debug?"),
      _var0
    );
 }
}
static void global_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda28" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)global_lambda28, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (cons (close global_k179) shared? (bruijn funs 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cons")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k179, env)}),
      VLookupGlobalVarFast("shared?"),
      _var1
    );
 }
}
static void global_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k178" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_lambda28) (bruijn ##k.187 1 0) (bruijn ##x.191 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)global_lambda28, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void global_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda27" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)global_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (to-functions (close global_k178) (bruijn bruijn 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("to-functions")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k178, env)}),
      _var1
    );
 }
}
static void global_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k177" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_lambda27) (bruijn ##k.185 2 0) (bruijn ##x.192 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)global_lambda27, env)}, runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void global_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k176" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.186 0 0) (for-each (bruijn ##k.185 1 0) write (bruijn opt 1 1)) (map (close global_k177) bruijn-ify (bruijn opt 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("for-each")), runtime,
      upenv->vars[0],
      VLookupGlobalVarFast("write"),
      upenv->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("map")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k177, env)}),
      VLookupGlobalVarFast("bruijn-ify"),
      upenv->vars[1]
    );
}
 }
}
static void global_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda26" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)global_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (eq? (close global_k176) expand? 2)
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eq?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k176, env)}),
      VLookupGlobalVarFast("expand?"),
      VEncodeInt(2l)
    );
 }
}
static void global_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k175" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_lambda26) (bruijn ##k.183 2 0) (bruijn ##x.193 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)global_lambda26, env)}, runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void global_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k181" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k181, runtime, upenv, 1, argc, _var0) {
  // (deannotate-lambdas (bruijn ##k.194 1 0) (bruijn ##x.195 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("deannotate-lambdas")), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void global_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda29" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (optimize (close global_k181) (bruijn expr 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("optimize")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k181, env)}),
      _var1
    );
 }
}
static void global_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k174" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.184 0 0) (for-each (bruijn ##k.183 1 0) write (bruijn cps 1 1)) (map (close global_k175) (close global_lambda29) (bruijn cps 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("for-each")), runtime,
      upenv->vars[0],
      VLookupGlobalVarFast("write"),
      upenv->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("map")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k175, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_lambda29, env)}),
      upenv->vars[1]
    );
}
 }
}
static void global_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda25" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)global_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (eq? (close global_k174) expand? 1)
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eq?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k174, env)}),
      VLookupGlobalVarFast("expand?"),
      VEncodeInt(1l)
    );
 }
}
static void global_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k173" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_lambda25) (bruijn ##k.181 3 0) (bruijn ##x.196 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)global_lambda25, env)}, runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void global_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k182" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k182, runtime, upenv, 1, argc, _var0) {
  // (annotate-lambdas (bruijn ##k.197 1 0) (bruijn ##x.198 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("annotate-lambdas")), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void global_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda30" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda30, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (to-cps (close global_k182) (bruijn expr 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("to-cps")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k182, env)}),
      _var1
    );
 }
}
static void global_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k172" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (map (close global_k173) (close global_lambda30) (bruijn ##x.199 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("map")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k173, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_lambda30, env)}),
      _var0
    );
 }
}
static void global_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k171" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.182 0 0) (for-each (bruijn ##k.181 1 0) write (bruijn expanded 1 1)) (apply (close global_k172) append (bruijn expanded 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("for-each")), runtime,
      upenv->vars[0],
      VLookupGlobalVarFast("write"),
      upenv->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("apply")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k172, env)}),
      VLookupGlobalVarFast("append"),
      upenv->vars[1]
    );
}
 }
}
static void global_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda24" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)global_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (eq? (close global_k171) expand? 0)
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("eq?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k171, env)}),
      VLookupGlobalVarFast("expand?"),
      VEncodeInt(0l)
    );
 }
}
static void global_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k170" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_lambda24) (bruijn ##k.180 1 0) (bruijn ##x.200 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)global_lambda24, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void global_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda23" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)global_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (map (close global_k170) expand-toplevel (bruijn file 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("map")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k170, env)}),
      VLookupGlobalVarFast("expand-toplevel"),
      _var1
    );
 }
}
static void global_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k169" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_lambda23) (bruijn ##k.179 3 0) (bruijn ##x.201 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)global_lambda23, env)}, runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void global_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k168" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (append (close global_k169) (bruijn ##x.202 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("append")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k169, env)}),
      _var0
    );
 }
}
static void global_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k167" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (read-all (close global_k168) (bruijn ##x.203 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("read-all")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k168, env)}),
      _var0
    );
 }
}
static void global_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda22" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_lambda22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (open-input-file (close global_k167) (bruijn scm-file 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("open-input-file")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k167, env)}),
      upenv->vars[1]
    );
 }
}
static void global_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "global_lambda21" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to global_lambda21, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_lambda21, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (with-output-to-file (bruijn ##k.178 0 0) (bruijn cc-file 0 2) (close global_lambda22))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("with-output-to-file")), runtime,
      _var0,
      _var2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_lambda22, env)})
    );
 }
}
static void global_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k183" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k183, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.204 0 0) (error ##sys.next (##string ##string.259)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V10string_D259.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k184" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k184, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.205 0 0) (error ##sys.next (##string ##string.260)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V10string_D260.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0delete__file_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0delete__file_k185" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0delete__file_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0delete__file_k185, runtime, upenv, 1, argc, _var0) {
  // (system (bruijn ##k.206 1 0) (bruijn ##x.207 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("system")), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0delete__file_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0delete__file_lambda31" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0delete__file_lambda31, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0delete__file_lambda31, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (sprintf (close _V0delete__file_k185) (##string ##string.261) (bruijn f 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("sprintf")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0delete__file_k185, env)}),
      VEncodePointer(&_V10string_D261.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void global_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k190" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k190, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.211 0 0) (for-each ##sys.next delete-file cc-files) (##sys.next #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("for-each")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VLookupGlobalVarFast("delete-file"),
      VLookupGlobalVarFast("cc-files")
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k189" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close global_k190) keep?)
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k190, env)}),
      VLookupGlobalVarFast("keep?")
    );
 }
}
static void global_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k188" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (system (close global_k189) command)
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("system")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k189, env)}),
      VLookupGlobalVarFast("command")
    );
 }
}
static void global_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k192" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k192, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.211 0 0) (for-each ##sys.next delete-file cc-files) (##sys.next #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("for-each")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VLookupGlobalVarFast("delete-file"),
      VLookupGlobalVarFast("cc-files")
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k191" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close global_k192) keep?)
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k192, env)}),
      VLookupGlobalVarFast("keep?")
    );
 }
}
static void global_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k187" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.208 0 0) (if verbose? (displayln (close global_k188) command) (system (close global_k191) command)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VLookupGlobalVarFast("verbose?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("displayln")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k188, env)}),
      VLookupGlobalVarFast("command")
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("system")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k191, env)}),
      VLookupGlobalVarFast("command")
    );
}
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k186" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)global_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.212 0 0) (not (close global_k187) expand?) (##sys.next #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k187, env)}),
      VLookupGlobalVarFast("expand?")
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
 }
}
void toplevel0() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k1, env)}),
      VEncodePointer(&_V10string_D213.sym, VPOINTER_OTHER)
    );
}
void toplevel1() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k2, env)}),
      VEncodePointer(&_V10string_D214.sym, VPOINTER_OTHER)
    );
}
void toplevel2() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k3, env)}),
      VEncodePointer(&_V10string_D215.sym, VPOINTER_OTHER)
    );
}
void toplevel3() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k4, env)}),
      VEncodePointer(&_V10string_D216.sym, VPOINTER_OTHER)
    );
}
void toplevel4() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k5, env)}),
      VEncodePointer(&_V10string_D217.sym, VPOINTER_OTHER)
    );
}
void toplevel5() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k6, env)}),
      VEncodePointer(&_V10string_D218.sym, VPOINTER_OTHER)
    );
}
void toplevel6() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k7, env)}),
      VEncodePointer(&_V10string_D219.sym, VPOINTER_OTHER)
    );
}
void toplevel7() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0scm__files.sym, VPOINTER_OTHER),
      VNULL
    );
}
void toplevel8() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0obj__files.sym, VPOINTER_OTHER),
      VNULL
    );
}
void toplevel9() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0shared_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel10() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0expand_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel11() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0keep_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel12() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0transpile_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel13() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0object_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel14() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0debug_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel15() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0verbose_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel16() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0optimization.sym, VPOINTER_OTHER),
      VEncodeInt(1l)
    );
}
void toplevel17() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0api.sym, VPOINTER_OTHER),
      VEncodeInt(1l)
    );
}
void toplevel18() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0out__file.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel19() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0extension.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0extension_lambda1, env)})
    );
}
void toplevel20() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0change__extension.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0change__extension_lambda4, env)})
    );
}
void toplevel21() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0basename.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0basename_lambda7, env)})
    );
}
void toplevel22() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0display__help.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0display__help_lambda10, env)})
    );
}
void toplevel23() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0display__version.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0display__version_lambda11, env)})
    );
}
void toplevel24() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)global_lambda12, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodeBool(false)
    );
}
void toplevel25() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("null?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k104, env)}),
      VLookupGlobalVarFast("scm-files")
    );
}
void toplevel26() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("expand?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("error")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V10string_D242.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
}
void toplevel27() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("null?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k106, env)}),
      VLookupGlobalVarFast("obj-files")
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("null?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k108, env)}),
      VLookupGlobalVarFast("obj-files")
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("expand?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("null?")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k110, env)}),
      VLookupGlobalVarFast("obj-files")
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
}
}
}
void toplevel28() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("out-file"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdr")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k112, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("out-file"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdr")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k115, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("expand?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("out-file"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdr")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k118, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
}
}
}
void toplevel29() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdr")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k121, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdr")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k124, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("expand?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("cdr")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k127, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
}
}
}
void toplevel30() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k130, env)}),
      VLookupGlobalVarFast("out-file")
    );
}
void toplevel31() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0read__all.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0read__all_lambda15, env)})
    );
}
void toplevel32() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("list")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k143, env)}),
      VLookupGlobalVarFast("out-file")
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("map")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k144, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_lambda17, env)}),
      VLookupGlobalVarFast("scm-files")
    );
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("expand?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("list")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k147, env)}),
      VLookupGlobalVarFast("out-file")
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("map")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k148, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_lambda18, env)}),
      VLookupGlobalVarFast("scm-files")
    );
}
}
}
void toplevel33() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("sprintf")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k151, env)}),
      VEncodePointer(&_V10string_D256.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast("optimization")
    );
}
void toplevel34() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("sprintf")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k160, env)}),
      VEncodePointer(&_V10string_D257.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast("out-file")
    );
}
void toplevel35() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("append")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k161, env)}),
      VLookupGlobalVarFast("obj-files"),
      VLookupGlobalVarFast("cc-files")
    );
}
void toplevel36() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("string-append")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k163, env)}),
      VLookupGlobalVarFast("command"),
      VLookupGlobalVarFast("flags")
    );
}
void toplevel37() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("current-output-port")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k164, env)})
    );
}
void toplevel38() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("map")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k165, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_lambda21, env)}),
      VLookupGlobalVarFast("scm-files"),
      VLookupGlobalVarFast("cc-files")
    );
}
void toplevel39() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
if(VDecodeBool(
VLookupGlobalVarFast("shared?"))) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast(">")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k183, env)}),
      VLookupGlobalVarFast("num-mains"),
      VEncodeInt(0l)
    );
} else {
    V_CALL_FUNC2(VNext2, runtime,
      VEncodeBool(false)
    );
}
}
void toplevel40() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast(">")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k184, env)}),
      VLookupGlobalVarFast("num-mains"),
      VEncodeInt(1l)
    );
}
void toplevel41() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VDefineGlobalVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)VNext2,NULL)}),
      VEncodePointer(&_V0delete__file.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0delete__file_lambda31, env)})
    );
}
void toplevel42() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_CLOSURE2(VDecodeClosureApply(VLookupGlobalVarFast("not")), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)global_k186, env)}),
      VLookupGlobalVarFast("transpile?")
    );
}
int main(int argc, char ** argv) {
  void (*toplevels[])() = {
    toplevel0,    toplevel1,    toplevel2,    toplevel3,    toplevel4,    toplevel5,    toplevel6,    toplevel7,    toplevel8,    toplevel9,    toplevel10,    toplevel11,    toplevel12,    toplevel13,    toplevel14,    toplevel15,    toplevel16,    toplevel17,    toplevel18,    toplevel19,    toplevel20,    toplevel21,    toplevel22,    toplevel23,    toplevel24,    toplevel25,    toplevel26,    toplevel27,    toplevel28,    toplevel29,    toplevel30,    toplevel31,    toplevel32,    toplevel33,    toplevel34,    toplevel35,    toplevel36,    toplevel37,    toplevel38,    toplevel39,    toplevel40,    toplevel41,    toplevel42,  
};
  VArgc = argc; VArgv = argv;  return VStart(sizeof toplevels / sizeof *toplevels, toplevels);
}
