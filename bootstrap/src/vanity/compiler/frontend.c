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
static struct { VBlob sym; char bytes[11]; } _V10string_D479 = { { VSTRING, 11 }, " -lvscheme" };
static struct { VBlob sym; char bytes[10]; } _V10string_D478 = { { VSTRING, 10 }, "gcc -o ~A" };
static struct { VBlob sym; char bytes[2]; } _V10string_D477 = { { VSTRING, 2 }, " " };
static struct { VBlob sym; char bytes[20]; } _V10string_D476 = { { VSTRING, 20 }, " -Wl,--no-as-needed" };
static struct { VBlob sym; char bytes[15]; } _V10string_D475 = { { VSTRING, 15 }, " -fPIC -shared" };
static struct { VBlob sym; char bytes[11]; } _V10string_D474 = { { VSTRING, 11 }, "/bin/rm ~A" };
static struct { VBlob sym; char bytes[12]; } _V0delete__file = { { VSYMBOL, 12 }, "delete-file" };
static struct { VBlob sym; char bytes[87]; } _V10string_D473 = { { VSTRING, 87 }, "program has toplevel expressions in multiple files, and so it generated multiple mains" };
static struct { VBlob sym; char bytes[51]; } _V10string_D472 = { { VSTRING, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[24]; } _V10string_D471 = { { VSTRING, 24 }, "gcc -I~A ~A -c -o ~A ~A" };
static struct { VBlob sym; char bytes[20]; } _V10string_D470 = { { VSTRING, 20 }, "file does not exist" };
static struct { VBlob sym; char bytes[10]; } _V0num__mains = { { VSYMBOL, 10 }, "num-mains" };
static struct { VBlob sym; char bytes[7]; } _V0stdout = { { VSYMBOL, 7 }, "stdout" };
static struct { VBlob sym; char bytes[11]; } _V0cc__command = { { VSYMBOL, 11 }, "cc-command" };
static struct { VBlob sym; char bytes[6]; } _V10string_D469 = { { VSTRING, 6 }, " -O~A" };
static struct { VBlob sym; char bytes[40]; } _V10string_D468 = { { VSTRING, 40 }, " -rdynamic -Wmissing-braces -masm=intel" };
static struct { VBlob sym; char bytes[17]; } _V0cc__command__flags = { { VSYMBOL, 17 }, "cc-command-flags" };
static struct { VBlob sym; char bytes[7]; } _V10string_D467 = { { VSTRING, 7 }, " -fPIC" };
static struct { VBlob sym; char bytes[4]; } _V10string_D466 = { { VSTRING, 4 }, " -g" };
static struct { VBlob sym; char bytes[13]; } _V0cc__obj__files = { { VSYMBOL, 13 }, "cc-obj-files" };
static struct { VBlob sym; char bytes[9]; } _V0cc__files = { { VSYMBOL, 9 }, "cc-files" };
static struct { VBlob sym; char bytes[6]; } _V10string_D465 = { { VSTRING, 6 }, "/tmp/" };
static struct { VBlob sym; char bytes[4]; } _V10string_D464 = { { VSTRING, 4 }, "~A " };
static struct { VBlob sym; char bytes[2]; } _V10string_D463 = { { VSTRING, 2 }, ":" };
static struct { VBlob sym; char bytes[4]; } _V10string_D462 = { { VSTRING, 4 }, " ~A" };
static struct { VBlob sym; char bytes[15]; } _V10string_D461 = { { VSTRING, 15 }, "invalid import" };
static struct { VBlob sym; char bytes[13]; } _V0gen__makefile = { { VSYMBOL, 13 }, "gen-makefile" };
static struct { VBlob sym; char bytes[36]; } _V10string_D460 = { { VSTRING, 36 }, "File did not produce a valid header" };
static struct { VBlob sym; char bytes[50]; } _V10string_D459 = { { VSTRING, 50 }, "Only one statement permitted in header generation" };
static struct { VBlob sym; char bytes[11]; } _V0gen__header = { { VSYMBOL, 11 }, "gen-header" };
static struct { VBlob sym; char bytes[6]; } _V10string_D458 = { { VSTRING, 6 }, "a.out" };
static struct { VBlob sym; char bytes[6]; } _V10string_D457 = { { VSTRING, 6 }, ".scmh" };
static struct { VBlob sym; char bytes[6]; } _V10string_D456 = { { VSTRING, 6 }, ".escm" };
static struct { VBlob sym; char bytes[3]; } _V10string_D455 = { { VSTRING, 3 }, ".c" };
static struct { VBlob sym; char bytes[56]; } _V10string_D454 = { { VSTRING, 56 }, "FIXME: -h and -c and -t and -E can only handle one file" };
static struct { VBlob sym; char bytes[89]; } _V10string_D453 = { { VSTRING, 89 }, "Cannot specify '-h' or '-c' or '-t' or '-E' or '--makefile' with '-o' and multiple files" };
static struct { VBlob sym; char bytes[75]; } _V10string_D452 = { { VSTRING, 75 }, "Cannot specify '-h' '-c' or '-t' or '-E' or '--makefile' with object files" };
static struct { VBlob sym; char bytes[23]; } _V10string_D451 = { { VSTRING, 23 }, "No input file provided" };
static struct { VBlob sym; char bytes[68]; } _V10string_D450 = { { VSTRING, 68 }, "Only one of '-h' or '-c' or '-t' or '-E' or '--makefile' can be set" };
static struct { VBlob sym; char bytes[11]; } _V0count__true = { { VSYMBOL, 11 }, "count-true" };
static struct { VBlob sym; char bytes[19]; } _V10string_D449 = { { VSTRING, 19 }, "Unknown CLI option" };
static struct { VBlob sym; char bytes[30]; } _V10string_D448 = { { VSTRING, 30 }, "Wrapper flag -W missing comma" };
static struct { VBlob sym; char bytes[67]; } _V10string_D447 = { { VSTRING, 67 }, "Wrapper flag -W can only pass args to the C compiler, eg -Wc,-Ilib" };
static struct { VBlob sym; char bytes[57]; } _V10string_D446 = { { VSTRING, 57 }, "Expand flag -E expects integer between 0 and 2 inclusive" };
static struct { VBlob sym; char bytes[63]; } _V10string_D445 = { { VSTRING, 63 }, "Optimization flag -O expects integer between 0 and 3 inclusive" };
static struct { VBlob sym; char bytes[3]; } _V10string_D444 = { { VSTRING, 3 }, ".o" };
static struct { VBlob sym; char bytes[10]; } _V0benchmark = { { VSYMBOL, 10 }, "benchmark" };
static struct { VBlob sym; char bytes[11]; } _V0maketarget = { { VSYMBOL, 11 }, "maketarget" };
static struct { VBlob sym; char bytes[9]; } _V0makefile = { { VSYMBOL, 9 }, "makefile" };
static struct { VBlob sym; char bytes[11]; } _V0keep__temps = { { VSYMBOL, 11 }, "keep-temps" };
static struct { VBlob sym; char bytes[8]; } _V0version = { { VSYMBOL, 8 }, "version" };
static struct { VBlob sym; char bytes[5]; } _V0help = { { VSYMBOL, 5 }, "help" };
static struct { VBlob sym; char bytes[7]; } _V0shared = { { VSYMBOL, 7 }, "shared" };
static struct { VBlob sym; char bytes[16]; } _V10string_D443 = { { VSTRING, 16 }, "vghtco:I:O:E:W:" };
static struct { VBlob sym; char bytes[31]; } _V10string_D442 = { { VSTRING, 31 }, "Vanity Scheme Compiler ~A.~A~N" };
static struct { VBlob sym; char bytes[37]; } _V10string_D441 = { { VSTRING, 37 }, "Copyright (C) 2023 Richard Van Natta" };
static struct { VBlob sym; char bytes[16]; } _V0display__version = { { VSYMBOL, 16 }, "display-version" };
static struct { VBlob sym; char bytes[29]; } _V10string_D440 = { { VSTRING, 29 }, "Usage: vsc [options] file..." };
static struct { VBlob sym; char bytes[9]; } _V10string_D439 = { { VSTRING, 9 }, "Options:" };
static struct { VBlob sym; char bytes[92]; } _V10string_D438 = { { VSTRING, 92 }, "  -O<num>       Compile with optimization levels 0 (slowest codegen) to 3 (fastest codegen)" };
static struct { VBlob sym; char bytes[43]; } _V10string_D437 = { { VSTRING, 43 }, "  -g            Compile with debug symbols" };
static struct { VBlob sym; char bytes[58]; } _V10string_D436 = { { VSTRING, 58 }, "  -h            Generate header file instead of compiling" };
static struct { VBlob sym; char bytes[116]; } _V10string_D435 = { { VSTRING, 116 }, "  -E<num>       Expand only, do not compile or link. 0: macros only, 1: continuation passing style, 2: optimization" };
static struct { VBlob sym; char bytes[55]; } _V10string_D434 = { { VSTRING, 55 }, "  -t            Transpile only, do not compile or link" };
static struct { VBlob sym; char bytes[66]; } _V10string_D433 = { { VSTRING, 66 }, "  -c            Transpile, compile, and assemble, but do not link" };
static struct { VBlob sym; char bytes[45]; } _V10string_D432 = { { VSTRING, 45 }, "  -o<file>      Place the output into <file>" };
static struct { VBlob sym; char bytes[85]; } _V10string_D431 = { { VSTRING, 85 }, "  -I<dir>       Add the directory to the list to be searched for scheme header files" };
static struct { VBlob sym; char bytes[55]; } _V10string_D430 = { { VSTRING, 55 }, "  -Wc,<option>  Pass comma seperated to the C compiler" };
static struct { VBlob sym; char bytes[43]; } _V10string_D429 = { { VSTRING, 43 }, "  -v            Show intermediate commands" };
static struct { VBlob sym; char bytes[84]; } _V10string_D428 = { { VSTRING, 84 }, "  --makefile    Generate makefile dependencies, similar to gcc invoked with -MM -MG" };
static struct { VBlob sym; char bytes[108]; } _V10string_D427 = { { VSTRING, 108 }, "  --maketarget  Specify the target of the make dependency, additional --maketarget's add additional targets" };
static struct { VBlob sym; char bytes[1]; } _V10string_D426 = { { VSTRING, 1 }, "" };
static struct { VBlob sym; char bytes[42]; } _V10string_D425 = { { VSTRING, 42 }, "  --shared      Compile as shared library" };
static struct { VBlob sym; char bytes[74]; } _V10string_D424 = { { VSTRING, 74 }, "  --keep-temps  Keep temporary compilation files, such as C intermediates" };
static struct { VBlob sym; char bytes[36]; } _V10string_D423 = { { VSTRING, 36 }, "  --help        You know about this" };
static struct { VBlob sym; char bytes[44]; } _V10string_D422 = { { VSTRING, 44 }, "  --version     Show version and build info" };
static struct { VBlob sym; char bytes[13]; } _V0display__help = { { VSYMBOL, 13 }, "display-help" };
static struct { VBlob sym; char bytes[22]; } _V10string_D421 = { { VSTRING, 22 }, "realpath `dirname ~A`" };
static struct { VBlob sym; char bytes[13]; } _V0realbasepath = { { VSYMBOL, 13 }, "realbasepath" };
static struct { VBlob sym; char bytes[12]; } _V10string_D420 = { { VSTRING, 12 }, "realpath ~A" };
static struct { VBlob sym; char bytes[9]; } _V0realpath = { { VSYMBOL, 9 }, "realpath" };
static struct { VBlob sym; char bytes[8]; } _V0decomma = { { VSYMBOL, 8 }, "decomma" };
static struct { VBlob sym; char bytes[2]; } _V10string_D419 = { { VSTRING, 2 }, "." };
static struct { VBlob sym; char bytes[9]; } _V0basepath = { { VSYMBOL, 9 }, "basepath" };
static struct { VBlob sym; char bytes[9]; } _V0basename = { { VSYMBOL, 9 }, "basename" };
static struct { VBlob sym; char bytes[17]; } _V0change__extension = { { VSYMBOL, 17 }, "change-extension" };
static struct { VBlob sym; char bytes[10]; } _V0extension = { { VSYMBOL, 10 }, "extension" };
static struct { VBlob sym; char bytes[11]; } _V0benchmark_Q = { { VSYMBOL, 11 }, "benchmark\?" };
static struct { VBlob sym; char bytes[12]; } _V0maketargets = { { VSYMBOL, 12 }, "maketargets" };
static struct { VBlob sym; char bytes[10]; } _V0makefile_Q = { { VSYMBOL, 10 }, "makefile\?" };
static struct { VBlob sym; char bytes[11]; } _V10string_D418 = { { VSTRING, 11 }, "~A/include" };
static struct { VBlob sym; char bytes[6]; } _V0paths = { { VSYMBOL, 6 }, "paths" };
static struct { VBlob sym; char bytes[10]; } _V0c__options = { { VSYMBOL, 10 }, "c-options" };
static struct { VBlob sym; char bytes[9]; } _V0out__file = { { VSYMBOL, 9 }, "out-file" };
static struct { VBlob sym; char bytes[4]; } _V0api = { { VSYMBOL, 4 }, "api" };
static struct { VBlob sym; char bytes[13]; } _V0optimization = { { VSYMBOL, 13 }, "optimization" };
static struct { VBlob sym; char bytes[9]; } _V0verbose_Q = { { VSYMBOL, 9 }, "verbose\?" };
static struct { VBlob sym; char bytes[7]; } _V0debug_Q = { { VSYMBOL, 7 }, "debug\?" };
static struct { VBlob sym; char bytes[8]; } _V0object_Q = { { VSYMBOL, 8 }, "object\?" };
static struct { VBlob sym; char bytes[11]; } _V0transpile_Q = { { VSYMBOL, 11 }, "transpile\?" };
static struct { VBlob sym; char bytes[8]; } _V0header_Q = { { VSYMBOL, 8 }, "header\?" };
static struct { VBlob sym; char bytes[6]; } _V0keep_Q = { { VSYMBOL, 6 }, "keep\?" };
static struct { VBlob sym; char bytes[8]; } _V0expand_Q = { { VSYMBOL, 8 }, "expand\?" };
static struct { VBlob sym; char bytes[8]; } _V0shared_Q = { { VSYMBOL, 8 }, "shared\?" };
static struct { VBlob sym; char bytes[10]; } _V0obj__files = { { VSYMBOL, 10 }, "obj-files" };
static struct { VBlob sym; char bytes[10]; } _V0scm__files = { { VSYMBOL, 10 }, "scm-files" };
static struct { VBlob sym; char bytes[34]; } _V10string_D417 = { { VSTRING, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[35]; } _V10string_D416 = { { VSTRING, 35 }, "_V0vanity_V0compiler_V0library_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D415 = { { VSTRING, 37 }, "_V0vanity_V0compiler_V0transpile_V20" };
static struct { VBlob sym; char bytes[31]; } _V10string_D414 = { { VSTRING, 31 }, "_V0vanity_V0compiler_V0cps_V20" };
static struct { VBlob sym; char bytes[34]; } _V10string_D413 = { { VSTRING, 34 }, "_V0vanity_V0compiler_V0expand_V20" };
static struct { VBlob sym; char bytes[34]; } _V10string_D412 = { { VSTRING, 34 }, "_V0vanity_V0compiler_V0getopt_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D411 = { { VSTRING, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D410 = { { VSTRING, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D409 = { { VSTRING, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D408 = { { VSTRING, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D407 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static void global_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k1" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "global_k2" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "global_k3" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "global_k4" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "global_k5" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "global_k6" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "global_k7" };
 VRecordCall(&dbg);
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
static void global_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k8" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k8, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.9 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _var0
    );
 }
}
static void global_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k9" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k9, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.10 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _var0
    );
 }
}
static void global_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k10" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k10, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.11 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _var0
    );
 }
}
static void global_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k11" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k11, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine ##sys.next (bruijn ##x.12 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _var0
    );
 }
}
static void global_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k13" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next paths (bruijn ##x.13 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0paths.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k12" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (list (close global_k13) (bruijn ##x.14 0 0))
V_CALL(VLookupGlobalVarFast("list"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k13, env)}),
      _var0
    );
 }
}
static void _V0extension_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_k16" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0extension_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_k16, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.16 3 0) (bruijn ##x.18 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0extension_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_k15" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0extension_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (- (close _V0extension_k16) (bruijn ##x.19 0 0) 1)
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k16, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0extension_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_k14" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0extension_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-length (close _V0extension_k15) (bruijn file 2 1))
V_CALL(VLookupGlobalVarFast("string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k15, env)}),
      upenv->up->vars[1]
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k20, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.20 4 0) (bruijn ##x.23 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.22 0 0) (substring (bruijn ##k.20 3 0) (bruijn file 5 1) (bruijn i 3 1)) (- (close _V0loop_k20) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("substring"), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k20, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eq? (close _V0loop_k19) #\. (bruijn ##x.24 0 0))
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k19, env)}),
      VEncodeChar('.'),
      _var0
    );
 }
}
static void _V0loop_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k17" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.21 0 0) ((bruijn ##k.20 1 0) #f) (string-ref (close _V0loop_k18) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
} else {
V_CALL(VLookupGlobalVarFast("string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k18, env)}),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V0loop_k17) (bruijn i 0 1) 0)
V_CALL(VLookupGlobalVarFast("<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k17, env)}),
      _var1,
      VEncodeInt(0l)
    );
 }
}
static void _V0extension_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0extension_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_lambda2, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0extension_k14) (bruijn loop 0 1) (close _V0loop_lambda3))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k14, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda3, env)})
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
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_lambda1, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0extension_lambda2) (bruijn ##k.15 0 0) #f)
V_CALL_FUNC(_V0extension_lambda2, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0change__extension_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_k23" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0change__extension_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_k23, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.26 3 0) (bruijn ##x.28 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0change__extension_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_k22" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0change__extension_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (- (close _V0change__extension_k23) (bruijn ##x.29 0 0) 1)
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k23, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0change__extension_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_k21" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0change__extension_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-length (close _V0change__extension_k22) (bruijn file 2 1))
V_CALL(VLookupGlobalVarFast("string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k22, env)}),
      upenv->up->vars[1]
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k27, runtime, upenv, 1, argc, _var0) {
  // (string-append (bruijn ##k.30 4 0) (bruijn ##x.33 0 0) (bruijn new 6 2))
V_CALL(VLookupGlobalVarFast("string-append"), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      VGetArg(upenv, 6-1, 2)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k28, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.30 4 0) (bruijn ##x.34 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.32 0 0) (substring (close _V0loop_k27) (bruijn file 5 1) 0 (bruijn i 3 1)) (- (close _V0loop_k28) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("substring"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k27, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(0l),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k28, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
}
 }
}
static void _V0loop_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k25" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eq? (close _V0loop_k26) #\. (bruijn ##x.35 0 0))
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k26, env)}),
      VEncodeChar('.'),
      _var0
    );
 }
}
static void _V0loop_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k24" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.31 0 0) (string-append (bruijn ##k.30 1 0) (bruijn file 3 1) (bruijn new 3 2)) (string-ref (close _V0loop_k25) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("string-append"), runtime,
      upenv->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2]
    );
} else {
V_CALL(VLookupGlobalVarFast("string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k25, env)}),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V0loop_k24) (bruijn i 0 1) 0)
V_CALL(VLookupGlobalVarFast("<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k24, env)}),
      _var1,
      VEncodeInt(0l)
    );
 }
}
static void _V0change__extension_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0change__extension_lambda5" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0change__extension_k21) (bruijn loop 0 1) (close _V0loop_lambda6))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k21, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda6, env)})
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
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0change__extension_lambda5) (bruijn ##k.25 0 0) #f)
V_CALL_FUNC(_V0change__extension_lambda5, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0basename_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basename_k31" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basename_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_k31, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.37 3 0) (bruijn ##x.39 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0basename_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basename_k30" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basename_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (- (close _V0basename_k31) (bruijn ##x.40 0 0) 1)
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k31, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0basename_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basename_k29" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basename_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-length (close _V0basename_k30) (bruijn file 2 1))
V_CALL(VLookupGlobalVarFast("string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k30, env)}),
      upenv->up->vars[1]
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
  // (substring (bruijn ##k.41 4 0) (bruijn file 6 1) (bruijn ##x.44 0 0))
V_CALL(VLookupGlobalVarFast("substring"), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      _var0
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
  // ((bruijn loop 5 1) (bruijn ##k.41 4 0) (bruijn ##x.45 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
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
  // (if (bruijn ##p.43 0 0) (+ (close _V0loop_k35) (bruijn i 3 1) 1) (- (close _V0loop_k36) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("+"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k35, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
} else {
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k36, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
}
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
  // (eq? (close _V0loop_k34) #\/ (bruijn ##x.46 0 0))
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k34, env)}),
      VEncodeChar('/'),
      _var0
    );
 }
}
static void _V0loop_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k32" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.42 0 0) ((bruijn ##k.41 1 0) (bruijn file 3 1)) (string-ref (close _V0loop_k33) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VLookupGlobalVarFast("string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k33, env)}),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V0loop_k32) (bruijn i 0 1) 0)
V_CALL(VLookupGlobalVarFast("<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k32, env)}),
      _var1,
      VEncodeInt(0l)
    );
 }
}
static void _V0basename_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0basename_lambda8" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0basename_k29) (bruijn loop 0 1) (close _V0loop_lambda9))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k29, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda9, env)})
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
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0basename_lambda8) (bruijn ##k.36 0 0) #f)
V_CALL_FUNC(_V0basename_lambda8, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0basepath_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basepath_k39" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basepath_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_k39, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.48 3 0) (bruijn ##x.50 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0basepath_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basepath_k38" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basepath_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (- (close _V0basepath_k39) (bruijn ##x.51 0 0) 1)
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k39, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0basepath_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basepath_k37" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basepath_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-length (close _V0basepath_k38) (bruijn file 2 1))
V_CALL(VLookupGlobalVarFast("string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k38, env)}),
      upenv->up->vars[1]
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
  // (substring (bruijn ##k.52 4 0) (bruijn file 6 1) 0 (bruijn ##x.55 0 0))
V_CALL(VLookupGlobalVarFast("substring"), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      VEncodeInt(0l),
      _var0
    );
 }
}
static void _V0loop_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k44" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k44, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.52 4 0) (bruijn ##x.56 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
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
  // (if (bruijn ##p.54 0 0) (+ (close _V0loop_k43) (bruijn i 3 1) 1) (- (close _V0loop_k44) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("+"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k43, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
} else {
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k44, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
}
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
  // (eq? (close _V0loop_k42) #\/ (bruijn ##x.57 0 0))
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k42, env)}),
      VEncodeChar('/'),
      _var0
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
  // (if (bruijn ##p.53 0 0) ((bruijn ##k.52 1 0) (##string ##string.419)) (string-ref (close _V0loop_k41) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodePointer(&_V10string_D419.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VLookupGlobalVarFast("string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k41, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda12" };
 VRecordCall(&dbg);
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
  // (<= (close _V0loop_k40) (bruijn i 0 1) 0)
V_CALL(VLookupGlobalVarFast("<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k40, env)}),
      _var1,
      VEncodeInt(0l)
    );
 }
}
static void _V0basepath_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0basepath_lambda11" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0basepath_k37) (bruijn loop 0 1) (close _V0loop_lambda12))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k37, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda12, env)})
    );
 }
}
static void _V0basepath_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0basepath_lambda10" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0basepath_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0basepath_lambda11) (bruijn ##k.47 0 0) #f)
V_CALL_FUNC(_V0basepath_lambda11, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0decomma_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decomma_k47" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decomma_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_k47, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.59 3 0) (bruijn ##x.61 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0decomma_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decomma_k46" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decomma_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (- (close _V0decomma_k47) (bruijn ##x.62 0 0) 1)
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k47, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0decomma_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decomma_k45" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decomma_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-length (close _V0decomma_k46) (bruijn str 2 1))
V_CALL(VLookupGlobalVarFast("string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k46, env)}),
      upenv->up->vars[1]
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k52, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.63 5 0) (bruijn ##x.67 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (- (close _V0loop_k52) (bruijn i 4 1) 1)
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k52, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l)
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k53, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.63 4 0) (bruijn ##x.68 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.65 0 0) (string-set! (close _V0loop_k51) (bruijn str 5 1) (bruijn i 3 1) #\space) (- (close _V0loop_k53) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("string-set!"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k51, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->up->up->vars[1],
      VEncodeChar(' ')
    );
} else {
V_CALL(VLookupGlobalVarFast("-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k53, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eq? (close _V0loop_k50) #\, (bruijn ##x.69 0 0))
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k50, env)}),
      VEncodeChar(','),
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.64 0 0) ((bruijn ##k.63 1 0) (bruijn str 3 1)) (string-ref (close _V0loop_k49) (bruijn str 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VLookupGlobalVarFast("string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k49, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda15" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (< (close _V0loop_k48) (bruijn i 0 1) 0)
V_CALL(VLookupGlobalVarFast("<"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k48, env)}),
      _var1,
      VEncodeInt(0l)
    );
 }
}
static void _V0decomma_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decomma_lambda14" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0decomma_k45) (bruijn loop 0 1) (close _V0loop_lambda15))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k45, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda15, env)})
    );
 }
}
static void _V0decomma_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decomma_lambda13" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0decomma_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0decomma_lambda14) (bruijn ##k.58 0 0) #f)
V_CALL_FUNC(_V0decomma_lambda14, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0realpath_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realpath_k57" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realpath_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_k57, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.70 4 0) (bruijn ret 1 0))
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]
    );
 }
}
static void _V0realpath_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realpath_k56" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realpath_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (close-port (close _V0realpath_k57) (bruijn proc 1 0))
V_CALL(VLookupGlobalVarFast("close-port"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k57, env)}),
      upenv->vars[0]
    );
 }
}
static void _V0realpath_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realpath_k55" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realpath_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (read-line (close _V0realpath_k56) (bruijn proc 0 0))
V_CALL(VLookupGlobalVarFast("read-line"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k56, env)}),
      _var0
    );
 }
}
static void _V0realpath_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realpath_k54" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realpath_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (open-input-process (close _V0realpath_k55) (bruijn ##x.72 0 0))
V_CALL(VLookupGlobalVarFast("open-input-process"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k55, env)}),
      _var0
    );
 }
}
static void _V0realpath_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0realpath_lambda16" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0realpath_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (sprintf (close _V0realpath_k54) (##string ##string.420) (bruijn file 0 1))
V_CALL(VLookupGlobalVarFast("sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k54, env)}),
      VEncodePointer(&_V10string_D420.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0realbasepath_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realbasepath_k61" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realbasepath_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_k61, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.73 4 0) (bruijn ret 1 0))
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]
    );
 }
}
static void _V0realbasepath_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realbasepath_k60" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realbasepath_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (close-port (close _V0realbasepath_k61) (bruijn proc 1 0))
V_CALL(VLookupGlobalVarFast("close-port"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k61, env)}),
      upenv->vars[0]
    );
 }
}
static void _V0realbasepath_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realbasepath_k59" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realbasepath_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (read-line (close _V0realbasepath_k60) (bruijn proc 0 0))
V_CALL(VLookupGlobalVarFast("read-line"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k60, env)}),
      _var0
    );
 }
}
static void _V0realbasepath_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realbasepath_k58" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realbasepath_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (open-input-process (close _V0realbasepath_k59) (bruijn ##x.75 0 0))
V_CALL(VLookupGlobalVarFast("open-input-process"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k59, env)}),
      _var0
    );
 }
}
static void _V0realbasepath_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0realbasepath_lambda17" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0realbasepath_lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (sprintf (close _V0realbasepath_k58) (##string ##string.421) (bruijn file 0 1))
V_CALL(VLookupGlobalVarFast("sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k58, env)}),
      VEncodePointer(&_V10string_D421.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0display__help_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k80" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k80, runtime, upenv, 1, argc, _var0) {
  // (displayln (bruijn ##k.76 19 0) (##string ##string.422))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VGetArg(upenv, 19-1, 0),
      VEncodePointer(&_V10string_D422.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k79" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k80) (##string ##string.423))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k80, env)}),
      VEncodePointer(&_V10string_D423.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k78" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k79) (##string ##string.424))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k79, env)}),
      VEncodePointer(&_V10string_D424.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k77" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k78) (##string ##string.425))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k78, env)}),
      VEncodePointer(&_V10string_D425.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k76" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k77) (##string ##string.426))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k77, env)}),
      VEncodePointer(&_V10string_D426.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k75" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k76) (##string ##string.427))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k76, env)}),
      VEncodePointer(&_V10string_D427.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k74" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k75) (##string ##string.428))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k75, env)}),
      VEncodePointer(&_V10string_D428.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k73" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k74) (##string ##string.426))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k74, env)}),
      VEncodePointer(&_V10string_D426.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k72" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k73) (##string ##string.429))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k73, env)}),
      VEncodePointer(&_V10string_D429.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k71" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k72) (##string ##string.430))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k72, env)}),
      VEncodePointer(&_V10string_D430.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k70" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k71) (##string ##string.431))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k71, env)}),
      VEncodePointer(&_V10string_D431.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k69" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k70) (##string ##string.432))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k70, env)}),
      VEncodePointer(&_V10string_D432.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k68" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k69) (##string ##string.433))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k69, env)}),
      VEncodePointer(&_V10string_D433.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k67" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k68) (##string ##string.434))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k68, env)}),
      VEncodePointer(&_V10string_D434.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k66" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k67) (##string ##string.435))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k67, env)}),
      VEncodePointer(&_V10string_D435.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k65" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k66) (##string ##string.436))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k66, env)}),
      VEncodePointer(&_V10string_D436.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k64" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k65) (##string ##string.437))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k65, env)}),
      VEncodePointer(&_V10string_D437.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k63" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k64) (##string ##string.438))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k64, env)}),
      VEncodePointer(&_V10string_D438.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k62" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k63) (##string ##string.439))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k63, env)}),
      VEncodePointer(&_V10string_D439.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__help_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_lambda18" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_lambda18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k62) (##string ##string.440))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k62, env)}),
      VEncodePointer(&_V10string_D440.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__version_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_k83" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__version_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__version_k83, runtime, upenv, 1, argc, _var0) {
  // (displayln (bruijn ##k.96 3 0) (##string ##string.441))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D441.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0display__version_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_k82" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__version_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__version_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (printf (close _V0display__version_k83) (##string ##string.442) (bruijn ##x.98 1 0) (bruijn ##x.99 0 0))
V_CALL(VLookupGlobalVarFast("printf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k83, env)}),
      VEncodePointer(&_V10string_D442.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0display__version_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_k81" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__version_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__version_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cadr (close _V0display__version_k82) version)
V_CALL(VLookupGlobalVarFast("cadr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k82, env)}),
      VLookupGlobalVarFast("version")
    );
 }
}
static void _V0display__version_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_lambda19" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__version_lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__version_lambda19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (car (close _V0display__version_k81) version)
V_CALL(VLookupGlobalVarFast("car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k81, env)}),
      VLookupGlobalVarFast("version")
    );
 }
}
static void global_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k86" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k86, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.100 3 0) (bruijn ##x.102 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void global_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k85" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (getopt (close global_k86) (##string ##string.443) (bruijn ##x.103 0 0) (##inline ##sys.qcons (##inline ##sys.qcons (quote shared) (##inline ##sys.qcons (quote #f) (##inline ##sys.qcons (quote shared) (quote ())))) (##inline ##sys.qcons (##inline ##sys.qcons (quote help) (##inline ##sys.qcons (quote #f) (##inline ##sys.qcons (quote help) (quote ())))) (##inline ##sys.qcons (##inline ##sys.qcons (quote api) (##inline ##sys.qcons (quote #t) (##inline ##sys.qcons (quote api) (quote ())))) (##inline ##sys.qcons (##inline ##sys.qcons (quote version) (##inline ##sys.qcons (quote #f) (##inline ##sys.qcons (quote version) (quote ())))) (##inline ##sys.qcons (##inline ##sys.qcons (quote keep-temps) (##inline ##sys.qcons (quote #f) (##inline ##sys.qcons (quote keep-temps) (quote ())))) (##inline ##sys.qcons (##inline ##sys.qcons (quote makefile) (##inline ##sys.qcons (quote #f) (##inline ##sys.qcons (quote makefile) (quote ())))) (##inline ##sys.qcons (##inline ##sys.qcons (quote maketarget) (##inline ##sys.qcons (quote #t) (##inline ##sys.qcons (quote maketarget) (quote ())))) (##inline ##sys.qcons (##inline ##sys.qcons (quote benchmark) (##inline ##sys.qcons (quote #f) (##inline ##sys.qcons (quote benchmark) (quote ())))) (quote ()))))))))))
V_CALL(VLookupGlobalVarFast("getopt"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k86, env)}),
      VEncodePointer(&_V10string_D443.sym, VPOINTER_OTHER),
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
VEncodePointer(&_V0makefile.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodeBool(false),
      VInlineCons(
VEncodePointer(&_V0makefile.sym, VPOINTER_OTHER),
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0maketarget.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodeBool(true),
      VInlineCons(
VEncodePointer(&_V0maketarget.sym, VPOINTER_OTHER),
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

    )

    )

    );
 }
}
static void global_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k84" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (command-line (close global_k85))
V_CALL(VLookupGlobalVarFast("command-line"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k85, env)})
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.141 5 0) obj-files (bruijn ##x.143 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0obj__files.sym, VPOINTER_OTHER),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cons (close _V0loop_k96) (bruijn ##x.144 0 0) obj-files)
V_CALL(VLookupGlobalVarFast("cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k96, env)}),
      _var0,
      VLookupGlobalVarFast("obj-files")
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.141 5 0) scm-files (bruijn ##x.145 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0scm__files.sym, VPOINTER_OTHER),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cons (close _V0loop_k98) (bruijn ##x.146 0 0) scm-files)
V_CALL(VLookupGlobalVarFast("cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k98, env)}),
      _var0,
      VLookupGlobalVarFast("scm-files")
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.142 0 0) (cdar (close _V0loop_k95) (bruijn args 8 1)) (cdar (close _V0loop_k97) (bruijn args 8 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k95, env)}),
      VGetArg(upenv, 8-1, 1)
    );
} else {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k97, env)}),
      VGetArg(upenv, 8-1, 1)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (equal? (close _V0loop_k94) (bruijn ##x.147 0 0) (##string ##string.444))
V_CALL(VLookupGlobalVarFast("equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k94, env)}),
      _var0,
      VEncodePointer(&_V10string_D444.sym, VPOINTER_OTHER)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (extension (close _V0loop_k93) (bruijn ##x.148 0 0))
V_CALL(VLookupGlobalVarFast("extension"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k93, env)}),
      _var0
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.141 7 0) out-file (bruijn ##x.155 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V0out__file.sym, VPOINTER_OTHER),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.141 11 0) paths (bruijn ##x.157 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V0paths.sym, VPOINTER_OTHER),
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (append (close _V0loop_k110) paths (bruijn ##x.158 0 0))
V_CALL(VLookupGlobalVarFast("append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k110, env)}),
      VLookupGlobalVarFast("paths"),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (list (close _V0loop_k109) (bruijn ##x.159 0 0))
V_CALL(VLookupGlobalVarFast("list"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k109, env)}),
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (realpath (close _V0loop_k108) (bruijn ##x.160 0 0))
V_CALL(VLookupGlobalVarFast("realpath"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k108, env)}),
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k116, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.167 0 0) (<= (bruijn ##k.166 1 0) 0 optimization 3) ((bruijn ##k.166 1 0) #f))
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
static void _V0loop_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k115" };
 VRecordCall(&dbg);
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
  // (if optimization (integer? (close _V0loop_k116) optimization) ((bruijn ##k.166 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast("optimization"))) {
V_CALL(VLookupGlobalVarFast("integer?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k116, env)}),
      VLookupGlobalVarFast("optimization")
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k119, runtime, upenv, 1, argc, _var0) {
  // (compiler-error (bruijn ##k.141 14 0) (##string ##string.445) (bruijn ##x.164 0 0))
V_CALL(VLookupGlobalVarFast("compiler-error"), runtime,
      VGetArg(upenv, 14-1, 0),
      VEncodePointer(&_V10string_D445.sym, VPOINTER_OTHER),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.163 0 0) (cdar (close _V0loop_k119) (bruijn args 18 1)) ((bruijn ##k.141 13 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k119, env)}),
      VGetArg(upenv, 18-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close _V0loop_k118) (bruijn ##x.165 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k118, env)}),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k115) (close _V0loop_k117))
V_CALL_FUNC(_V0loop_k115, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k117, env)})
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0loop_k114) optimization (bruijn ##x.168 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k114, env)}),
      VEncodePointer(&_V0optimization.sym, VPOINTER_OTHER),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string->number (close _V0loop_k113) (bruijn ##x.169 0 0))
V_CALL(VLookupGlobalVarFast("string->number"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k113, env)}),
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k125, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.176 0 0) (<= (bruijn ##k.175 1 0) 0 expand? 2) ((bruijn ##k.175 1 0) #f))
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
static void _V0loop_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k124" };
 VRecordCall(&dbg);
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
  // (if expand? (integer? (close _V0loop_k125) expand?) ((bruijn ##k.175 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast("expand?"))) {
V_CALL(VLookupGlobalVarFast("integer?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k125, env)}),
      VLookupGlobalVarFast("expand?")
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k128, runtime, upenv, 1, argc, _var0) {
  // (compiler-error (bruijn ##k.141 15 0) (##string ##string.446) (bruijn ##x.173 0 0))
V_CALL(VLookupGlobalVarFast("compiler-error"), runtime,
      VGetArg(upenv, 15-1, 0),
      VEncodePointer(&_V10string_D446.sym, VPOINTER_OTHER),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.172 0 0) (cdar (close _V0loop_k128) (bruijn args 19 1)) ((bruijn ##k.141 14 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k128, env)}),
      VGetArg(upenv, 19-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close _V0loop_k127) (bruijn ##x.174 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k127, env)}),
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k124) (close _V0loop_k126))
V_CALL_FUNC(_V0loop_k124, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k126, env)})
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0loop_k123) expand? (bruijn ##x.177 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k123, env)}),
      VEncodePointer(&_V0expand_Q.sym, VPOINTER_OTHER),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string->number (close _V0loop_k122) (bruijn ##x.178 0 0))
V_CALL(VLookupGlobalVarFast("string->number"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k122, env)}),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k134, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.195 1 0) (compiler-error (bruijn ##k.196 0 0) (##string ##string.447)) ((bruijn ##k.196 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D447.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k141, runtime, upenv, 1, argc, _var0) {
  // (eq? (bruijn ##k.190 2 0) (bruijn ##x.191 0 0) #\,)
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodeChar(',')
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-ref (close _V0loop_k141) (bruijn ##x.192 0 0) 1)
V_CALL(VLookupGlobalVarFast("string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k141, env)}),
      _var0,
      VEncodeInt(1l)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.189 1 0) (cdar (close _V0loop_k140) (bruijn args 24 1)) ((bruijn ##k.190 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k140, env)}),
      VGetArg(upenv, 24-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k144, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.186 1 0) (compiler-error (bruijn ##k.187 0 0) (##string ##string.448)) ((bruijn ##k.187 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D448.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.141 25 0) c-options (bruijn ##x.182 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 25-1, 0),
      VEncodePointer(&_V0c__options.sym, VPOINTER_OTHER),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cons (close _V0loop_k149) (bruijn ##x.183 0 0) c-options)
V_CALL(VLookupGlobalVarFast("cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k149, env)}),
      _var0,
      VLookupGlobalVarFast("c-options")
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (decomma (close _V0loop_k148) (bruijn ##x.184 0 0))
V_CALL(VLookupGlobalVarFast("decomma"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k148, env)}),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (substring (close _V0loop_k147) (bruijn ##x.185 0 0) 1)
V_CALL(VLookupGlobalVarFast("substring"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k147, env)}),
      _var0,
      VEncodeInt(1l)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cdar (close _V0loop_k146) (bruijn args 26 1))
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k146, env)}),
      VGetArg(upenv, 26-1, 1)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k144) (close _V0loop_k145))
V_CALL_FUNC(_V0loop_k144, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k145, env)})
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close _V0loop_k143) (bruijn ##x.188 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k143, env)}),
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k139) (close _V0loop_k142))
V_CALL_FUNC(_V0loop_k139, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k142, env)})
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (>= (close _V0loop_k138) (bruijn ##x.193 0 0) 2)
V_CALL(VLookupGlobalVarFast(">="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k138, env)}),
      _var0,
      VEncodeInt(2l)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-length (close _V0loop_k137) (bruijn ##x.194 0 0))
V_CALL(VLookupGlobalVarFast("string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k137, env)}),
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cdar (close _V0loop_k136) (bruijn args 20 1))
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k136, env)}),
      VGetArg(upenv, 20-1, 1)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k134) (close _V0loop_k135))
V_CALL_FUNC(_V0loop_k134, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k135, env)})
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close _V0loop_k133) (bruijn ##x.197 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k133, env)}),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eq? (close _V0loop_k132) (bruijn ##x.198 0 0) #\c)
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k132, env)}),
      _var0,
      VEncodeChar('c')
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-ref (close _V0loop_k131) (bruijn ##x.199 0 0) 0)
V_CALL(VLookupGlobalVarFast("string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k131, env)}),
      _var0,
      VEncodeInt(0l)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k151, runtime, upenv, 1, argc, _var0) {
  // (exit (bruijn ##k.141 12 0) 0)
V_CALL(VLookupGlobalVarFast("exit"), runtime,
      VGetArg(upenv, 12-1, 0),
      VEncodeInt(0l)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k153, runtime, upenv, 1, argc, _var0) {
  // (exit (bruijn ##k.141 13 0) 0)
V_CALL(VLookupGlobalVarFast("exit"), runtime,
      VGetArg(upenv, 13-1, 0),
      VEncodeInt(0l)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.141 16 0) api (bruijn ##x.206 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 16-1, 0),
      VEncodePointer(&_V0api.sym, VPOINTER_OTHER),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string->number (close _V0loop_k157) (bruijn ##x.207 0 0))
V_CALL(VLookupGlobalVarFast("string->number"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k157, env)}),
      _var0
    );
 }
}
static void _V0loop_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k162" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.141 19 0) maketargets (bruijn ##x.211 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 19-1, 0),
      VEncodePointer(&_V0maketargets.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k161" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cons (close _V0loop_k162) (bruijn ##x.212 0 0) maketargets)
V_CALL(VLookupGlobalVarFast("cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k162, env)}),
      _var0,
      VLookupGlobalVarFast("maketargets")
    );
 }
}
static void _V0loop_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k167" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k167, runtime, upenv, 1, argc, _var0) {
  // (compiler-error (bruijn ##k.141 22 0) (##string ##string.449) (bruijn ##x.216 0 0))
V_CALL(VLookupGlobalVarFast("compiler-error"), runtime,
      VGetArg(upenv, 22-1, 0),
      VEncodePointer(&_V10string_D449.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k166" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cdar (close _V0loop_k167) (bruijn args 26 1))
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k167, env)}),
      VGetArg(upenv, 26-1, 1)
    );
 }
}
static void _V0loop_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k165" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (newline (close _V0loop_k166))
V_CALL(VLookupGlobalVarFast("newline"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k166, env)})
    );
 }
}
static void _V0loop_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k164" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (write (close _V0loop_k165) (bruijn ##x.217 0 0))
V_CALL(VLookupGlobalVarFast("write"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k165, env)}),
      _var0
    );
 }
}
static void _V0loop_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k163" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.213 0 0) (set! (bruijn ##k.141 18 0) benchmark? #t) (caar (close _V0loop_k164) (bruijn args 23 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 18-1, 0),
      VEncodePointer(&_V0benchmark_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast("caar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k164, env)}),
      VGetArg(upenv, 23-1, 1)
    );
}
 }
}
static void _V0loop_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k160" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.210 0 0) (cdar (close _V0loop_k161) (bruijn args 22 1)) (eqv? (close _V0loop_k163) (bruijn ##x.1 19 0) (quote benchmark)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k161, env)}),
      VGetArg(upenv, 22-1, 1)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k163, env)}),
      VGetArg(upenv, 19-1, 0),
      VEncodePointer(&_V0benchmark.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k159" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.209 0 0) (set! (bruijn ##k.141 16 0) makefile? #t) (eqv? (close _V0loop_k160) (bruijn ##x.1 18 0) (quote maketarget)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 16-1, 0),
      VEncodePointer(&_V0makefile_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k160, env)}),
      VGetArg(upenv, 18-1, 0),
      VEncodePointer(&_V0maketarget.sym, VPOINTER_OTHER)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.208 0 0) (set! (bruijn ##k.141 15 0) keep? #t) (eqv? (close _V0loop_k159) (bruijn ##x.1 17 0) (quote makefile)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 15-1, 0),
      VEncodePointer(&_V0keep_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k159, env)}),
      VGetArg(upenv, 17-1, 0),
      VEncodePointer(&_V0makefile.sym, VPOINTER_OTHER)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.205 0 0) (cdar (close _V0loop_k156) (bruijn args 19 1)) (eqv? (close _V0loop_k158) (bruijn ##x.1 16 0) (quote keep-temps)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k156, env)}),
      VGetArg(upenv, 19-1, 1)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k158, env)}),
      VGetArg(upenv, 16-1, 0),
      VEncodePointer(&_V0keep__temps.sym, VPOINTER_OTHER)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.204 0 0) (set! (bruijn ##k.141 13 0) shared? #t) (eqv? (close _V0loop_k155) (bruijn ##x.1 15 0) (quote api)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 13-1, 0),
      VEncodePointer(&_V0shared_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k155, env)}),
      VGetArg(upenv, 15-1, 0),
      VEncodePointer(&_V0api.sym, VPOINTER_OTHER)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.202 0 0) (display-version (close _V0loop_k153)) (eqv? (close _V0loop_k154) (bruijn ##x.1 14 0) (quote shared)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("display-version"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k153, env)})
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k154, env)}),
      VGetArg(upenv, 14-1, 0),
      VEncodePointer(&_V0shared.sym, VPOINTER_OTHER)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.200 0 0) (display-help (close _V0loop_k151)) (eqv? (close _V0loop_k152) (bruijn ##x.1 13 0) (quote version)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("display-help"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k151, env)})
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k152, env)}),
      VGetArg(upenv, 13-1, 0),
      VEncodePointer(&_V0version.sym, VPOINTER_OTHER)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.179 0 0) (cdar (close _V0loop_k130) (bruijn args 15 1)) (eqv? (close _V0loop_k150) (bruijn ##x.1 12 0) (quote help)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k130, env)}),
      VGetArg(upenv, 15-1, 1)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k150, env)}),
      VGetArg(upenv, 12-1, 0),
      VEncodePointer(&_V0help.sym, VPOINTER_OTHER)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.170 0 0) (cdar (close _V0loop_k121) (bruijn args 14 1)) (eqv? (close _V0loop_k129) (bruijn ##x.1 11 0) (quote #\W)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k121, env)}),
      VGetArg(upenv, 14-1, 1)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k129, env)}),
      VGetArg(upenv, 11-1, 0),
      VEncodeChar('W')
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.161 0 0) (cdar (close _V0loop_k112) (bruijn args 13 1)) (eqv? (close _V0loop_k120) (bruijn ##x.1 10 0) (quote #\E)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k112, env)}),
      VGetArg(upenv, 13-1, 1)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k120, env)}),
      VGetArg(upenv, 10-1, 0),
      VEncodeChar('E')
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.156 0 0) (cdar (close _V0loop_k107) (bruijn args 12 1)) (eqv? (close _V0loop_k111) (bruijn ##x.1 9 0) (quote #\O)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k107, env)}),
      VGetArg(upenv, 12-1, 1)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k111, env)}),
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('O')
    );
}
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
  // (if (bruijn ##p.154 0 0) (cdar (close _V0loop_k105) (bruijn args 11 1)) (eqv? (close _V0loop_k106) (bruijn ##x.1 8 0) (quote #\I)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k105, env)}),
      VGetArg(upenv, 11-1, 1)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k106, env)}),
      VGetArg(upenv, 8-1, 0),
      VEncodeChar('I')
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
  // (if (bruijn ##p.153 0 0) (set! (bruijn ##k.141 5 0) object? #t) (eqv? (close _V0loop_k104) (bruijn ##x.1 7 0) (quote #\o)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0object_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k104, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('o')
    );
}
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
  // (if (bruijn ##p.152 0 0) (set! (bruijn ##k.141 4 0) transpile? #t) (eqv? (close _V0loop_k103) (bruijn ##x.1 6 0) (quote #\c)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V0transpile_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k103, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('c')
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.151 0 0) (set! (bruijn ##k.141 3 0) header? #t) (eqv? (close _V0loop_k102) (bruijn ##x.1 5 0) (quote #\t)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V0header_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k102, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('t')
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.150 0 0) (set! (bruijn ##k.141 2 0) debug? #t) (eqv? (close _V0loop_k101) (bruijn ##x.1 4 0) (quote #\h)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V0debug_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k101, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('h')
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.149 0 0) (set! (bruijn ##k.141 1 0) verbose? #t) (eqv? (close _V0loop_k100) (bruijn ##x.1 3 0) (quote #\g)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->vars[0],
      VEncodePointer(&_V0verbose_Q.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k100, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('g')
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.140 1 0) (cdar (close _V0loop_k92) (bruijn args 5 1)) (eqv? (close _V0loop_k99) (bruijn ##x.1 2 0) (quote #\v)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k92, env)}),
      VGetArg(upenv, 5-1, 1)
    );
} else {
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k99, env)}),
      upenv->up->vars[0],
      VEncodeChar('v')
    );
}
 }
}
static void _V0loop_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k169" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k169, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 1) (bruijn ##k.136 6 0) (bruijn ##x.139 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0loop_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k168" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cdr (close _V0loop_k169) (bruijn args 5 1))
V_CALL(VLookupGlobalVarFast("cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k169, env)}),
      VGetArg(upenv, 5-1, 1)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k91) (close _V0loop_k168))
V_CALL_FUNC(_V0loop_k91, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k168, env)})
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eqv? (close _V0loop_k90) (bruijn ##x.1 0 0) (quote #t))
V_CALL(VLookupGlobalVarFast("eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k90, env)}),
      _var0,
      VEncodeBool(true)
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.137 0 0) (caar (close _V0loop_k89) (bruijn args 2 1)) ((bruijn ##k.136 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("caar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k89, env)}),
      upenv->up->vars[1]
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close _V0loop_k88) (bruijn ##x.218 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k88, env)}),
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda21, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (null? (close _V0loop_k87) (bruijn args 0 1))
V_CALL(VLookupGlobalVarFast("null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k87, env)}),
      _var1
    );
 }
}
static void global_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda20" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)global_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close global_k84) (bruijn loop 0 1) (close _V0loop_lambda21))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k84, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda21, env)})
    );
 }
}
static void _V0count__true_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0count__true_k170" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0count__true_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0count__true_k170, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.220 1 0) (bruijn args 2 1) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k174" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k174, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.227 1 0) ((bruijn ##k.228 0 0) 1) ((bruijn ##k.228 0 0) 0))
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
static void _V0loop_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k176" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k176, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.222 5 0) (bruijn ##x.224 3 0) (bruijn ##x.225 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k175" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (+ (close _V0loop_k176) (bruijn ct 4 2) (bruijn ##x.226 0 0))
V_CALL(VLookupGlobalVarFast("+"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k176, env)}),
      upenv->up->up->up->vars[2],
      _var0
    );
 }
}
static void _V0loop_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k173" };
 VRecordCall(&dbg);
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
  // ((close _V0loop_k174) (close _V0loop_k175))
V_CALL_FUNC(_V0loop_k174, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k175, env)})
    );
 }
}
static void _V0loop_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k172" };
 VRecordCall(&dbg);
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
  // (car (close _V0loop_k173) (bruijn args 2 1))
V_CALL(VLookupGlobalVarFast("car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k173, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k171" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.223 0 0) ((bruijn ##k.222 1 0) (bruijn ct 1 2)) (cdr (close _V0loop_k172) (bruijn args 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]
    );
} else {
V_CALL(VLookupGlobalVarFast("cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k172, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda24" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda24, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda24, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (null? (close _V0loop_k171) (bruijn args 0 1))
V_CALL(VLookupGlobalVarFast("null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k171, env)}),
      _var1
    );
 }
}
static void _V0count__true_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0count__true_lambda23" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0count__true_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0count__true_k170) (bruijn loop 0 1) (close _V0loop_lambda24))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0count__true_k170, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda24, env)})
    );
 }
}
static void _V0count__true_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0count__true_lambda22" };
 VRecordCall(&dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0count__true_lambda22, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0count__true_lambda22, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((close _V0count__true_lambda23) (bruijn ##k.219 0 0) #f)
V_CALL_FUNC(_V0count__true_lambda23, env, runtime,
      _var0,
      VEncodeBool(false)
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
 V_GC_CHECK2_VARARGS((VFunc)global_k178, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.229 0 0) (compiler-error ##sys.next (##string ##string.450)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("compiler-error"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V10string_D450.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)global_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (> (close global_k178) (bruijn ##x.230 0 0) 1)
V_CALL(VLookupGlobalVarFast(">"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k178, env)}),
      _var0,
      VEncodeInt(1l)
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
 V_GC_CHECK2_VARARGS((VFunc)global_k180, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.232 1 0) (null? (bruijn ##k.233 0 0) obj-files) ((bruijn ##k.233 0 0) #f))
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
static void global_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k181" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k181, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.231 0 0) (compiler-error ##sys.next (##string ##string.451)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("compiler-error"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V10string_D451.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)global_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k180) (close global_k181))
V_CALL_FUNC(global_k180, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k181, env)})
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
 V_GC_CHECK2_VARARGS((VFunc)global_k182, runtime, upenv, 1, argc, _var0) {
  // (if makefile? ((bruijn ##k.238 0 0) makefile?) (if header? ((bruijn ##k.238 0 0) header?) (if transpile? ((bruijn ##k.238 0 0) transpile?) (if object? ((bruijn ##k.238 0 0) object?) ((bruijn ##k.238 0 0) expand?)))))
if(VDecodeBool(
VLookupGlobalVarFast("makefile?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("makefile?")
    );
} else {
if(VDecodeBool(
VLookupGlobalVarFast("header?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("header?")
    );
} else {
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
 }
}
static void global_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k185" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k185, runtime, upenv, 1, argc, _var0) {
  // (not (bruijn ##k.236 1 0) (bruijn ##x.237 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      upenv->vars[0],
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc)global_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.235 1 0) (null? (close global_k185) obj-files) ((bruijn ##k.236 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k185, env)}),
      VLookupGlobalVarFast("obj-files")
    );
} else {
V_CALL(_var0, runtime,
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
 V_GC_CHECK2_VARARGS((VFunc)global_k186, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.234 0 0) (compiler-error ##sys.next (##string ##string.452)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("compiler-error"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V10string_D452.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)global_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k184) (close global_k186))
V_CALL_FUNC(global_k184, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k186, env)})
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
 V_GC_CHECK2_VARARGS((VFunc)global_k187, runtime, upenv, 1, argc, _var0) {
  // (if makefile? ((bruijn ##k.244 0 0) makefile?) (if header? ((bruijn ##k.244 0 0) header?) (if transpile? ((bruijn ##k.244 0 0) transpile?) (if object? ((bruijn ##k.244 0 0) object?) ((bruijn ##k.244 0 0) expand?)))))
if(VDecodeBool(
VLookupGlobalVarFast("makefile?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("makefile?")
    );
} else {
if(VDecodeBool(
VLookupGlobalVarFast("header?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("header?")
    );
} else {
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
 V_GC_CHECK2_VARARGS((VFunc)global_k191, runtime, upenv, 1, argc, _var0) {
  // (not (bruijn ##k.241 2 0) (bruijn ##x.242 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      upenv->up->vars[0],
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc)global_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (null? (close global_k191) (bruijn ##x.243 0 0))
V_CALL(VLookupGlobalVarFast("null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k191, env)}),
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc)global_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.240 1 0) (if out-file (cdr (close global_k190) scm-files) ((bruijn ##k.241 0 0) #f)) ((bruijn ##k.241 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
if(VDecodeBool(
VLookupGlobalVarFast("out-file"))) {
V_CALL(VLookupGlobalVarFast("cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k190, env)}),
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
static void global_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k192" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k192, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.239 0 0) (compiler-error ##sys.next (##string ##string.453)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("compiler-error"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V10string_D453.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)global_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k189) (close global_k192))
V_CALL_FUNC(global_k189, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k192, env)})
    );
 }
}
static void global_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k193" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k193, runtime, upenv, 1, argc, _var0) {
  // (if makefile? ((bruijn ##k.250 0 0) makefile?) (if header? ((bruijn ##k.250 0 0) header?) (if transpile? ((bruijn ##k.250 0 0) transpile?) (if object? ((bruijn ##k.250 0 0) object?) ((bruijn ##k.250 0 0) expand?)))))
if(VDecodeBool(
VLookupGlobalVarFast("makefile?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("makefile?")
    );
} else {
if(VDecodeBool(
VLookupGlobalVarFast("header?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("header?")
    );
} else {
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
 }
}
static void global_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k197" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k197, runtime, upenv, 1, argc, _var0) {
  // (not (bruijn ##k.247 2 0) (bruijn ##x.248 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void global_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k196" };
 VRecordCall(&dbg);
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
  // (null? (close global_k197) (bruijn ##x.249 0 0))
V_CALL(VLookupGlobalVarFast("null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k197, env)}),
      _var0
    );
 }
}
static void global_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k195" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.246 1 0) (cdr (close global_k196) scm-files) ((bruijn ##k.247 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k196, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k198" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k198, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.245 0 0) (compiler-error ##sys.next (##string ##string.454)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("compiler-error"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V10string_D454.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k194" };
 VRecordCall(&dbg);
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
  // ((close global_k195) (close global_k198))
V_CALL_FUNC(global_k195, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k198, env)})
    );
 }
}
static void global_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k202" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k202, runtime, upenv, 1, argc, _var0) {
  // (change-extension (bruijn ##k.253 2 0) (bruijn ##x.254 0 0) (##string ##string.444))
V_CALL(VLookupGlobalVarFast("change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D444.sym, VPOINTER_OTHER)
    );
 }
}
static void global_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k201" };
 VRecordCall(&dbg);
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
  // (basename (close global_k202) (bruijn ##x.255 0 0))
V_CALL(VLookupGlobalVarFast("basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k202, env)}),
      _var0
    );
 }
}
static void global_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k204" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k204, runtime, upenv, 1, argc, _var0) {
  // (change-extension (bruijn ##k.253 2 0) (bruijn ##x.256 0 0) (##string ##string.455))
V_CALL(VLookupGlobalVarFast("change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D455.sym, VPOINTER_OTHER)
    );
 }
}
static void global_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k203" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (basename (close global_k204) (bruijn ##x.257 0 0))
V_CALL(VLookupGlobalVarFast("basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k204, env)}),
      _var0
    );
 }
}
static void global_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k206" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k206, runtime, upenv, 1, argc, _var0) {
  // (change-extension (bruijn ##k.253 2 0) (bruijn ##x.258 0 0) (##string ##string.456))
V_CALL(VLookupGlobalVarFast("change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D456.sym, VPOINTER_OTHER)
    );
 }
}
static void global_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k205" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (basename (close global_k206) (bruijn ##x.259 0 0))
V_CALL(VLookupGlobalVarFast("basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k206, env)}),
      _var0
    );
 }
}
static void global_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k208" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k208, runtime, upenv, 1, argc, _var0) {
  // (change-extension (bruijn ##k.253 2 0) (bruijn ##x.260 0 0) (##string ##string.457))
V_CALL(VLookupGlobalVarFast("change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D457.sym, VPOINTER_OTHER)
    );
 }
}
static void global_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k207" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (basename (close global_k208) (bruijn ##x.261 0 0))
V_CALL(VLookupGlobalVarFast("basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k208, env)}),
      _var0
    );
 }
}
static void global_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k200" };
 VRecordCall(&dbg);
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
  // (if object? (car (close global_k201) scm-files) (if transpile? (car (close global_k203) scm-files) (if expand? (car (close global_k205) scm-files) (if header? (car (close global_k207) scm-files) (if makefile? ((bruijn ##k.253 0 0) out-file) ((bruijn ##k.253 0 0) (##string ##string.458)))))))
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
V_CALL(VLookupGlobalVarFast("car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k201, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
if(VDecodeBool(
VLookupGlobalVarFast("transpile?"))) {
V_CALL(VLookupGlobalVarFast("car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k203, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
if(VDecodeBool(
VLookupGlobalVarFast("expand?"))) {
V_CALL(VLookupGlobalVarFast("car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k205, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
if(VDecodeBool(
VLookupGlobalVarFast("header?"))) {
V_CALL(VLookupGlobalVarFast("car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k207, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
if(VDecodeBool(
VLookupGlobalVarFast("makefile?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("out-file")
    );
} else {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D458.sym, VPOINTER_OTHER)
    );
}
}
}
}
}
 }
}
static void global_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k209" };
 VRecordCall(&dbg);
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
  // (set! ##sys.next out-file (bruijn ##x.252 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0out__file.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k199" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.251 0 0) ((close global_k200) (close global_k209)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(global_k200, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k209, env)})
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0gen__header_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k217" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k217, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.276 1 0) (compiler-error (bruijn ##k.277 0 0) (##string ##string.459)) ((bruijn ##k.277 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D459.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0gen__header_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k220" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k220, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.274 1 0) ((bruijn ##k.275 0 0) (bruijn ##p.274 1 0)) (car (bruijn ##k.275 0 0) (bruijn headers 5 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VLookupGlobalVarFast("car"), runtime,
      _var0,
      VGetArg(upenv, 5-1, 0)
    );
}
 }
}
static void _V0gen__header_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k223" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k223, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.271 1 0) (compiler-error (bruijn ##k.272 0 0) (##string ##string.460)) ((bruijn ##k.272 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D460.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0gen__header_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k228" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k228, runtime, upenv, 1, argc, _var0) {
  // (write (bruijn ##k.268 1 0) (bruijn ##x.269 0 0))
V_CALL(VLookupGlobalVarFast("write"), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0gen__header_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k227" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.267 1 0) (car (close _V0gen__header_k228) (bruijn headers 11 0)) ((bruijn ##k.268 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k228, env)}),
      VGetArg(upenv, 11-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0gen__header_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k229" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k229, runtime, upenv, 1, argc, _var0) {
  // (newline (bruijn ##k.265 3 0))
V_CALL(VLookupGlobalVarFast("newline"), runtime,
      upenv->up->up->vars[0]
    );
 }
}
static void _V0gen__header_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k226" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0gen__header_k227) (close _V0gen__header_k229))
V_CALL_FUNC(_V0gen__header_k227, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k229, env)})
    );
 }
}
static void _V0gen__header_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k225" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close _V0gen__header_k226) (bruijn ##x.270 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k226, env)}),
      _var0
    );
 }
}
static void _V0gen__header_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_lambda26" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_lambda26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (null? (close _V0gen__header_k225) (bruijn headers 8 0))
V_CALL(VLookupGlobalVarFast("null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k225, env)}),
      VGetArg(upenv, 8-1, 0)
    );
 }
}
static void _V0gen__header_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k224" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (with-output-to-file (bruijn ##k.262 12 0) out-file (close _V0gen__header_lambda26))
V_CALL(VLookupGlobalVarFast("with-output-to-file"), runtime,
      VGetArg(upenv, 12-1, 0),
      VLookupGlobalVarFast("out-file"),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_lambda26, env)})
    );
 }
}
static void _V0gen__header_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k222" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0gen__header_k223) (close _V0gen__header_k224))
V_CALL_FUNC(_V0gen__header_k223, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k224, env)})
    );
 }
}
static void _V0gen__header_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k221" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close _V0gen__header_k222) (bruijn ##x.273 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k222, env)}),
      _var0
    );
 }
}
static void _V0gen__header_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k219" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0gen__header_k220) (close _V0gen__header_k221))
V_CALL_FUNC(_V0gen__header_k220, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k221, env)})
    );
 }
}
static void _V0gen__header_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k218" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (null? (close _V0gen__header_k219) (bruijn headers 3 0))
V_CALL(VLookupGlobalVarFast("null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k219, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0gen__header_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k216" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0gen__header_k217) (close _V0gen__header_k218))
V_CALL_FUNC(_V0gen__header_k217, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k218, env)})
    );
 }
}
static void _V0gen__header_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k215" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (> (close _V0gen__header_k216) (bruijn ##x.278 0 0) 1)
V_CALL(VLookupGlobalVarFast(">"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k216, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0gen__header_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k214" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (length (close _V0gen__header_k215) (bruijn headers 0 0))
V_CALL(VLookupGlobalVarFast("length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k215, env)}),
      _var0
    );
 }
}
static void _V0gen__header_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__header_lambda27" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0gen__header_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.279 0 0) (bruijn x 0 1))
V_CALL(_var0, runtime,
      _var1
    );
 }
}
static void _V0gen__header_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k213" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (filter (close _V0gen__header_k214) (close _V0gen__header_lambda27) (bruijn ##x.280 0 0))
V_CALL(VLookupGlobalVarFast("filter"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k214, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_lambda27, env)}),
      _var0
    );
 }
}
static void _V0gen__header_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k212" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (map (close _V0gen__header_k213) header-from-library (bruijn file 0 0))
V_CALL(VLookupGlobalVarFast("map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k213, env)}),
      VLookupGlobalVarFast("header-from-library"),
      _var0
    );
 }
}
static void _V0gen__header_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k211" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (read-all (close _V0gen__header_k212) (bruijn ##x.281 0 0))
V_CALL(VLookupGlobalVarFast("read-all"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k212, env)}),
      _var0
    );
 }
}
static void _V0gen__header_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k210" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (open-input-file (close _V0gen__header_k211) (bruijn ##x.282 0 0))
V_CALL(VLookupGlobalVarFast("open-input-file"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k211, env)}),
      _var0
    );
 }
}
static void _V0gen__header_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_lambda25" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_lambda25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (car (close _V0gen__header_k210) scm-files)
V_CALL(VLookupGlobalVarFast("car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k210, env)}),
      VLookupGlobalVarFast("scm-files")
    );
 }
}
static void global_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k230" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k230, runtime, upenv, 1, argc, _var0) {
  // (exit ##sys.next)
V_CALL(VLookupGlobalVarFast("exit"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)})
    );
 }
}
static void _V0gen__makefile_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k236" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.304 4 0) maketargets (bruijn ##x.305 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V0maketargets.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0gen__makefile_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k235" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (list (close _V0gen__makefile_k236) (bruijn ##x.306 0 0))
V_CALL(VLookupGlobalVarFast("list"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k236, env)}),
      _var0
    );
 }
}
static void _V0gen__makefile_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k234" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (change-extension (close _V0gen__makefile_k235) (bruijn ##x.307 0 0) (##string ##string.444))
V_CALL(VLookupGlobalVarFast("change-extension"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k235, env)}),
      _var0,
      VEncodePointer(&_V10string_D444.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0gen__makefile_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k233" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (basename (close _V0gen__makefile_k234) (bruijn ##x.308 0 0))
V_CALL(VLookupGlobalVarFast("basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k234, env)}),
      _var0
    );
 }
}
static void _V0gen__makefile_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k232" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.303 1 0) (car (close _V0gen__makefile_k233) scm-files) ((bruijn ##k.304 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k233, env)}),
      VLookupGlobalVarFast("scm-files")
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0gen__makefile_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k242" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k242, runtime, upenv, 1, argc, _var0) {
  // (if out-file (open-output-file (bruijn ##k.300 0 0) out-file) (current-output-port (bruijn ##k.300 0 0)))
if(VDecodeBool(
VLookupGlobalVarFast("out-file"))) {
V_CALL(VLookupGlobalVarFast("open-output-file"), runtime,
      _var0,
      VLookupGlobalVarFast("out-file")
    );
} else {
V_CALL(VLookupGlobalVarFast("current-output-port"), runtime,
      _var0
    );
}
 }
}
static void _V0gen__makefile_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k249" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k249, runtime, upenv, 1, argc, _var0) {
  // (if out-file (close-port (bruijn ##k.284 13 0) (bruijn port 6 0)) ((bruijn ##k.284 13 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast("out-file"))) {
V_CALL(VLookupGlobalVarFast("close-port"), runtime,
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 6-1, 0)
    );
} else {
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0gen__makefile_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k248" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (newline (close _V0gen__makefile_k249) (bruijn port 5 0))
V_CALL(VLookupGlobalVarFast("newline"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k249, env)}),
      VGetArg(upenv, 5-1, 0)
    );
 }
}
static void _V0gen__makefile_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k253" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k253, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.295 1 0) (compiler-error (bruijn ##k.296 0 0) (##string ##string.461) (bruijn dep 4 1)) ((bruijn ##k.296 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D461.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0gen__makefile_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k255" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k255, runtime, upenv, 1, argc, _var0) {
  // (format (bruijn ##k.291 5 0) (bruijn port 10 0) (##string ##string.462) (bruijn ##x.294 0 0))
V_CALL(VLookupGlobalVarFast("format"), runtime,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10string_D462.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0gen__makefile_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k254" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (import->path (close _V0gen__makefile_k255) (bruijn dep 4 1))
V_CALL(VLookupGlobalVarFast("import->path"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k255, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0gen__makefile_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k252" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0gen__makefile_k253) (close _V0gen__makefile_k254))
V_CALL_FUNC(_V0gen__makefile_k253, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k254, env)})
    );
 }
}
static void _V0gen__makefile_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k251" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close _V0gen__makefile_k252) (bruijn ##x.297 0 0))
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k252, env)}),
      _var0
    );
 }
}
static void _V0gen__makefile_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k250" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.292 0 0) (valid-import? (close _V0gen__makefile_k251) (bruijn dep 1 1)) ((bruijn ##k.291 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("valid-import?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k251, env)}),
      upenv->vars[1]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0gen__makefile_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__makefile_lambda29" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0gen__makefile_lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (pair? (close _V0gen__makefile_k250) (bruijn dep 0 1))
V_CALL(VLookupGlobalVarFast("pair?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k250, env)}),
      _var1
    );
 }
}
static void _V0gen__makefile_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k247" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (for-each (close _V0gen__makefile_k248) (close _V0gen__makefile_lambda29) (bruijn deps 5 0))
V_CALL(VLookupGlobalVarFast("for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k248, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_lambda29, env)}),
      VGetArg(upenv, 5-1, 0)
    );
 }
}
static void _V0gen__makefile_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k246" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (format (close _V0gen__makefile_k247) (bruijn port 3 0) (##string ##string.462) (bruijn ##x.298 0 0))
V_CALL(VLookupGlobalVarFast("format"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k247, env)}),
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D462.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0gen__makefile_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k245" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (car (close _V0gen__makefile_k246) scm-files)
V_CALL(VLookupGlobalVarFast("car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k246, env)}),
      VLookupGlobalVarFast("scm-files")
    );
 }
}
static void _V0gen__makefile_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k244" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (display (close _V0gen__makefile_k245) (##string ##string.463) (bruijn port 1 0))
V_CALL(VLookupGlobalVarFast("display"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k245, env)}),
      VEncodePointer(&_V10string_D463.sym, VPOINTER_OTHER),
      upenv->vars[0]
    );
 }
}
static void _V0gen__makefile_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__makefile_lambda30" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0gen__makefile_lambda30, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  // (format (bruijn ##k.299 0 0) (bruijn port 1 0) (##string ##string.464) (bruijn target 0 1))
V_CALL(VLookupGlobalVarFast("format"), runtime,
      _var0,
      upenv->vars[0],
      VEncodePointer(&_V10string_D464.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0gen__makefile_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k243" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (for-each (close _V0gen__makefile_k244) (close _V0gen__makefile_lambda30) maketargets)
V_CALL(VLookupGlobalVarFast("for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k244, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_lambda30, env)}),
      VLookupGlobalVarFast("maketargets")
    );
 }
}
static void _V0gen__makefile_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k241" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0gen__makefile_k242) (close _V0gen__makefile_k243))
V_CALL_FUNC(_V0gen__makefile_k242, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k243, env)})
    );
 }
}
static void _V0gen__makefile_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k240" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (gather-dependencies (close _V0gen__makefile_k241) (bruijn file 0 0))
V_CALL(VLookupGlobalVarFast("gather-dependencies"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k241, env)}),
      _var0
    );
 }
}
static void _V0gen__makefile_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k239" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (read-all (close _V0gen__makefile_k240) (bruijn ##x.301 0 0))
V_CALL(VLookupGlobalVarFast("read-all"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k240, env)}),
      _var0
    );
 }
}
static void _V0gen__makefile_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k238" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (open-input-file (close _V0gen__makefile_k239) (bruijn ##x.302 0 0))
V_CALL(VLookupGlobalVarFast("open-input-file"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k239, env)}),
      _var0
    );
 }
}
static void _V0gen__makefile_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k237" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (car (close _V0gen__makefile_k238) scm-files)
V_CALL(VLookupGlobalVarFast("car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k238, env)}),
      VLookupGlobalVarFast("scm-files")
    );
 }
}
static void _V0gen__makefile_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k231" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0gen__makefile_k232) (close _V0gen__makefile_k237))
V_CALL_FUNC(_V0gen__makefile_k232, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k237, env)})
    );
 }
}
static void _V0gen__makefile_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_lambda28" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_lambda28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (null? (close _V0gen__makefile_k231) maketargets)
V_CALL(VLookupGlobalVarFast("null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k231, env)}),
      VLookupGlobalVarFast("maketargets")
    );
 }
}
static void global_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k256" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k256, runtime, upenv, 1, argc, _var0) {
  // (exit ##sys.next)
V_CALL(VLookupGlobalVarFast("exit"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)})
    );
 }
}
static void global_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k257" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k257, runtime, upenv, 1, argc, _var0) {
  // (if header? ((bruijn ##k.316 0 0) header?) (if transpile? ((bruijn ##k.316 0 0) transpile?) ((bruijn ##k.316 0 0) expand?)))
if(VDecodeBool(
VLookupGlobalVarFast("header?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("header?")
    );
} else {
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
}
static void global_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k261" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k261, runtime, upenv, 1, argc, _var0) {
  // (make-temporary-file (bruijn ##k.313 2 0) (bruijn ##x.314 0 0) (##string ##string.455))
V_CALL(VLookupGlobalVarFast("make-temporary-file"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D455.sym, VPOINTER_OTHER)
    );
 }
}
static void global_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k260" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-append (close global_k261) (##string ##string.465) (bruijn ##x.315 0 0))
V_CALL(VLookupGlobalVarFast("string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k261, env)}),
      VEncodePointer(&_V10string_D465.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda31" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda31, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda31, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (basename (close global_k260) (bruijn file 0 1))
V_CALL(VLookupGlobalVarFast("basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k260, env)}),
      _var1
    );
 }
}
static void global_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k259" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.311 1 0) (list (bruijn ##k.312 0 0) out-file) (map (bruijn ##k.312 0 0) (close global_lambda31) scm-files))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("list"), runtime,
      _var0,
      VLookupGlobalVarFast("out-file")
    );
} else {
V_CALL(VLookupGlobalVarFast("map"), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda31, env)}),
      VLookupGlobalVarFast("scm-files")
    );
}
 }
}
static void global_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k262" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next cc-files (bruijn ##x.310 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0cc__files.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k258" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k259) (close global_k262))
V_CALL_FUNC(global_k259, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k262, env)})
    );
 }
}
static void global_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k263" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k263, runtime, upenv, 1, argc, _var0) {
  // (if header? ((bruijn ##k.323 0 0) header?) (if transpile? ((bruijn ##k.323 0 0) transpile?) ((bruijn ##k.323 0 0) expand?)))
if(VDecodeBool(
VLookupGlobalVarFast("header?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast("header?")
    );
} else {
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
}
static void global_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k267" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k267, runtime, upenv, 1, argc, _var0) {
  // (make-temporary-file (bruijn ##k.320 2 0) (bruijn ##x.321 0 0) (##string ##string.444))
V_CALL(VLookupGlobalVarFast("make-temporary-file"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D444.sym, VPOINTER_OTHER)
    );
 }
}
static void global_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k266" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-append (close global_k267) (##string ##string.465) (bruijn ##x.322 0 0))
V_CALL(VLookupGlobalVarFast("string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k267, env)}),
      VEncodePointer(&_V10string_D465.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda32" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda32, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (basename (close global_k266) (bruijn file 0 1))
V_CALL(VLookupGlobalVarFast("basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k266, env)}),
      _var1
    );
 }
}
static void global_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k265" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.318 1 0) (list (bruijn ##k.319 0 0) #f) (if object? (list (bruijn ##k.319 0 0) out-file) (map (bruijn ##k.319 0 0) (close global_lambda32) scm-files)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("list"), runtime,
      _var0,
      VEncodeBool(false)
    );
} else {
if(VDecodeBool(
VLookupGlobalVarFast("object?"))) {
V_CALL(VLookupGlobalVarFast("list"), runtime,
      _var0,
      VLookupGlobalVarFast("out-file")
    );
} else {
V_CALL(VLookupGlobalVarFast("map"), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda32, env)}),
      VLookupGlobalVarFast("scm-files")
    );
}
}
 }
}
static void global_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k268" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next cc-obj-files (bruijn ##x.317 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0cc__obj__files.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k264" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k265) (close global_k268))
V_CALL_FUNC(global_k265, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k268, env)})
    );
 }
}
static void global_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k270" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k270, runtime, upenv, 1, argc, _var0) {
  // (if debug? ((bruijn ##k.329 0 0) (##string ##string.466)) ((bruijn ##k.329 0 0) (##string ##string.426)))
if(VDecodeBool(
VLookupGlobalVarFast("debug?"))) {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D466.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D426.sym, VPOINTER_OTHER)
    );
}
 }
}
static void global_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k272" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k272, runtime, upenv, 1, argc, _var0) {
  // (if shared? ((bruijn ##k.328 0 0) (##string ##string.467)) ((bruijn ##k.328 0 0) (##string ##string.426)))
if(VDecodeBool(
VLookupGlobalVarFast("shared?"))) {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D467.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D426.sym, VPOINTER_OTHER)
    );
}
 }
}
static void global_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k274" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next cc-command-flags (bruijn ##x.324 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0cc__command__flags.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k273" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-append (close global_k274) (##string ##string.468) (bruijn ##x.325 2 0) (bruijn ##x.326 1 0) (bruijn ##x.327 0 0))
V_CALL(VLookupGlobalVarFast("string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k274, env)}),
      VEncodePointer(&_V10string_D468.sym, VPOINTER_OTHER),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void global_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k271" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k272) (close global_k273))
V_CALL_FUNC(global_k272, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k273, env)})
    );
 }
}
static void global_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k269" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k270) (close global_k271))
V_CALL_FUNC(global_k270, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k271, env)})
    );
 }
}
static void global_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k275" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! ##sys.next cc-command (bruijn ##x.330 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0cc__command.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k276" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.331 1 0) cc-command (bruijn ##x.332 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->vars[0],
      VEncodePointer(&_V0cc__command.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda33" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda33, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (string-append (close global_k276) cc-command (bruijn option 0 1))
V_CALL(VLookupGlobalVarFast("string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k276, env)}),
      VLookupGlobalVarFast("cc-command"),
      _var1
    );
 }
}
static void global_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k277" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next stdout (bruijn ##x.333 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0stdout.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k279" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (define ##sys.next num-mains (bruijn ##x.334 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0num__mains.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k280" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k280, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn x 1 1) ((bruijn ##k.337 0 0) 1) ((bruijn ##k.337 0 0) 0))
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
static void global_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k281" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k281, runtime, upenv, 1, argc, _var0) {
  // (+ (bruijn ##k.335 1 0) (bruijn acc 1 2) (bruijn ##x.336 0 0))
V_CALL(VLookupGlobalVarFast("+"), runtime,
      upenv->vars[0],
      upenv->vars[2],
      _var0
    );
 }
}
static void global_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "global_lambda34" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to global_lambda34, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda34, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close global_k280) (close global_k281))
V_CALL_FUNC(global_k280, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k281, env)})
    );
 }
}
static void global_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k278" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (fold (close global_k279) (close global_lambda34) 0 (bruijn ##x.338 0 0))
V_CALL(VLookupGlobalVarFast("fold"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k279, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda34, env)}),
      VEncodeInt(0l),
      _var0
    );
 }
}
static void global_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k285" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k285, runtime, upenv, 1, argc, _var0) {
  // (append (bruijn ##k.353 1 0) (bruijn ##x.354 0 0))
V_CALL(VLookupGlobalVarFast("append"), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void global_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k284" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn fd 1 0) (read-all (close global_k285) (bruijn fd 1 0)) (compiler-error (bruijn ##k.353 0 0) (##string ##string.470) (bruijn scm-file 4 1)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("read-all"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k285, env)}),
      upenv->vars[0]
    );
} else {
V_CALL(VLookupGlobalVarFast("compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D470.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]
    );
}
 }
}
static void global_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k297" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k297, runtime, upenv, 1, argc, _var0) {
  // (apply (bruijn ##k.340 13 0) printout2 (bruijn ##x.344 0 0))
V_CALL(VLookupGlobalVarFast("apply"), runtime,
      VGetArg(upenv, 13-1, 0),
      VLookupGlobalVarFast("printout2"),
      _var0
    );
 }
}
static void global_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k296" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cons (close global_k297) debug? (bruijn ##x.345 0 0))
V_CALL(VLookupGlobalVarFast("cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k297, env)}),
      VLookupGlobalVarFast("debug?"),
      _var0
    );
 }
}
static void global_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k295" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k295, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (cons (close global_k296) shared? (bruijn funs 0 0))
V_CALL(VLookupGlobalVarFast("cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k296, env)}),
      VLookupGlobalVarFast("shared?"),
      _var0
    );
 }
}
static void global_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k294" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (to-functions (close global_k295) (bruijn bruijn 0 0))
V_CALL(VLookupGlobalVarFast("to-functions"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k295, env)}),
      _var0
    );
 }
}
static void global_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k293" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.343 0 0) (for-each (bruijn ##k.340 9 0) write (bruijn opt 1 0)) (map (close global_k294) bruijn-ify (bruijn opt 1 0)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("for-each"), runtime,
      VGetArg(upenv, 9-1, 0),
      VLookupGlobalVarFast("write"),
      upenv->vars[0]
    );
} else {
V_CALL(VLookupGlobalVarFast("map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k294, env)}),
      VLookupGlobalVarFast("bruijn-ify"),
      upenv->vars[0]
    );
}
 }
}
static void global_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k292" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eq? (close global_k293) expand? 2)
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k293, env)}),
      VLookupGlobalVarFast("expand?"),
      VEncodeInt(2l)
    );
 }
}
static void global_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k298" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k298, runtime, upenv, 1, argc, _var0) {
  // (deannotate-lambdas (bruijn ##k.346 1 0) (bruijn ##x.347 0 0))
V_CALL(VLookupGlobalVarFast("deannotate-lambdas"), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void global_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda37" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (optimize (close global_k298) (bruijn expr 0 1))
V_CALL(VLookupGlobalVarFast("optimize"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k298, env)}),
      _var1
    );
 }
}
static void global_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k291" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.342 0 0) (for-each (bruijn ##k.340 7 0) write (bruijn cps 1 0)) (map (close global_k292) (close global_lambda37) (bruijn cps 1 0)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("for-each"), runtime,
      VGetArg(upenv, 7-1, 0),
      VLookupGlobalVarFast("write"),
      upenv->vars[0]
    );
} else {
V_CALL(VLookupGlobalVarFast("map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k292, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda37, env)}),
      upenv->vars[0]
    );
}
 }
}
static void global_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k290" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eq? (close global_k291) expand? 1)
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k291, env)}),
      VLookupGlobalVarFast("expand?"),
      VEncodeInt(1l)
    );
 }
}
static void global_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k299" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k299, runtime, upenv, 1, argc, _var0) {
  // (annotate-lambdas (bruijn ##k.348 1 0) (bruijn ##x.349 0 0))
V_CALL(VLookupGlobalVarFast("annotate-lambdas"), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void global_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda38" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda38, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (to-cps (close global_k299) (bruijn expr 0 1))
V_CALL(VLookupGlobalVarFast("to-cps"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k299, env)}),
      _var1
    );
 }
}
static void global_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k289" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (map (close global_k290) (close global_lambda38) (bruijn ##x.350 0 0))
V_CALL(VLookupGlobalVarFast("map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k290, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda38, env)}),
      _var0
    );
 }
}
static void global_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k288" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.341 0 0) (for-each (bruijn ##k.340 4 0) write (bruijn expanded 1 0)) (apply (close global_k289) append (bruijn expanded 1 0)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("for-each"), runtime,
      upenv->up->up->up->vars[0],
      VLookupGlobalVarFast("write"),
      upenv->vars[0]
    );
} else {
V_CALL(VLookupGlobalVarFast("apply"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k289, env)}),
      VLookupGlobalVarFast("append"),
      upenv->vars[0]
    );
}
 }
}
static void global_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k287" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k287, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (eq? (close global_k288) expand? 0)
V_CALL(VLookupGlobalVarFast("eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k288, env)}),
      VLookupGlobalVarFast("expand?"),
      VEncodeInt(0l)
    );
 }
}
static void global_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k300" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k300, runtime, upenv, 1, argc, _var0) {
  // (expand-toplevel (bruijn ##k.351 1 0) (bruijn e 1 1) (bruijn ##x.352 0 0))
V_CALL(VLookupGlobalVarFast("expand-toplevel"), runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0
    );
 }
}
static void global_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda39" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (cons (close global_k300) (bruijn path 4 0) paths)
V_CALL(VLookupGlobalVarFast("cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k300, env)}),
      upenv->up->up->up->vars[0],
      VLookupGlobalVarFast("paths")
    );
 }
}
static void global_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k286" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k286, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (map (close global_k287) (close global_lambda39) (bruijn file 0 0))
V_CALL(VLookupGlobalVarFast("map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k287, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda39, env)}),
      _var0
    );
 }
}
static void global_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k283" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k284) (close global_k286))
V_CALL_FUNC(global_k284, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k286, env)})
    );
 }
}
static void global_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda36" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (open-input-file (close global_k283) (bruijn scm-file 2 1))
V_CALL(VLookupGlobalVarFast("open-input-file"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k283, env)}),
      upenv->up->vars[1]
    );
 }
}
static void global_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k282" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (with-output-to-file (bruijn ##k.339 1 0) (bruijn cc-file 1 2) (close global_lambda36))
V_CALL(VLookupGlobalVarFast("with-output-to-file"), runtime,
      upenv->vars[0],
      upenv->vars[2],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda36, env)})
    );
 }
}
static void global_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "global_lambda35" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to global_lambda35, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda35, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (realbasepath (close global_k282) (bruijn scm-file 0 1))
V_CALL(VLookupGlobalVarFast("realbasepath"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k282, env)}),
      _var1
    );
 }
}
static void global_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k304" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k304, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.363 0 0) (not (bruijn ##k.362 1 0) expand?) ((bruijn ##k.362 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("not"), runtime,
      upenv->vars[0],
      VLookupGlobalVarFast("expand?")
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k303" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.361 1 0) (not (close global_k304) transpile?) ((bruijn ##k.362 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k304, env)}),
      VLookupGlobalVarFast("transpile?")
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k307" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k307, runtime, upenv, 1, argc, _var0) {
  // (displayln (bruijn ##k.359 1 0) (bruijn ##x.360 0 0))
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void global_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k306" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if verbose? (sprintf (close global_k307) (##string ##string.471) (bruijn path 3 0) cc-command (bruijn obj-file 4 3) (bruijn cc-file 4 2)) ((bruijn ##k.359 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast("verbose?"))) {
V_CALL(VLookupGlobalVarFast("sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k307, env)}),
      VEncodePointer(&_V10string_D471.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0],
      VLookupGlobalVarFast("cc-command"),
      upenv->up->up->up->vars[3],
      upenv->up->up->up->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k309" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k309, runtime, upenv, 1, argc, _var0) {
  // (system (bruijn ##k.355 5 0) (bruijn ##x.358 0 0))
V_CALL(VLookupGlobalVarFast("system"), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void global_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k308" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (sprintf (close global_k309) (##string ##string.471) (bruijn path 3 0) cc-command (bruijn obj-file 4 3) (bruijn cc-file 4 2))
V_CALL(VLookupGlobalVarFast("sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k309, env)}),
      VEncodePointer(&_V10string_D471.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0],
      VLookupGlobalVarFast("cc-command"),
      upenv->up->up->up->vars[3],
      upenv->up->up->up->vars[2]
    );
 }
}
static void global_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k305" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.356 0 0) ((close global_k306) (close global_k308)) ((bruijn ##k.355 3 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(global_k306, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k308, env)})
    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k302" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k303) (close global_k305))
V_CALL_FUNC(global_k303, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k305, env)})
    );
 }
}
static void global_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k301" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (not (close global_k302) header?)
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k302, env)}),
      VLookupGlobalVarFast("header?")
    );
 }
}
static void global_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "global_lambda40" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to global_lambda40, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda40, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (realbasepath (close global_k301) (bruijn scm-file 0 1))
V_CALL(VLookupGlobalVarFast("realbasepath"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k301, env)}),
      _var1
    );
 }
}
static void global_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k310" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k310, runtime, upenv, 1, argc, _var0) {
  // (if shared? (> (bruijn ##k.365 0 0) num-mains 0) ((bruijn ##k.365 0 0) #f))
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
static void global_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k311" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k311, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.364 0 0) (compiler-error ##sys.next (##string ##string.472)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("compiler-error"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V10string_D472.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k312" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k312, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.366 0 0) (compiler-error ##sys.next (##string ##string.473)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("compiler-error"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V10string_D473.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0delete__file_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0delete__file_k313" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0delete__file_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0delete__file_k313, runtime, upenv, 1, argc, _var0) {
  // (system (bruijn ##k.367 1 0) (bruijn ##x.368 0 0))
V_CALL(VLookupGlobalVarFast("system"), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0delete__file_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0delete__file_lambda41" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0delete__file_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0delete__file_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (sprintf (close _V0delete__file_k313) (##string ##string.474) (bruijn f 0 1))
V_CALL(VLookupGlobalVarFast("sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete__file_k313, env)}),
      VEncodePointer(&_V10string_D474.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void global_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k317" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k317, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.395 0 0) (not (bruijn ##k.393 2 0) object?) ((bruijn ##k.393 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("not"), runtime,
      upenv->up->vars[0],
      VLookupGlobalVarFast("object?")
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k316" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.394 0 0) (not (close global_k317) expand?) ((bruijn ##k.393 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k317, env)}),
      VLookupGlobalVarFast("expand?")
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k315" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.392 1 0) (not (close global_k316) transpile?) ((bruijn ##k.393 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k316, env)}),
      VLookupGlobalVarFast("transpile?")
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k320" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k320, runtime, upenv, 1, argc, _var0) {
  // (if debug? ((bruijn ##k.391 0 0) (##string ##string.466)) ((bruijn ##k.391 0 0) (##string ##string.426)))
if(VDecodeBool(
VLookupGlobalVarFast("debug?"))) {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D466.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D426.sym, VPOINTER_OTHER)
    );
}
 }
}
static void global_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k322" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k322, runtime, upenv, 1, argc, _var0) {
  // (if shared? ((bruijn ##k.390 0 0) (##string ##string.475)) ((bruijn ##k.390 0 0) (##string ##string.476)))
if(VDecodeBool(
VLookupGlobalVarFast("shared?"))) {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D475.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D476.sym, VPOINTER_OTHER)
    );
}
 }
}
static void global_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k333" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k333, runtime, upenv, 1, argc, _var0) {
  // (if verbose? (displayln (bruijn ##k.378 0 0) (bruijn link-command 13 2)) ((bruijn ##k.378 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast("verbose?"))) {
V_CALL(VLookupGlobalVarFast("displayln"), runtime,
      _var0,
      VGetArg(upenv, 13-1, 2)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k334" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k334, runtime, upenv, 1, argc, _var0) {
  // (system (bruijn ##k.371 13 0) (bruijn link-command 13 2))
V_CALL(VLookupGlobalVarFast("system"), runtime,
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 13-1, 2)
    );
 }
}
static void global_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k332" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k333) (close global_k334))
V_CALL_FUNC(global_k333, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k334, env)})
    );
 }
}
static void global_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k331" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close global_k332) (bruijn link-command 11 2) (bruijn ##x.379 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k332, env)}),
      VEncodeInt(11l), VEncodeInt(2l),
      _var0
    );
 }
}
static void global_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k330" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-append (close global_k331) (bruijn link-command 10 2) (bruijn link-command-flags 10 1))
V_CALL(VLookupGlobalVarFast("string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k331, env)}),
      VGetArg(upenv, 10-1, 2),
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void global_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k335" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.380 1 0) (bruijn link-command 11 2) (bruijn ##x.381 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->vars[0],
      VEncodeInt(11l), VEncodeInt(2l),
      _var0
    );
 }
}
static void global_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda44" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda44, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (string-append (close global_k335) (bruijn link-command 10 2) (bruijn option 0 1))
V_CALL(VLookupGlobalVarFast("string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k335, env)}),
      VGetArg(upenv, 10-1, 2),
      _var1
    );
 }
}
static void global_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k329" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (for-each (close global_k330) (close global_lambda44) c-options)
V_CALL(VLookupGlobalVarFast("for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k330, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda44, env)}),
      VLookupGlobalVarFast("c-options")
    );
 }
}
static void global_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k336" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.382 1 0) (bruijn link-command 10 2) (bruijn ##x.383 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->vars[0],
      VEncodeInt(10l), VEncodeInt(2l),
      _var0
    );
 }
}
static void global_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda45" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda45, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (string-append (close global_k336) (bruijn link-command 9 2) (##string ##string.477) (bruijn file 0 1))
V_CALL(VLookupGlobalVarFast("string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k336, env)}),
      VGetArg(upenv, 9-1, 2),
      VEncodePointer(&_V10string_D477.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void global_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k328" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (for-each (close global_k329) (close global_lambda45) (bruijn ##x.384 0 0))
V_CALL(VLookupGlobalVarFast("for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k329, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda45, env)}),
      _var0
    );
 }
}
static void global_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k327" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (append (close global_k328) obj-files cc-obj-files)
V_CALL(VLookupGlobalVarFast("append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k328, env)}),
      VLookupGlobalVarFast("obj-files"),
      VLookupGlobalVarFast("cc-obj-files")
    );
 }
}
static void global_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k326" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close global_k327) (bruijn link-command 6 2) (bruijn ##x.385 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k327, env)}),
      VEncodeInt(6l), VEncodeInt(2l),
      _var0
    );
 }
}
static void global_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k325" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (sprintf (close global_k326) (##string ##string.478) out-file)
V_CALL(VLookupGlobalVarFast("sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k326, env)}),
      VEncodePointer(&_V10string_D478.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast("out-file")
    );
 }
}
static void global_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k324" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close global_k325) (bruijn link-command-flags 4 1) (bruijn ##x.386 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k325, env)}),
      VEncodeInt(4l), VEncodeInt(1l),
      _var0
    );
 }
}
static void global_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k323" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (string-append (close global_k324) (##string ##string.468) (bruijn ##x.387 2 0) (bruijn ##x.388 1 0) (##string ##string.479) (bruijn ##x.389 0 0))
V_CALL(VLookupGlobalVarFast("string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k324, env)}),
      VEncodePointer(&_V10string_D468.sym, VPOINTER_OTHER),
      upenv->up->vars[0],
      upenv->vars[0],
      VEncodePointer(&_V10string_D479.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void global_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k321" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k322) (close global_k323))
V_CALL_FUNC(global_k322, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k323, env)})
    );
 }
}
static void global_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k319" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k320) (close global_k321))
V_CALL_FUNC(global_k320, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k321, env)})
    );
 }
}
static void global_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "global_lambda43" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)global_lambda43, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (sprintf (close global_k319) (##string ##string.469) optimization)
V_CALL(VLookupGlobalVarFast("sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k319, env)}),
      VEncodePointer(&_V10string_D469.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast("optimization")
    );
 }
}
static void global_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda42" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)global_lambda42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_lambda43) (bruijn ##k.370 0 0) #f #f)
V_CALL_FUNC(global_lambda43, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void global_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k318" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.369 0 0) ((close global_lambda42) ##sys.next) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(global_lambda42, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)})
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k314" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k314, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k315) (close global_k318))
V_CALL_FUNC(global_k315, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k318, env)})
    );
 }
}
static void global_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k340" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k340, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.400 0 0) (not (bruijn ##k.398 2 0) keep?) ((bruijn ##k.398 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("not"), runtime,
      upenv->up->vars[0],
      VLookupGlobalVarFast("keep?")
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k339" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.399 0 0) (not (close global_k340) expand?) ((bruijn ##k.398 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k340, env)}),
      VLookupGlobalVarFast("expand?")
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k338" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.397 1 0) (not (close global_k339) transpile?) ((bruijn ##k.398 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k339, env)}),
      VLookupGlobalVarFast("transpile?")
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k341" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k341, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.396 0 0) (for-each ##sys.next delete-file cc-files) (##sys.next #f))
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
static void global_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k337" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k338) (close global_k341))
V_CALL_FUNC(global_k338, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k341, env)})
    );
 }
}
static void global_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k346" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k346, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.406 0 0) (not (bruijn ##k.403 3 0) keep?) ((bruijn ##k.403 3 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("not"), runtime,
      upenv->up->up->vars[0],
      VLookupGlobalVarFast("keep?")
    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k345" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.405 0 0) (not (close global_k346) object?) ((bruijn ##k.403 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k346, env)}),
      VLookupGlobalVarFast("object?")
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k344" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.404 0 0) (not (close global_k345) expand?) ((bruijn ##k.403 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k345, env)}),
      VLookupGlobalVarFast("expand?")
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k343" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.402 1 0) (not (close global_k344) transpile?) ((bruijn ##k.403 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k344, env)}),
      VLookupGlobalVarFast("transpile?")
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k347" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k347, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.401 0 0) (for-each ##sys.next delete-file cc-obj-files) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast("for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VLookupGlobalVarFast("delete-file"),
      VLookupGlobalVarFast("cc-obj-files")
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void global_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k342" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k342, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close global_k343) (close global_k347))
V_CALL_FUNC(global_k343, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k347, env)})
    );
 }
}
void toplevel0() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k1, env)}),
      VEncodePointer(&_V10string_D407.sym, VPOINTER_OTHER)
    );
}
void toplevel1() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k2, env)}),
      VEncodePointer(&_V10string_D408.sym, VPOINTER_OTHER)
    );
}
void toplevel2() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k3, env)}),
      VEncodePointer(&_V10string_D409.sym, VPOINTER_OTHER)
    );
}
void toplevel3() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k4, env)}),
      VEncodePointer(&_V10string_D410.sym, VPOINTER_OTHER)
    );
}
void toplevel4() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k5, env)}),
      VEncodePointer(&_V10string_D411.sym, VPOINTER_OTHER)
    );
}
void toplevel5() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k6, env)}),
      VEncodePointer(&_V10string_D412.sym, VPOINTER_OTHER)
    );
}
void toplevel6() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k7, env)}),
      VEncodePointer(&_V10string_D413.sym, VPOINTER_OTHER)
    );
}
void toplevel7() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k8, env)}),
      VEncodePointer(&_V10string_D414.sym, VPOINTER_OTHER)
    );
}
void toplevel8() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k9, env)}),
      VEncodePointer(&_V10string_D415.sym, VPOINTER_OTHER)
    );
}
void toplevel9() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k10, env)}),
      VEncodePointer(&_V10string_D416.sym, VPOINTER_OTHER)
    );
}
void toplevel10() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k11, env)}),
      VEncodePointer(&_V10string_D417.sym, VPOINTER_OTHER)
    );
}
void toplevel11() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0scm__files.sym, VPOINTER_OTHER),
      VNULL
    );
}
void toplevel12() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0obj__files.sym, VPOINTER_OTHER),
      VNULL
    );
}
void toplevel13() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0shared_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel14() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0expand_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel15() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0keep_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel16() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0header_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel17() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0transpile_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel18() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0object_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel19() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0debug_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel20() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0verbose_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel21() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0optimization.sym, VPOINTER_OTHER),
      VEncodeInt(1l)
    );
}
void toplevel22() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0api.sym, VPOINTER_OTHER),
      VEncodeInt(1l)
    );
}
void toplevel23() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0out__file.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel24() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0c__options.sym, VPOINTER_OTHER),
      VNULL
    );
}
void toplevel25() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k12, env)}),
      VEncodePointer(&_V10string_D418.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast("install-root")
    );
}
void toplevel26() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0makefile_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel27() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0maketargets.sym, VPOINTER_OTHER),
      VNULL
    );
}
void toplevel28() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0benchmark_Q.sym, VPOINTER_OTHER),
      VEncodeBool(false)
    );
}
void toplevel29() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0extension.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_lambda1, env)})
    );
}
void toplevel30() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0change__extension.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_lambda4, env)})
    );
}
void toplevel31() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0basename.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_lambda7, env)})
    );
}
void toplevel32() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0basepath.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_lambda10, env)})
    );
}
void toplevel33() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0decomma.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_lambda13, env)})
    );
}
void toplevel34() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0realpath.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_lambda16, env)})
    );
}
void toplevel35() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0realbasepath.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_lambda17, env)})
    );
}
void toplevel36() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0display__help.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_lambda18, env)})
    );
}
void toplevel37() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0display__version.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_lambda19, env)})
    );
}
void toplevel38() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL_FUNC(global_lambda20, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodeBool(false)
    );
}
void toplevel39() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0count__true.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0count__true_lambda22, env)})
    );
}
void toplevel40() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("count-true"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k177, env)}),
      VLookupGlobalVarFast("makefile?"),
      VLookupGlobalVarFast("header?"),
      VLookupGlobalVarFast("transpile?"),
      VLookupGlobalVarFast("object?"),
      VLookupGlobalVarFast("expand?")
    );
}
void toplevel41() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k179, env)}),
      VLookupGlobalVarFast("scm-files")
    );
}
void toplevel42() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL_FUNC(global_k182, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k183, env)})
    );
}
void toplevel43() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL_FUNC(global_k187, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k188, env)})
    );
}
void toplevel44() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL_FUNC(global_k193, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k194, env)})
    );
}
void toplevel45() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k199, env)}),
      VLookupGlobalVarFast("out-file")
    );
}
void toplevel46() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0gen__header.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_lambda25, env)})
    );
}
void toplevel47() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
if(VDecodeBool(
VLookupGlobalVarFast("header?"))) {
V_CALL(VLookupGlobalVarFast("gen-header"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k230, env)})
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
}
void toplevel48() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0gen__makefile.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_lambda28, env)})
    );
}
void toplevel49() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
if(VDecodeBool(
VLookupGlobalVarFast("makefile?"))) {
V_CALL(VLookupGlobalVarFast("gen-makefile"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k256, env)})
    );
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false)
    );
}
}
void toplevel50() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL_FUNC(global_k257, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k258, env)})
    );
}
void toplevel51() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL_FUNC(global_k263, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k264, env)})
    );
}
void toplevel52() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k269, env)}),
      VEncodePointer(&_V10string_D469.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast("optimization")
    );
}
void toplevel53() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0cc__command.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D426.sym, VPOINTER_OTHER)
    );
}
void toplevel54() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k275, env)}),
      VLookupGlobalVarFast("cc-command"),
      VLookupGlobalVarFast("cc-command-flags")
    );
}
void toplevel55() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda33, env)}),
      VLookupGlobalVarFast("c-options")
    );
}
void toplevel56() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("current-output-port"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k277, env)})
    );
}
void toplevel57() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k278, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda35, env)}),
      VLookupGlobalVarFast("scm-files"),
      VLookupGlobalVarFast("cc-files"),
      VLookupGlobalVarFast("cc-obj-files")
    );
}
void toplevel58() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda40, env)}),
      VLookupGlobalVarFast("scm-files"),
      VLookupGlobalVarFast("cc-files"),
      VLookupGlobalVarFast("cc-obj-files")
    );
}
void toplevel59() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL_FUNC(global_k310, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k311, env)})
    );
}
void toplevel60() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast(">"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k312, env)}),
      VLookupGlobalVarFast("num-mains"),
      VEncodeInt(1l)
    );
}
void toplevel61() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0delete__file.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete__file_lambda41, env)})
    );
}
void toplevel62() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k314, env)}),
      VLookupGlobalVarFast("header?")
    );
}
void toplevel63() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k337, env)}),
      VLookupGlobalVarFast("header?")
    );
}
void toplevel64() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k342, env)}),
      VLookupGlobalVarFast("header?")
    );
}
int main(int argc, char ** argv) {
  void (*toplevels[])() = {
    toplevel0,    toplevel1,    toplevel2,    toplevel3,    toplevel4,    toplevel5,    toplevel6,    toplevel7,    toplevel8,    toplevel9,    toplevel10,    toplevel11,    toplevel12,    toplevel13,    toplevel14,    toplevel15,    toplevel16,    toplevel17,    toplevel18,    toplevel19,    toplevel20,    toplevel21,    toplevel22,    toplevel23,    toplevel24,    toplevel25,    toplevel26,    toplevel27,    toplevel28,    toplevel29,    toplevel30,    toplevel31,    toplevel32,    toplevel33,    toplevel34,    toplevel35,    toplevel36,    toplevel37,    toplevel38,    toplevel39,    toplevel40,    toplevel41,    toplevel42,    toplevel43,    toplevel44,    toplevel45,    toplevel46,    toplevel47,    toplevel48,    toplevel49,    toplevel50,    toplevel51,    toplevel52,    toplevel53,    toplevel54,    toplevel55,    toplevel56,    toplevel57,    toplevel58,    toplevel59,    toplevel60,    toplevel61,    toplevel62,    toplevel63,    toplevel64,  
};
  VArgc = argc; VArgv = argv;  return VStart(sizeof toplevels / sizeof *toplevels, toplevels);
}
