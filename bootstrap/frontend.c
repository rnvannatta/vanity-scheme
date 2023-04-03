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
static struct { VBlob sym; char bytes[11]; } _V10string_D589 = { { VSTRING, 11 }, "/bin/rm ~A" };
static struct { VBlob sym; char bytes[12]; } _V0delete__file = { { VSYMBOL, 12 }, "delete-file" };
static struct { VBlob sym; char bytes[87]; } _V10string_D588 = { { VSTRING, 87 }, "program has toplevel expressions in multiple files, and so it generated multiple mains" };
static struct { VBlob sym; char bytes[51]; } _V10string_D587 = { { VSTRING, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[10]; } _V0num__mains = { { VSYMBOL, 10 }, "num-mains" };
static struct { VBlob sym; char bytes[7]; } _V0stdout = { { VSYMBOL, 7 }, "stdout" };
static struct { VBlob sym; char bytes[2]; } _V10string_D586 = { { VSTRING, 2 }, " " };
static struct { VBlob sym; char bytes[10]; } _V10string_D585 = { { VSTRING, 10 }, "gcc -o ~A" };
static struct { VBlob sym; char bytes[8]; } _V0command = { { VSYMBOL, 8 }, "command" };
static struct { VBlob sym; char bytes[6]; } _V10string_D584 = { { VSTRING, 6 }, " -O~A" };
static struct { VBlob sym; char bytes[11]; } _V10string_D583 = { { VSTRING, 11 }, " -lvscheme" };
static struct { VBlob sym; char bytes[20]; } _V10string_D582 = { { VSTRING, 20 }, " -Wl,--no-as-needed" };
static struct { VBlob sym; char bytes[15]; } _V10string_D581 = { { VSTRING, 15 }, " -fPIC -shared" };
static struct { VBlob sym; char bytes[4]; } _V10string_D580 = { { VSTRING, 4 }, " -c" };
static struct { VBlob sym; char bytes[4]; } _V10string_D579 = { { VSTRING, 4 }, " -g" };
static struct { VBlob sym; char bytes[28]; } _V10string_D578 = { { VSTRING, 28 }, " -rdynamic -Wmissing-braces" };
static struct { VBlob sym; char bytes[6]; } _V0flags = { { VSYMBOL, 6 }, "flags" };
static struct { VBlob sym; char bytes[6]; } _V10string_D577 = { { VSTRING, 6 }, "/tmp/" };
static struct { VBlob sym; char bytes[9]; } _V0cc__files = { { VSYMBOL, 9 }, "cc-files" };
static struct { VBlob sym; char bytes[9]; } _V0read__all = { { VSYMBOL, 9 }, "read-all" };
static struct { VBlob sym; char bytes[6]; } _V10string_D576 = { { VSTRING, 6 }, "a.out" };
static struct { VBlob sym; char bytes[6]; } _V10string_D575 = { { VSTRING, 6 }, ".escm" };
static struct { VBlob sym; char bytes[3]; } _V10string_D574 = { { VSTRING, 3 }, ".c" };
static struct { VBlob sym; char bytes[49]; } _V10string_D573 = { { VSTRING, 49 }, "FIXME: -c and -t and -E can only handle one file" };
static struct { VBlob sym; char bytes[56]; } _V10string_D572 = { { VSTRING, 56 }, "Cannot specify '-c' or '-t' or '-E' with multiple files" };
static struct { VBlob sym; char bytes[54]; } _V10string_D571 = { { VSTRING, 54 }, "Cannot specify '-c' or '-t' or '-E' with object files" };
static struct { VBlob sym; char bytes[44]; } _V10string_D570 = { { VSTRING, 44 }, "Only one of '-c' or '-t' or '-E' can be set" };
static struct { VBlob sym; char bytes[23]; } _V10string_D569 = { { VSTRING, 23 }, "No input file provided" };
static struct { VBlob sym; char bytes[19]; } _V10string_D568 = { { VSTRING, 19 }, "Unknown CLI option" };
static struct { VBlob sym; char bytes[57]; } _V10string_D567 = { { VSTRING, 57 }, "Expand flag -E expects integer between 0 and 2 inclusive" };
static struct { VBlob sym; char bytes[63]; } _V10string_D566 = { { VSTRING, 63 }, "Optimization flag -O expects integer between 0 and 3 inclusive" };
static struct { VBlob sym; char bytes[3]; } _V10string_D565 = { { VSTRING, 3 }, ".o" };
static struct { VBlob sym; char bytes[8]; } _V0version = { { VSYMBOL, 8 }, "version" };
static struct { VBlob sym; char bytes[5]; } _V0help = { { VSYMBOL, 5 }, "help" };
static struct { VBlob sym; char bytes[7]; } _V0shared = { { VSYMBOL, 7 }, "shared" };
static struct { VBlob sym; char bytes[11]; } _V10string_D564 = { { VSTRING, 11 }, "vgtco:O:E:" };
static struct { VBlob sym; char bytes[29]; } _V10string_D563 = { { VSTRING, 29 }, "Vanity Scheme Compiler 0.0.0" };
static struct { VBlob sym; char bytes[37]; } _V10string_D562 = { { VSTRING, 37 }, "Copyright (C) 2023 Richard Van Natta" };
static struct { VBlob sym; char bytes[16]; } _V0display__version = { { VSYMBOL, 16 }, "display-version" };
static struct { VBlob sym; char bytes[29]; } _V10string_D561 = { { VSTRING, 29 }, "Usage: vsc [options] file..." };
static struct { VBlob sym; char bytes[9]; } _V10string_D560 = { { VSTRING, 9 }, "Options:" };
static struct { VBlob sym; char bytes[92]; } _V10string_D559 = { { VSTRING, 92 }, "  -O<num>       Compile with optimization levels 0 (slowest codegen) to 3 (fastest codegen)" };
static struct { VBlob sym; char bytes[43]; } _V10string_D558 = { { VSTRING, 43 }, "  -g            Compile with debug symbols" };
static struct { VBlob sym; char bytes[116]; } _V10string_D557 = { { VSTRING, 116 }, "  -E<num>       Expand only, do not compile or link. 0: macros only, 1: continuation passing style, 2: optimization" };
static struct { VBlob sym; char bytes[55]; } _V10string_D556 = { { VSTRING, 55 }, "  -t            Transpile only, do not compile or link" };
static struct { VBlob sym; char bytes[66]; } _V10string_D555 = { { VSTRING, 66 }, "  -c            Transpile, compile, and assemble, but do not link" };
static struct { VBlob sym; char bytes[45]; } _V10string_D554 = { { VSTRING, 45 }, "  -o <file>     Place the output into <file>" };
static struct { VBlob sym; char bytes[43]; } _V10string_D553 = { { VSTRING, 43 }, "  -v            Show intermediate commands" };
static struct { VBlob sym; char bytes[1]; } _V10string_D552 = { { VSTRING, 1 }, "" };
static struct { VBlob sym; char bytes[42]; } _V10string_D551 = { { VSTRING, 42 }, "  --shared      Compile as shared library" };
static struct { VBlob sym; char bytes[36]; } _V10string_D550 = { { VSTRING, 36 }, "  --help        You know about this" };
static struct { VBlob sym; char bytes[44]; } _V10string_D549 = { { VSTRING, 44 }, "  --version     Show version and build info" };
static struct { VBlob sym; char bytes[13]; } _V0display__help = { { VSYMBOL, 13 }, "display-help" };
static struct { VBlob sym; char bytes[9]; } _V0basename = { { VSYMBOL, 9 }, "basename" };
static struct { VBlob sym; char bytes[17]; } _V0change__extension = { { VSYMBOL, 17 }, "change-extension" };
static struct { VBlob sym; char bytes[10]; } _V0extension = { { VSYMBOL, 10 }, "extension" };
static struct { VBlob sym; char bytes[9]; } _V0out__file = { { VSYMBOL, 9 }, "out-file" };
static struct { VBlob sym; char bytes[13]; } _V0optimization = { { VSYMBOL, 13 }, "optimization" };
static struct { VBlob sym; char bytes[9]; } _V0verbose_Q = { { VSYMBOL, 9 }, "verbose\?" };
static struct { VBlob sym; char bytes[7]; } _V0debug_Q = { { VSYMBOL, 7 }, "debug\?" };
static struct { VBlob sym; char bytes[8]; } _V0object_Q = { { VSYMBOL, 8 }, "object\?" };
static struct { VBlob sym; char bytes[11]; } _V0transpile_Q = { { VSYMBOL, 11 }, "transpile\?" };
static struct { VBlob sym; char bytes[8]; } _V0expand_Q = { { VSYMBOL, 8 }, "expand\?" };
static struct { VBlob sym; char bytes[8]; } _V0shared_Q = { { VSYMBOL, 8 }, "shared\?" };
static struct { VBlob sym; char bytes[10]; } _V0obj__files = { { VSYMBOL, 10 }, "obj-files" };
static struct { VBlob sym; char bytes[10]; } _V0scm__files = { { VSYMBOL, 10 }, "scm-files" };
static struct { VBlob sym; char bytes[10]; } _V10string_D548 = { { VSTRING, 10 }, "transpile" };
static struct { VBlob sym; char bytes[4]; } _V10string_D547 = { { VSTRING, 4 }, "cps" };
static struct { VBlob sym; char bytes[7]; } _V10string_D546 = { { VSTRING, 7 }, "expand" };
static struct { VBlob sym; char bytes[7]; } _V10string_D545 = { { VSTRING, 7 }, "getopt" };
static struct { VBlob sym; char bytes[6]; } _V10string_D544 = { { VSTRING, 6 }, "match" };
static struct { VBlob sym; char bytes[10]; } _V10string_D543 = { { VSTRING, 10 }, "variables" };
static struct { VBlob sym; char bytes[13]; } _V10string_D542 = { { VSTRING, 13 }, "VLoadLibrary" };
static struct { VBlob sym; char bytes[21]; } _V10string_D541 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static void global_k2(VEnv * env) {
 static VDebugInfo dbg = { "global_k2" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k2, env) {
 if (env->num_vars == 1) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.3 0 0))
    V_CALL_FUNC(VMultiDefine,
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k2, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k1(VEnv * env) {
 static VDebugInfo dbg = { "global_k1" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k1, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.4 0 0) (close global_k2) (##string ##string.541))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k2, env)}),
      VEncodePointer(&_V10string_D541.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to global_k1, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k4(VEnv * env) {
 static VDebugInfo dbg = { "global_k4" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k4, env) {
 if (env->num_vars == 1) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.6 0 0))
    V_CALL_FUNC(VMultiDefine,
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k4, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k3(VEnv * env) {
 static VDebugInfo dbg = { "global_k3" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k3, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.7 0 0) (close global_k4) (##string ##string.543))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k4, env)}),
      VEncodePointer(&_V10string_D543.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to global_k3, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k6(VEnv * env) {
 static VDebugInfo dbg = { "global_k6" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k6, env) {
 if (env->num_vars == 1) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.9 0 0))
    V_CALL_FUNC(VMultiDefine,
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k6, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k5(VEnv * env) {
 static VDebugInfo dbg = { "global_k5" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k5, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.10 0 0) (close global_k6) (##string ##string.544))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k6, env)}),
      VEncodePointer(&_V10string_D544.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to global_k5, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k8(VEnv * env) {
 static VDebugInfo dbg = { "global_k8" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k8, env) {
 if (env->num_vars == 1) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.12 0 0))
    V_CALL_FUNC(VMultiDefine,
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k8, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k7(VEnv * env) {
 static VDebugInfo dbg = { "global_k7" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k7, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.13 0 0) (close global_k8) (##string ##string.545))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k8, env)}),
      VEncodePointer(&_V10string_D545.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to global_k7, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k10(VEnv * env) {
 static VDebugInfo dbg = { "global_k10" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k10, env) {
 if (env->num_vars == 1) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.15 0 0))
    V_CALL_FUNC(VMultiDefine,
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k10, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k9(VEnv * env) {
 static VDebugInfo dbg = { "global_k9" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k9, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.16 0 0) (close global_k10) (##string ##string.546))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k10, env)}),
      VEncodePointer(&_V10string_D546.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to global_k9, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k12(VEnv * env) {
 static VDebugInfo dbg = { "global_k12" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k12, env) {
 if (env->num_vars == 1) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.18 0 0))
    V_CALL_FUNC(VMultiDefine,
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k12, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k11(VEnv * env) {
 static VDebugInfo dbg = { "global_k11" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k11, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.19 0 0) (close global_k12) (##string ##string.547))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k12, env)}),
      VEncodePointer(&_V10string_D547.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to global_k11, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k14(VEnv * env) {
 static VDebugInfo dbg = { "global_k14" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k14, env) {
 if (env->num_vars == 1) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.21 0 0))
    V_CALL_FUNC(VMultiDefine,
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k14, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k13(VEnv * env) {
 static VDebugInfo dbg = { "global_k13" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k13, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.22 0 0) (close global_k14) (##string ##string.548))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k14, env)}),
      VEncodePointer(&_V10string_D548.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to global_k13, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0extension_k17(VEnv * env) {
 static VDebugInfo dbg = { "_V0extension_k17" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0extension_k17, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 3 1) (bruijn ##k.36 3 0) (bruijn ##x.41 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0extension_k17, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0extension_k16(VEnv * env) {
 static VDebugInfo dbg = { "_V0extension_k16" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0extension_k16, env) {
 if (env->num_vars == 1) {
  // (- (close _V0extension_k17) (bruijn ##x.42 0 0) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("-")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0extension_k17, env)}),
      env->vars[0],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0extension_k16, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0extension_k15(VEnv * env) {
 static VDebugInfo dbg = { "_V0extension_k15" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0extension_k15, env) {
 if (env->num_vars == 1) {
  // (string-length (close _V0extension_k16) (bruijn file 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-length")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0extension_k16, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0extension_k15, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k21(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k21" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k21, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 5 1) (bruijn ##k.43 4 0) (bruijn ##x.55 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k21, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k20(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k20" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k20, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.50 0 0) (substring (bruijn ##k.43 3 0) (bruijn file 5 1) (bruijn i 3 1)) (- (close _V0loop_k21) (bruijn i 3 1) 1))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("substring")),
      env->up->up->up->vars[0],
      VGetArg(env, 5, 1),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("-")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k21, env)}),
      env->up->up->up->vars[1],
      VEncodeInt(1l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k20, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k19(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k19" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k19, env) {
 if (env->num_vars == 1) {
  // (eq? (close _V0loop_k20) #\. (bruijn ##x.56 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("eq?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k20, env)}),
      VEncodeChar('.'),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k19, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k18(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k18" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k18, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.45 0 0) ((bruijn ##k.43 1 0) #f) (string-ref (close _V0loop_k19) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-ref")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k19, env)}),
      env->up->up->up->vars[1],
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k18, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda3(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda3, env) {
 if (env->num_vars == 2) {
  // (<= (close _V0loop_k18) (bruijn i 0 1) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("<=")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k18, env)}),
      env->vars[1],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda3, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0extension_lambda2(VEnv * env) {
 static VDebugInfo dbg = { "_V0extension_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0extension_lambda2, env) {
  // (set! (close _V0extension_k15) (bruijn loop 0 1) (close _V0loop_lambda3))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0extension_k15, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda3, env)})
    );
 }
}
static void _V0extension_lambda1(VEnv * env) {
 static VDebugInfo dbg = { "_V0extension_lambda1" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0extension_lambda1, env) {
 if (env->num_vars == 2) {
  // ((close _V0extension_lambda2) (bruijn ##k.34 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0extension_lambda2, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0extension_lambda1, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0change__extension_k24(VEnv * env) {
 static VDebugInfo dbg = { "_V0change__extension_k24" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0change__extension_k24, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 3 1) (bruijn ##k.60 3 0) (bruijn ##x.65 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0change__extension_k24, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0change__extension_k23(VEnv * env) {
 static VDebugInfo dbg = { "_V0change__extension_k23" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0change__extension_k23, env) {
 if (env->num_vars == 1) {
  // (- (close _V0change__extension_k24) (bruijn ##x.66 0 0) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("-")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0change__extension_k24, env)}),
      env->vars[0],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0change__extension_k23, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0change__extension_k22(VEnv * env) {
 static VDebugInfo dbg = { "_V0change__extension_k22" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0change__extension_k22, env) {
 if (env->num_vars == 1) {
  // (string-length (close _V0change__extension_k23) (bruijn file 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-length")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0change__extension_k23, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0change__extension_k22, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k28(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k28" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k28, env) {
 if (env->num_vars == 1) {
  // (string-append (bruijn ##k.67 4 0) (bruijn ##x.77 0 0) (bruijn new 6 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-append")),
      VGetArg(env, 4, 0),
      env->vars[0],
      VGetArg(env, 6, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k28, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k29(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k29" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k29, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 5 1) (bruijn ##k.67 4 0) (bruijn ##x.80 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k29, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k27(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k27" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k27, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.74 0 0) (substring (close _V0loop_k28) (bruijn file 5 1) 0 (bruijn i 3 1)) (- (close _V0loop_k29) (bruijn i 3 1) 1))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("substring")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k28, env)}),
      VGetArg(env, 5, 1),
      VEncodeInt(0l),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("-")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k29, env)}),
      env->up->up->up->vars[1],
      VEncodeInt(1l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k27, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k26(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k26" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k26, env) {
 if (env->num_vars == 1) {
  // (eq? (close _V0loop_k27) #\. (bruijn ##x.81 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("eq?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k27, env)}),
      VEncodeChar('.'),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k26, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k25(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k25" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k25, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.69 0 0) (string-append (bruijn ##k.67 1 0) (bruijn file 3 1) (bruijn new 3 2)) (string-ref (close _V0loop_k26) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-append")),
      env->up->vars[0],
      env->up->up->up->vars[1],
      env->up->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-ref")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k26, env)}),
      env->up->up->up->vars[1],
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k25, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda6(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda6" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda6, env) {
 if (env->num_vars == 2) {
  // (<= (close _V0loop_k25) (bruijn i 0 1) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("<=")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k25, env)}),
      env->vars[1],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda6, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0change__extension_lambda5(VEnv * env) {
 static VDebugInfo dbg = { "_V0change__extension_lambda5" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0change__extension_lambda5, env) {
  // (set! (close _V0change__extension_k22) (bruijn loop 0 1) (close _V0loop_lambda6))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0change__extension_k22, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda6, env)})
    );
 }
}
static void _V0change__extension_lambda4(VEnv * env) {
 static VDebugInfo dbg = { "_V0change__extension_lambda4" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0change__extension_lambda4, env) {
 if (env->num_vars == 3) {
  // ((close _V0change__extension_lambda5) (bruijn ##k.58 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0change__extension_lambda5, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0change__extension_lambda4, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0basename_k32(VEnv * env) {
 static VDebugInfo dbg = { "_V0basename_k32" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0basename_k32, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 3 1) (bruijn ##k.85 3 0) (bruijn ##x.90 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0basename_k32, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0basename_k31(VEnv * env) {
 static VDebugInfo dbg = { "_V0basename_k31" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0basename_k31, env) {
 if (env->num_vars == 1) {
  // (- (close _V0basename_k32) (bruijn ##x.91 0 0) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("-")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0basename_k32, env)}),
      env->vars[0],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0basename_k31, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0basename_k30(VEnv * env) {
 static VDebugInfo dbg = { "_V0basename_k30" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0basename_k30, env) {
 if (env->num_vars == 1) {
  // (string-length (close _V0basename_k31) (bruijn file 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-length")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0basename_k31, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0basename_k30, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k36(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k36" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k36, env) {
 if (env->num_vars == 1) {
  // (substring (bruijn ##k.92 4 0) (bruijn file 6 1) (bruijn ##x.102 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("substring")),
      VGetArg(env, 4, 0),
      VGetArg(env, 6, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k36, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k37(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k37" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k37, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 5 1) (bruijn ##k.92 4 0) (bruijn ##x.105 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k37, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k35(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k35" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k35, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.99 0 0) (+ (close _V0loop_k36) (bruijn i 3 1) 1) (- (close _V0loop_k37) (bruijn i 3 1) 1))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("+")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k36, env)}),
      env->up->up->up->vars[1],
      VEncodeInt(1l)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("-")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k37, env)}),
      env->up->up->up->vars[1],
      VEncodeInt(1l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k35, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k34(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k34" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k34, env) {
 if (env->num_vars == 1) {
  // (eq? (close _V0loop_k35) #\/ (bruijn ##x.106 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("eq?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k35, env)}),
      VEncodeChar('/'),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k34, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k33(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k33" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k33, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.94 0 0) ((bruijn ##k.92 1 0) (bruijn file 3 1)) (string-ref (close _V0loop_k34) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-ref")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k34, env)}),
      env->up->up->up->vars[1],
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k33, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda9(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda9" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda9, env) {
 if (env->num_vars == 2) {
  // (<= (close _V0loop_k33) (bruijn i 0 1) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("<=")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k33, env)}),
      env->vars[1],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda9, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0basename_lambda8(VEnv * env) {
 static VDebugInfo dbg = { "_V0basename_lambda8" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0basename_lambda8, env) {
  // (set! (close _V0basename_k30) (bruijn loop 0 1) (close _V0loop_lambda9))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0basename_k30, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda9, env)})
    );
 }
}
static void _V0basename_lambda7(VEnv * env) {
 static VDebugInfo dbg = { "_V0basename_lambda7" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0basename_lambda7, env) {
 if (env->num_vars == 2) {
  // ((close _V0basename_lambda8) (bruijn ##k.83 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0basename_lambda8, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0basename_lambda7, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0display__help_k49(VEnv * env) {
 static VDebugInfo dbg = { "_V0display__help_k49" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0display__help_k49, env) {
 if (env->num_vars == 1) {
  // (displayln (bruijn ##k.108 12 0) (##string ##string.549))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("displayln")),
      VGetArg(env, 12, 0),
      VEncodePointer(&_V10string_D549.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0display__help_k49, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0display__help_k48(VEnv * env) {
 static VDebugInfo dbg = { "_V0display__help_k48" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0display__help_k48, env) {
 if (env->num_vars == 1) {
  // (displayln (close _V0display__help_k49) (##string ##string.550))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("displayln")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0display__help_k49, env)}),
      VEncodePointer(&_V10string_D550.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0display__help_k48, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0display__help_k47(VEnv * env) {
 static VDebugInfo dbg = { "_V0display__help_k47" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0display__help_k47, env) {
 if (env->num_vars == 1) {
  // (displayln (close _V0display__help_k48) (##string ##string.551))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("displayln")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0display__help_k48, env)}),
      VEncodePointer(&_V10string_D551.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0display__help_k47, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0display__help_k46(VEnv * env) {
 static VDebugInfo dbg = { "_V0display__help_k46" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0display__help_k46, env) {
 if (env->num_vars == 1) {
  // (displayln (close _V0display__help_k47) (##string ##string.552))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("displayln")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0display__help_k47, env)}),
      VEncodePointer(&_V10string_D552.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0display__help_k46, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0display__help_k45(VEnv * env) {
 static VDebugInfo dbg = { "_V0display__help_k45" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0display__help_k45, env) {
 if (env->num_vars == 1) {
  // (displayln (close _V0display__help_k46) (##string ##string.553))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("displayln")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0display__help_k46, env)}),
      VEncodePointer(&_V10string_D553.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0display__help_k45, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0display__help_k44(VEnv * env) {
 static VDebugInfo dbg = { "_V0display__help_k44" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0display__help_k44, env) {
 if (env->num_vars == 1) {
  // (displayln (close _V0display__help_k45) (##string ##string.554))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("displayln")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0display__help_k45, env)}),
      VEncodePointer(&_V10string_D554.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0display__help_k44, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0display__help_k43(VEnv * env) {
 static VDebugInfo dbg = { "_V0display__help_k43" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0display__help_k43, env) {
 if (env->num_vars == 1) {
  // (displayln (close _V0display__help_k44) (##string ##string.555))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("displayln")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0display__help_k44, env)}),
      VEncodePointer(&_V10string_D555.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0display__help_k43, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0display__help_k42(VEnv * env) {
 static VDebugInfo dbg = { "_V0display__help_k42" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0display__help_k42, env) {
 if (env->num_vars == 1) {
  // (displayln (close _V0display__help_k43) (##string ##string.556))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("displayln")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0display__help_k43, env)}),
      VEncodePointer(&_V10string_D556.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0display__help_k42, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0display__help_k41(VEnv * env) {
 static VDebugInfo dbg = { "_V0display__help_k41" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0display__help_k41, env) {
 if (env->num_vars == 1) {
  // (displayln (close _V0display__help_k42) (##string ##string.557))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("displayln")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0display__help_k42, env)}),
      VEncodePointer(&_V10string_D557.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0display__help_k41, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0display__help_k40(VEnv * env) {
 static VDebugInfo dbg = { "_V0display__help_k40" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0display__help_k40, env) {
 if (env->num_vars == 1) {
  // (displayln (close _V0display__help_k41) (##string ##string.558))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("displayln")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0display__help_k41, env)}),
      VEncodePointer(&_V10string_D558.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0display__help_k40, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0display__help_k39(VEnv * env) {
 static VDebugInfo dbg = { "_V0display__help_k39" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0display__help_k39, env) {
 if (env->num_vars == 1) {
  // (displayln (close _V0display__help_k40) (##string ##string.559))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("displayln")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0display__help_k40, env)}),
      VEncodePointer(&_V10string_D559.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0display__help_k39, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0display__help_k38(VEnv * env) {
 static VDebugInfo dbg = { "_V0display__help_k38" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0display__help_k38, env) {
 if (env->num_vars == 1) {
  // (displayln (close _V0display__help_k39) (##string ##string.560))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("displayln")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0display__help_k39, env)}),
      VEncodePointer(&_V10string_D560.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0display__help_k38, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0display__help_lambda10(VEnv * env) {
 static VDebugInfo dbg = { "_V0display__help_lambda10" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0display__help_lambda10, env) {
 if (env->num_vars == 1) {
  // (displayln (close _V0display__help_k38) (##string ##string.561))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("displayln")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0display__help_k38, env)}),
      VEncodePointer(&_V10string_D561.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0display__help_lambda10, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0display__version_k50(VEnv * env) {
 static VDebugInfo dbg = { "_V0display__version_k50" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0display__version_k50, env) {
 if (env->num_vars == 1) {
  // (displayln (bruijn ##k.147 1 0) (##string ##string.562))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("displayln")),
      env->up->vars[0],
      VEncodePointer(&_V10string_D562.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0display__version_k50, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0display__version_lambda11(VEnv * env) {
 static VDebugInfo dbg = { "_V0display__version_lambda11" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0display__version_lambda11, env) {
 if (env->num_vars == 1) {
  // (displayln (close _V0display__version_k50) (##string ##string.563))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("displayln")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0display__version_k50, env)}),
      VEncodePointer(&_V10string_D563.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0display__version_lambda11, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k53(VEnv * env) {
 static VDebugInfo dbg = { "global_k53" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k53, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 3 1) (bruijn ##k.153 3 0) (bruijn ##x.158 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k53, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k52(VEnv * env) {
 static VDebugInfo dbg = { "global_k52" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k52, env) {
 if (env->num_vars == 1) {
  // (getopt (close global_k53) (##string ##string.564) (bruijn ##x.159 0 0) (##inline ##sys.qcons (##inline ##sys.qcons (quote shared) (##inline ##sys.qcons (quote #f) (##inline ##sys.qcons (quote shared) (quote ())))) (##inline ##sys.qcons (##inline ##sys.qcons (quote help) (##inline ##sys.qcons (quote #f) (##inline ##sys.qcons (quote help) (quote ())))) (##inline ##sys.qcons (##inline ##sys.qcons (quote version) (##inline ##sys.qcons (quote #f) (##inline ##sys.qcons (quote version) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("getopt")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k53, env)}),
      VEncodePointer(&_V10string_D564.sym, VPOINTER_OTHER),
      env->vars[0],
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
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to global_k52, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k51(VEnv * env) {
 static VDebugInfo dbg = { "global_k51" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k51, env) {
 if (env->num_vars == 1) {
  // (command-line (close global_k52))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("command-line")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k52, env)})
    );
 } else {
  VError("Not enough arguments to global_k51, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k62(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k62" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k62, env) {
 if (env->num_vars == 1) {
  // (set! (bruijn ##k.181 6 0) obj-files (bruijn ##x.189 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetGlobalVar, env)},
      VGetArg(env, 6, 0),
      VEncodePointer(&_V0obj__files.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k62, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k61(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k61" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k61, env) {
 if (env->num_vars == 1) {
  // (cons (close _V0loop_k62) (bruijn ##x.190 0 0) obj-files)
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cons")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k62, env)}),
      env->vars[0],
      VLookupGlobalVarFast("obj-files")
    );
 } else {
  VError("Not enough arguments to _V0loop_k61, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k64(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k64" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k64, env) {
 if (env->num_vars == 1) {
  // (set! (bruijn ##k.181 6 0) scm-files (bruijn ##x.193 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetGlobalVar, env)},
      VGetArg(env, 6, 0),
      VEncodePointer(&_V0scm__files.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k64, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k63(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k63" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k63, env) {
 if (env->num_vars == 1) {
  // (cons (close _V0loop_k64) (bruijn ##x.194 0 0) scm-files)
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cons")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k64, env)}),
      env->vars[0],
      VLookupGlobalVarFast("scm-files")
    );
 } else {
  VError("Not enough arguments to _V0loop_k63, got ~D~N"
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
  // (if (bruijn ##x.186 0 0) (cdar (close _V0loop_k61) (bruijn args 8 1)) (cdar (close _V0loop_k63) (bruijn args 8 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdar")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k61, env)}),
      VGetArg(env, 8, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdar")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k63, env)}),
      VGetArg(env, 8, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k60, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k59(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k59" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k59, env) {
 if (env->num_vars == 1) {
  // (equal? (close _V0loop_k60) (bruijn ##x.195 0 0) (##string ##string.565))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("equal?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k60, env)}),
      env->vars[0],
      VEncodePointer(&_V10string_D565.sym, VPOINTER_OTHER)
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
  // (extension (close _V0loop_k59) (bruijn ##x.196 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("extension")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k59, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k58, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k70(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k70" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k70, env) {
 if (env->num_vars == 1) {
  // (set! (bruijn ##k.181 7 0) out-file (bruijn ##x.222 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetGlobalVar, env)},
      VGetArg(env, 7, 0),
      VEncodePointer(&_V0out__file.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k70, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k78(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k78" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k78, env) {
 if (env->num_vars == 1) {
  // (error (bruijn ##k.181 14 0) (##string ##string.566) (bruijn ##x.234 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VGetArg(env, 14, 0),
      VEncodePointer(&_V10string_D566.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k78, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k77(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k77" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k77, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.231 0 0) (cdar (close _V0loop_k78) (bruijn args 17 1)) ((bruijn ##k.181 13 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdar")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k78, env)}),
      VGetArg(env, 17, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 0)),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k77, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k76(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k76" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k76, env) {
 if (env->num_vars == 1) {
  // (not (close _V0loop_k77) (bruijn ##x.242 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k77, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k76, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k80(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k80" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k80, env) {
 if (env->num_vars == 1) {
  // (error (bruijn ##k.181 13 0) (##string ##string.566) (bruijn ##x.234 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VGetArg(env, 13, 0),
      VEncodePointer(&_V10string_D566.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k80, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k79(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k79" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k79, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.231 0 0) (cdar (close _V0loop_k80) (bruijn args 16 1)) ((bruijn ##k.181 12 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdar")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k80, env)}),
      VGetArg(env, 16, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 0)),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k79, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k75(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k75" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k75, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.240 0 0) (<= (close _V0loop_k76) 0 optimization 3) (not (close _V0loop_k79) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("<=")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k76, env)}),
      VEncodeInt(0l),
      VLookupGlobalVarFast("optimization"),
      VEncodeInt(3l)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k79, env)}),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k75, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k82(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k82" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k82, env) {
 if (env->num_vars == 1) {
  // (error (bruijn ##k.181 12 0) (##string ##string.566) (bruijn ##x.234 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VGetArg(env, 12, 0),
      VEncodePointer(&_V10string_D566.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k82, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k81(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k81" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k81, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.231 0 0) (cdar (close _V0loop_k82) (bruijn args 15 1)) ((bruijn ##k.181 11 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdar")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k82, env)}),
      VGetArg(env, 15, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 0)),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k81, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k74(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k74" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k74, env) {
 if (env->num_vars == 1) {
  // (if optimization (integer? (close _V0loop_k75) optimization) (not (close _V0loop_k81) #f))
if(VDecodeBool(
VLookupGlobalVarFast("optimization"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("integer?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k75, env)}),
      VLookupGlobalVarFast("optimization")
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k81, env)}),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k74, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k73(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k73" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k73, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0loop_k74) optimization (bruijn ##x.243 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k74, env)}),
      VEncodePointer(&_V0optimization.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k73, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k72(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k72" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k72, env) {
 if (env->num_vars == 1) {
  // (string->number (close _V0loop_k73) (bruijn ##x.244 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string->number")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k73, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k72, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k90(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k90" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k90, env) {
 if (env->num_vars == 1) {
  // (error (bruijn ##k.181 15 0) (##string ##string.567) (bruijn ##x.256 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VGetArg(env, 15, 0),
      VEncodePointer(&_V10string_D567.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k90, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k89(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k89" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k89, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.253 0 0) (cdar (close _V0loop_k90) (bruijn args 18 1)) ((bruijn ##k.181 14 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdar")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k90, env)}),
      VGetArg(env, 18, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 0)),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k89, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k88(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k88" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k88, env) {
 if (env->num_vars == 1) {
  // (not (close _V0loop_k89) (bruijn ##x.264 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k89, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k88, got ~D~N"
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
  // (error (bruijn ##k.181 14 0) (##string ##string.567) (bruijn ##x.256 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VGetArg(env, 14, 0),
      VEncodePointer(&_V10string_D567.sym, VPOINTER_OTHER),
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
  // (if (bruijn ##x.253 0 0) (cdar (close _V0loop_k92) (bruijn args 17 1)) ((bruijn ##k.181 13 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdar")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k92, env)}),
      VGetArg(env, 17, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 0)),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k91, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k87(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k87" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k87, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.262 0 0) (<= (close _V0loop_k88) 0 expand? 2) (not (close _V0loop_k91) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("<=")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k88, env)}),
      VEncodeInt(0l),
      VLookupGlobalVarFast("expand?"),
      VEncodeInt(2l)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k91, env)}),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k87, got ~D~N"
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
  // (error (bruijn ##k.181 13 0) (##string ##string.567) (bruijn ##x.256 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VGetArg(env, 13, 0),
      VEncodePointer(&_V10string_D567.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k94, got ~D~N"
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
  // (if (bruijn ##x.253 0 0) (cdar (close _V0loop_k94) (bruijn args 16 1)) ((bruijn ##k.181 12 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdar")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k94, env)}),
      VGetArg(env, 16, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 0)),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k93, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k86(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k86" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k86, env) {
 if (env->num_vars == 1) {
  // (if expand? (integer? (close _V0loop_k87) expand?) (not (close _V0loop_k93) #f))
if(VDecodeBool(
VLookupGlobalVarFast("expand?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("integer?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k87, env)}),
      VLookupGlobalVarFast("expand?")
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k93, env)}),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k86, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k85(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k85" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k85, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0loop_k86) expand? (bruijn ##x.265 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k86, env)}),
      VEncodePointer(&_V0expand_Q.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k85, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k84(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k84" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k84, env) {
 if (env->num_vars == 1) {
  // (string->number (close _V0loop_k85) (bruijn ##x.266 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string->number")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k85, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k84, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k96(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k96" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k96, env) {
 if (env->num_vars == 1) {
  // (exit (bruijn ##k.181 10 0) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("exit")),
      VGetArg(env, 10, 0),
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k96, got ~D~N"
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
  // (exit (bruijn ##k.181 11 0) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("exit")),
      VGetArg(env, 11, 0),
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k98, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k103(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k103" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k103, env) {
 if (env->num_vars == 1) {
  // (error (bruijn ##k.181 15 0) (##string ##string.568) (bruijn ##x.296 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VGetArg(env, 15, 0),
      VEncodePointer(&_V10string_D568.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k103, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k102(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k102" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k102, env) {
 if (env->num_vars == 1) {
  // (cdar (close _V0loop_k103) (bruijn args 18 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdar")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k103, env)}),
      VGetArg(env, 18, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k102, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k101(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k101" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k101, env) {
 if (env->num_vars == 1) {
  // (newline (close _V0loop_k102))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("newline")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k102, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_k101, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k100(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k100" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k100, env) {
 if (env->num_vars == 1) {
  // (write (close _V0loop_k101) (bruijn ##x.297 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("write")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k101, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k100, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k99(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k99" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k99, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.285 0 0) (set! (bruijn ##k.181 11 0) shared? #t) (caar (close _V0loop_k100) (bruijn args 15 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetGlobalVar, env)},
      VGetArg(env, 11, 0),
      VEncodePointer(&_V0shared_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("caar")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k100, env)}),
      VGetArg(env, 15, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k99, got ~D~N"
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
  // (if (bruijn ##x.277 0 0) (display-version (close _V0loop_k98)) (eqv? (close _V0loop_k99) (bruijn ##x.1 10 1) (quote shared)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("display-version")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k98, env)})
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k99, env)}),
      VGetArg(env, 10, 1),
      VEncodePointer(&_V0shared.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k97, got ~D~N"
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
  // (if (bruijn ##x.269 0 0) (display-help (close _V0loop_k96)) (eqv? (close _V0loop_k97) (bruijn ##x.1 9 1) (quote version)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("display-help")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k96, env)})
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k97, env)}),
      VGetArg(env, 9, 1),
      VEncodePointer(&_V0version.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k95, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k83(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k83" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k83, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.247 0 0) (cdar (close _V0loop_k84) (bruijn args 12 1)) (eqv? (close _V0loop_k95) (bruijn ##x.1 8 1) (quote help)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdar")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k84, env)}),
      VGetArg(env, 12, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k95, env)}),
      VGetArg(env, 8, 1),
      VEncodePointer(&_V0help.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k83, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k71(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k71" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k71, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.225 0 0) (cdar (close _V0loop_k72) (bruijn args 11 1)) (eqv? (close _V0loop_k83) (bruijn ##x.1 7 1) (quote #\E)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdar")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k72, env)}),
      VGetArg(env, 11, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k83, env)}),
      VGetArg(env, 7, 1),
      VEncodeChar('E')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k71, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k69(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k69" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k69, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.219 0 0) (cdar (close _V0loop_k70) (bruijn args 10 1)) (eqv? (close _V0loop_k71) (bruijn ##x.1 6 1) (quote #\O)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdar")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k70, env)}),
      VGetArg(env, 10, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k71, env)}),
      VGetArg(env, 6, 1),
      VEncodeChar('O')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k69, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k68(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k68" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k68, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.214 0 0) (set! (bruijn ##k.181 5 0) object? #t) (eqv? (close _V0loop_k69) (bruijn ##x.1 5 1) (quote #\o)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetGlobalVar, env)},
      VGetArg(env, 5, 0),
      VEncodePointer(&_V0object_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k69, env)}),
      VGetArg(env, 5, 1),
      VEncodeChar('o')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k68, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k67(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k67" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k67, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.209 0 0) (set! (bruijn ##k.181 4 0) transpile? #t) (eqv? (close _V0loop_k68) (bruijn ##x.1 4 1) (quote #\c)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetGlobalVar, env)},
      VGetArg(env, 4, 0),
      VEncodePointer(&_V0transpile_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k68, env)}),
      VGetArg(env, 4, 1),
      VEncodeChar('c')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k67, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k66(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k66" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k66, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.204 0 0) (set! (bruijn ##k.181 3 0) debug? #t) (eqv? (close _V0loop_k67) (bruijn ##x.1 3 1) (quote #\t)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetGlobalVar, env)},
      env->up->up->up->vars[0],
      VEncodePointer(&_V0debug_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k67, env)}),
      env->up->up->up->vars[1],
      VEncodeChar('t')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k66, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k65(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k65" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k65, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.199 0 0) (set! (bruijn ##k.181 2 0) verbose? #t) (eqv? (close _V0loop_k66) (bruijn ##x.1 2 1) (quote #\g)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetGlobalVar, env)},
      env->up->up->vars[0],
      VEncodePointer(&_V0verbose_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k66, env)}),
      env->up->up->vars[1],
      VEncodeChar('g')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k65, got ~D~N"
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
  // (if (bruijn ##x.183 0 0) (cdar (close _V0loop_k58) (bruijn args 5 1)) (eqv? (close _V0loop_k65) (bruijn ##x.1 1 1) (quote #\v)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdar")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k58, env)}),
      VGetArg(env, 5, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k65, env)}),
      env->up->vars[1],
      VEncodeChar('v')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k57, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda14(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda14" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda14, env) {
  // (eqv? (close _V0loop_k57) (bruijn ##x.1 0 1) (quote #t))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("eqv?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k57, env)}),
      env->vars[1],
      VEncodeBool(true)
    );
 }
}
static void _V0loop_k105(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k105" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k105, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 6 1) (bruijn ##k.172 5 0) (bruijn ##x.180 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k105, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k104(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k104" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k104, env) {
 if (env->num_vars == 1) {
  // (cdr (close _V0loop_k105) (bruijn args 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdr")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k105, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k104, got ~D~N"
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
  // ((close _V0loop_lambda14) (close _V0loop_k104) (bruijn ##x.298 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda14, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k104, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k56, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k55(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k55" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k55, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.174 0 0) (caar (close _V0loop_k56) (bruijn args 2 1)) ((bruijn ##k.172 2 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("caar")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k56, env)}),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k55, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k54(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k54" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k54, env) {
 if (env->num_vars == 1) {
  // (not (close _V0loop_k55) (bruijn ##x.301 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k55, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k54, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda13(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda13" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda13, env) {
 if (env->num_vars == 2) {
  // (null? (close _V0loop_k54) (bruijn args 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("null?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k54, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda13, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void global_lambda12(VEnv * env) {
 static VDebugInfo dbg = { "global_lambda12" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_lambda12, env) {
  // (set! (close global_k51) (bruijn loop 0 1) (close _V0loop_lambda13))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(global_k51, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda13, env)})
    );
 }
}
static void global_k107(VEnv * env) {
 static VDebugInfo dbg = { "global_k107" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k107, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.310 0 0) (error ##sys.next (##string ##string.569)) (##sys.next #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V10string_D569.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to global_k107, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k106(VEnv * env) {
 static VDebugInfo dbg = { "global_k106" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k106, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.308 0 0) (null? (close global_k107) obj-files) (##sys.next #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("null?")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k107, env)}),
      VLookupGlobalVarFast("obj-files")
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to global_k106, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k109(VEnv * env) {
 static VDebugInfo dbg = { "global_k109" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k109, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.329 0 0) (error ##sys.next (##string ##string.571)) (##sys.next #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V10string_D571.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to global_k109, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k108(VEnv * env) {
 static VDebugInfo dbg = { "global_k108" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k108, env) {
 if (env->num_vars == 1) {
  // (not (close global_k109) (bruijn ##x.330 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k109, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k108, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k111(VEnv * env) {
 static VDebugInfo dbg = { "global_k111" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k111, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.329 0 0) (error ##sys.next (##string ##string.571)) (##sys.next #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V10string_D571.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to global_k111, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k110(VEnv * env) {
 static VDebugInfo dbg = { "global_k110" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k110, env) {
 if (env->num_vars == 1) {
  // (not (close global_k111) (bruijn ##x.330 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k111, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k110, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k113(VEnv * env) {
 static VDebugInfo dbg = { "global_k113" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k113, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.329 0 0) (error ##sys.next (##string ##string.571)) (##sys.next #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V10string_D571.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to global_k113, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k112(VEnv * env) {
 static VDebugInfo dbg = { "global_k112" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k112, env) {
 if (env->num_vars == 1) {
  // (not (close global_k113) (bruijn ##x.330 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k113, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k112, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k116(VEnv * env) {
 static VDebugInfo dbg = { "global_k116" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k116, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.345 0 0) (error ##sys.next (##string ##string.572)) (##sys.next #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V10string_D572.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to global_k116, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k115(VEnv * env) {
 static VDebugInfo dbg = { "global_k115" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k115, env) {
 if (env->num_vars == 1) {
  // (not (close global_k116) (bruijn ##x.346 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k116, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k115, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k114(VEnv * env) {
 static VDebugInfo dbg = { "global_k114" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k114, env) {
 if (env->num_vars == 1) {
  // (null? (close global_k115) (bruijn ##x.347 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("null?")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k115, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k114, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k119(VEnv * env) {
 static VDebugInfo dbg = { "global_k119" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k119, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.345 0 0) (error ##sys.next (##string ##string.572)) (##sys.next #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V10string_D572.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to global_k119, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k118(VEnv * env) {
 static VDebugInfo dbg = { "global_k118" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k118, env) {
 if (env->num_vars == 1) {
  // (not (close global_k119) (bruijn ##x.346 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k119, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k118, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k117(VEnv * env) {
 static VDebugInfo dbg = { "global_k117" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k117, env) {
 if (env->num_vars == 1) {
  // (null? (close global_k118) (bruijn ##x.347 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("null?")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k118, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k117, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k122(VEnv * env) {
 static VDebugInfo dbg = { "global_k122" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k122, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.345 0 0) (error ##sys.next (##string ##string.572)) (##sys.next #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V10string_D572.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to global_k122, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k121(VEnv * env) {
 static VDebugInfo dbg = { "global_k121" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k121, env) {
 if (env->num_vars == 1) {
  // (not (close global_k122) (bruijn ##x.346 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k122, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k121, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k120(VEnv * env) {
 static VDebugInfo dbg = { "global_k120" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k120, env) {
 if (env->num_vars == 1) {
  // (null? (close global_k121) (bruijn ##x.347 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("null?")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k121, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k120, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k125(VEnv * env) {
 static VDebugInfo dbg = { "global_k125" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k125, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.360 0 0) (error ##sys.next (##string ##string.573)) (##sys.next #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V10string_D573.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to global_k125, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k124(VEnv * env) {
 static VDebugInfo dbg = { "global_k124" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k124, env) {
 if (env->num_vars == 1) {
  // (not (close global_k125) (bruijn ##x.361 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k125, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k124, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k123(VEnv * env) {
 static VDebugInfo dbg = { "global_k123" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k123, env) {
 if (env->num_vars == 1) {
  // (null? (close global_k124) (bruijn ##x.362 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("null?")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k124, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k123, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k128(VEnv * env) {
 static VDebugInfo dbg = { "global_k128" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k128, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.360 0 0) (error ##sys.next (##string ##string.573)) (##sys.next #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V10string_D573.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to global_k128, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k127(VEnv * env) {
 static VDebugInfo dbg = { "global_k127" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k127, env) {
 if (env->num_vars == 1) {
  // (not (close global_k128) (bruijn ##x.361 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k128, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k127, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k126(VEnv * env) {
 static VDebugInfo dbg = { "global_k126" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k126, env) {
 if (env->num_vars == 1) {
  // (null? (close global_k127) (bruijn ##x.362 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("null?")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k127, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k126, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k131(VEnv * env) {
 static VDebugInfo dbg = { "global_k131" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k131, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.360 0 0) (error ##sys.next (##string ##string.573)) (##sys.next #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V10string_D573.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to global_k131, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k130(VEnv * env) {
 static VDebugInfo dbg = { "global_k130" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k130, env) {
 if (env->num_vars == 1) {
  // (not (close global_k131) (bruijn ##x.361 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k131, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k130, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k129(VEnv * env) {
 static VDebugInfo dbg = { "global_k129" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k129, env) {
 if (env->num_vars == 1) {
  // (null? (close global_k130) (bruijn ##x.362 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("null?")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k130, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k129, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k135(VEnv * env) {
 static VDebugInfo dbg = { "global_k135" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k135, env) {
 if (env->num_vars == 1) {
  // (set! ##sys.next out-file (bruijn ##x.373 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0out__file.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k135, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k134(VEnv * env) {
 static VDebugInfo dbg = { "global_k134" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k134, env) {
 if (env->num_vars == 1) {
  // (change-extension (close global_k135) (bruijn ##x.374 0 0) (##string ##string.565))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("change-extension")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k135, env)}),
      env->vars[0],
      VEncodePointer(&_V10string_D565.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to global_k134, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k133(VEnv * env) {
 static VDebugInfo dbg = { "global_k133" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k133, env) {
 if (env->num_vars == 1) {
  // (basename (close global_k134) (bruijn ##x.375 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("basename")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k134, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k133, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k138(VEnv * env) {
 static VDebugInfo dbg = { "global_k138" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k138, env) {
 if (env->num_vars == 1) {
  // (set! ##sys.next out-file (bruijn ##x.379 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0out__file.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k138, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k137(VEnv * env) {
 static VDebugInfo dbg = { "global_k137" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k137, env) {
 if (env->num_vars == 1) {
  // (change-extension (close global_k138) (bruijn ##x.380 0 0) (##string ##string.574))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("change-extension")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k138, env)}),
      env->vars[0],
      VEncodePointer(&_V10string_D574.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to global_k137, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k136(VEnv * env) {
 static VDebugInfo dbg = { "global_k136" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k136, env) {
 if (env->num_vars == 1) {
  // (basename (close global_k137) (bruijn ##x.381 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("basename")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k137, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k136, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k141(VEnv * env) {
 static VDebugInfo dbg = { "global_k141" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k141, env) {
 if (env->num_vars == 1) {
  // (set! ##sys.next out-file (bruijn ##x.385 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0out__file.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k141, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k140(VEnv * env) {
 static VDebugInfo dbg = { "global_k140" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k140, env) {
 if (env->num_vars == 1) {
  // (change-extension (close global_k141) (bruijn ##x.386 0 0) (##string ##string.575))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("change-extension")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k141, env)}),
      env->vars[0],
      VEncodePointer(&_V10string_D575.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to global_k140, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k139(VEnv * env) {
 static VDebugInfo dbg = { "global_k139" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k139, env) {
 if (env->num_vars == 1) {
  // (basename (close global_k140) (bruijn ##x.387 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("basename")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k140, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k139, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k132(VEnv * env) {
 static VDebugInfo dbg = { "global_k132" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k132, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.368 0 0) (if object? (car (close global_k133) scm-files) (if transpile? (car (close global_k136) scm-files) (if expand? (car (close global_k139) scm-files) (set! ##sys.next out-file (##string ##string.576))))) (##sys.next #f))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("car")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k133, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("car")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k136, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
if(VDecodeBool(
VLookupGlobalVarFast("expand?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("car")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k139, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0out__file.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D576.sym, VPOINTER_OTHER)
    );
}
}
}
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to global_k132, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0read__all_k144(VEnv * env) {
 static VDebugInfo dbg = { "_V0read__all_k144" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0read__all_k144, env) {
 if (env->num_vars == 1) {
  // (cons (bruijn ##k.395 2 0) (bruijn expr 2 1) (bruijn ##x.402 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cons")),
      env->up->up->vars[0],
      env->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0read__all_k144, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0read__all_k143(VEnv * env) {
 static VDebugInfo dbg = { "_V0read__all_k143" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0read__all_k143, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.397 0 0) ((bruijn ##k.395 1 0) (quote ())) (read-all (close _V0read__all_k144) (bruijn port 3 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("read-all")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0read__all_k144, env)}),
      env->up->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0read__all_k143, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0read__all_lambda16(VEnv * env) {
 static VDebugInfo dbg = { "_V0read__all_lambda16" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0read__all_lambda16, env) {
  // (eof-object? (close _V0read__all_k143) (bruijn expr 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("eof-object?")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0read__all_k143, env)}),
      env->vars[1]
    );
 }
}
static void _V0read__all_k142(VEnv * env) {
 static VDebugInfo dbg = { "_V0read__all_k142" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0read__all_k142, env) {
 if (env->num_vars == 1) {
  // ((close _V0read__all_lambda16) (bruijn ##k.393 1 0) (bruijn ##x.403 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0read__all_lambda16, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0read__all_k142, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0read__all_lambda15(VEnv * env) {
 static VDebugInfo dbg = { "_V0read__all_lambda15" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0read__all_lambda15, env) {
 if (env->num_vars == 2) {
  // (read (close _V0read__all_k142) (bruijn port 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("read")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0read__all_k142, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0read__all_lambda15, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void global_k145(VEnv * env) {
 static VDebugInfo dbg = { "global_k145" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k145, env) {
 if (env->num_vars == 1) {
  // (define ##sys.next cc-files (bruijn ##x.408 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0cc__files.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k145, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k146(VEnv * env) {
 static VDebugInfo dbg = { "global_k146" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k146, env) {
 if (env->num_vars == 1) {
  // (define ##sys.next cc-files (bruijn ##x.410 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0cc__files.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k146, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k148(VEnv * env) {
 static VDebugInfo dbg = { "global_k148" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k148, env) {
 if (env->num_vars == 1) {
  // (make-temporary-file (bruijn ##k.411 2 0) (bruijn ##x.413 0 0) (##string ##string.574))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("make-temporary-file")),
      env->up->up->vars[0],
      env->vars[0],
      VEncodePointer(&_V10string_D574.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to global_k148, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k147(VEnv * env) {
 static VDebugInfo dbg = { "global_k147" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k147, env) {
 if (env->num_vars == 1) {
  // (string-append (close global_k148) (##string ##string.577) (bruijn ##x.414 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-append")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k148, env)}),
      VEncodePointer(&_V10string_D577.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k147, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_lambda17(VEnv * env) {
 static VDebugInfo dbg = { "global_lambda17" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_lambda17, env) {
 if (env->num_vars == 2) {
  // (basename (close global_k147) (bruijn file 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("basename")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k147, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to global_lambda17, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void global_k149(VEnv * env) {
 static VDebugInfo dbg = { "global_k149" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k149, env) {
 if (env->num_vars == 1) {
  // (define ##sys.next cc-files (bruijn ##x.408 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0cc__files.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k149, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k150(VEnv * env) {
 static VDebugInfo dbg = { "global_k150" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k150, env) {
 if (env->num_vars == 1) {
  // (define ##sys.next cc-files (bruijn ##x.410 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0cc__files.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k150, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k152(VEnv * env) {
 static VDebugInfo dbg = { "global_k152" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k152, env) {
 if (env->num_vars == 1) {
  // (make-temporary-file (bruijn ##k.411 2 0) (bruijn ##x.413 0 0) (##string ##string.574))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("make-temporary-file")),
      env->up->up->vars[0],
      env->vars[0],
      VEncodePointer(&_V10string_D574.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to global_k152, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k151(VEnv * env) {
 static VDebugInfo dbg = { "global_k151" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k151, env) {
 if (env->num_vars == 1) {
  // (string-append (close global_k152) (##string ##string.577) (bruijn ##x.414 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-append")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k152, env)}),
      VEncodePointer(&_V10string_D577.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k151, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_lambda18(VEnv * env) {
 static VDebugInfo dbg = { "global_lambda18" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_lambda18, env) {
 if (env->num_vars == 2) {
  // (basename (close global_k151) (bruijn file 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("basename")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k151, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to global_lambda18, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void global_k154(VEnv * env) {
 static VDebugInfo dbg = { "global_k154" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k154, env) {
 if (env->num_vars == 1) {
  // (define ##sys.next flags (bruijn ##x.418 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0flags.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k154, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k155(VEnv * env) {
 static VDebugInfo dbg = { "global_k155" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k155, env) {
 if (env->num_vars == 1) {
  // (define ##sys.next flags (bruijn ##x.418 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0flags.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k155, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k156(VEnv * env) {
 static VDebugInfo dbg = { "global_k156" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k156, env) {
 if (env->num_vars == 1) {
  // (define ##sys.next flags (bruijn ##x.418 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0flags.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k156, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k157(VEnv * env) {
 static VDebugInfo dbg = { "global_k157" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k157, env) {
 if (env->num_vars == 1) {
  // (define ##sys.next flags (bruijn ##x.418 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0flags.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k157, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k158(VEnv * env) {
 static VDebugInfo dbg = { "global_k158" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k158, env) {
 if (env->num_vars == 1) {
  // (define ##sys.next flags (bruijn ##x.418 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0flags.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k158, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k159(VEnv * env) {
 static VDebugInfo dbg = { "global_k159" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k159, env) {
 if (env->num_vars == 1) {
  // (define ##sys.next flags (bruijn ##x.418 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0flags.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k159, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k160(VEnv * env) {
 static VDebugInfo dbg = { "global_k160" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k160, env) {
 if (env->num_vars == 1) {
  // (define ##sys.next flags (bruijn ##x.418 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0flags.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k160, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k161(VEnv * env) {
 static VDebugInfo dbg = { "global_k161" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k161, env) {
 if (env->num_vars == 1) {
  // (define ##sys.next flags (bruijn ##x.418 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0flags.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k161, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k153(VEnv * env) {
 static VDebugInfo dbg = { "global_k153" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k153, env) {
 if (env->num_vars == 1) {
  // (if debug? (if object? (if shared? (string-append (close global_k154) (##string ##string.578) (bruijn ##x.419 0 0) (##string ##string.579) (##string ##string.580) (##string ##string.581)) (string-append (close global_k155) (##string ##string.578) (bruijn ##x.419 0 0) (##string ##string.579) (##string ##string.580) (##string ##string.582))) (if shared? (string-append (close global_k156) (##string ##string.578) (bruijn ##x.419 0 0) (##string ##string.579) (##string ##string.583) (##string ##string.581)) (string-append (close global_k157) (##string ##string.578) (bruijn ##x.419 0 0) (##string ##string.579) (##string ##string.583) (##string ##string.582)))) (if object? (if shared? (string-append (close global_k158) (##string ##string.578) (bruijn ##x.419 0 0) (##string ##string.552) (##string ##string.580) (##string ##string.581)) (string-append (close global_k159) (##string ##string.578) (bruijn ##x.419 0 0) (##string ##string.552) (##string ##string.580) (##string ##string.582))) (if shared? (string-append (close global_k160) (##string ##string.578) (bruijn ##x.419 0 0) (##string ##string.552) (##string ##string.583) (##string ##string.581)) (string-append (close global_k161) (##string ##string.578) (bruijn ##x.419 0 0) (##string ##string.552) (##string ##string.583) (##string ##string.582)))))
if(VDecodeBool(
VLookupGlobalVarFast("debug?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("shared?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-append")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k154, env)}),
      VEncodePointer(&_V10string_D578.sym, VPOINTER_OTHER),
      env->vars[0],
      VEncodePointer(&_V10string_D579.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D580.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D581.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-append")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k155, env)}),
      VEncodePointer(&_V10string_D578.sym, VPOINTER_OTHER),
      env->vars[0],
      VEncodePointer(&_V10string_D579.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D580.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D582.sym, VPOINTER_OTHER)
    );
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("shared?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-append")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k156, env)}),
      VEncodePointer(&_V10string_D578.sym, VPOINTER_OTHER),
      env->vars[0],
      VEncodePointer(&_V10string_D579.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D583.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D581.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-append")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k157, env)}),
      VEncodePointer(&_V10string_D578.sym, VPOINTER_OTHER),
      env->vars[0],
      VEncodePointer(&_V10string_D579.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D583.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D582.sym, VPOINTER_OTHER)
    );
}
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("shared?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-append")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k158, env)}),
      VEncodePointer(&_V10string_D578.sym, VPOINTER_OTHER),
      env->vars[0],
      VEncodePointer(&_V10string_D552.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D580.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D581.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-append")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k159, env)}),
      VEncodePointer(&_V10string_D578.sym, VPOINTER_OTHER),
      env->vars[0],
      VEncodePointer(&_V10string_D552.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D580.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D582.sym, VPOINTER_OTHER)
    );
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("shared?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-append")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k160, env)}),
      VEncodePointer(&_V10string_D578.sym, VPOINTER_OTHER),
      env->vars[0],
      VEncodePointer(&_V10string_D552.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D583.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D581.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-append")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k161, env)}),
      VEncodePointer(&_V10string_D578.sym, VPOINTER_OTHER),
      env->vars[0],
      VEncodePointer(&_V10string_D552.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D583.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D582.sym, VPOINTER_OTHER)
    );
}
}
}
 } else {
  VError("Not enough arguments to global_k153, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k162(VEnv * env) {
 static VDebugInfo dbg = { "global_k162" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k162, env) {
 if (env->num_vars == 1) {
  // (define ##sys.next command (bruijn ##x.436 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0command.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k162, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k164(VEnv * env) {
 static VDebugInfo dbg = { "global_k164" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k164, env) {
 if (env->num_vars == 1) {
  // (set! (bruijn ##k.438 1 0) command (bruijn ##x.440 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetGlobalVar, env)},
      env->up->vars[0],
      VEncodePointer(&_V0command.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k164, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_lambda19(VEnv * env) {
 static VDebugInfo dbg = { "global_lambda19" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_lambda19, env) {
 if (env->num_vars == 2) {
  // (string-append (close global_k164) command (##string ##string.586) (bruijn file 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-append")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k164, env)}),
      VLookupGlobalVarFast("command"),
      VEncodePointer(&_V10string_D586.sym, VPOINTER_OTHER),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to global_lambda19, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void global_k163(VEnv * env) {
 static VDebugInfo dbg = { "global_k163" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k163, env) {
 if (env->num_vars == 1) {
  // (for-each ##sys.next (close global_lambda19) (bruijn ##x.441 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("for-each")),
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodeClosure((VClosure[]){VMakeClosure(global_lambda19, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k163, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k165(VEnv * env) {
 static VDebugInfo dbg = { "global_k165" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k165, env) {
 if (env->num_vars == 1) {
  // (set! ##sys.next command (bruijn ##x.443 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0command.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k165, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k166(VEnv * env) {
 static VDebugInfo dbg = { "global_k166" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k166, env) {
 if (env->num_vars == 1) {
  // (define ##sys.next stdout (bruijn ##x.445 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0stdout.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k166, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k168(VEnv * env) {
 static VDebugInfo dbg = { "global_k168" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k168, env) {
 if (env->num_vars == 1) {
  // (define ##sys.next num-mains (bruijn ##x.447 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0num__mains.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k168, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_lambda20(VEnv * env) {
 static VDebugInfo dbg = { "global_lambda20" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_lambda20, env) {
 if (env->num_vars == 3) {
  // (if (bruijn x 0 1) (+ (bruijn ##k.448 0 0) (bruijn acc 0 2) 1) (+ (bruijn ##k.448 0 0) (bruijn acc 0 2) 0))
if(VDecodeBool(
env->vars[1])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("+")),
      env->vars[0],
      env->vars[2],
      VEncodeInt(1l)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("+")),
      env->vars[0],
      env->vars[2],
      VEncodeInt(0l)
    );
}
 } else {
  VError("Not enough arguments to global_lambda20, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void global_k167(VEnv * env) {
 static VDebugInfo dbg = { "global_k167" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k167, env) {
 if (env->num_vars == 1) {
  // (fold (close global_k168) (close global_lambda20) 0 (bruijn ##x.455 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("fold")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k168, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(global_lambda20, env)}),
      VEncodeInt(0l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k167, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k182(VEnv * env) {
 static VDebugInfo dbg = { "global_k182" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k182, env) {
 if (env->num_vars == 1) {
  // (apply (bruijn ##k.485 2 0) printout (bruijn ##x.487 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("apply")),
      env->up->up->vars[0],
      VLookupGlobalVarFast("printout"),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k182, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k181(VEnv * env) {
 static VDebugInfo dbg = { "global_k181" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k181, env) {
 if (env->num_vars == 1) {
  // (cons (close global_k182) debug? (bruijn ##x.488 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cons")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k182, env)}),
      VLookupGlobalVarFast("debug?"),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k181, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_lambda28(VEnv * env) {
 static VDebugInfo dbg = { "global_lambda28" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_lambda28, env) {
  // (cons (close global_k181) shared? (bruijn funs 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cons")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k181, env)}),
      VLookupGlobalVarFast("shared?"),
      env->vars[1]
    );
 }
}
static void global_k180(VEnv * env) {
 static VDebugInfo dbg = { "global_k180" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k180, env) {
 if (env->num_vars == 1) {
  // ((close global_lambda28) (bruijn ##k.483 1 0) (bruijn ##x.489 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(global_lambda28, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k180, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_lambda27(VEnv * env) {
 static VDebugInfo dbg = { "global_lambda27" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_lambda27, env) {
  // (to-functions (close global_k180) (bruijn bruijn 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("to-functions")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k180, env)}),
      env->vars[1]
    );
 }
}
static void global_k179(VEnv * env) {
 static VDebugInfo dbg = { "global_k179" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k179, env) {
 if (env->num_vars == 1) {
  // ((close global_lambda27) (bruijn ##k.476 2 0) (bruijn ##x.490 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(global_lambda27, env)},
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k179, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k178(VEnv * env) {
 static VDebugInfo dbg = { "global_k178" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k178, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.478 0 0) (for-each (bruijn ##k.476 1 0) write (bruijn opt 1 1)) (map (close global_k179) bruijn-ify (bruijn opt 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("for-each")),
      env->up->vars[0],
      VLookupGlobalVarFast("write"),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("map")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k179, env)}),
      VLookupGlobalVarFast("bruijn-ify"),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to global_k178, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_lambda26(VEnv * env) {
 static VDebugInfo dbg = { "global_lambda26" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_lambda26, env) {
  // (eq? (close global_k178) expand? 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("eq?")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k178, env)}),
      VLookupGlobalVarFast("expand?"),
      VEncodeInt(2l)
    );
 }
}
static void global_k177(VEnv * env) {
 static VDebugInfo dbg = { "global_k177" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k177, env) {
 if (env->num_vars == 1) {
  // ((close global_lambda26) (bruijn ##k.469 2 0) (bruijn ##x.491 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(global_lambda26, env)},
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k177, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k183(VEnv * env) {
 static VDebugInfo dbg = { "global_k183" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k183, env) {
 if (env->num_vars == 1) {
  // (deannotate-lambdas (bruijn ##k.492 1 0) (bruijn ##x.494 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("deannotate-lambdas")),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k183, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_lambda29(VEnv * env) {
 static VDebugInfo dbg = { "global_lambda29" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_lambda29, env) {
 if (env->num_vars == 2) {
  // (optimize (close global_k183) (bruijn expr 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("optimize")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k183, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to global_lambda29, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void global_k176(VEnv * env) {
 static VDebugInfo dbg = { "global_k176" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k176, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.471 0 0) (for-each (bruijn ##k.469 1 0) write (bruijn cps 1 1)) (map (close global_k177) (close global_lambda29) (bruijn cps 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("for-each")),
      env->up->vars[0],
      VLookupGlobalVarFast("write"),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("map")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k177, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(global_lambda29, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to global_k176, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_lambda25(VEnv * env) {
 static VDebugInfo dbg = { "global_lambda25" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_lambda25, env) {
  // (eq? (close global_k176) expand? 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("eq?")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k176, env)}),
      VLookupGlobalVarFast("expand?"),
      VEncodeInt(1l)
    );
 }
}
static void global_k175(VEnv * env) {
 static VDebugInfo dbg = { "global_k175" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k175, env) {
 if (env->num_vars == 1) {
  // ((close global_lambda25) (bruijn ##k.462 3 0) (bruijn ##x.495 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(global_lambda25, env)},
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k175, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k184(VEnv * env) {
 static VDebugInfo dbg = { "global_k184" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k184, env) {
 if (env->num_vars == 1) {
  // (annotate-lambdas (bruijn ##k.496 1 0) (bruijn ##x.498 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("annotate-lambdas")),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k184, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_lambda30(VEnv * env) {
 static VDebugInfo dbg = { "global_lambda30" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_lambda30, env) {
 if (env->num_vars == 2) {
  // (to-cps (close global_k184) (bruijn expr 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("to-cps")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k184, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to global_lambda30, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void global_k174(VEnv * env) {
 static VDebugInfo dbg = { "global_k174" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k174, env) {
 if (env->num_vars == 1) {
  // (map (close global_k175) (close global_lambda30) (bruijn ##x.499 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("map")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k175, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(global_lambda30, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k174, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k173(VEnv * env) {
 static VDebugInfo dbg = { "global_k173" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k173, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.464 0 0) (for-each (bruijn ##k.462 1 0) write (bruijn expanded 1 1)) (apply (close global_k174) append (bruijn expanded 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("for-each")),
      env->up->vars[0],
      VLookupGlobalVarFast("write"),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("apply")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k174, env)}),
      VLookupGlobalVarFast("append"),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to global_k173, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_lambda24(VEnv * env) {
 static VDebugInfo dbg = { "global_lambda24" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_lambda24, env) {
  // (eq? (close global_k173) expand? 0)
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("eq?")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k173, env)}),
      VLookupGlobalVarFast("expand?"),
      VEncodeInt(0l)
    );
 }
}
static void global_k172(VEnv * env) {
 static VDebugInfo dbg = { "global_k172" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k172, env) {
 if (env->num_vars == 1) {
  // ((close global_lambda24) (bruijn ##k.460 1 0) (bruijn ##x.500 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(global_lambda24, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k172, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_lambda23(VEnv * env) {
 static VDebugInfo dbg = { "global_lambda23" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_lambda23, env) {
  // (map (close global_k172) expand-toplevel (bruijn file 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("map")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k172, env)}),
      VLookupGlobalVarFast("expand-toplevel"),
      env->vars[1]
    );
 }
}
static void global_k171(VEnv * env) {
 static VDebugInfo dbg = { "global_k171" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k171, env) {
 if (env->num_vars == 1) {
  // ((close global_lambda23) (bruijn ##k.458 3 0) (bruijn ##x.501 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(global_lambda23, env)},
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k171, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k170(VEnv * env) {
 static VDebugInfo dbg = { "global_k170" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k170, env) {
 if (env->num_vars == 1) {
  // (append (close global_k171) (bruijn ##x.502 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("append")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k171, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k170, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k169(VEnv * env) {
 static VDebugInfo dbg = { "global_k169" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k169, env) {
 if (env->num_vars == 1) {
  // (read-all (close global_k170) (bruijn ##x.503 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("read-all")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k170, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to global_k169, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_lambda22(VEnv * env) {
 static VDebugInfo dbg = { "global_lambda22" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_lambda22, env) {
 if (env->num_vars == 1) {
  // (open-input-file (close global_k169) (bruijn scm-file 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("open-input-file")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k169, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to global_lambda22, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_lambda21(VEnv * env) {
 static VDebugInfo dbg = { "global_lambda21" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_lambda21, env) {
 if (env->num_vars == 3) {
  // (with-output-to-file (bruijn ##k.456 0 0) (bruijn cc-file 0 2) (close global_lambda22))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("with-output-to-file")),
      env->vars[0],
      env->vars[2],
      VEncodeClosure((VClosure[]){VMakeClosure(global_lambda22, env)})
    );
 } else {
  VError("Not enough arguments to global_lambda21, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void global_k185(VEnv * env) {
 static VDebugInfo dbg = { "global_k185" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k185, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.511 0 0) (error ##sys.next (##string ##string.587)) (##sys.next #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V10string_D587.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to global_k185, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k186(VEnv * env) {
 static VDebugInfo dbg = { "global_k186" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k186, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.513 0 0) (error ##sys.next (##string ##string.588)) (##sys.next #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V10string_D588.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to global_k186, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0delete__file_k187(VEnv * env) {
 static VDebugInfo dbg = { "_V0delete__file_k187" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0delete__file_k187, env) {
 if (env->num_vars == 1) {
  // (system (bruijn ##k.519 1 0) (bruijn ##x.521 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("system")),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0delete__file_k187, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0delete__file_lambda31(VEnv * env) {
 static VDebugInfo dbg = { "_V0delete__file_lambda31" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0delete__file_lambda31, env) {
 if (env->num_vars == 2) {
  // (sprintf (close _V0delete__file_k187) (##string ##string.589) (bruijn f 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("sprintf")),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0delete__file_k187, env)}),
      VEncodePointer(&_V10string_D589.sym, VPOINTER_OTHER),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0delete__file_lambda31, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void global_k191(VEnv * env) {
 static VDebugInfo dbg = { "global_k191" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k191, env) {
 if (env->num_vars == 1) {
  // (for-each ##sys.next delete-file cc-files)
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("for-each")),
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VLookupGlobalVarFast("delete-file"),
      VLookupGlobalVarFast("cc-files")
    );
 } else {
  VError("Not enough arguments to global_k191, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k190(VEnv * env) {
 static VDebugInfo dbg = { "global_k190" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k190, env) {
 if (env->num_vars == 1) {
  // (system (close global_k191) command)
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("system")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k191, env)}),
      VLookupGlobalVarFast("command")
    );
 } else {
  VError("Not enough arguments to global_k190, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k192(VEnv * env) {
 static VDebugInfo dbg = { "global_k192" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k192, env) {
 if (env->num_vars == 1) {
  // (for-each ##sys.next delete-file cc-files)
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("for-each")),
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VLookupGlobalVarFast("delete-file"),
      VLookupGlobalVarFast("cc-files")
    );
 } else {
  VError("Not enough arguments to global_k192, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k189(VEnv * env) {
 static VDebugInfo dbg = { "global_k189" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k189, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.540 0 0) (if verbose? (displayln (close global_k190) command) (system (close global_k192) command)) (##sys.next #f))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
VLookupGlobalVarFast("verbose?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("displayln")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k190, env)}),
      VLookupGlobalVarFast("command")
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("system")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k192, env)}),
      VLookupGlobalVarFast("command")
    );
}
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to global_k189, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void global_k188(VEnv * env) {
 static VDebugInfo dbg = { "global_k188" };
 VRecordCall(&dbg);
 V_GC_CHECK(global_k188, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.538 0 0) (not (close global_k189) expand?) (##sys.next #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k189, env)}),
      VLookupGlobalVarFast("expand?")
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to global_k188, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
void toplevel0() {
    VEnv * env = NULL;
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(global_k1, env)}),
      VEncodePointer(&_V10string_D542.sym, VPOINTER_OTHER)
    );
}
void toplevel1() {
    VEnv * env = NULL;
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(global_k3, env)}),
      VEncodePointer(&_V10string_D542.sym, VPOINTER_OTHER)
    );
}
void toplevel2() {
    VEnv * env = NULL;
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(global_k5, env)}),
      VEncodePointer(&_V10string_D542.sym, VPOINTER_OTHER)
    );
}
void toplevel3() {
    VEnv * env = NULL;
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(global_k7, env)}),
      VEncodePointer(&_V10string_D542.sym, VPOINTER_OTHER)
    );
}
void toplevel4() {
    VEnv * env = NULL;
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(global_k9, env)}),
      VEncodePointer(&_V10string_D542.sym, VPOINTER_OTHER)
    );
}
void toplevel5() {
    VEnv * env = NULL;
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(global_k11, env)}),
      VEncodePointer(&_V10string_D542.sym, VPOINTER_OTHER)
    );
}
void toplevel6() {
    VEnv * env = NULL;
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(global_k13, env)}),
      VEncodePointer(&_V10string_D542.sym, VPOINTER_OTHER)
    );
}
void toplevel7() {
    VEnv * env = NULL;
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0scm__files.sym, VPOINTER_OTHER),
      VNULL
    );
}
void toplevel8() {
    VEnv * env = NULL;
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0obj__files.sym, VPOINTER_OTHER),
      VNULL
    );
}
void toplevel9() {
    VEnv * env = NULL;
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0shared_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel10() {
    VEnv * env = NULL;
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0expand_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel11() {
    VEnv * env = NULL;
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0transpile_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel12() {
    VEnv * env = NULL;
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0object_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel13() {
    VEnv * env = NULL;
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0debug_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel14() {
    VEnv * env = NULL;
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0verbose_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel15() {
    VEnv * env = NULL;
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0optimization.sym, VPOINTER_OTHER),
      VEncodeInt(1l)
    );
}
void toplevel16() {
    VEnv * env = NULL;
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0out__file.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel17() {
    VEnv * env = NULL;
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0extension.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0extension_lambda1, env)})
    );
}
void toplevel18() {
    VEnv * env = NULL;
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0change__extension.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0change__extension_lambda4, env)})
    );
}
void toplevel19() {
    VEnv * env = NULL;
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0basename.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0basename_lambda7, env)})
    );
}
void toplevel20() {
    VEnv * env = NULL;
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0display__help.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0display__help_lambda10, env)})
    );
}
void toplevel21() {
    VEnv * env = NULL;
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0display__version.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0display__version_lambda11, env)})
    );
}
void toplevel22() {
    VEnv * env = NULL;
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(global_lambda12, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodeBool(false)
    );
}
void toplevel23() {
    VEnv * env = NULL;
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("null?")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k106, env)}),
      VLookupGlobalVarFast("scm-files")
    );
}
void toplevel24() {
    VEnv * env = NULL;
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("expand?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("error")),
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V10string_D570.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
}
void toplevel25() {
    VEnv * env = NULL;
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("null?")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k108, env)}),
      VLookupGlobalVarFast("obj-files")
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("null?")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k110, env)}),
      VLookupGlobalVarFast("obj-files")
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("expand?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("null?")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k112, env)}),
      VLookupGlobalVarFast("obj-files")
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
}
}
}
void toplevel26() {
    VEnv * env = NULL;
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("out-file"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdr")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k114, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_FUNC(VNext,
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
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdr")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k117, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("expand?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("out-file"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdr")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k120, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
}
}
}
void toplevel27() {
    VEnv * env = NULL;
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdr")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k123, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdr")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k126, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("expand?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("cdr")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k129, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
}
}
}
void toplevel28() {
    VEnv * env = NULL;
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k132, env)}),
      VLookupGlobalVarFast("out-file")
    );
}
void toplevel29() {
    VEnv * env = NULL;
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0read__all.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0read__all_lambda15, env)})
    );
}
void toplevel30() {
    VEnv * env = NULL;
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("list")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k145, env)}),
      VLookupGlobalVarFast("out-file")
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("map")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k146, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(global_lambda17, env)}),
      VLookupGlobalVarFast("scm-files")
    );
}
} else {
if(VDecodeBool(
VLookupGlobalVarFast("expand?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("list")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k149, env)}),
      VLookupGlobalVarFast("out-file")
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("map")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k150, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(global_lambda18, env)}),
      VLookupGlobalVarFast("scm-files")
    );
}
}
}
void toplevel31() {
    VEnv * env = NULL;
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("sprintf")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k153, env)}),
      VEncodePointer(&_V10string_D584.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast("optimization")
    );
}
void toplevel32() {
    VEnv * env = NULL;
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("sprintf")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k162, env)}),
      VEncodePointer(&_V10string_D585.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast("out-file")
    );
}
void toplevel33() {
    VEnv * env = NULL;
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("append")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k163, env)}),
      VLookupGlobalVarFast("obj-files"),
      VLookupGlobalVarFast("cc-files")
    );
}
void toplevel34() {
    VEnv * env = NULL;
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("string-append")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k165, env)}),
      VLookupGlobalVarFast("command"),
      VLookupGlobalVarFast("flags")
    );
}
void toplevel35() {
    VEnv * env = NULL;
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("current-output-port")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k166, env)})
    );
}
void toplevel36() {
    VEnv * env = NULL;
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("map")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k167, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(global_lambda21, env)}),
      VLookupGlobalVarFast("scm-files"),
      VLookupGlobalVarFast("cc-files")
    );
}
void toplevel37() {
    VEnv * env = NULL;
if(VDecodeBool(
VLookupGlobalVarFast("shared?"))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast(">")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k185, env)}),
      VLookupGlobalVarFast("num-mains"),
      VEncodeInt(0l)
    );
} else {
    V_CALL_FUNC(VNext,
      VEncodeBool(false)
    );
}
}
void toplevel38() {
    VEnv * env = NULL;
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast(">")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k186, env)}),
      VLookupGlobalVarFast("num-mains"),
      VEncodeInt(1l)
    );
}
void toplevel39() {
    VEnv * env = NULL;
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VNext,NULL)}),
      VEncodePointer(&_V0delete__file.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0delete__file_lambda31, env)})
    );
}
void toplevel40() {
    VEnv * env = NULL;
    V_CALL_CLOSURE(VDecodeClosureApply(VLookupGlobalVarFast("not")),
      VEncodeClosure((VClosure[]){VMakeClosure(global_k188, env)}),
      VLookupGlobalVarFast("transpile?")
    );
}
int main(int argc, char ** argv) {
  void (*toplevels[])() = {
    toplevel0,    toplevel1,    toplevel2,    toplevel3,    toplevel4,    toplevel5,    toplevel6,    toplevel7,    toplevel8,    toplevel9,    toplevel10,    toplevel11,    toplevel12,    toplevel13,    toplevel14,    toplevel15,    toplevel16,    toplevel17,    toplevel18,    toplevel19,    toplevel20,    toplevel21,    toplevel22,    toplevel23,    toplevel24,    toplevel25,    toplevel26,    toplevel27,    toplevel28,    toplevel29,    toplevel30,    toplevel31,    toplevel32,    toplevel33,    toplevel34,    toplevel35,    toplevel36,    toplevel37,    toplevel38,    toplevel39,    toplevel40,  
};
  VArgc = argc; VArgv = argv;  return VStart(sizeof toplevels / sizeof *toplevels, toplevels);
}
