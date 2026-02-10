/* Copyright 2023-2024 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Compiler.
 *
 * The Vanity Scheme Compiler is free software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 2 of the
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
 * This work is published with additional permission, the Vanity Scheme
 * Runtime Library Exceptions, which should have been included with the
 * Vanity Scheme Compiler.
 *
 * If not, visit <https://github.com/rnvannatta>
 */
#include "vscheme/vruntime.h"
#include "vscheme/vlibrary.h"
#include "vscheme/vinlines.h"
#include <stdarg.h>
VBlob * VInternSymbol(int hash, VBlob * sym);



static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D803 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "file does not exist" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D802 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "read" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D801 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "expand" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D800 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "cps" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D799 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "optimize" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D798 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "extract" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D797 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "transpile" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D796 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "free variables in program" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D795 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "~A -I~A ~A ~A -c -o ~A ~A" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D794 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "compile" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D793 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, " -O~A" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D792 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D791 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, " -Wl,--no-as-needed" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D790 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, " -fPIC -shared" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D789 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, " -L~A/x86_64-w64-mingw32/lib/ -lvscheme" };
static struct { VBlob sym; char bytes[110]; } _V10_Dstring_D788 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 110 }, " -Wl,--whole-archive -lvscheme -ldfile -s LLD_REPORT_UNDEFINED -s ALLOW_MEMORY_GROWTH=1 -s STACK_SIZE=2097152" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D787 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, " -lvscheme" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D786 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~A -o ~A" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D785 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, " -I~A" };
static struct { VBlob sym; char bytes[87]; } _V10_Dstring_D784 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 87 }, "program has toplevel expressions in multiple files, and so it generated multiple mains" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D783 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D782 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, " -fPIC" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D781 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " -g" };
static struct { VBlob sym; char bytes[108]; } _V10_Dstring_D780 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 108 }, " -Wl,--export-all-symbols -Wl,--stack,8388608 -Wmissing-braces -masm=intel -I~A/x86_64-w64-mingw32/include/" };
static struct { VBlob sym; char bytes[47]; } _V10_Dstring_D779 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 47 }, " -Wno-gnu -DVANITY_PURE_C -fbracket-depth=4096" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D778 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, " -rdynamic -Wmissing-braces -masm=intel" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D777 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "/tmp/" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D776 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "sysv_amd64" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D775 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "windows_amd64" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D774 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "vghtco:I:O:E:W:" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D773 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".vasm" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D772 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".scmh" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D771 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".escm" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D770 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".c" };
static struct { VBlob sym; char bytes[56]; } _V10_Dstring_D769 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 56 }, "FIXME: -h and -c and -t and -E can only handle one file" };
static struct { VBlob sym; char bytes[89]; } _V10_Dstring_D768 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 89 }, "Cannot specify '-h' or '-c' or '-t' or '-E' or '--makefile' with '-o' and multiple files" };
static struct { VBlob sym; char bytes[75]; } _V10_Dstring_D767 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 75 }, "Cannot specify '-h' '-c' or '-t' or '-E' or '--makefile' with object files" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D766 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "No input file provided" };
static struct { VBlob sym; char bytes[68]; } _V10_Dstring_D765 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "Only one of '-h' or '-c' or '-t' or '-E' or '--makefile' can be set" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D764 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "windows" };
static struct { VBlob sym; char bytes[74]; } _V10_Dstring_D763 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 74 }, "Unknown --platform, only 'linux' and 'windows' and 'emscripten' are valid" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D762 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "emcc" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D761 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "/usr/bin/x86_64-w64-mingw32-gcc" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D760 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "gcc" };
VWEAK VWORD _V0help;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0help = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "help" };
VWEAK VWORD _V0version;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "version" };
VWEAK VWORD _V0shared;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0shared = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "shared" };
VWEAK VWORD _V0keep__temps;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0keep__temps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "keep-temps" };
VWEAK VWORD _V0makefile;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0makefile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "makefile" };
VWEAK VWORD _V0maketarget;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0maketarget = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "maketarget" };
VWEAK VWORD _V0bytecode;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0bytecode = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "bytecode" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D759 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "Unknown CLI option" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D758 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "emscripten" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D757 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "unbound" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D756 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "no-unbound" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D755 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "error=unbound" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D754 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "no-error=unbound" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D753 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, " -Wl," };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D752 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "Wrapper flag -W missing comma" };
static struct { VBlob sym; char bytes[67]; } _V10_Dstring_D751 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 67 }, "Wrapper flag -W can only pass args to the C compiler, eg -Wc,-Ilib" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D750 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "Expand flag -E expects integer between 0 and 2 inclusive" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D749 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "Optimization flag -O expects integer between 0 and 3 inclusive" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D748 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".a" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D747 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ".lib" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D746 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ".scm" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D745 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "File has unrecognized extension: ~A" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D744 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, ".ss" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D743 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, " -Wl,--no-whole-archive" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D742 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "-Wl,--whole-archive " };
VWEAK VWORD _V10vcore_Dpush__value;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dpush__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.push-value" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D741 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "vsc: " };
VWEAK VWORD _V10vcore_Dpop__value;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dpop__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.pop-value" };
VWEAK VWORD _V0handle__exception;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0handle__exception = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "handle-exception" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D740 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "Vanity Scheme Compiler ~A.~A~N" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D739 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "Copyright (C) 2023 Richard Van Natta" };
VWEAK VWORD _V0display__version;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0display__version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "display-version" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D738 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "Usage: vsc [options] file..." };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D737 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "Options:" };
static struct { VBlob sym; char bytes[94]; } _V10_Dstring_D736 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 94 }, "  -O<num>         Compile with optimization levels 0 (slowest codegen) to 3 (fastest codegen)" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D735 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  -g              Compile with debug symbols" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D734 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "  -h              Generate header file instead of compiling" };
static struct { VBlob sym; char bytes[118]; } _V10_Dstring_D733 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 118 }, "  -E<num>         Expand only, do not compile or link. 0: macros only, 1: continuation passing style, 2: optimization" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D732 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "  -t              Transpile only, do not compile or link" };
static struct { VBlob sym; char bytes[68]; } _V10_Dstring_D731 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "  -c              Transpile, compile, and assemble, but do not link" };
static struct { VBlob sym; char bytes[47]; } _V10_Dstring_D730 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 47 }, "  -o<file>        Place the output into <file>" };
static struct { VBlob sym; char bytes[87]; } _V10_Dstring_D729 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 87 }, "  -I<dir>         Add the directory to the list to be searched for scheme header files" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D728 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "  -Wc,<option>    Pass comma seperated to the C compiler" };
static struct { VBlob sym; char bytes[53]; } _V10_Dstring_D727 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 53 }, "  -Wl,<option>    Pass comma seperated to the linker" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D726 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  -v              Show intermediate commands" };
static struct { VBlob sym; char bytes[86]; } _V10_Dstring_D725 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 86 }, "  --makefile      Generate makefile dependencies, similar to gcc invoked with -MM -MG" };
static struct { VBlob sym; char bytes[110]; } _V10_Dstring_D724 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 110 }, "  --maketarget    Specify the target of the make dependency, additional --maketarget's add additional targets" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D723 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "  --shared        Compile as shared library" };
static struct { VBlob sym; char bytes[76]; } _V10_Dstring_D722 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 76 }, "  --keep-temps    Keep temporary compilation files, such as C intermediates" };
static struct { VBlob sym; char bytes[97]; } _V10_Dstring_D721 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 97 }, "  --platform=<os> Which OS to make executables for. Either 'linux' or 'windows' or 'emscripten'." };
static struct { VBlob sym; char bytes[104]; } _V10_Dstring_D720 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 104 }, "  --main=<main>   What style of main to use. Either 'main' or 'winmain' or 'emscripten-loop' or 'none'." };
static struct { VBlob sym; char bytes[72]; } _V10_Dstring_D719 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 72 }, "  --cc=<compiler> Use the C compiler of your choice. The default is gcc" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D718 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "  --help          You know about this" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D717 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "  --version       Show version and build info" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D716 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[58]; } _V10_Dstring_D715 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 58 }, "  -Wunbound     Enable unbound toplevel variable warnings" };
VWEAK VWORD _V0display__help;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0display__help = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "display-help" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D714 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "~A " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D713 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ":" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D712 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " ~A" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D711 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "invalid import" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D710 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".o" };
VWEAK VWORD _V0gen__makefile;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0gen__makefile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "gen-makefile" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D709 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "File did not produce a valid header" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D708 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "Only one statement permitted in header generation" };
VWEAK VWORD _V0gen__header;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0gen__header = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "gen-header" };
VWEAK VWORD _V0define__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0define__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "define-library" };
VWEAK VWORD _V0gen__header2;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0gen__header2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "gen-header2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D707 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "/bin/rm ~A" };
VWEAK VWORD _V0delete__file;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0delete__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "delete-file" };
VWEAK VWORD _V0count__true;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0count__true = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "count-true" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D706 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "realpath `dirname ~A`" };
VWEAK VWORD _V0realbasepath;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0realbasepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "realbasepath" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D705 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "realpath ~A" };
VWEAK VWORD _V0realpath;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0realpath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "realpath" };
VWEAK VWORD _V0decomma;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0decomma = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "decomma" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D704 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "." };
VWEAK VWORD _V0basepath;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0basepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "basepath" };
VWEAK VWORD _V0basename;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0basename = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "basename" };
VWEAK VWORD _V0change__extension;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0change__extension = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "change-extension" };
VWEAK VWORD _V0extension;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0extension = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "extension" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D703 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "~A: ~A seconds~N" };
VWEAK VWORD _V0benchmark;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0benchmark = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "benchmark" };
VWEAK VWORD _V0stdout;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "stdout" };
VWEAK VWORD _V0benchmark_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0benchmark_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "benchmark\?" };
VWEAK VWORD _V0maketargets;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0maketargets = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "maketargets" };
VWEAK VWORD _V0makefile_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0makefile_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "makefile\?" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D702 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "~Ainclude" };
VWEAK VWORD _V0paths;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0paths = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "paths" };
VWEAK VWORD _V0c__options;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0c__options = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "c-options" };
VWEAK VWORD _V0werror__unbound__variables;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V0werror__unbound__variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "werror-unbound-variables" };
VWEAK VWORD _V0w__unbound__variables;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0w__unbound__variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "w-unbound-variables" };
VWEAK VWORD _V0cc;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0cc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "cc" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D701 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "main" };
VWEAK VWORD _V0main;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0main = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "main" };
VWEAK VWORD _V0purec_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0purec_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "purec\?" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D700 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "linux" };
VWEAK VWORD _V0platform;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0platform = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "platform" };
VWEAK VWORD _V0out__file;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0out__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "out-file" };
VWEAK VWORD _V0api;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0api = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "api" };
VWEAK VWORD _V0optimization;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0optimization = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "optimization" };
VWEAK VWORD _V0verbose_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0verbose_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "verbose\?" };
VWEAK VWORD _V0debug_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0debug_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "debug\?" };
VWEAK VWORD _V0object_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0object_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "object\?" };
VWEAK VWORD _V0transpile_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0transpile_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "transpile\?" };
VWEAK VWORD _V0bytecode_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0bytecode_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "bytecode\?" };
VWEAK VWORD _V0header_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0header_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "header\?" };
VWEAK VWORD _V0keep_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0keep_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "keep\?" };
VWEAK VWORD _V0expand_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expand_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expand\?" };
VWEAK VWORD _V0shared_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0shared_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "shared\?" };
VWEAK VWORD _V0obj__files;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0obj__files = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "obj-files" };
VWEAK VWORD _V0scm__files;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0scm__files = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "scm-files" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D699 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "_V0vanity_V0compiler_V0optimize_V20" };
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D698 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "_V0vanity_V0compiler_V0alpha__convert_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D697 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D696 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "_V0vanity_V0compiler_V0library_V20" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D695 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "_V0vanity_V0compiler_V0bytecode_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D694 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0transpile_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D693 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0lower_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D692 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0cps_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D691 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0expand_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D690 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0getopt_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D689 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D688 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D687 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D686 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D685 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D684 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static __attribute__((constructor)) void VDllMain1() {
  _V0help = VEncodePointer(VInternSymbol(1042489282, &_VW_V0help.sym), VPOINTER_OTHER);
  _V0version = VEncodePointer(VInternSymbol(-909072658, &_VW_V0version.sym), VPOINTER_OTHER);
  _V0shared = VEncodePointer(VInternSymbol(-1964558170, &_VW_V0shared.sym), VPOINTER_OTHER);
  _V0keep__temps = VEncodePointer(VInternSymbol(-1587858568, &_VW_V0keep__temps.sym), VPOINTER_OTHER);
  _V0makefile = VEncodePointer(VInternSymbol(-472569937, &_VW_V0makefile.sym), VPOINTER_OTHER);
  _V0maketarget = VEncodePointer(VInternSymbol(1905371315, &_VW_V0maketarget.sym), VPOINTER_OTHER);
  _V0bytecode = VEncodePointer(VInternSymbol(610863972, &_VW_V0bytecode.sym), VPOINTER_OTHER);
  _V10vcore_Dpush__value = VEncodePointer(VInternSymbol(1433144780, &_VW_V10vcore_Dpush__value.sym), VPOINTER_OTHER);
  _V10vcore_Dpop__value = VEncodePointer(VInternSymbol(-858837018, &_VW_V10vcore_Dpop__value.sym), VPOINTER_OTHER);
  _V0handle__exception = VEncodePointer(VInternSymbol(1135967109, &_VW_V0handle__exception.sym), VPOINTER_OTHER);
  _V0display__version = VEncodePointer(VInternSymbol(2039570464, &_VW_V0display__version.sym), VPOINTER_OTHER);
  _V0display__help = VEncodePointer(VInternSymbol(1582000525, &_VW_V0display__help.sym), VPOINTER_OTHER);
  _V0gen__makefile = VEncodePointer(VInternSymbol(-412355213, &_VW_V0gen__makefile.sym), VPOINTER_OTHER);
  _V0gen__header = VEncodePointer(VInternSymbol(1804758416, &_VW_V0gen__header.sym), VPOINTER_OTHER);
  _V0define__library = VEncodePointer(VInternSymbol(410494053, &_VW_V0define__library.sym), VPOINTER_OTHER);
  _V0gen__header2 = VEncodePointer(VInternSymbol(-1415463595, &_VW_V0gen__header2.sym), VPOINTER_OTHER);
  _V0delete__file = VEncodePointer(VInternSymbol(102699508, &_VW_V0delete__file.sym), VPOINTER_OTHER);
  _V0count__true = VEncodePointer(VInternSymbol(-1292537198, &_VW_V0count__true.sym), VPOINTER_OTHER);
  _V0realbasepath = VEncodePointer(VInternSymbol(-842581961, &_VW_V0realbasepath.sym), VPOINTER_OTHER);
  _V0realpath = VEncodePointer(VInternSymbol(-417293311, &_VW_V0realpath.sym), VPOINTER_OTHER);
  _V0decomma = VEncodePointer(VInternSymbol(337974732, &_VW_V0decomma.sym), VPOINTER_OTHER);
  _V0basepath = VEncodePointer(VInternSymbol(-2104195748, &_VW_V0basepath.sym), VPOINTER_OTHER);
  _V0basename = VEncodePointer(VInternSymbol(1409282627, &_VW_V0basename.sym), VPOINTER_OTHER);
  _V0change__extension = VEncodePointer(VInternSymbol(-974840667, &_VW_V0change__extension.sym), VPOINTER_OTHER);
  _V0extension = VEncodePointer(VInternSymbol(-116467526, &_VW_V0extension.sym), VPOINTER_OTHER);
  _V0benchmark = VEncodePointer(VInternSymbol(1404643462, &_VW_V0benchmark.sym), VPOINTER_OTHER);
  _V0stdout = VEncodePointer(VInternSymbol(-724261765, &_VW_V0stdout.sym), VPOINTER_OTHER);
  _V0benchmark_Q = VEncodePointer(VInternSymbol(-1779064857, &_VW_V0benchmark_Q.sym), VPOINTER_OTHER);
  _V0maketargets = VEncodePointer(VInternSymbol(1944552777, &_VW_V0maketargets.sym), VPOINTER_OTHER);
  _V0makefile_Q = VEncodePointer(VInternSymbol(1538780509, &_VW_V0makefile_Q.sym), VPOINTER_OTHER);
  _V0paths = VEncodePointer(VInternSymbol(149126552, &_VW_V0paths.sym), VPOINTER_OTHER);
  _V0c__options = VEncodePointer(VInternSymbol(-2036200367, &_VW_V0c__options.sym), VPOINTER_OTHER);
  _V0werror__unbound__variables = VEncodePointer(VInternSymbol(-1095410462, &_VW_V0werror__unbound__variables.sym), VPOINTER_OTHER);
  _V0w__unbound__variables = VEncodePointer(VInternSymbol(-434249330, &_VW_V0w__unbound__variables.sym), VPOINTER_OTHER);
  _V0cc = VEncodePointer(VInternSymbol(-1749782998, &_VW_V0cc.sym), VPOINTER_OTHER);
  _V0main = VEncodePointer(VInternSymbol(-569315834, &_VW_V0main.sym), VPOINTER_OTHER);
  _V0purec_Q = VEncodePointer(VInternSymbol(489592549, &_VW_V0purec_Q.sym), VPOINTER_OTHER);
  _V0platform = VEncodePointer(VInternSymbol(546385074, &_VW_V0platform.sym), VPOINTER_OTHER);
  _V0out__file = VEncodePointer(VInternSymbol(972222558, &_VW_V0out__file.sym), VPOINTER_OTHER);
  _V0api = VEncodePointer(VInternSymbol(526382639, &_VW_V0api.sym), VPOINTER_OTHER);
  _V0optimization = VEncodePointer(VInternSymbol(-465914501, &_VW_V0optimization.sym), VPOINTER_OTHER);
  _V0verbose_Q = VEncodePointer(VInternSymbol(-1480383375, &_VW_V0verbose_Q.sym), VPOINTER_OTHER);
  _V0debug_Q = VEncodePointer(VInternSymbol(1412315114, &_VW_V0debug_Q.sym), VPOINTER_OTHER);
  _V0object_Q = VEncodePointer(VInternSymbol(-2128795839, &_VW_V0object_Q.sym), VPOINTER_OTHER);
  _V0transpile_Q = VEncodePointer(VInternSymbol(-624750956, &_VW_V0transpile_Q.sym), VPOINTER_OTHER);
  _V0bytecode_Q = VEncodePointer(VInternSymbol(434807537, &_VW_V0bytecode_Q.sym), VPOINTER_OTHER);
  _V0header_Q = VEncodePointer(VInternSymbol(643423491, &_VW_V0header_Q.sym), VPOINTER_OTHER);
  _V0keep_Q = VEncodePointer(VInternSymbol(1468425290, &_VW_V0keep_Q.sym), VPOINTER_OTHER);
  _V0expand_Q = VEncodePointer(VInternSymbol(2037035131, &_VW_V0expand_Q.sym), VPOINTER_OTHER);
  _V0shared_Q = VEncodePointer(VInternSymbol(987641392, &_VW_V0shared_Q.sym), VPOINTER_OTHER);
  _V0obj__files = VEncodePointer(VInternSymbol(1937478779, &_VW_V0obj__files.sym), VPOINTER_OTHER);
  _V0scm__files = VEncodePointer(VInternSymbol(-536774826, &_VW_V0scm__files.sym), VPOINTER_OTHER);
}
V_DECLARE_FUNC(_V50_V10_Dloop_D81, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V10_Dloop_D100, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V10_Did_D65, _var0, _var1);
V_DECLARE_FUNC(_V50_V10_Dloop_D54, _var0, _var1);
V_DECLARE_FUNC(_V50_V10_Dloop_D28, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V10_Dloop_D19, _var0, _var1);
V_DECLARE_FUNC(_V50_V10_Dloop_D16, _var0, _var1);
V_DECLARE_FUNC(_V50_V10_Dloop_D13, _var0, _var1);
V_DECLARE_FUNC(_V50_V10_Dloop_D10, _var0, _var1);
V_DECLARE_FUNC(_V50_V10_Dloop_D6, _var0, _var1);
static void global_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.112 1 0) (bruijn ##.x.113 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k1) (##string ##.string.684))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D684.sym, VPOINTER_OTHER));
}
static void global_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.114 1 0) (bruijn ##.x.115 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k2) (##string ##.string.685))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D685.sym, VPOINTER_OTHER));
}
static void global_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.116 1 0) (bruijn ##.x.117 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k3) (##string ##.string.686))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D686.sym, VPOINTER_OTHER));
}
static void global_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.118 1 0) (bruijn ##.x.119 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k4) (##string ##.string.687))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D687.sym, VPOINTER_OTHER));
}
static void global_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.120 1 0) (bruijn ##.x.121 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k5) (##string ##.string.688))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D688.sym, VPOINTER_OTHER));
}
static void global_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.122 1 0) (bruijn ##.x.123 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k6) (##string ##.string.689))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D689.sym, VPOINTER_OTHER));
}
static void global_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.124 1 0) (bruijn ##.x.125 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k7) (##string ##.string.690))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D690.sym, VPOINTER_OTHER));
}
static void global_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.126 1 0) (bruijn ##.x.127 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k8) (##string ##.string.691))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k8, self)))),
      VEncodePointer(&_V10_Dstring_D691.sym, VPOINTER_OTHER));
}
static void global_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.128 1 0) (bruijn ##.x.129 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k9) (##string ##.string.692))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k9, self)))),
      VEncodePointer(&_V10_Dstring_D692.sym, VPOINTER_OTHER));
}
static void global_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.130 1 0) (bruijn ##.x.131 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k10) (##string ##.string.693))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k10, self)))),
      VEncodePointer(&_V10_Dstring_D693.sym, VPOINTER_OTHER));
}
static void global_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.132 1 0) (bruijn ##.x.133 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k11) (##string ##.string.694))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k11, self)))),
      VEncodePointer(&_V10_Dstring_D694.sym, VPOINTER_OTHER));
}
static void global_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.134 1 0) (bruijn ##.x.135 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k12) (##string ##.string.695))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k12, self)))),
      VEncodePointer(&_V10_Dstring_D695.sym, VPOINTER_OTHER));
}
static void global_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.136 1 0) (bruijn ##.x.137 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k13) (##string ##.string.696))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k13, self)))),
      VEncodePointer(&_V10_Dstring_D696.sym, VPOINTER_OTHER));
}
static void global_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.138 1 0) (bruijn ##.x.139 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k14) (##string ##.string.697))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k14, self)))),
      VEncodePointer(&_V10_Dstring_D697.sym, VPOINTER_OTHER));
}
static void global_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.140 1 0) (bruijn ##.x.141 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k15) (##string ##.string.698))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k15, self)))),
      VEncodePointer(&_V10_Dstring_D698.sym, VPOINTER_OTHER));
}
static void global_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.142 1 0) (bruijn ##.x.143 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k16) (##string ##.string.699))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k16, self)))),
      VEncodePointer(&_V10_Dstring_D699.sym, VPOINTER_OTHER));
}
static void global_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.144 0 0) scm-files '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0scm__files,
      VNULL
    );
}
static void global_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.145 0 0) obj-files '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0obj__files,
      VNULL
    );
}
static void global_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.146 0 0) shared? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0shared_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.147 0 0) expand? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0expand_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.148 0 0) keep? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0keep_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.149 0 0) header? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0header_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.150 0 0) bytecode? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0bytecode_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.151 0 0) transpile? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0transpile_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.152 0 0) object? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0object_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.153 0 0) debug? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0debug_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.154 0 0) verbose? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0verbose_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.155 0 0) optimization 0)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0optimization,
      VEncodeInt(0l)
    );
}
static void global_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.156 0 0) api 1)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0api,
      VEncodeInt(1l)
    );
}
static void global_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.157 0 0) out-file #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0out__file,
      VEncodeBool(false)
    );
}
static void global_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.158 0 0) platform (##string ##.string.700))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0platform,
      VEncodePointer(&_V10_Dstring_D700.sym, VPOINTER_OTHER)
    );
}
static void global_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.159 0 0) purec? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0purec_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.160 0 0) main (##string ##.string.701))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0main,
      VEncodePointer(&_V10_Dstring_D701.sym, VPOINTER_OTHER)
    );
}
static void global_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.161 0 0) cc #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0cc,
      VEncodeBool(false)
    );
}
static void global_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.162 0 0) w-unbound-variables #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0w__unbound__variables,
      VEncodeBool(false)
    );
}
static void global_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.163 0 0) werror-unbound-variables #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0werror__unbound__variables,
      VEncodeBool(false)
    );
}
static void global_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.164 0 0) c-options '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0c__options,
      VNULL
    );
}
static void global_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.165 2 0) paths (bruijn ##.x.166 0 0))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      statics->up->vars[0],
      _V0paths,
      _var0
    );
}
static void global_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (list (close global_V0k18) (bruijn ##.x.167 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k18, self)))),
      _var0);
}
static void global_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (sprintf (close global_V0k17) (##string ##.string.702) install-root)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k17, self)))),
      VEncodePointer(&_V10_Dstring_D702.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
static void global_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.168 0 0) makefile? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0makefile_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.169 0 0) maketargets '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0maketargets,
      VNULL
    );
}
static void global_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.170 0 0) benchmark? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0benchmark_Q,
      VEncodeBool(false)
    );
}
static void global_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.171 1 0) stdout (bruijn ##.x.172 0 0))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      statics->vars[0],
      _V0stdout,
      _var0
    );
}
static void global_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (current-output-port (close global_V0k19))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k19, self)))));
}
static void _V0benchmark_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0benchmark_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (format (bruijn ##.k.176 3 0) stdout (##string ##.string.703) (bruijn ##.label.0 7 1) (bruijn ##.x.177 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 5,
      statics->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "stdout"),
      VEncodePointer(&_V10_Dstring_D703.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 1),
      _var0);
}
static void _V0benchmark_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0benchmark_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (/ (close _V0benchmark_V0k25) (bruijn ##.x.178 1 0) (bruijn ##.x.179 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "/")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k25, self)))),
      statics->vars[0],
      _var0);
}
static void _V0benchmark_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0benchmark_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (jiffies-per-second (close _V0benchmark_V0k24))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "jiffies-per-second")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k24, self)))));
}
static void _V0benchmark_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0benchmark_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if benchmark? (- (close _V0benchmark_V0k23) (bruijn ##.end.4 1 0) (bruijn ##.start.2 3 0)) ((bruijn ##.k.176 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "benchmark?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k23, self)))),
      statics->vars[0],
      statics->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0benchmark_V0k26(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (apply (bruijn ##.k.175 1 0) values (bruijn ##.args.3 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      statics->vars[0],
      VLookupGlobalVarFast2(runtime, "values"),
      statics->vars[1]);
}
static void _V0benchmark_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0benchmark_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0benchmark_V0k22) (close _V0benchmark_V0k26))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k22, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k26, self)))));
}
static void _V0benchmark_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0benchmark_V0lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0lambda45, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _varargs;
  // (current-jiffy (close _V0benchmark_V0k21))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-jiffy")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k21, self)))));
}
static void _V0benchmark_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0benchmark_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (call-with-values (bruijn ##.k.174 1 0) (bruijn ##.thunk.1 1 2) (close _V0benchmark_V0lambda45))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "call-with-values")), 3,
      statics->vars[0],
      statics->vars[2],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0lambda45, self)))));
}
static void _V0benchmark_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0benchmark_V0lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0lambda44, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (current-jiffy (close _V0benchmark_V0k20))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-jiffy")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k20, self)))));
}
static void global_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.173 0 0) benchmark (close _V0benchmark_V0lambda44))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0benchmark,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0lambda44, self))))
    );
}
void _V50_V10_Dloop_D6_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D6_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D6_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.6) #f (bruijn ##.loop.6 5 0) (bruijn ##.k.182 4 0) (bruijn ##.x.185 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D6(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V10_Dloop_D6_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D6_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D6_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.184 0 0) (substring (bruijn ##.k.182 3 0) (bruijn ##.file.5 5 1) (bruijn ##.i.7 3 1)) (- (close _V50_V10_Dloop_D6_V0k30) (bruijn ##.i.7 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 1),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D6_V0k30, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
void _V50_V10_Dloop_D6_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D6_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D6_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D6_V0k29) #\. (bruijn ##.x.186 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D6_V0k29, self)))),
      VEncodeChar('.'),
      _var0);
}
void _V50_V10_Dloop_D6_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D6_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D6_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.183 0 0) ((bruijn ##.k.182 1 0) #f) (string-ref (close _V50_V10_Dloop_D6_V0k28) (bruijn ##.file.5 3 1) (bruijn ##.i.7 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D6_V0k28, self)))),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
void _V50_V10_Dloop_D6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (<= (close _V50_V10_Dloop_D6_V0k27) (bruijn ##.i.7 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D6_V0k27, self)))),
      _var1,
      VEncodeInt(0l));
}
static void _V0extension_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0extension_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.6) #f (bruijn ##.loop.6 2 0) (bruijn ##.k.181 3 0) (bruijn ##.x.187 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D6(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V0extension_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0extension_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0extension_V0k32) (bruijn ##.x.188 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0extension_V0k32, self)))),
      _var0,
      VEncodeInt(1l));
}
static void _V0extension_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0extension_V0lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0extension_V0lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V10_Dloop_D6")) (string-length (close _V0extension_V0k31) (bruijn ##.file.5 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D6, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0extension_V0k31, self)))),
      statics->vars[1]);
    }
}
static void global_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.180 0 0) extension (close _V0extension_V0lambda47))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0extension,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0extension_V0lambda47, self))))
    );
}
void _V50_V10_Dloop_D10_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D10_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D10_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (string-append (bruijn ##.k.191 4 0) (bruijn ##.x.194 0 0) (bruijn ##.new.9 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      statics->up->up->up->vars[0],
      _var0,
      VGetArg(statics, 6-1, 2));
}
void _V50_V10_Dloop_D10_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D10_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D10_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.10) #f (bruijn ##.loop.10 5 0) (bruijn ##.k.191 4 0) (bruijn ##.x.195 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D10(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V10_Dloop_D10_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D10_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D10_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.193 0 0) (substring (close _V50_V10_Dloop_D10_V0k36) (bruijn ##.file.8 5 1) 0 (bruijn ##.i.11 3 1)) (- (close _V50_V10_Dloop_D10_V0k37) (bruijn ##.i.11 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D10_V0k36, self)))),
      VGetArg(statics, 5-1, 1),
      VEncodeInt(0l),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D10_V0k37, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
void _V50_V10_Dloop_D10_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D10_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D10_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D10_V0k35) #\. (bruijn ##.x.196 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D10_V0k35, self)))),
      VEncodeChar('.'),
      _var0);
}
void _V50_V10_Dloop_D10_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D10_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D10_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.192 0 0) (string-append (bruijn ##.k.191 1 0) (bruijn ##.file.8 3 1) (bruijn ##.new.9 3 2)) (string-ref (close _V50_V10_Dloop_D10_V0k34) (bruijn ##.file.8 3 1) (bruijn ##.i.11 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D10_V0k34, self)))),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
void _V50_V10_Dloop_D10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (<= (close _V50_V10_Dloop_D10_V0k33) (bruijn ##.i.11 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D10_V0k33, self)))),
      _var1,
      VEncodeInt(0l));
}
static void _V0change__extension_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0change__extension_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.10) #f (bruijn ##.loop.10 2 0) (bruijn ##.k.190 3 0) (bruijn ##.x.197 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D10(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V0change__extension_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0change__extension_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0change__extension_V0k39) (bruijn ##.x.198 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0change__extension_V0k39, self)))),
      _var0,
      VEncodeInt(1l));
}
static void _V0change__extension_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0change__extension_V0lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0change__extension_V0lambda49, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V10_Dloop_D10")) (string-length (close _V0change__extension_V0k38) (bruijn ##.file.8 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D10, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0change__extension_V0k38, self)))),
      statics->vars[1]);
    }
}
static void global_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.189 0 0) change-extension (close _V0change__extension_V0lambda49))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0change__extension,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0change__extension_V0lambda49, self))))
    );
}
void _V50_V10_Dloop_D13_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D13_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D13_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (substring (bruijn ##.k.201 4 0) (bruijn ##.file.12 6 1) (bruijn ##.x.204 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      statics->up->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      _var0);
}
void _V50_V10_Dloop_D13_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D13_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D13_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.13) #f (bruijn ##.loop.13 5 0) (bruijn ##.k.201 4 0) (bruijn ##.x.205 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D13(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V10_Dloop_D13_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D13_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D13_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.203 0 0) (+ (close _V50_V10_Dloop_D13_V0k43) (bruijn ##.i.14 3 1) 1) (- (close _V50_V10_Dloop_D13_V0k44) (bruijn ##.i.14 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D13_V0k43, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D13_V0k44, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
void _V50_V10_Dloop_D13_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D13_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D13_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D13_V0k42) #\/ (bruijn ##.x.206 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D13_V0k42, self)))),
      VEncodeChar('/'),
      _var0);
}
void _V50_V10_Dloop_D13_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D13_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D13_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.202 0 0) ((bruijn ##.k.201 1 0) (bruijn ##.file.12 3 1)) (string-ref (close _V50_V10_Dloop_D13_V0k41) (bruijn ##.file.12 3 1) (bruijn ##.i.14 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D13_V0k41, self)))),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
void _V50_V10_Dloop_D13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (<= (close _V50_V10_Dloop_D13_V0k40) (bruijn ##.i.14 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D13_V0k40, self)))),
      _var1,
      VEncodeInt(0l));
}
static void _V0basename_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basename_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basename_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.13) #f (bruijn ##.loop.13 2 0) (bruijn ##.k.200 3 0) (bruijn ##.x.207 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D13(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V0basename_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basename_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basename_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0basename_V0k46) (bruijn ##.x.208 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0basename_V0k46, self)))),
      _var0,
      VEncodeInt(1l));
}
static void _V0basename_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0basename_V0lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0basename_V0lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V10_Dloop_D13")) (string-length (close _V0basename_V0k45) (bruijn ##.file.12 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D13, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0basename_V0k45, self)))),
      statics->vars[1]);
    }
}
static void global_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.199 0 0) basename (close _V0basename_V0lambda51))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0basename,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0basename_V0lambda51, self))))
    );
}
void _V50_V10_Dloop_D16_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D16_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D16_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (substring (bruijn ##.k.211 4 0) (bruijn ##.file.15 6 1) 0 (bruijn ##.x.214 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      VEncodeInt(0l),
      _var0);
}
void _V50_V10_Dloop_D16_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D16_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D16_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.16) #f (bruijn ##.loop.16 5 0) (bruijn ##.k.211 4 0) (bruijn ##.x.215 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D16(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V10_Dloop_D16_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D16_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D16_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.213 0 0) (+ (close _V50_V10_Dloop_D16_V0k50) (bruijn ##.i.17 3 1) 1) (- (close _V50_V10_Dloop_D16_V0k51) (bruijn ##.i.17 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D16_V0k50, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D16_V0k51, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
void _V50_V10_Dloop_D16_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D16_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D16_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D16_V0k49) #\/ (bruijn ##.x.216 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D16_V0k49, self)))),
      VEncodeChar('/'),
      _var0);
}
void _V50_V10_Dloop_D16_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D16_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D16_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.212 0 0) ((bruijn ##.k.211 1 0) (##string ##.string.704)) (string-ref (close _V50_V10_Dloop_D16_V0k48) (bruijn ##.file.15 3 1) (bruijn ##.i.17 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D704.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D16_V0k48, self)))),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
void _V50_V10_Dloop_D16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (<= (close _V50_V10_Dloop_D16_V0k47) (bruijn ##.i.17 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D16_V0k47, self)))),
      _var1,
      VEncodeInt(0l));
}
static void _V0basepath_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basepath_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basepath_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.16) #f (bruijn ##.loop.16 2 0) (bruijn ##.k.210 3 0) (bruijn ##.x.217 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D16(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V0basepath_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basepath_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basepath_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0basepath_V0k53) (bruijn ##.x.218 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0basepath_V0k53, self)))),
      _var0,
      VEncodeInt(1l));
}
static void _V0basepath_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0basepath_V0lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0basepath_V0lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V10_Dloop_D16")) (string-length (close _V0basepath_V0k52) (bruijn ##.file.15 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D16, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0basepath_V0k52, self)))),
      statics->vars[1]);
    }
}
static void global_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.209 0 0) basepath (close _V0basepath_V0lambda53))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0basepath,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0basepath_V0lambda53, self))))
    );
}
void _V50_V10_Dloop_D19_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D19_V0k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D19_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.19) #f (bruijn ##.loop.19 5 0) (bruijn ##.k.221 4 0) (bruijn ##.x.224 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D19(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V10_Dloop_D19_V0k57(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (- (close _V50_V10_Dloop_D19_V0k58) (bruijn ##.i.20 3 1) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D19_V0k58, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
void _V50_V10_Dloop_D19_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D19_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D19_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.19) #f (bruijn ##.loop.19 5 0) (bruijn ##.k.221 4 0) (bruijn ##.x.225 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D19(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V10_Dloop_D19_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D19_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D19_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.223 0 0) (string-set! (close _V50_V10_Dloop_D19_V0k57) (bruijn ##.str.18 5 1) (bruijn ##.i.20 3 1) #\space) (- (close _V50_V10_Dloop_D19_V0k59) (bruijn ##.i.20 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-set!")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D19_V0k57, self)))),
      VGetArg(statics, 5-1, 1),
      statics->up->up->vars[1],
      VEncodeChar(' '));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D19_V0k59, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
void _V50_V10_Dloop_D19_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D19_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D19_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D19_V0k56) #\, (bruijn ##.x.226 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D19_V0k56, self)))),
      VEncodeChar(','),
      _var0);
}
void _V50_V10_Dloop_D19_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D19_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D19_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.222 0 0) ((bruijn ##.k.221 1 0) (bruijn ##.str.18 3 1)) (string-ref (close _V50_V10_Dloop_D19_V0k55) (bruijn ##.str.18 3 1) (bruijn ##.i.20 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D19_V0k55, self)))),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
void _V50_V10_Dloop_D19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (< (close _V50_V10_Dloop_D19_V0k54) (bruijn ##.i.20 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D19_V0k54, self)))),
      _var1,
      VEncodeInt(0l));
}
static void _V0decomma_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decomma_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0decomma_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.19) #f (bruijn ##.loop.19 2 0) (bruijn ##.k.220 3 0) (bruijn ##.x.227 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D19(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V0decomma_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decomma_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0decomma_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0decomma_V0k61) (bruijn ##.x.228 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0decomma_V0k61, self)))),
      _var0,
      VEncodeInt(1l));
}
static void _V0decomma_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decomma_V0lambda55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0decomma_V0lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V10_Dloop_D19")) (string-length (close _V0decomma_V0k60) (bruijn ##.str.18 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D19, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0decomma_V0k60, self)))),
      statics->vars[1]);
    }
}
static void global_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.219 0 0) decomma (close _V0decomma_V0lambda55))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0decomma,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0decomma_V0lambda55, self))))
    );
}
static void _V0realpath_V0k65(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.230 3 0) (bruijn ##.ret.23 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
}
static void _V0realpath_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realpath_V0k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (close-port (close _V0realpath_V0k65) (bruijn ##.proc.22 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "close-port")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realpath_V0k65, self)))),
      statics->vars[0]);
}
static void _V0realpath_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realpath_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (read-line (close _V0realpath_V0k64) (bruijn ##.proc.22 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-line")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realpath_V0k64, self)))),
      _var0);
}
static void _V0realpath_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realpath_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-process (close _V0realpath_V0k63) (bruijn ##.x.231 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-process")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realpath_V0k63, self)))),
      _var0);
}
static void _V0realpath_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0realpath_V0lambda57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_V0lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (sprintf (close _V0realpath_V0k62) (##string ##.string.705) (bruijn ##.file.21 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realpath_V0k62, self)))),
      VEncodePointer(&_V10_Dstring_D705.sym, VPOINTER_OTHER),
      _var1);
}
static void global_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.229 0 0) realpath (close _V0realpath_V0lambda57))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0realpath,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realpath_V0lambda57, self))))
    );
}
static void _V0realbasepath_V0k69(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.233 3 0) (bruijn ##.ret.26 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
}
static void _V0realbasepath_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realbasepath_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (close-port (close _V0realbasepath_V0k69) (bruijn ##.proc.25 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "close-port")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realbasepath_V0k69, self)))),
      statics->vars[0]);
}
static void _V0realbasepath_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realbasepath_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (read-line (close _V0realbasepath_V0k68) (bruijn ##.proc.25 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-line")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realbasepath_V0k68, self)))),
      _var0);
}
static void _V0realbasepath_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realbasepath_V0k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-process (close _V0realbasepath_V0k67) (bruijn ##.x.234 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-process")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realbasepath_V0k67, self)))),
      _var0);
}
static void _V0realbasepath_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0realbasepath_V0lambda59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_V0lambda59, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (sprintf (close _V0realbasepath_V0k66) (##string ##.string.706) (bruijn ##.file.24 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realbasepath_V0k66, self)))),
      VEncodePointer(&_V10_Dstring_D706.sym, VPOINTER_OTHER),
      _var1);
}
static void global_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.232 0 0) realbasepath (close _V0realbasepath_V0lambda59))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0realbasepath,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realbasepath_V0lambda59, self))))
    );
}
void _V50_V10_Dloop_D28_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D28_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D28_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.242 1 0) ((bruijn ##.k.243 0 0) 1) ((bruijn ##.k.243 0 0) 0))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
}
void _V50_V10_Dloop_D28_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D28_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D28_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.28) #f (bruijn ##.loop.28 6 0) (bruijn ##.k.237 5 0) (bruijn ##.x.239 3 0) (bruijn ##.x.240 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dloop_D28(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V10_Dloop_D28_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D28_V0k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D28_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (+ (close _V50_V10_Dloop_D28_V0k75) (bruijn ##.ct.30 4 2) (bruijn ##.x.241 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D28_V0k75, self)))),
      statics->up->up->up->vars[2],
      _var0);
}
void _V50_V10_Dloop_D28_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D28_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D28_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D28_V0k73) (close _V50_V10_Dloop_D28_V0k74))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D28_V0k73, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D28_V0k74, self)))));
}
void _V50_V10_Dloop_D28_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D28_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D28_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V50_V10_Dloop_D28_V0k72) (bruijn ##.args.29 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D28_V0k72, self)))),
      statics->up->vars[1]);
}
void _V50_V10_Dloop_D28_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D28_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D28_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.238 0 0) ((bruijn ##.k.237 1 0) (bruijn ##.ct.30 1 2)) (cdr (close _V50_V10_Dloop_D28_V0k71) (bruijn ##.args.29 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D28_V0k71, self)))),
      statics->vars[1]);
}
}
void _V50_V10_Dloop_D28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D28, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (null? (close _V50_V10_Dloop_D28_V0k70) (bruijn ##.args.29 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D28_V0k70, self)))),
      _var1);
}
static void _V0count__true_V0lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0count__true_V0lambda61" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V0count__true_V0lambda61, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _varargs;
  // (letrec 1 ((close "_V50_V10_Dloop_D28")) (##qualified-call (##.loop.28) #f (bruijn ##.loop.28 0 0) (bruijn ##.k.236 1 0) (bruijn ##.args.27 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D28, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dloop_D28(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
static void global_V0lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.235 0 0) count-true (close _V0count__true_V0lambda61))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0count__true,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0count__true_V0lambda61, self))))
    );
}
static void _V0delete__file_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0delete__file_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0delete__file_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (system (bruijn ##.k.245 1 0) (bruijn ##.x.246 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "system")), 2,
      statics->vars[0],
      _var0);
}
static void _V0delete__file_V0lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0delete__file_V0lambda63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0delete__file_V0lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (sprintf (close _V0delete__file_V0k76) (##string ##.string.707) (bruijn ##.f.31 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0delete__file_V0k76, self)))),
      VEncodePointer(&_V10_Dstring_D707.sym, VPOINTER_OTHER),
      _var1);
}
static void global_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.244 0 0) delete-file (close _V0delete__file_V0lambda63))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0delete__file,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0delete__file_V0lambda63, self))))
    );
}
static void _V0gen__header2_V0k82(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (newline (bruijn ##.k.249 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "newline")), 1,
      self->vars[0]);
}
static void _V0gen__header2_V0lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header2_V0lambda66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header2_V0lambda66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (for-each (close _V0gen__header2_V0k82) pretty-print (bruijn ##.expanded.35 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header2_V0k82, self)))),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      statics->vars[0]);
}
static void _V0gen__header2_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header2_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header2_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (with-output-to-file (bruijn ##.k.248 5 0) out-file (close _V0gen__header2_V0lambda66))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-output-to-file")), 3,
      VGetArg(statics, 5-1, 0),
      VLookupGlobalVarFast2(runtime, "out-file"),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header2_V0lambda66, self)))));
}
static void _V0gen__header2_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header2_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header2_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (expand-library-simple (bruijn ##.k.250 3 0) (bruijn ##.x.32.36 3 1) (bruijn ##.x.251 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "expand-library-simple")), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      _var0);
}
static void _V0gen__header2_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header2_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header2_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V0gen__header2_V0k85) (bruijn ##.x.252 0 0) paths)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header2_V0k85, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "paths"));
}
static void _V0gen__header2_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header2_V0k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header2_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (realbasepath (close _V0gen__header2_V0k84) (bruijn ##.x.253 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "realbasepath")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header2_V0k84, self)))),
      _var0);
}
static void _V0gen__header2_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__header2_V0lambda67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header2_V0lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (car (close _V0gen__header2_V0k83) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header2_V0k83, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void _V0gen__header2_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header2_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header2_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (close _V0gen__header2_V0k81) (close _V0gen__header2_V0lambda67) (bruijn ##.filtered.34 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header2_V0k81, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header2_V0lambda67, self)))),
      _var0);
}
static void _V0gen__header2_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header2_V0k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header2_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (eqv? (bruijn ##.k.254 2 0) (bruijn ##.x.256 0 0) 'define-library)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      statics->up->vars[0],
      _var0,
      _V0define__library);
}
static void _V0gen__header2_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header2_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header2_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.255 0 0) (car (close _V0gen__header2_V0k87) (bruijn ##.x.37 1 1)) ((bruijn ##.k.254 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header2_V0k87, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V0gen__header2_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__header2_V0lambda68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header2_V0lambda68, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (pair? (close _V0gen__header2_V0k86) (bruijn ##.x.37 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "pair?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header2_V0k86, self)))),
      _var1);
}
static void _V0gen__header2_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header2_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header2_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (filter (close _V0gen__header2_V0k80) (close _V0gen__header2_V0lambda68) (bruijn ##.file.33 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "filter")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header2_V0k80, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header2_V0lambda68, self)))),
      _var0);
}
static void _V0gen__header2_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header2_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header2_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (read-all (close _V0gen__header2_V0k79) (bruijn ##.x.257 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-all")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header2_V0k79, self)))),
      _var0);
}
static void _V0gen__header2_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header2_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header2_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-file (close _V0gen__header2_V0k78) (bruijn ##.x.258 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-file")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header2_V0k78, self)))),
      _var0);
}
static void _V0gen__header2_V0lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header2_V0lambda65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header2_V0lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V0gen__header2_V0k77) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header2_V0k77, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void global_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.247 0 0) gen-header2 (close _V0gen__header2_V0lambda65))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0gen__header2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header2_V0lambda65, self))))
    );
}
static void _V0gen__header_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.271 1 0) (compiler-error (bruijn ##.k.272 0 0) (##string ##.string.708)) ((bruijn ##.k.272 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D708.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__header_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.269 1 0) ((bruijn ##.k.270 0 0) (bruijn ##.p.269 1 0)) (car (bruijn ##.k.270 0 0) (bruijn ##.headers.39 4 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      _var0,
      statics->up->up->up->vars[0]);
}
}
static void _V0gen__header_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.266 1 0) (compiler-error (bruijn ##.k.267 0 0) (##string ##.string.709)) ((bruijn ##.k.267 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D709.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__header_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (write (bruijn ##.k.263 1 0) (bruijn ##.x.264 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "write")), 2,
      statics->vars[0],
      _var0);
}
static void _V0gen__header_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.262 1 0) (car (close _V0gen__header_V0k106) (bruijn ##.headers.39 9 0)) ((bruijn ##.k.263 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k106, self)))),
      VGetArg(statics, 9-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__header_V0k107(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (newline (bruijn ##.k.261 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "newline")), 1,
      statics->up->vars[0]);
}
static void _V0gen__header_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__header_V0k105) (close _V0gen__header_V0k107))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k105, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k107, self)))));
}
static void _V0gen__header_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V0gen__header_V0k104) (bruijn ##.x.265 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k104, self)))),
      _var0);
}
static void _V0gen__header_V0lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0lambda71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close _V0gen__header_V0k103) (bruijn ##.headers.39 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k103, self)))),
      VGetArg(statics, 6-1, 0));
}
static void _V0gen__header_V0k102(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (with-output-to-file (bruijn ##.k.260 10 0) out-file (close _V0gen__header_V0lambda71))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-output-to-file")), 3,
      VGetArg(statics, 10-1, 0),
      VLookupGlobalVarFast2(runtime, "out-file"),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0lambda71, self)))));
}
static void _V0gen__header_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__header_V0k101) (close _V0gen__header_V0k102))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k101, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k102, self)))));
}
static void _V0gen__header_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V0gen__header_V0k100) (bruijn ##.x.268 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k100, self)))),
      _var0);
}
static void _V0gen__header_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__header_V0k98) (close _V0gen__header_V0k99))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k98, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k99, self)))));
}
static void _V0gen__header_V0k96(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (null? (close _V0gen__header_V0k97) (bruijn ##.headers.39 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k97, self)))),
      statics->up->vars[0]);
}
static void _V0gen__header_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__header_V0k95) (close _V0gen__header_V0k96))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k95, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k96, self)))));
}
static void _V0gen__header_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (> (close _V0gen__header_V0k94) (bruijn ##.x.273 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k94, self)))),
      _var0,
      VEncodeInt(1l));
}
static void _V0gen__header_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (length (close _V0gen__header_V0k93) (bruijn ##.headers.39 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k93, self)))),
      _var0);
}
static void _V0gen__header_V0lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__header_V0lambda72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0lambda72, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.274 0 0) (bruijn ##.x.40 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
static void _V0gen__header_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (filter (close _V0gen__header_V0k92) (close _V0gen__header_V0lambda72) (bruijn ##.x.275 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "filter")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k92, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0lambda72, self)))),
      _var0);
}
static void _V0gen__header_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (close _V0gen__header_V0k91) header-from-library (bruijn ##.file.38 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k91, self)))),
      VLookupGlobalVarFast2(runtime, "header-from-library"),
      _var0);
}
static void _V0gen__header_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (read-all (close _V0gen__header_V0k90) (bruijn ##.x.276 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-all")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k90, self)))),
      _var0);
}
static void _V0gen__header_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-file (close _V0gen__header_V0k89) (bruijn ##.x.277 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-file")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k89, self)))),
      _var0);
}
static void _V0gen__header_V0lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_V0lambda70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0lambda70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V0gen__header_V0k88) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k88, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void global_V0lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.259 0 0) gen-header (close _V0gen__header_V0lambda70))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0gen__header,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0lambda70, self))))
    );
}
static void _V0gen__makefile_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.292 4 0) maketargets (bruijn ##.x.293 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->up->up->vars[0],
      _V0maketargets,
      _var0
    );
}
static void _V0gen__makefile_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (list (close _V0gen__makefile_V0k113) (bruijn ##.x.294 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k113, self)))),
      _var0);
}
static void _V0gen__makefile_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (change-extension (close _V0gen__makefile_V0k112) (bruijn ##.x.295 0 0) (##string ##.string.710))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k112, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D710.sym, VPOINTER_OTHER));
}
static void _V0gen__makefile_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close _V0gen__makefile_V0k111) (bruijn ##.x.296 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k111, self)))),
      _var0);
}
static void _V0gen__makefile_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.291 1 0) (car (close _V0gen__makefile_V0k110) scm-files) ((bruijn ##.k.292 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k110, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if out-file (open-output-file (bruijn ##.k.288 0 0) out-file) (current-output-port (bruijn ##.k.288 0 0)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-output-file")), 2,
      _var0,
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 1,
      _var0);
}
}
static void _V0gen__makefile_V0k126(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if out-file (close-port (bruijn ##.k.279 7 0) (bruijn ##.port.43 1 0)) ((bruijn ##.k.279 7 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "close-port")), 2,
      VGetArg(statics, 7-1, 0),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_V0k125(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (newline (close _V0gen__makefile_V0k126) (bruijn ##.port.43 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "newline")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k126, self)))),
      statics->vars[0]);
}
static void _V0gen__makefile_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.283 1 0) (compiler-error (bruijn ##.k.284 0 0) (##string ##.string.711) (bruijn ##.dep.45 4 1)) ((bruijn ##.k.284 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D711.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (format (bruijn ##.k.280 4 0) (bruijn ##.port.43 6 0) (##string ##.string.712) (bruijn ##.x.282 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D712.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0gen__makefile_V0k131(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (import->path (close _V0gen__makefile_V0k132) (bruijn ##.dep.45 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "import->path")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k132, self)))),
      statics->up->up->vars[1]);
}
static void _V0gen__makefile_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__makefile_V0k130) (close _V0gen__makefile_V0k131))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k130, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k131, self)))));
}
static void _V0gen__makefile_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V0gen__makefile_V0k129) (bruijn ##.x.285 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k129, self)))),
      _var0);
}
static void _V0gen__makefile_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.281 0 0) (valid-import? (close _V0gen__makefile_V0k128) (bruijn ##.dep.45 1 1)) ((bruijn ##.k.280 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "valid-import?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k128, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_V0lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0lambda75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0lambda75, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (pair? (close _V0gen__makefile_V0k127) (bruijn ##.dep.45 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "pair?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k127, self)))),
      _var1);
}
static void _V0gen__makefile_V0k124(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (for-each (close _V0gen__makefile_V0k125) (close _V0gen__makefile_V0lambda75) (bruijn ##.deps.42 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k125, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0lambda75, self)))),
      statics->up->vars[0]);
}
static void _V0gen__makefile_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (format (close _V0gen__makefile_V0k124) (bruijn ##.port.43 1 0) (##string ##.string.712) (bruijn ##.x.286 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k124, self)))),
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D712.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0gen__makefile_V0k122(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (car (close _V0gen__makefile_V0k123) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k123, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void _V0gen__makefile_V0k121(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (display (close _V0gen__makefile_V0k122) (##string ##.string.713) (bruijn ##.port.43 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k122, self)))),
      VEncodePointer(&_V10_Dstring_D713.sym, VPOINTER_OTHER),
      self->vars[0]);
}
static void _V0gen__makefile_V0lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0lambda76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0lambda76, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (format (bruijn ##.k.287 0 0) (bruijn ##.port.43 1 0) (##string ##.string.714) (bruijn ##.target.44 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 4,
      _var0,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D714.sym, VPOINTER_OTHER),
      _var1);
}
static void _V0gen__makefile_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (for-each (close _V0gen__makefile_V0k121) (close _V0gen__makefile_V0lambda76) maketargets)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k121, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0lambda76, self)))),
      VLookupGlobalVarFast2(runtime, "maketargets"));
}
static void _V0gen__makefile_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__makefile_V0k119) (close _V0gen__makefile_V0k120))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k119, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k120, self)))));
}
static void _V0gen__makefile_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (gather-dependencies (close _V0gen__makefile_V0k118) (bruijn ##.file.41 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "gather-dependencies")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k118, self)))),
      _var0);
}
static void _V0gen__makefile_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (read-all (close _V0gen__makefile_V0k117) (bruijn ##.x.289 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-all")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k117, self)))),
      _var0);
}
static void _V0gen__makefile_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-file (close _V0gen__makefile_V0k116) (bruijn ##.x.290 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-file")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k116, self)))),
      _var0);
}
static void _V0gen__makefile_V0k114(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (car (close _V0gen__makefile_V0k115) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k115, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void _V0gen__makefile_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__makefile_V0k109) (close _V0gen__makefile_V0k114))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k109, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k114, self)))));
}
static void _V0gen__makefile_V0lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_V0lambda74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0lambda74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close _V0gen__makefile_V0k108) maketargets)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k108, self)))),
      VLookupGlobalVarFast2(runtime, "maketargets"));
}
static void global_V0lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.278 0 0) gen-makefile (close _V0gen__makefile_V0lambda74))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0gen__makefile,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0lambda74, self))))
    );
}
static void _V0display__help_V0k157(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (bruijn ##.k.298 0 0) (##string ##.string.715))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      self->vars[0],
      VEncodePointer(&_V10_Dstring_D715.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k156(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k157) (##string ##.string.716))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k157, self)))),
      VEncodePointer(&_V10_Dstring_D716.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k155(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k156) (##string ##.string.717))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k156, self)))),
      VEncodePointer(&_V10_Dstring_D717.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k154(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k155) (##string ##.string.718))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k155, self)))),
      VEncodePointer(&_V10_Dstring_D718.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k153(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k154) (##string ##.string.719))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k154, self)))),
      VEncodePointer(&_V10_Dstring_D719.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k152(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k153) (##string ##.string.720))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k153, self)))),
      VEncodePointer(&_V10_Dstring_D720.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k151(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k152) (##string ##.string.721))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k152, self)))),
      VEncodePointer(&_V10_Dstring_D721.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k150(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k151) (##string ##.string.722))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k151, self)))),
      VEncodePointer(&_V10_Dstring_D722.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k149(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k150) (##string ##.string.723))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k150, self)))),
      VEncodePointer(&_V10_Dstring_D723.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k148(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k149) (##string ##.string.716))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k149, self)))),
      VEncodePointer(&_V10_Dstring_D716.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k147(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k148) (##string ##.string.724))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k148, self)))),
      VEncodePointer(&_V10_Dstring_D724.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k146(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k147) (##string ##.string.725))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k147, self)))),
      VEncodePointer(&_V10_Dstring_D725.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k145(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k146) (##string ##.string.716))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k146, self)))),
      VEncodePointer(&_V10_Dstring_D716.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k144(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k145) (##string ##.string.726))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k145, self)))),
      VEncodePointer(&_V10_Dstring_D726.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k143(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k144) (##string ##.string.727))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k144, self)))),
      VEncodePointer(&_V10_Dstring_D727.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k142(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k143) (##string ##.string.728))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k143, self)))),
      VEncodePointer(&_V10_Dstring_D728.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k141(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k142) (##string ##.string.729))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k142, self)))),
      VEncodePointer(&_V10_Dstring_D729.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k140(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k141) (##string ##.string.730))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k141, self)))),
      VEncodePointer(&_V10_Dstring_D730.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k139(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k140) (##string ##.string.731))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k140, self)))),
      VEncodePointer(&_V10_Dstring_D731.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k138(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k139) (##string ##.string.732))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k139, self)))),
      VEncodePointer(&_V10_Dstring_D732.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k137(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k138) (##string ##.string.733))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k138, self)))),
      VEncodePointer(&_V10_Dstring_D733.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k136(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k137) (##string ##.string.734))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k137, self)))),
      VEncodePointer(&_V10_Dstring_D734.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k135(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k136) (##string ##.string.735))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k136, self)))),
      VEncodePointer(&_V10_Dstring_D735.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k134(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k135) (##string ##.string.736))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k135, self)))),
      VEncodePointer(&_V10_Dstring_D736.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k133(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k134) (##string ##.string.737))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k134, self)))),
      VEncodePointer(&_V10_Dstring_D737.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_V0lambda78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_V0lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_V0k133) (##string ##.string.738))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k133, self)))),
      VEncodePointer(&_V10_Dstring_D738.sym, VPOINTER_OTHER));
}
static void global_V0lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.297 0 0) display-help (close _V0display__help_V0lambda78))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0display__help,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0lambda78, self))))
    );
}
static void _V0display__version_V0k160(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (bruijn ##.k.300 2 0) (##string ##.string.739))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D739.sym, VPOINTER_OTHER));
}
static void _V0display__version_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_V0k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (printf (close _V0display__version_V0k160) (##string ##.string.740) (bruijn ##.x.301 1 0) (bruijn ##.x.302 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "printf")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__version_V0k160, self)))),
      VEncodePointer(&_V10_Dstring_D740.sym, VPOINTER_OTHER),
      statics->vars[0],
      _var0);
}
static void _V0display__version_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_V0k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cadr (close _V0display__version_V0k159) version)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cadr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__version_V0k159, self)))),
      VLookupGlobalVarFast2(runtime, "version"));
}
static void _V0display__version_V0lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_V0lambda80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_V0lambda80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V0display__version_V0k158) version)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__version_V0k158, self)))),
      VLookupGlobalVarFast2(runtime, "version"));
}
static void global_V0lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.299 0 0) display-version (close _V0display__version_V0lambda80))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0display__version,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__version_V0lambda80, self))))
    );
}
static void _V0handle__exception_V0k167(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.304 3 0) (bruijn ##.ret.48.52 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
}
static void _V0handle__exception_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0handle__exception_V0k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (current-output-port (close _V0handle__exception_V0k167) '##vcore.pop-value (bruijn ##.keyval.47.51 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k167, self)))),
      _V10vcore_Dpop__value,
      statics->vars[0]);
}
static void _V0handle__exception_V0k165(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (exit (close _V0handle__exception_V0k166) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k166, self)))),
      VEncodeInt(1l));
}
static void _V0handle__exception_V0k164(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (newline (close _V0handle__exception_V0k165))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "newline")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k165, self)))));
}
static void _V0handle__exception_V0k163(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (display (close _V0handle__exception_V0k164) (bruijn ##.err.49 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k164, self)))),
      statics->up->vars[1]);
}
static void _V0handle__exception_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0handle__exception_V0k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (display (close _V0handle__exception_V0k163) (##string ##.string.741))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k163, self)))),
      VEncodePointer(&_V10_Dstring_D741.sym, VPOINTER_OTHER));
}
static void _V0handle__exception_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0handle__exception_V0k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (current-output-port (close _V0handle__exception_V0k162) '##vcore.push-value (bruijn ##.x.305 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k162, self)))),
      _V10vcore_Dpush__value,
      _var0);
}
static void _V0handle__exception_V0lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0handle__exception_V0lambda82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0lambda82, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (current-error-port (close _V0handle__exception_V0k161))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-error-port")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k161, self)))));
}
static void global_V0lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.303 0 0) handle-exception (close _V0handle__exception_V0lambda82))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0handle__exception,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0lambda82, self))))
    );
}
void _V50_V10_Dloop_D54_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.363 5 0) obj-files (bruijn ##.x.365 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 5-1, 0),
      _V0obj__files,
      _var0
    );
}
void _V50_V10_Dloop_D54_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D54_V0k177) (bruijn ##.x.366 0 0) obj-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k177, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
}
void _V50_V10_Dloop_D54_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.363 9 0) obj-files (bruijn ##.x.368 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 9-1, 0),
      _V0obj__files,
      _var0
    );
}
void _V50_V10_Dloop_D54_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D54_V0k183) (bruijn ##.x.369 0 0) obj-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k183, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
}
void _V50_V10_Dloop_D54_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close _V50_V10_Dloop_D54_V0k182) (##string ##.string.742) (bruijn ##.x.370 0 0) (##string ##.string.743))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k182, self)))),
      VEncodePointer(&_V10_Dstring_D742.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10_Dstring_D743.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D54_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.363 12 0) obj-files (bruijn ##.x.372 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 12-1, 0),
      _V0obj__files,
      _var0
    );
}
void _V50_V10_Dloop_D54_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D54_V0k189) (bruijn ##.x.373 0 0) obj-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k189, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
}
void _V50_V10_Dloop_D54_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close _V50_V10_Dloop_D54_V0k188) (##string ##.string.742) (bruijn ##.x.374 0 0) (##string ##.string.743))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k188, self)))),
      VEncodePointer(&_V10_Dstring_D742.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10_Dstring_D743.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D54_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (equal? (bruijn ##.k.380 2 0) (bruijn ##.x.381 0 0) (##string ##.string.744))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D744.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D54_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V50_V10_Dloop_D54_V0k195) (bruijn ##.x.382 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k195, self)))),
      _var0);
}
void _V50_V10_Dloop_D54_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.379 1 0) ((bruijn ##.k.380 0 0) (bruijn ##.p.379 1 0)) (cdar (close _V50_V10_Dloop_D54_V0k194) (bruijn ##.args.55 18 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k194, self)))),
      VGetArg(statics, 18-1, 1));
}
}
void _V50_V10_Dloop_D54_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.363 15 0) scm-files (bruijn ##.x.376 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 15-1, 0),
      _V0scm__files,
      _var0
    );
}
void _V50_V10_Dloop_D54_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D54_V0k198) (bruijn ##.x.377 0 0) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k198, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
void _V50_V10_Dloop_D54_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.k.363 14 0) (##string ##.string.745) (bruijn ##.x.378 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(statics, 14-1, 0),
      VEncodePointer(&_V10_Dstring_D745.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D54_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.375 0 0) (cdar (close _V50_V10_Dloop_D54_V0k197) (bruijn ##.args.55 18 1)) (cdar (close _V50_V10_Dloop_D54_V0k199) (bruijn ##.args.55 18 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k197, self)))),
      VGetArg(statics, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k199, self)))),
      VGetArg(statics, 18-1, 1));
}
}
void _V50_V10_Dloop_D54_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D54_V0k193) (close _V50_V10_Dloop_D54_V0k196))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k193, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k196, self)))));
}
void _V50_V10_Dloop_D54_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D54_V0k192) (bruijn ##.x.383 0 0) (##string ##.string.746))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k192, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D746.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D54_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V50_V10_Dloop_D54_V0k191) (bruijn ##.x.384 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k191, self)))),
      _var0);
}
void _V50_V10_Dloop_D54_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.371 0 0) (cdar (close _V50_V10_Dloop_D54_V0k187) (bruijn ##.args.55 14 1)) (cdar (close _V50_V10_Dloop_D54_V0k190) (bruijn ##.args.55 14 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k187, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k190, self)))),
      VGetArg(statics, 14-1, 1));
}
}
void _V50_V10_Dloop_D54_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D54_V0k186) (bruijn ##.x.385 0 0) (##string ##.string.747))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k186, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D747.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D54_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V50_V10_Dloop_D54_V0k185) (bruijn ##.x.386 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k185, self)))),
      _var0);
}
void _V50_V10_Dloop_D54_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.367 0 0) (cdar (close _V50_V10_Dloop_D54_V0k181) (bruijn ##.args.55 11 1)) (cdar (close _V50_V10_Dloop_D54_V0k184) (bruijn ##.args.55 11 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k181, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k184, self)))),
      VGetArg(statics, 11-1, 1));
}
}
void _V50_V10_Dloop_D54_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D54_V0k180) (bruijn ##.x.387 0 0) (##string ##.string.748))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k180, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D748.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D54_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V50_V10_Dloop_D54_V0k179) (bruijn ##.x.388 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k179, self)))),
      _var0);
}
void _V50_V10_Dloop_D54_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.364 0 0) (cdar (close _V50_V10_Dloop_D54_V0k176) (bruijn ##.args.55 8 1)) (cdar (close _V50_V10_Dloop_D54_V0k178) (bruijn ##.args.55 8 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k176, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k178, self)))),
      VGetArg(statics, 8-1, 1));
}
}
void _V50_V10_Dloop_D54_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D54_V0k175) (bruijn ##.x.389 0 0) (##string ##.string.710))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k175, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D710.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D54_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V50_V10_Dloop_D54_V0k174) (bruijn ##.x.390 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k174, self)))),
      _var0);
}
void _V50_V10_Dloop_D54_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.363 7 0) out-file (bruijn ##.x.397 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 7-1, 0),
      _V0out__file,
      _var0
    );
}
void _V50_V10_Dloop_D54_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.363 11 0) paths (bruijn ##.x.399 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 11-1, 0),
      _V0paths,
      _var0
    );
}
void _V50_V10_Dloop_D54_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close _V50_V10_Dloop_D54_V0k211) paths (bruijn ##.x.400 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k211, self)))),
      VLookupGlobalVarFast2(runtime, "paths"),
      _var0);
}
void _V50_V10_Dloop_D54_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (list (close _V50_V10_Dloop_D54_V0k210) (bruijn ##.x.401 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k210, self)))),
      _var0);
}
void _V50_V10_Dloop_D54_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (realpath (close _V50_V10_Dloop_D54_V0k209) (bruijn ##.x.402 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "realpath")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k209, self)))),
      _var0);
}
void _V50_V10_Dloop_D54_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.408 0 0) (<= (bruijn ##.k.407 1 0) 0 optimization 3) ((bruijn ##.k.407 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 4,
      statics->vars[0],
      VEncodeInt(0l),
      VLookupGlobalVarFast2(runtime, "optimization"),
      VEncodeInt(3l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D54_V0k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if optimization (integer? (close _V50_V10_Dloop_D54_V0k217) optimization) ((bruijn ##.k.407 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "optimization"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "integer?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k217, self)))),
      VLookupGlobalVarFast2(runtime, "optimization"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D54_V0k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.k.363 13 0) (##string ##.string.749) (bruijn ##.x.405 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(statics, 13-1, 0),
      VEncodePointer(&_V10_Dstring_D749.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D54_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.404 0 0) (cdar (close _V50_V10_Dloop_D54_V0k220) (bruijn ##.args.55 17 1)) ((bruijn ##.k.363 12 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k220, self)))),
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D54_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D54_V0k219) (bruijn ##.x.406 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k219, self)))),
      _var0);
}
static void _V50_V10_Dloop_D54_V0k215(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V10_Dloop_D54_V0k216) (close _V50_V10_Dloop_D54_V0k218))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k216, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k218, self)))));
}
void _V50_V10_Dloop_D54_V0k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V10_Dloop_D54_V0k215) optimization (bruijn ##.x.409 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k215, self)))),
      _V0optimization,
      _var0
    );
}
void _V50_V10_Dloop_D54_V0k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string->number (close _V50_V10_Dloop_D54_V0k214) (bruijn ##.x.410 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->number")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k214, self)))),
      _var0);
}
void _V50_V10_Dloop_D54_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.417 0 0) ((bruijn ##.k.415 2 0) (bruijn ##.p.417 0 0)) (<= (bruijn ##.k.415 2 0) 0 expand? 2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 4,
      statics->up->vars[0],
      VEncodeInt(0l),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(2l));
}
}
void _V50_V10_Dloop_D54_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.416 0 0) (eq? (close _V50_V10_Dloop_D54_V0k227) expand? 9) ((bruijn ##.k.415 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k227, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(9l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D54_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if expand? (integer? (close _V50_V10_Dloop_D54_V0k226) expand?) ((bruijn ##.k.415 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "expand?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "integer?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k226, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D54_V0k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.k.363 14 0) (##string ##.string.750) (bruijn ##.x.413 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(statics, 14-1, 0),
      VEncodePointer(&_V10_Dstring_D750.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D54_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.412 0 0) (cdar (close _V50_V10_Dloop_D54_V0k230) (bruijn ##.args.55 18 1)) ((bruijn ##.k.363 13 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k230, self)))),
      VGetArg(statics, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D54_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D54_V0k229) (bruijn ##.x.414 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k229, self)))),
      _var0);
}
static void _V50_V10_Dloop_D54_V0k224(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V10_Dloop_D54_V0k225) (close _V50_V10_Dloop_D54_V0k228))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k225, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k228, self)))));
}
void _V50_V10_Dloop_D54_V0k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V10_Dloop_D54_V0k224) expand? (bruijn ##.x.418 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k224, self)))),
      _V0expand_Q,
      _var0
    );
}
void _V50_V10_Dloop_D54_V0k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string->number (close _V50_V10_Dloop_D54_V0k223) (bruijn ##.x.419 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->number")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k223, self)))),
      _var0);
}
static void _V50_V10_Dloop_D54_V0k236(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (bruijn ##.k.363 14 0) werror-unbound-variables #f)
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 14-1, 0),
      _V0werror__unbound__variables,
      VEncodeBool(false)
    );
}
static void _V50_V10_Dloop_D54_V0k239(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (bruijn ##.k.363 16 0) werror-unbound-variables #t)
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 16-1, 0),
      _V0werror__unbound__variables,
      VEncodeBool(true)
    );
}
void _V50_V10_Dloop_D54_V0k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (eq? (bruijn ##.k.449 2 0) (bruijn ##.x.450 0 0) #\l)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      statics->up->vars[0],
      _var0,
      VEncodeChar('l'));
}
void _V50_V10_Dloop_D54_V0k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-ref (close _V50_V10_Dloop_D54_V0k247) (bruijn ##.x.451 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k247, self)))),
      _var0,
      VEncodeInt(0l));
}
void _V50_V10_Dloop_D54_V0k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.448 1 0) ((bruijn ##.k.449 0 0) (bruijn ##.p.448 1 0)) (cdar (close _V50_V10_Dloop_D54_V0k246) (bruijn ##.args.55 27 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k246, self)))),
      VGetArg(statics, 27-1, 1));
}
}
void _V50_V10_Dloop_D54_V0k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.445 1 0) (compiler-error (bruijn ##.k.446 0 0) (##string ##.string.751)) ((bruijn ##.k.446 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D751.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D54_V0k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (eq? (bruijn ##.k.440 2 0) (bruijn ##.x.441 0 0) #\,)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      statics->up->vars[0],
      _var0,
      VEncodeChar(','));
}
void _V50_V10_Dloop_D54_V0k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-ref (close _V50_V10_Dloop_D54_V0k257) (bruijn ##.x.442 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k257, self)))),
      _var0,
      VEncodeInt(1l));
}
void _V50_V10_Dloop_D54_V0k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.439 1 0) (cdar (close _V50_V10_Dloop_D54_V0k256) (bruijn ##.args.55 32 1)) ((bruijn ##.k.440 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k256, self)))),
      VGetArg(statics, 32-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D54_V0k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.436 1 0) (compiler-error (bruijn ##.k.437 0 0) (##string ##.string.752)) ((bruijn ##.k.437 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D752.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D54_V0k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.363 35 0) c-options (bruijn ##.x.426 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 35-1, 0),
      _V0c__options,
      _var0
    );
}
void _V50_V10_Dloop_D54_V0k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D54_V0k268) (bruijn ##.x.427 0 0) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k268, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "c-options"));
}
void _V50_V10_Dloop_D54_V0k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (decomma (close _V50_V10_Dloop_D54_V0k267) (bruijn ##.x.428 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "decomma")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k267, self)))),
      _var0);
}
void _V50_V10_Dloop_D54_V0k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (substring (close _V50_V10_Dloop_D54_V0k266) (bruijn ##.x.429 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k266, self)))),
      _var0,
      VEncodeInt(1l));
}
void _V50_V10_Dloop_D54_V0k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.363 35 0) c-options (bruijn ##.x.430 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 35-1, 0),
      _V0c__options,
      _var0
    );
}
void _V50_V10_Dloop_D54_V0k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D54_V0k272) (bruijn ##.x.431 0 0) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k272, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "c-options"));
}
void _V50_V10_Dloop_D54_V0k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close _V50_V10_Dloop_D54_V0k271) (##string ##.string.753) (bruijn ##.x.432 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k271, self)))),
      VEncodePointer(&_V10_Dstring_D753.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D54_V0k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (substring (close _V50_V10_Dloop_D54_V0k270) (bruijn ##.x.433 0 0) 2)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k270, self)))),
      _var0,
      VEncodeInt(2l));
}
void _V50_V10_Dloop_D54_V0k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.425 0 0) (cdar (close _V50_V10_Dloop_D54_V0k265) (bruijn ##.args.55 36 1)) (cdar (close _V50_V10_Dloop_D54_V0k269) (bruijn ##.args.55 36 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k265, self)))),
      VGetArg(statics, 36-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k269, self)))),
      VGetArg(statics, 36-1, 1));
}
}
void _V50_V10_Dloop_D54_V0k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D54_V0k264) (bruijn ##.x.434 0 0) #\c)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k264, self)))),
      _var0,
      VEncodeChar('c'));
}
void _V50_V10_Dloop_D54_V0k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-ref (close _V50_V10_Dloop_D54_V0k263) (bruijn ##.x.435 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k263, self)))),
      _var0,
      VEncodeInt(0l));
}
static void _V50_V10_Dloop_D54_V0k261(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (cdar (close _V50_V10_Dloop_D54_V0k262) (bruijn ##.args.55 33 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k262, self)))),
      VGetArg(statics, 33-1, 1));
}
void _V50_V10_Dloop_D54_V0k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D54_V0k260) (close _V50_V10_Dloop_D54_V0k261))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k260, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k261, self)))));
}
void _V50_V10_Dloop_D54_V0k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D54_V0k259) (bruijn ##.x.438 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k259, self)))),
      _var0);
}
void _V50_V10_Dloop_D54_V0k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D54_V0k255) (close _V50_V10_Dloop_D54_V0k258))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k255, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k258, self)))));
}
void _V50_V10_Dloop_D54_V0k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (>= (close _V50_V10_Dloop_D54_V0k254) (bruijn ##.x.443 0 0) 2)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">=")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k254, self)))),
      _var0,
      VEncodeInt(2l));
}
void _V50_V10_Dloop_D54_V0k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-length (close _V50_V10_Dloop_D54_V0k253) (bruijn ##.x.444 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k253, self)))),
      _var0);
}
static void _V50_V10_Dloop_D54_V0k251(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (cdar (close _V50_V10_Dloop_D54_V0k252) (bruijn ##.args.55 28 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k252, self)))),
      VGetArg(statics, 28-1, 1));
}
void _V50_V10_Dloop_D54_V0k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D54_V0k250) (close _V50_V10_Dloop_D54_V0k251))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k250, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k251, self)))));
}
void _V50_V10_Dloop_D54_V0k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D54_V0k249) (bruijn ##.x.447 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k249, self)))),
      _var0);
}
void _V50_V10_Dloop_D54_V0k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D54_V0k245) (close _V50_V10_Dloop_D54_V0k248))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k245, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k248, self)))));
}
void _V50_V10_Dloop_D54_V0k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D54_V0k244) (bruijn ##.x.452 0 0) #\c)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k244, self)))),
      _var0,
      VEncodeChar('c'));
}
void _V50_V10_Dloop_D54_V0k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-ref (close _V50_V10_Dloop_D54_V0k243) (bruijn ##.x.453 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k243, self)))),
      _var0,
      VEncodeInt(0l));
}
void _V50_V10_Dloop_D54_V0k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.424 0 0) (set! (bruijn ##.k.363 18 0) werror-unbound-variables #f) (cdar (close _V50_V10_Dloop_D54_V0k242) (bruijn ##.args.55 23 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 18-1, 0),
      _V0werror__unbound__variables,
      VEncodeBool(false)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k242, self)))),
      VGetArg(statics, 23-1, 1));
}
}
void _V50_V10_Dloop_D54_V0k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D54_V0k241) (bruijn ##.x.454 0 0) (##string ##.string.754))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k241, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D754.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D54_V0k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.423 0 0) (set! (close _V50_V10_Dloop_D54_V0k239) w-unbound-variables #t) (cdar (close _V50_V10_Dloop_D54_V0k240) (bruijn ##.args.55 21 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k239, self)))),
      _V0w__unbound__variables,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k240, self)))),
      VGetArg(statics, 21-1, 1));
}
}
void _V50_V10_Dloop_D54_V0k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D54_V0k238) (bruijn ##.x.455 0 0) (##string ##.string.755))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k238, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D755.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D54_V0k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.422 0 0) (set! (close _V50_V10_Dloop_D54_V0k236) w-unbound-variables #f) (cdar (close _V50_V10_Dloop_D54_V0k237) (bruijn ##.args.55 19 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k236, self)))),
      _V0w__unbound__variables,
      VEncodeBool(false)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k237, self)))),
      VGetArg(statics, 19-1, 1));
}
}
void _V50_V10_Dloop_D54_V0k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D54_V0k235) (bruijn ##.x.456 0 0) (##string ##.string.756))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k235, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D756.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D54_V0k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.421 0 0) (set! (bruijn ##.k.363 12 0) w-unbound-variables #t) (cdar (close _V50_V10_Dloop_D54_V0k234) (bruijn ##.args.55 17 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 12-1, 0),
      _V0w__unbound__variables,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k234, self)))),
      VGetArg(statics, 17-1, 1));
}
}
void _V50_V10_Dloop_D54_V0k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D54_V0k233) (bruijn ##.x.457 0 0) (##string ##.string.757))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k233, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D757.sym, VPOINTER_OTHER));
}
static void _V50_V10_Dloop_D54_V0k274(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (exit (bruijn ##.k.363 11 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 2,
      VGetArg(statics, 11-1, 0),
      VEncodeInt(0l));
}
static void _V50_V10_Dloop_D54_V0k276(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (exit (bruijn ##.k.363 12 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 2,
      VGetArg(statics, 12-1, 0),
      VEncodeInt(0l));
}
void _V50_V10_Dloop_D54_V0k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.363 16 0) api (bruijn ##.x.462 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 16-1, 0),
      _V0api,
      _var0
    );
}
void _V50_V10_Dloop_D54_V0k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string->number (close _V50_V10_Dloop_D54_V0k280) (bruijn ##.x.463 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->number")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k280, self)))),
      _var0);
}
void _V50_V10_Dloop_D54_V0k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.465 0 0) (set! (bruijn ##.k.363 17 0) purec? #t) ((bruijn ##.k.363 17 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 17-1, 0),
      _V0purec_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V50_V10_Dloop_D54_V0k283(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (equal? (close _V50_V10_Dloop_D54_V0k284) platform (##string ##.string.758))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k284, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D758.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D54_V0k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V10_Dloop_D54_V0k283) platform (bruijn ##.x.466 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k283, self)))),
      _V0platform,
      _var0
    );
}
void _V50_V10_Dloop_D54_V0k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.363 17 0) main (bruijn ##.x.468 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 17-1, 0),
      _V0main,
      _var0
    );
}
void _V50_V10_Dloop_D54_V0k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.363 18 0) cc (bruijn ##.x.470 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 18-1, 0),
      _V0cc,
      _var0
    );
}
void _V50_V10_Dloop_D54_V0k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.363 22 0) maketargets (bruijn ##.x.474 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 22-1, 0),
      _V0maketargets,
      _var0
    );
}
void _V50_V10_Dloop_D54_V0k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D54_V0k293) (bruijn ##.x.475 0 0) maketargets)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k293, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "maketargets"));
}
void _V50_V10_Dloop_D54_V0k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.k.363 23 0) (##string ##.string.759) (bruijn ##.x.478 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(statics, 23-1, 0),
      VEncodePointer(&_V10_Dstring_D759.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D54_V0k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.477 0 0) (set! (bruijn ##.k.363 22 0) bytecode? #t) (cdar (close _V50_V10_Dloop_D54_V0k296) (bruijn ##.args.55 27 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 22-1, 0),
      _V0bytecode_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k296, self)))),
      VGetArg(statics, 27-1, 1));
}
}
void _V50_V10_Dloop_D54_V0k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.476 0 0) (set! (bruijn ##.k.363 21 0) benchmark? #t) (eqv? (close _V50_V10_Dloop_D54_V0k295) (bruijn ##.x.53.56 23 0) 'bytecode))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 21-1, 0),
      _V0benchmark_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k295, self)))),
      VGetArg(statics, 23-1, 0),
      _V0bytecode);
}
}
void _V50_V10_Dloop_D54_V0k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.473 0 0) (cdar (close _V50_V10_Dloop_D54_V0k292) (bruijn ##.args.55 25 1)) (eqv? (close _V50_V10_Dloop_D54_V0k294) (bruijn ##.x.53.56 22 0) 'benchmark))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k292, self)))),
      VGetArg(statics, 25-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k294, self)))),
      VGetArg(statics, 22-1, 0),
      _V0benchmark);
}
}
void _V50_V10_Dloop_D54_V0k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k290" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.472 0 0) (set! (bruijn ##.k.363 19 0) makefile? #t) (eqv? (close _V50_V10_Dloop_D54_V0k291) (bruijn ##.x.53.56 21 0) 'maketarget))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 19-1, 0),
      _V0makefile_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k291, self)))),
      VGetArg(statics, 21-1, 0),
      _V0maketarget);
}
}
void _V50_V10_Dloop_D54_V0k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.471 0 0) (set! (bruijn ##.k.363 18 0) keep? #t) (eqv? (close _V50_V10_Dloop_D54_V0k290) (bruijn ##.x.53.56 20 0) 'makefile))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 18-1, 0),
      _V0keep_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k290, self)))),
      VGetArg(statics, 20-1, 0),
      _V0makefile);
}
}
void _V50_V10_Dloop_D54_V0k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.469 0 0) (cdar (close _V50_V10_Dloop_D54_V0k288) (bruijn ##.args.55 22 1)) (eqv? (close _V50_V10_Dloop_D54_V0k289) (bruijn ##.x.53.56 19 0) 'keep-temps))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k288, self)))),
      VGetArg(statics, 22-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k289, self)))),
      VGetArg(statics, 19-1, 0),
      _V0keep__temps);
}
}
void _V50_V10_Dloop_D54_V0k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.467 0 0) (cdar (close _V50_V10_Dloop_D54_V0k286) (bruijn ##.args.55 21 1)) (eqv? (close _V50_V10_Dloop_D54_V0k287) (bruijn ##.x.53.56 18 0) 'cc))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k286, self)))),
      VGetArg(statics, 21-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k287, self)))),
      VGetArg(statics, 18-1, 0),
      _V0cc);
}
}
void _V50_V10_Dloop_D54_V0k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.464 0 0) (cdar (close _V50_V10_Dloop_D54_V0k282) (bruijn ##.args.55 20 1)) (eqv? (close _V50_V10_Dloop_D54_V0k285) (bruijn ##.x.53.56 17 0) 'main))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k282, self)))),
      VGetArg(statics, 20-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k285, self)))),
      VGetArg(statics, 17-1, 0),
      _V0main);
}
}
void _V50_V10_Dloop_D54_V0k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.461 0 0) (cdar (close _V50_V10_Dloop_D54_V0k279) (bruijn ##.args.55 19 1)) (eqv? (close _V50_V10_Dloop_D54_V0k281) (bruijn ##.x.53.56 16 0) 'platform))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k279, self)))),
      VGetArg(statics, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k281, self)))),
      VGetArg(statics, 16-1, 0),
      _V0platform);
}
}
void _V50_V10_Dloop_D54_V0k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.460 0 0) (set! (bruijn ##.k.363 13 0) shared? #t) (eqv? (close _V50_V10_Dloop_D54_V0k278) (bruijn ##.x.53.56 15 0) 'api))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 13-1, 0),
      _V0shared_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k278, self)))),
      VGetArg(statics, 15-1, 0),
      _V0api);
}
}
void _V50_V10_Dloop_D54_V0k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.459 0 0) (display-version (close _V50_V10_Dloop_D54_V0k276)) (eqv? (close _V50_V10_Dloop_D54_V0k277) (bruijn ##.x.53.56 14 0) 'shared))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display-version")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k276, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k277, self)))),
      VGetArg(statics, 14-1, 0),
      _V0shared);
}
}
void _V50_V10_Dloop_D54_V0k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.458 0 0) (display-help (close _V50_V10_Dloop_D54_V0k274)) (eqv? (close _V50_V10_Dloop_D54_V0k275) (bruijn ##.x.53.56 13 0) 'version))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display-help")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k274, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k275, self)))),
      VGetArg(statics, 13-1, 0),
      _V0version);
}
}
void _V50_V10_Dloop_D54_V0k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.420 0 0) (cdar (close _V50_V10_Dloop_D54_V0k232) (bruijn ##.args.55 15 1)) (eqv? (close _V50_V10_Dloop_D54_V0k273) (bruijn ##.x.53.56 12 0) 'help))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k232, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k273, self)))),
      VGetArg(statics, 12-1, 0),
      _V0help);
}
}
void _V50_V10_Dloop_D54_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.411 0 0) (cdar (close _V50_V10_Dloop_D54_V0k222) (bruijn ##.args.55 14 1)) (eqv? (close _V50_V10_Dloop_D54_V0k231) (bruijn ##.x.53.56 11 0) '#\W))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k222, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k231, self)))),
      VGetArg(statics, 11-1, 0),
      VEncodeChar('W'));
}
}
void _V50_V10_Dloop_D54_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.403 0 0) (cdar (close _V50_V10_Dloop_D54_V0k213) (bruijn ##.args.55 13 1)) (eqv? (close _V50_V10_Dloop_D54_V0k221) (bruijn ##.x.53.56 10 0) '#\E))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k213, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k221, self)))),
      VGetArg(statics, 10-1, 0),
      VEncodeChar('E'));
}
}
void _V50_V10_Dloop_D54_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.398 0 0) (cdar (close _V50_V10_Dloop_D54_V0k208) (bruijn ##.args.55 12 1)) (eqv? (close _V50_V10_Dloop_D54_V0k212) (bruijn ##.x.53.56 9 0) '#\O))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k208, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k212, self)))),
      VGetArg(statics, 9-1, 0),
      VEncodeChar('O'));
}
}
void _V50_V10_Dloop_D54_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.396 0 0) (cdar (close _V50_V10_Dloop_D54_V0k206) (bruijn ##.args.55 11 1)) (eqv? (close _V50_V10_Dloop_D54_V0k207) (bruijn ##.x.53.56 8 0) '#\I))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k206, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k207, self)))),
      VGetArg(statics, 8-1, 0),
      VEncodeChar('I'));
}
}
void _V50_V10_Dloop_D54_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.395 0 0) (set! (bruijn ##.k.363 5 0) object? #t) (eqv? (close _V50_V10_Dloop_D54_V0k205) (bruijn ##.x.53.56 7 0) '#\o))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 5-1, 0),
      _V0object_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k205, self)))),
      VGetArg(statics, 7-1, 0),
      VEncodeChar('o'));
}
}
void _V50_V10_Dloop_D54_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.394 0 0) (set! (bruijn ##.k.363 4 0) transpile? #t) (eqv? (close _V50_V10_Dloop_D54_V0k204) (bruijn ##.x.53.56 6 0) '#\c))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->up->up->vars[0],
      _V0transpile_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k204, self)))),
      VGetArg(statics, 6-1, 0),
      VEncodeChar('c'));
}
}
void _V50_V10_Dloop_D54_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.393 0 0) (set! (bruijn ##.k.363 3 0) header? #t) (eqv? (close _V50_V10_Dloop_D54_V0k203) (bruijn ##.x.53.56 5 0) '#\t))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->up->vars[0],
      _V0header_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k203, self)))),
      VGetArg(statics, 5-1, 0),
      VEncodeChar('t'));
}
}
void _V50_V10_Dloop_D54_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.392 0 0) (set! (bruijn ##.k.363 2 0) debug? #t) (eqv? (close _V50_V10_Dloop_D54_V0k202) (bruijn ##.x.53.56 4 0) '#\h))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->vars[0],
      _V0debug_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k202, self)))),
      statics->up->up->up->vars[0],
      VEncodeChar('h'));
}
}
void _V50_V10_Dloop_D54_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.391 0 0) (set! (bruijn ##.k.363 1 0) verbose? #t) (eqv? (close _V50_V10_Dloop_D54_V0k201) (bruijn ##.x.53.56 3 0) '#\g))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->vars[0],
      _V0verbose_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k201, self)))),
      statics->up->up->vars[0],
      VEncodeChar('g'));
}
}
void _V50_V10_Dloop_D54_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.362 1 0) (cdar (close _V50_V10_Dloop_D54_V0k173) (bruijn ##.args.55 5 1)) (eqv? (close _V50_V10_Dloop_D54_V0k200) (bruijn ##.x.53.56 2 0) '#\v))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k173, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k200, self)))),
      statics->up->vars[0],
      VEncodeChar('v'));
}
}
void _V50_V10_Dloop_D54_V0k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.54) #f (bruijn ##.loop.54 6 0) (bruijn ##.k.359 5 0) (bruijn ##.x.361 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D54(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V10_Dloop_D54_V0k297(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (cdr (close _V50_V10_Dloop_D54_V0k298) (bruijn ##.args.55 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k298, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V10_Dloop_D54_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D54_V0k172) (close _V50_V10_Dloop_D54_V0k297))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k172, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k297, self)))));
}
void _V50_V10_Dloop_D54_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eqv? (close _V50_V10_Dloop_D54_V0k171) (bruijn ##.x.53.56 0 0) '#t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k171, self)))),
      _var0,
      VEncodeBool(true));
}
void _V50_V10_Dloop_D54_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.360 0 0) (caar (close _V50_V10_Dloop_D54_V0k170) (bruijn ##.args.55 2 1)) ((bruijn ##.k.359 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "caar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k170, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D54_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54_V0k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D54_V0k169) (bruijn ##.x.479 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k169, self)))),
      _var0);
}
void _V50_V10_Dloop_D54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (null? (close _V50_V10_Dloop_D54_V0k168) (bruijn ##.args.55 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54_V0k168, self)))),
      _var1);
}
static void global_V0k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.358 0 0) ((bruijn ##.k.356 2 0) (##string ##.string.762)) (compiler-error (bruijn ##.k.356 2 0) (##string ##.string.763) platform))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D762.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D763.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "platform"));
}
}
static void global_V0k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.357 0 0) ((bruijn ##.k.356 1 0) (##string ##.string.761)) (equal? (close global_V0k307) platform (##string ##.string.758)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D761.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k307, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D758.sym, VPOINTER_OTHER));
}
}
static void global_V0k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k305" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.355 1 0) ((bruijn ##.k.356 0 0) (##string ##.string.760)) (equal? (close global_V0k306) platform (##string ##.string.764)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D760.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k306, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D764.sym, VPOINTER_OTHER));
}
}
static void global_V0k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.353 2 0) cc (bruijn ##.x.354 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->vars[0],
      _V0cc,
      _var0
    );
}
static void global_V0k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k304" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k305) (close global_V0k308))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k305, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k308, self)))));
}
static void global_V0k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.352 1 0) (equal? (close global_V0k304) platform (##string ##.string.700)) ((bruijn ##.k.353 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k304, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D700.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.349 1 0) (compiler-error (bruijn ##.k.350 0 0) (##string ##.string.765)) ((bruijn ##.k.350 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D765.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.347 1 0) (null? (bruijn ##.k.348 0 0) obj-files) ((bruijn ##.k.348 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k317" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.345 1 0) (compiler-error (bruijn ##.k.346 0 0) (##string ##.string.766)) ((bruijn ##.k.346 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D766.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if makefile? ((bruijn ##.k.344 0 0) makefile?) (if header? ((bruijn ##.k.344 0 0) header?) (if bytecode? ((bruijn ##.k.344 0 0) bytecode?) (if transpile? ((bruijn ##.k.344 0 0) transpile?) (if object? ((bruijn ##.k.344 0 0) object?) ((bruijn ##.k.344 0 0) expand?))))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "makefile?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "header?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "expand?"));
}
}
}
}
}
}
static void global_V0k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.k.342 1 0) (bruijn ##.x.343 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->vars[0],
      _var0);
}
static void global_V0k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k321" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.341 1 0) (null? (close global_V0k322) obj-files) ((bruijn ##.k.342 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k322, self)))),
      VLookupGlobalVarFast2(runtime, "obj-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.339 1 0) (compiler-error (bruijn ##.k.340 0 0) (##string ##.string.767)) ((bruijn ##.k.340 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D767.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if makefile? ((bruijn ##.k.338 0 0) makefile?) (if header? ((bruijn ##.k.338 0 0) header?) (if bytecode? ((bruijn ##.k.338 0 0) bytecode?) (if transpile? ((bruijn ##.k.338 0 0) transpile?) (if object? ((bruijn ##.k.338 0 0) object?) ((bruijn ##.k.338 0 0) expand?))))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "makefile?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "header?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "expand?"));
}
}
}
}
}
}
static void global_V0k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.k.335 2 0) (bruijn ##.x.336 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->up->vars[0],
      _var0);
}
static void global_V0k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k329" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close global_V0k330) (bruijn ##.x.337 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k330, self)))),
      _var0);
}
static void global_V0k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.334 1 0) (if out-file (cdr (close global_V0k329) scm-files) ((bruijn ##.k.335 0 0) #f)) ((bruijn ##.k.335 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k329, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.332 1 0) (compiler-error (bruijn ##.k.333 0 0) (##string ##.string.768)) ((bruijn ##.k.333 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D768.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k334" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if makefile? ((bruijn ##.k.331 0 0) makefile?) (if header? ((bruijn ##.k.331 0 0) header?) (if bytecode? ((bruijn ##.k.331 0 0) bytecode?) (if transpile? ((bruijn ##.k.331 0 0) transpile?) (if object? ((bruijn ##.k.331 0 0) object?) ((bruijn ##.k.331 0 0) expand?))))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "makefile?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "header?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "expand?"));
}
}
}
}
}
}
static void global_V0k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k338" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.k.328 2 0) (bruijn ##.x.329 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->up->vars[0],
      _var0);
}
static void global_V0k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k337" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close global_V0k338) (bruijn ##.x.330 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k338, self)))),
      _var0);
}
static void global_V0k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k336" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.327 1 0) (cdr (close global_V0k337) scm-files) ((bruijn ##.k.328 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k337, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k340" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.325 1 0) (compiler-error (bruijn ##.k.326 0 0) (##string ##.string.769)) ((bruijn ##.k.326 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D769.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k346" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.k.314 2 0) (bruijn ##.x.315 0 0) (##string ##.string.710))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D710.sym, VPOINTER_OTHER));
}
static void global_V0k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k345" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_V0k346) (bruijn ##.x.316 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k346, self)))),
      _var0);
}
static void global_V0k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k348" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.k.314 2 0) (bruijn ##.x.317 0 0) (##string ##.string.770))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D770.sym, VPOINTER_OTHER));
}
static void global_V0k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k347" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_V0k348) (bruijn ##.x.318 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k348, self)))),
      _var0);
}
static void global_V0k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k350" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.k.314 2 0) (bruijn ##.x.319 0 0) (##string ##.string.771))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D771.sym, VPOINTER_OTHER));
}
static void global_V0k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k349" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_V0k350) (bruijn ##.x.320 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k350, self)))),
      _var0);
}
static void global_V0k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k352" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.k.314 2 0) (bruijn ##.x.321 0 0) (##string ##.string.772))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D772.sym, VPOINTER_OTHER));
}
static void global_V0k351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k351" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_V0k352) (bruijn ##.x.322 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k352, self)))),
      _var0);
}
static void global_V0k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k354" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.k.314 2 0) (bruijn ##.x.323 0 0) (##string ##.string.773))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D773.sym, VPOINTER_OTHER));
}
static void global_V0k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k353" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_V0k354) (bruijn ##.x.324 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k354, self)))),
      _var0);
}
static void global_V0k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k344" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if object? (car (close global_V0k345) scm-files) (if transpile? (car (close global_V0k347) scm-files) (if expand? (car (close global_V0k349) scm-files) (if header? (car (close global_V0k351) scm-files) (if bytecode? (car (close global_V0k353) scm-files) (if makefile? ((bruijn ##.k.314 0 0) out-file) ((bruijn ##.k.314 0 0) #f)))))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k345, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k347, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "expand?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k349, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k351, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k353, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
}
}
}
}
}
static void global_V0k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k355" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.312 1 0) out-file (bruijn ##.x.313 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->vars[0],
      _V0out__file,
      _var0
    );
}
static void global_V0k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k343" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.311 1 0) ((close global_V0k344) (close global_V0k355)) ((bruijn ##.k.312 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k344, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k355, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k359(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (exit (bruijn ##.k.310 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 1,
      self->vars[0]);
}
static void global_V0k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k358" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.309 1 0) (gen-header2 (close global_V0k359)) ((bruijn ##.k.310 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "gen-header2")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k359, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k362(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (exit (bruijn ##.k.308 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 1,
      self->vars[0]);
}
static void global_V0k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k361" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if header? (gen-header (close global_V0k362)) ((bruijn ##.k.308 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "gen-header")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k362, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k364(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (exit (bruijn ##.k.307 16 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 1,
      VGetArg(statics, 16-1, 0));
}
static void global_V0k363(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if makefile? (gen-makefile (close global_V0k364)) ((bruijn ##.k.307 16 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "gen-makefile")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k364, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      VEncodeBool(false));
}
}
static void global_V0k360(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k361) (close global_V0k363))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k361, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k363, self)))));
}
static void global_V0k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k357" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k358) (close global_V0k360))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k358, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k360, self)))));
}
static void global_V0k356(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (eq? (close global_V0k357) expand? 9)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k357, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(9l));
}
static void global_V0k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k342" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k343) (close global_V0k356))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k343, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k356, self)))));
}
static void global_V0k341(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (not (close global_V0k342) out-file)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k342, self)))),
      VLookupGlobalVarFast2(runtime, "out-file"));
}
static void global_V0k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k339" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k340) (close global_V0k341))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k340, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k341, self)))));
}
static void global_V0k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k335" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k336) (close global_V0k339))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k336, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k339, self)))));
}
static void global_V0k333(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k334) (close global_V0k335))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k334, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k335, self)))));
}
static void global_V0k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k332) (close global_V0k333))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k332, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k333, self)))));
}
static void global_V0k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k328) (close global_V0k331))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k328, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k331, self)))));
}
static void global_V0k325(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k326) (close global_V0k327))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k326, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k327, self)))));
}
static void global_V0k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k324) (close global_V0k325))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k324, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k325, self)))));
}
static void global_V0k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k321) (close global_V0k323))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k321, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k323, self)))));
}
static void global_V0k318(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k319) (close global_V0k320))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k319, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k320, self)))));
}
static void global_V0k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k317) (close global_V0k318))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k317, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k318, self)))));
}
static void global_V0k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k315) (close global_V0k316))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k315, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k316, self)))));
}
static void global_V0k313(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (null? (close global_V0k314) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k314, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void global_V0k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k312) (close global_V0k313))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k312, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k313, self)))));
}
static void global_V0k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (> (close global_V0k311) (bruijn ##.x.351 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k311, self)))),
      _var0,
      VEncodeInt(1l));
}
static void global_V0k309(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (count-true (close global_V0k310) makefile? header? bytecode? transpile? object? expand?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "count-true")), 7,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k310, self)))),
      VLookupGlobalVarFast2(runtime, "makefile?"),
      VLookupGlobalVarFast2(runtime, "header?"),
      VLookupGlobalVarFast2(runtime, "bytecode?"),
      VLookupGlobalVarFast2(runtime, "transpile?"),
      VLookupGlobalVarFast2(runtime, "object?"),
      VLookupGlobalVarFast2(runtime, "expand?"));
}
static void global_V0k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k303) (close global_V0k309))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k303, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k309, self)))));
}
static void global_V0k301(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (not (close global_V0k302) cc)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k302, self)))),
      VLookupGlobalVarFast2(runtime, "cc"));
}
static void global_V0k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (##.loop.54) #f (bruijn ##.loop.54 2 0) (close global_V0k301) (bruijn ##.x.480 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k301, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D54(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void global_V0k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (getopt (close global_V0k300) (##string ##.string.774) (bruijn ##.x.481 0 0) (##inline ##vcore.qcons (##inline ##vcore.qcons 'shared (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'shared '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'help (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'help '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'api (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'api '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'platform (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'platform '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'main (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'main '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'cc (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'cc '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'version (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'version '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'keep-temps (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'keep-temps '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'makefile (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'makefile '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'maketarget (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'maketarget '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'bytecode (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'bytecode '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'benchmark (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'benchmark '()))) '())))))))))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "getopt")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k300, self)))),
      VEncodePointer(&_V10_Dstring_D774.sym, VPOINTER_OTHER),
      _var0,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0shared,
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        _V0shared,
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0help,
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        _V0help,
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0api,
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCons2(runtime,
        _V0api,
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0platform,
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCons2(runtime,
        _V0platform,
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0main,
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCons2(runtime,
        _V0main,
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cc,
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCons2(runtime,
        _V0cc,
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0version,
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        _V0version,
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0keep__temps,
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        _V0keep__temps,
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0makefile,
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        _V0makefile,
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0maketarget,
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCons2(runtime,
        _V0maketarget,
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bytecode,
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        _V0bytecode,
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0benchmark,
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        _V0benchmark,
        VNULL))),
        VNULL)))))))))))));
}
static void global_V0lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V10_Dloop_D54")) (command-line (close global_V0k299)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D54, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "command-line")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k299, self)))));
    }
}
static void global_V0lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (with-exception-handler (bruijn ##.next.306 0 0) handle-exception (close global_V0lambda84))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-exception-handler")), 3,
      _var0,
      VLookupGlobalVarFast2(runtime, "handle-exception"),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda84, self)))));
}
static void global_V0k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k366" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.682 1 0) ((bruijn ##.k.683 0 0) (##string ##.string.775)) ((bruijn ##.k.683 0 0) (##string ##.string.776)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D775.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D776.sym, VPOINTER_OTHER));
}
}
void _V50_V10_Did_D65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V10_Did_D65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Did_D65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.531 0 0) (bruijn ##.x.69 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
static void global_V0k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k369" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if header? ((bruijn ##.k.681 0 0) header?) (if bytecode? ((bruijn ##.k.681 0 0) bytecode?) (if transpile? ((bruijn ##.k.681 0 0) transpile?) ((bruijn ##.k.681 0 0) expand?))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "header?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "expand?"));
}
}
}
}
static void global_V0k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k373" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (make-temporary-file (bruijn ##.k.678 2 0) (bruijn ##.x.679 0 0) (##string ##.string.770))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "make-temporary-file")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D770.sym, VPOINTER_OTHER));
}
static void global_V0k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k372" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close global_V0k373) (##string ##.string.777) (bruijn ##.x.680 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k373, self)))),
      VEncodePointer(&_V10_Dstring_D777.sym, VPOINTER_OTHER),
      _var0);
}
static void global_V0lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_V0lambda86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda86, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basename (close global_V0k372) (bruijn ##.file.70 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k372, self)))),
      _var1);
}
static void global_V0k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k371" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.676 1 0) (list (bruijn ##.k.677 0 0) out-file) (map (bruijn ##.k.677 0 0) (close global_V0lambda86) scm-files))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      _var0,
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda86, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
}
static void global_V0k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k376" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if header? ((bruijn ##.k.674 0 0) header?) (if bytecode? ((bruijn ##.k.674 0 0) bytecode?) (if transpile? ((bruijn ##.k.674 0 0) transpile?) ((bruijn ##.k.674 0 0) expand?))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "header?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "expand?"));
}
}
}
}
static void global_V0k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k380" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (make-temporary-file (bruijn ##.k.671 2 0) (bruijn ##.x.672 0 0) (##string ##.string.710))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "make-temporary-file")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D710.sym, VPOINTER_OTHER));
}
static void global_V0k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k379" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close global_V0k380) (##string ##.string.777) (bruijn ##.x.673 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k380, self)))),
      VEncodePointer(&_V10_Dstring_D777.sym, VPOINTER_OTHER),
      _var0);
}
static void global_V0lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_V0lambda87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda87, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basename (close global_V0k379) (bruijn ##.file.71 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k379, self)))),
      _var1);
}
static void global_V0k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k378" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.669 1 0) (list (bruijn ##.k.670 0 0) #f) (if object? (list (bruijn ##.k.670 0 0) out-file) (map (bruijn ##.k.670 0 0) (close global_V0lambda87) scm-files)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      _var0,
      VEncodeBool(false));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      _var0,
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda87, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
}
}
static void global_V0k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k385" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.667 0 0) ((bruijn ##.k.666 1 0) (##string ##.string.779)) (sprintf (bruijn ##.k.666 1 0) (##string ##.string.780) install-root))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D779.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D780.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
}
static void global_V0k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k384" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.665 1 0) ((bruijn ##.k.666 0 0) (##string ##.string.778)) (equal? (close global_V0k385) platform (##string ##.string.758)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D778.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k385, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D758.sym, VPOINTER_OTHER));
}
}
static void global_V0k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k389" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if debug? ((bruijn ##.k.663 0 0) (##string ##.string.781)) ((bruijn ##.k.663 0 0) (##string ##.string.716)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "debug?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D781.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D716.sym, VPOINTER_OTHER));
}
}
static void global_V0k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k391" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if shared? ((bruijn ##.k.662 0 0) (##string ##.string.782)) ((bruijn ##.k.662 0 0) (##string ##.string.716)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D782.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D716.sym, VPOINTER_OTHER));
}
}
static void global_V0k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k400" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if shared? (> (bruijn ##.k.597 0 0) (bruijn ##.num-mains.68 14 8) 0) ((bruijn ##.k.597 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      _var0,
      VGetArg(statics, 14-1, 8),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k402" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.595 1 0) (compiler-error (bruijn ##.k.596 0 0) (##string ##.string.783)) ((bruijn ##.k.596 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D783.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k405" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.593 1 0) (compiler-error (bruijn ##.k.594 0 0) (##string ##.string.784)) ((bruijn ##.k.594 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D784.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D100_V0k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D100_V0k411" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D100_V0k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.100) #f (bruijn ##.loop.100 6 0) (bruijn ##.k.586 5 0) (bruijn ##.x.588 1 0) (bruijn ##.x.589 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dloop_D100(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V10_Dloop_D100_V0k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D100_V0k410" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D100_V0k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cdr (close _V50_V10_Dloop_D100_V0k411) (bruijn ##.paths.102 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D100_V0k411, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V10_Dloop_D100_V0k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D100_V0k409" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D100_V0k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close _V50_V10_Dloop_D100_V0k410) (bruijn ##.acc.101 3 1) (bruijn ##.x.590 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D100_V0k410, self)))),
      statics->up->up->vars[1],
      _var0);
}
void _V50_V10_Dloop_D100_V0k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D100_V0k408" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D100_V0k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (sprintf (close _V50_V10_Dloop_D100_V0k409) (##string ##.string.785) (bruijn ##.x.591 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D100_V0k409, self)))),
      VEncodePointer(&_V10_Dstring_D785.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D100_V0k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D100_V0k407" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D100_V0k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.587 0 0) ((bruijn ##.k.586 1 0) (bruijn ##.acc.101 1 1)) (car (close _V50_V10_Dloop_D100_V0k408) (bruijn ##.paths.102 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D100_V0k408, self)))),
      statics->vars[2]);
}
}
void _V50_V10_Dloop_D100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D100, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (null? (close _V50_V10_Dloop_D100_V0k407) (bruijn ##.paths.102 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D100_V0k407, self)))),
      _var2);
}
static void global_V0k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k420" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.575 0 0) (not (bruijn ##.k.572 3 0) object?) ((bruijn ##.k.572 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k419" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.574 0 0) (not (close global_V0k420) expand?) ((bruijn ##.k.572 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k420, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k418" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.573 0 0) (not (close global_V0k419) transpile?) ((bruijn ##.k.572 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k419, self)))),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k417" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.571 1 0) (not (close global_V0k418) bytecode?) ((bruijn ##.k.572 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k418, self)))),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k423" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if out-file (sprintf (bruijn ##.k.570 0 0) (##string ##.string.786) cc out-file) ((bruijn ##.k.570 0 0) cc))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D786.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "cc"),
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "cc"));
}
}
static void global_V0k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k426" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if debug? ((bruijn ##.k.569 0 0) (##string ##.string.781)) ((bruijn ##.k.569 0 0) (##string ##.string.716)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "debug?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D781.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D716.sym, VPOINTER_OTHER));
}
}
static void global_V0k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k430" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.568 0 0) ((bruijn ##.k.567 1 0) (##string ##.string.788)) (sprintf (bruijn ##.k.567 1 0) (##string ##.string.789) install-root))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D788.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D789.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
}
static void global_V0k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k429" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.566 1 0) ((bruijn ##.k.567 0 0) (##string ##.string.787)) (equal? (close global_V0k430) platform (##string ##.string.758)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D787.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k430, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D758.sym, VPOINTER_OTHER));
}
}
static void global_V0k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k433" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.565 0 0) ((bruijn ##.k.564 1 0) (##string ##.string.716)) ((bruijn ##.k.564 1 0) (##string ##.string.791)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D716.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D791.sym, VPOINTER_OTHER));
}
}
static void global_V0k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k432" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if shared? ((bruijn ##.k.564 0 0) (##string ##.string.790)) (equal? (close global_V0k433) platform (##string ##.string.758)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D790.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k433, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D758.sym, VPOINTER_OTHER));
}
}
static void global_V0k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k443" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if verbose? (displayln (bruijn ##.k.551 0 0) (bruijn ##.link-command.109 10 1)) ((bruijn ##.k.551 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "verbose?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      _var0,
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k444(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (system (bruijn ##.k.549 11 0) (bruijn ##.link-command.109 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "system")), 2,
      VGetArg(statics, 11-1, 0),
      VGetArg(statics, 9-1, 1));
}
static void global_V0k442(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k443) (close global_V0k444))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k443, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k444, self)))));
}
static void global_V0k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k441" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k442) (bruijn ##.link-command.109 9 1) (bruijn ##.x.552 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k442, self)))),
      VEncodeInt(9l), VEncodeInt(1l),
      _var0
    );
}
static void global_V0k440(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (string-append (close global_V0k441) (bruijn ##.link-command.109 8 1) (bruijn ##.link-command-flags.108 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k441, self)))),
      VGetArg(statics, 8-1, 1),
      VGetArg(statics, 8-1, 0));
}
static void global_V0k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k445" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.553 1 0) (bruijn ##.link-command.109 10 1) (bruijn ##.x.554 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(10l), VEncodeInt(1l),
      _var0
    );
}
static void global_V0lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_V0lambda88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (string-append (close global_V0k445) (bruijn ##.link-command.109 9 1) (bruijn ##.option.111 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k445, self)))),
      VGetArg(statics, 9-1, 1),
      _var1);
}
static void global_V0k439(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (for-each (close global_V0k440) (close global_V0lambda88) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k440, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda88, self)))),
      VLookupGlobalVarFast2(runtime, "c-options"));
}
static void global_V0k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k446" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.555 1 0) (bruijn ##.link-command.109 10 1) (bruijn ##.x.556 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(10l), VEncodeInt(1l),
      _var0
    );
}
static void global_V0lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_V0lambda89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda89, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (string-append (close global_V0k446) (bruijn ##.link-command.109 9 1) (##string ##.string.792) (bruijn ##.file.110 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k446, self)))),
      VGetArg(statics, 9-1, 1),
      VEncodePointer(&_V10_Dstring_D792.sym, VPOINTER_OTHER),
      _var1);
}
static void global_V0k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k438" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (for-each (close global_V0k439) (close global_V0lambda89) (bruijn ##.x.557 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k439, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda89, self)))),
      _var0);
}
static void global_V0k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k437" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close global_V0k438) (bruijn ##.cc-obj-files.61 31 1) (bruijn ##.x.558 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k438, self)))),
      VGetArg(statics, 31-1, 1),
      _var0);
}
static void global_V0k436(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (reverse (close global_V0k437) obj-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "reverse")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k437, self)))),
      VLookupGlobalVarFast2(runtime, "obj-files"));
}
static void global_V0k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k435" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k436) (bruijn ##.link-command-flags.108 6 0) (bruijn ##.x.559 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k436, self)))),
      VEncodeInt(6l), VEncodeInt(0l),
      _var0
    );
}
static void global_V0k434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k434" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close global_V0k435) (bruijn ##.base-cc-flags.62 29 2) (bruijn ##.x.560 4 0) (bruijn ##.x.561 3 0) (bruijn ##.x.562 1 0) (bruijn ##.x.563 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k435, self)))),
      VGetArg(statics, 29-1, 2),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->vars[0],
      _var0);
}
static void global_V0k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k431" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k432) (close global_V0k434))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k432, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k434, self)))));
}
static void global_V0k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k428" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k429) (close global_V0k431))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k429, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k431, self)))));
}
static void global_V0k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k427" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close global_V0k428) platform (##string ##.string.700))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k428, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D700.sym, VPOINTER_OTHER));
}
static void global_V0k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k425" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k426) (close global_V0k427))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k426, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k427, self)))));
}
static void global_V0k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k424" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 (#f (bruijn ##.x.550 1 0)) (sprintf (close global_V0k425) (##string ##.string.793) optimization))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k425, self)))),
      VEncodePointer(&_V10_Dstring_D793.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "optimization"));
    }
}
static void global_V0k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k422" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.548 1 0) ((close global_V0k423) (close global_V0k424)) ((bruijn ##.k.549 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k423, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k424, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k452" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.547 0 0) (not (bruijn ##.k.544 3 0) keep?) ((bruijn ##.k.544 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "keep?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k451" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.546 0 0) (not (close global_V0k452) expand?) ((bruijn ##.k.544 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k452, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k450" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.545 0 0) (not (close global_V0k451) transpile?) ((bruijn ##.k.544 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k451, self)))),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k449" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.543 1 0) (not (close global_V0k450) bytecode?) ((bruijn ##.k.544 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k450, self)))),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k454" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.541 1 0) (for-each (bruijn ##.k.542 0 0) delete-file (bruijn ##.cc-files.60 24 0)) ((bruijn ##.k.542 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      _var0,
      VLookupGlobalVarFast2(runtime, "delete-file"),
      VGetArg(statics, 24-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k461" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.540 0 0) (not (bruijn ##.k.536 4 0) keep?) ((bruijn ##.k.536 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->up->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "keep?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k460" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.539 0 0) (not (close global_V0k461) object?) ((bruijn ##.k.536 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k461, self)))),
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k459" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.538 0 0) (not (close global_V0k460) expand?) ((bruijn ##.k.536 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k460, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k458" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.537 0 0) (not (close global_V0k459) transpile?) ((bruijn ##.k.536 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k459, self)))),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k457" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.535 1 0) (not (close global_V0k458) bytecode?) ((bruijn ##.k.536 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k458, self)))),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k462(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k462" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.534 0 0) (for-each (bruijn ##.next.530 29 0) delete-file (bruijn ##.cc-obj-files.61 25 1)) ((bruijn ##.next.530 29 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VGetArg(statics, 29-1, 0),
      VLookupGlobalVarFast2(runtime, "delete-file"),
      VGetArg(statics, 25-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 1,
      VEncodeBool(false));
}
}
static void global_V0k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k456" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k457) (close global_V0k462))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k457, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k462, self)))));
}
static void global_V0k455(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (not (close global_V0k456) header?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k456, self)))),
      VLookupGlobalVarFast2(runtime, "header?"));
}
static void global_V0k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k453" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k454) (close global_V0k455))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k454, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k455, self)))));
}
static void global_V0k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k448" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k449) (close global_V0k453))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k449, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k453, self)))));
}
static void global_V0k447(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (not (close global_V0k448) header?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k448, self)))),
      VLookupGlobalVarFast2(runtime, "header?"));
}
static void global_V0k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k421" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k422) (close global_V0k447))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k422, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k447, self)))));
}
static void global_V0k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k416" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k417) (close global_V0k421))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k417, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k421, self)))));
}
static void global_V0k415(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (not (close global_V0k416) header?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k416, self)))),
      VLookupGlobalVarFast2(runtime, "header?"));
}
static void global_V0k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k468" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.584 0 0) (not (bruijn ##.k.582 2 0) expand?) ((bruijn ##.k.582 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->up->vars[0],
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k467" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.583 0 0) (not (close global_V0k468) transpile?) ((bruijn ##.k.582 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k468, self)))),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k466" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.581 1 0) (not (close global_V0k467) bytecode?) ((bruijn ##.k.582 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k467, self)))),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k470" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if verbose? (displayln (bruijn ##.k.580 0 0) (bruijn ##.cc-cmd.107 3 0)) ((bruijn ##.k.580 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "verbose?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      _var0,
      statics->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k471(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (system (bruijn ##.k.577 5 0) (bruijn ##.cc-cmd.107 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "system")), 2,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0]);
}
static void global_V0k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k469" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.579 0 0) ((close global_V0k470) (close global_V0k471)) ((bruijn ##.k.577 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k470, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k471, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void global_V0k465(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k465" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k466) (close global_V0k469))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k466, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k469, self)))));
}
static void global_V0k464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k464" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.x.578 1 0)) (not (close global_V0k465) header?))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k465, self)))),
      VLookupGlobalVarFast2(runtime, "header?"));
    }
}
static void global_V0k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k463" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (sprintf (close global_V0k464) (##string ##.string.795) cc (bruijn ##.path.106 0 0) (bruijn ##.cc-paths.99 6 0) (bruijn ##.cc-command.64 22 4) (bruijn ##.obj-file.105 1 3) (bruijn ##.cc-file.104 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 8,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k464, self)))),
      VEncodePointer(&_V10_Dstring_D795.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "cc"),
      _var0,
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 22-1, 4),
      statics->vars[3],
      statics->vars[2]);
}
static void global_V0lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "global_V0lambda91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda91, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (realbasepath (close global_V0k463) (bruijn ##.scm-file.103 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "realbasepath")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k463, self)))),
      _var1);
}
static void global_V0lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (for-each (bruijn ##.k.576 0 0) (close global_V0lambda91) scm-files (bruijn ##.cc-files.60 20 0) (bruijn ##.cc-obj-files.61 20 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 5,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda91, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"),
      VGetArg(statics, 20-1, 0),
      VGetArg(statics, 20-1, 1));
}
static void global_V0k414(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (benchmark (close global_V0k415) (##string ##.string.794) (close global_V0lambda90))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k415, self)))),
      VEncodePointer(&_V10_Dstring_D794.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda90, self)))));
}
static void global_V0k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k413" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k414) (bruijn ##.cc-paths.99 3 0) (bruijn ##.x.585 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k414, self)))),
      VEncodeInt(3l), VEncodeInt(0l),
      _var0
    );
}
static void global_V0k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k412" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (##.loop.100) #f (bruijn ##.loop.100 1 0) (close global_V0k413) (##string ##.string.716) (bruijn ##.x.592 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k413, self))));
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D716.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dloop_D100(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void global_V0k406(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 (#f) (letrec 1 ((close "_V50_V10_Dloop_D100")) (cdr (close global_V0k412) paths)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = VEncodeBool(false);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D100, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k412, self)))),
      VLookupGlobalVarFast2(runtime, "paths"));
    }
    }
}
static void global_V0k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k404" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k405) (close global_V0k406))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k405, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k406, self)))));
}
static void global_V0k403(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (> (close global_V0k404) (bruijn ##.num-mains.68 14 8) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k404, self)))),
      VGetArg(statics, 14-1, 8),
      VEncodeInt(1l));
}
static void global_V0k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k401" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k402) (close global_V0k403))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k402, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k403, self)))));
}
static void global_V0k399(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k400) (close global_V0k401))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k400, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k401, self)))));
}
static void global_V0k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k398" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k399) (bruijn ##.num-mains.68 13 8) (bruijn ##.x.598 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k399, self)))),
      VEncodeInt(13l), VEncodeInt(8l),
      _var0
    );
}
static void global_V0k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k472" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.72 1 1) ((bruijn ##.k.601 0 0) 1) ((bruijn ##.k.601 0 0) 0))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
}
static void global_V0k473(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k473" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (+ (bruijn ##.k.599 1 0) (bruijn ##.acc.73 1 2) (bruijn ##.x.600 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      statics->vars[0],
      statics->vars[2],
      _var0);
}
static void global_V0lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "global_V0lambda92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda92, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close global_V0k472) (close global_V0k473))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k472, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k473, self)))));
}
static void global_V0k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k397" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (fold (close global_V0k398) (close global_V0lambda92) 0 (bruijn ##.x.602 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "fold")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k398, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda92, self)))),
      VEncodeInt(0l),
      _var0);
}
void _V50_V10_Dloop_D81_V0k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81_V0k483" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if werror-unbound-variables ((bruijn ##.k.636 0 0) compiler-error) ((bruijn ##.k.636 0 0) compiler-warning))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "werror-unbound-variables"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "compiler-error"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "compiler-warning"));
}
}
void _V50_V10_Dloop_D81_V0k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81_V0k484" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.635 0 0) (bruijn ##.k.632 5 0) (##string ##.string.796) (bruijn ##.free.85 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D796.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
void _V50_V10_Dloop_D81_V0k482(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81_V0k482" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.634 0 0) ((close _V50_V10_Dloop_D81_V0k483) (close _V50_V10_Dloop_D81_V0k484)) ((bruijn ##.k.632 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k483, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k484, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D81_V0k481(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81_V0k481" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D81_V0k482) (bruijn ##.x.637 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k482, self)))),
      _var0);
}
void _V50_V10_Dloop_D81_V0k480(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81_V0k480" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close _V50_V10_Dloop_D81_V0k481) (bruijn ##.free.85 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k481, self)))),
      _var0);
}
void _V50_V10_Dloop_D81_V0k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81_V0k485" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.k.638 1 0) (bruijn ##.x.639 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->vars[0],
      _var0);
}
void _V50_V10_Dloop_D81_V0lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81_V0lambda95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0lambda95, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (memv (close _V50_V10_Dloop_D81_V0k485) (bruijn ##.e.86 0 1) (bruijn ##.bound.83 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "memv")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k485, self)))),
      _var1,
      statics->up->vars[2]);
}
void _V50_V10_Dloop_D81_V0k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81_V0k490" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.81) #f (bruijn ##.loop.81 7 0) (bruijn ##.k.632 6 0) (bruijn ##.x.640 2 0) (bruijn ##.new-bound.88 4 1) (bruijn ##.x.641 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->up->up->up->vars[1];
    VWORD _arg3 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V10_Dloop_D81(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V10_Dloop_D81_V0k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81_V0k489" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close _V50_V10_Dloop_D81_V0k490) (bruijn ##.x.642 0 0) (bruijn ##.free.84 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k490, self)))),
      _var0,
      VGetArg(statics, 5-1, 3));
}
void _V50_V10_Dloop_D81_V0k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81_V0k491" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.k.643 1 0) (bruijn ##.x.644 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->vars[0],
      _var0);
}
void _V50_V10_Dloop_D81_V0lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81_V0lambda96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0lambda96, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (memv (close _V50_V10_Dloop_D81_V0k491) (bruijn ##.e.92 0 1) (bruijn ##.free.84 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "memv")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k491, self)))),
      _var1,
      VGetArg(statics, 5-1, 3));
}
void _V50_V10_Dloop_D81_V0k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81_V0k488" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (filter (close _V50_V10_Dloop_D81_V0k489) (close _V50_V10_Dloop_D81_V0lambda96) (bruijn ##.new-free.87 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "filter")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k489, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0lambda96, self)))),
      statics->up->vars[0]);
}
static void _V50_V10_Dloop_D81_V0k487(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (cdr (close _V50_V10_Dloop_D81_V0k488) (bruijn ##.exprs.82 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k488, self)))),
      statics->up->up->vars[1]);
}
void _V50_V10_Dloop_D81_V0k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81_V0k486" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V10_Dloop_D81_V0k487) (bruijn ##.dummy.59.89 1 2) (bruijn ##.x.645 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k487, self)))),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
void _V50_V10_Dloop_D81_V0k493(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81_V0k493" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (free-variables-toplevel (bruijn ##.k.646 2 0) (bruijn ##.x.647 1 0) (bruijn ##.bound.83 5 2) (bruijn ##.x.648 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "free-variables-toplevel")), 4,
      statics->up->vars[0],
      statics->vars[0],
      VGetArg(statics, 5-1, 2),
      _var0);
}
void _V50_V10_Dloop_D81_V0k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81_V0k492" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D81_V0k493) (bruijn ##.path.77 11 0) paths)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k493, self)))),
      VGetArg(statics, 11-1, 0),
      VLookupGlobalVarFast2(runtime, "paths"));
}
void _V50_V10_Dloop_D81_V0lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81_V0lambda97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V50_V10_Dloop_D81_V0k492) (bruijn ##.exprs.82 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k492, self)))),
      statics->up->up->vars[1]);
}
static void _V50_V10_Dloop_D81_V0k494(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (bruijn ##.k.649 0 0) (bruijn ##.new-bound.88 1 1) (bruijn ##.new-bound.58.91 0 2))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      self->vars[0],
      VEncodeInt(1l), VEncodeInt(1l),
      self->vars[2]
    );
}
void _V50_V10_Dloop_D81_V0lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81_V0lambda98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0lambda98, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V50_V10_Dloop_D81_V0k494) (bruijn ##.new-free.87 1 0) (bruijn ##.new-free.57.90 0 1))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k494, self)))),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
void _V50_V10_Dloop_D81_V0k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81_V0k479" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.633 0 0) (filter (close _V50_V10_Dloop_D81_V0k480) (close _V50_V10_Dloop_D81_V0lambda95) (bruijn ##.free.84 1 3)) (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V50_V10_Dloop_D81_V0k486) (close _V50_V10_Dloop_D81_V0lambda97) (close _V50_V10_Dloop_D81_V0lambda98))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "filter")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k480, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0lambda95, self)))),
      statics->vars[3]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k486, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0lambda97, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0lambda98, self)))));
    }
}
}
void _V50_V10_Dloop_D81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V10_Dloop_D81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (null? (close _V50_V10_Dloop_D81_V0k479) (bruijn ##.exprs.82 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k479, self)))),
      _var1);
}
static void global_V0k495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k495" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.81) #f (bruijn ##.loop.81 1 0) (bruijn ##.k.631 2 0) (bruijn ##.x.650 0 0) '() '())
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V10_Dloop_D81(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void global_V0k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k478" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if w-unbound-variables (letrec 1 ((close "_V50_V10_Dloop_D81")) (apply (close global_V0k495) append (bruijn ##.expanded.80 2 0))) ((bruijn ##.k.631 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "w-unbound-variables"))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k495, self)))),
      VLookupGlobalVarFast2(runtime, "append"),
      statics->up->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k508" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.k.608 5 0) (bruijn ##.x.609 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VGetArg(statics, 5-1, 0),
      _var0);
}
static void global_V0k507(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k507" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close global_V0k508) (bruijn ##.x.610 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k508, self)))),
      _var0);
}
static void global_V0k506(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (take-right (close global_V0k507) (bruijn ##.funs.95 4 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "take-right")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k507, self)))),
      statics->up->up->up->vars[0],
      VEncodeInt(1l));
}
static void global_V0k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k505" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (write-bytecode (close global_V0k506) (bruijn ##.x.611 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "write-bytecode")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k506, self)))),
      _var0);
}
static void global_V0k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k504" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (apply (close global_V0k505) to-bytecode (bruijn ##.x.612 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k505, self)))),
      VLookupGlobalVarFast2(runtime, "to-bytecode"),
      _var0);
}
static void global_V0k503(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k503" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close global_V0k504) debug? (bruijn ##.x.613 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k504, self)))),
      VLookupGlobalVarFast2(runtime, "debug?"),
      _var0);
}
static void global_V0k512(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k512" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (apply (bruijn ##.k.608 4 0) printout2 (bruijn ##.x.614 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      statics->up->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "printout2"),
      _var0);
}
static void global_V0k511(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k511" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close global_V0k512) main (bruijn ##.x.615 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k512, self)))),
      VLookupGlobalVarFast2(runtime, "main"),
      _var0);
}
static void global_V0k510(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k510" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close global_V0k511) purec? (bruijn ##.x.616 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k511, self)))),
      VLookupGlobalVarFast2(runtime, "purec?"),
      _var0);
}
static void global_V0k509(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k509" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close global_V0k510) debug? (bruijn ##.x.617 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k510, self)))),
      VLookupGlobalVarFast2(runtime, "debug?"),
      _var0);
}
static void global_V0lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if bytecode? (cons (close global_V0k503) shared? (bruijn ##.funs.95 1 0)) (cons (close global_V0k509) shared? (bruijn ##.funs.95 1 0)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k503, self)))),
      VLookupGlobalVarFast2(runtime, "shared?"),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k509, self)))),
      VLookupGlobalVarFast2(runtime, "shared?"),
      statics->vars[0]);
}
}
static void global_V0k502(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k502" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (benchmark (bruijn ##.k.604 9 0) (##string ##.string.797) (close global_V0lambda99))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      VGetArg(statics, 9-1, 0),
      VEncodePointer(&_V10_Dstring_D797.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda99, self)))));
}
static void global_V0k514(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k514" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (to-functions (bruijn ##.k.618 2 0) (bruijn ##.x.619 1 0) (bruijn ##.x.620 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "to-functions")), 3,
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void global_V0k513(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k513" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close global_V0k514) bytecode?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k514, self)))),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
}
static void global_V0lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (close global_V0k513) bruijn-ify (bruijn ##.opt.94 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k513, self)))),
      VLookupGlobalVarFast2(runtime, "bruijn-ify"),
      statics->up->vars[0]);
}
static void global_V0k501(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k501" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.607 0 0) (for-each (bruijn ##.k.604 8 0) pretty-print (bruijn ##.opt.94 1 0)) (benchmark (close global_V0k502) (##string ##.string.798) (close global_V0lambda100)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VGetArg(statics, 8-1, 0),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k502, self)))),
      VEncodePointer(&_V10_Dstring_D798.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda100, self)))));
}
}
static void global_V0k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k500" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close global_V0k501) expand? 2)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k501, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(2l));
}
static void global_V0k516(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k516" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.626 1 0) ((bruijn ##.k.627 0 0) qualify-callsites) ((bruijn ##.k.627 0 0) (bruijn ##.id.65 24 5)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "qualify-callsites"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 24-1, 5));
}
}
static void global_V0k519(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k519" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.623 2 0) (bruijn ##.k.622 4 0) (bruijn ##.x.624 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      statics->up->up->up->vars[0],
      _var0);
}
static void global_V0k518(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k518" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (optimize (close global_V0k519) (bruijn ##.expr.96 3 1) (bruijn ##.x.625 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "optimize")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k519, self)))),
      statics->up->up->vars[1],
      _var0);
}
static void global_V0k517(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k517" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close global_V0k518) bytecode?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k518, self)))),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
}
static void global_V0k515(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k515" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k516) (close global_V0k517))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k516, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k517, self)))));
}
static void global_V0lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_V0lambda102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda102, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (> (close global_V0k515) optimization 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k515, self)))),
      VLookupGlobalVarFast2(runtime, "optimization"),
      VEncodeInt(0l));
}
static void global_V0lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (bruijn ##.k.621 0 0) (close global_V0lambda102) (bruijn ##.cps.93 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda102, self)))),
      statics->up->vars[0]);
}
static void global_V0k499(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k499" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.606 0 0) (for-each (bruijn ##.k.604 6 0) pretty-print (bruijn ##.cps.93 1 0)) (benchmark (close global_V0k500) (##string ##.string.799) (close global_V0lambda101)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VGetArg(statics, 6-1, 0),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k500, self)))),
      VEncodePointer(&_V10_Dstring_D799.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda101, self)))));
}
}
static void global_V0k498(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k498" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close global_V0k499) expand? 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k499, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(1l));
}
static void global_V0lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_V0lambda104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (to-cps (bruijn ##.k.629 0 0) (bruijn ##.expr.97 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "to-cps")), 2,
      _var0,
      _var1);
}
static void global_V0k520(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k520" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (bruijn ##.k.628 1 0) (close global_V0lambda104) (bruijn ##.x.630 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda104, self)))),
      _var0);
}
static void global_V0lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (apply (close global_V0k520) append (bruijn ##.expanded.80 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k520, self)))),
      VLookupGlobalVarFast2(runtime, "append"),
      statics->up->vars[0]);
}
static void global_V0k497(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k497" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.605 0 0) (for-each (bruijn ##.k.604 4 0) pretty-print (bruijn ##.expanded.80 1 0)) (benchmark (close global_V0k498) (##string ##.string.800) (close global_V0lambda103)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      statics->up->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k498, self)))),
      VEncodePointer(&_V10_Dstring_D800.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda103, self)))));
}
}
static void global_V0k496(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (eq? (close global_V0k497) expand? 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k497, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(0l));
}
static void global_V0k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k477" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k478) (close global_V0k496))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k478, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k496, self)))));
}
static void global_V0k522(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k522" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (map (bruijn ##.k.652 2 0) alpha-convert (bruijn ##.x.653 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      statics->up->vars[0],
      VLookupGlobalVarFast2(runtime, "alpha-convert"),
      _var0);
}
static void global_V0k521(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k521" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (expand-toplevel (close global_V0k522) (bruijn ##.e.98 1 1) (bruijn ##.x.654 0 0) (bruijn ##.architecture.66 19 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "expand-toplevel")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k522, self)))),
      statics->vars[1],
      _var0,
      VGetArg(statics, 19-1, 6));
}
static void global_V0lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_V0lambda106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda106, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (cons (close global_V0k521) (bruijn ##.path.77 5 0) paths)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k521, self)))),
      VGetArg(statics, 5-1, 0),
      VLookupGlobalVarFast2(runtime, "paths"));
}
static void global_V0lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (bruijn ##.k.651 0 0) (close global_V0lambda106) (bruijn ##.file.79 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda106, self)))),
      statics->vars[0]);
}
static void global_V0k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k476" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (benchmark (close global_V0k477) (##string ##.string.801) (close global_V0lambda105))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k477, self)))),
      VEncodePointer(&_V10_Dstring_D801.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda105, self)))));
}
static void global_V0k523(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k523" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (append (bruijn ##.k.655 1 0) (bruijn ##.x.656 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.fd.78 1 0) (read-all (close global_V0k523) (bruijn ##.fd.78 1 0)) (compiler-error (bruijn ##.k.655 0 0) (##string ##.string.803) (bruijn ##.scm-file.74 4 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-all")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k523, self)))),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D803.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
}
static void global_V0k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k475" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (benchmark (close global_V0k476) (##string ##.string.802) (close global_V0lambda107))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k476, self)))),
      VEncodePointer(&_V10_Dstring_D802.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda107, self)))));
}
static void global_V0lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-file (close global_V0k475) (bruijn ##.scm-file.74 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-file")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k475, self)))),
      statics->up->vars[1]);
}
static void global_V0k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k474" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (with-output-to-file (bruijn ##.k.603 1 0) (bruijn ##.cc-file.75 1 2) (close global_V0lambda94))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-output-to-file")), 3,
      statics->vars[0],
      statics->vars[2],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda94, self)))));
}
static void global_V0lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "global_V0lambda93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda93, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (realbasepath (close global_V0k474) (bruijn ##.scm-file.74 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "realbasepath")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k474, self)))),
      _var1);
}
static void global_V0k396(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (map (close global_V0k397) (close global_V0lambda93) scm-files (bruijn ##.cc-files.60 11 0) (bruijn ##.cc-obj-files.61 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k397, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda93, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"),
      VGetArg(statics, 11-1, 0),
      VGetArg(statics, 11-1, 1));
}
static void global_V0k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k395" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k396) (bruijn ##.cc-command.64 11 4) (bruijn ##.x.657 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k396, self)))),
      VEncodeInt(11l), VEncodeInt(4l),
      _var0
    );
}
static void global_V0k394(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (apply (close global_V0k395) string-append (bruijn ##.cc-command-flags.63 10 3) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k395, self)))),
      VLookupGlobalVarFast2(runtime, "string-append"),
      VGetArg(statics, 10-1, 3),
      VLookupGlobalVarFast2(runtime, "c-options"));
}
static void global_V0k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k393" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k394) (bruijn ##.cc-command-flags.63 10 3) (bruijn ##.x.658 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k394, self)))),
      VEncodeInt(10l), VEncodeInt(3l),
      _var0
    );
}
static void global_V0k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k392" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close global_V0k393) (bruijn ##.base-cc-flags.62 9 2) (bruijn ##.x.659 2 0) (bruijn ##.x.660 1 0) (bruijn ##.x.661 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k393, self)))),
      VGetArg(statics, 9-1, 2),
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void global_V0k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k390" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k391) (close global_V0k392))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k391, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k392, self)))));
}
static void global_V0k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k388" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k389) (close global_V0k390))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k389, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k390, self)))));
}
static void global_V0k387(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (sprintf (close global_V0k388) (##string ##.string.793) optimization)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k388, self)))),
      VEncodePointer(&_V10_Dstring_D793.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "optimization"));
}
static void global_V0k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k386" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k387) (bruijn ##.base-cc-flags.62 6 2) (bruijn ##.x.664 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k387, self)))),
      VEncodeInt(6l), VEncodeInt(2l),
      _var0
    );
}
static void global_V0k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k383" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k384) (close global_V0k386))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k384, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k386, self)))));
}
static void global_V0k382(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (equal? (close global_V0k383) platform (##string ##.string.700))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k383, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D700.sym, VPOINTER_OTHER));
}
static void global_V0k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k381" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k382) (bruijn ##.cc-obj-files.61 4 1) (bruijn ##.x.668 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k382, self)))),
      VEncodeInt(4l), VEncodeInt(1l),
      _var0
    );
}
static void global_V0k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k377" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k378) (close global_V0k381))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k378, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k381, self)))));
}
static void global_V0k375(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k376) (close global_V0k377))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k376, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k377, self)))));
}
static void global_V0k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k374" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k375) (bruijn ##.cc-files.60 2 0) (bruijn ##.x.675 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k375, self)))),
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
}
static void global_V0k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k370" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k371) (close global_V0k374))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k371, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k374, self)))));
}
static void global_V0k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k368" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 9 (#f #f #f #f #f (close "_V50_V10_Did_D65") (bruijn ##.x.532 2 0) (bruijn ##.x.533 1 0) #f) ((close global_V0k369) (close global_V0k370)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[9]; } container;
    self = &container.self;
    VInitEnv(self, 9, 9, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    self->vars[3] = VEncodeBool(false);
    self->vars[4] = VEncodeBool(false);
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Did_D65, self))));
    self->vars[6] = statics->up->vars[0];
    self->vars[7] = statics->vars[0];
    self->vars[8] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k369, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k370, self)))));
    }
}
static void global_V0k367(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k367" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (current-output-port (close global_V0k368))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k368, self)))));
}
static void global_V0k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0k365" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k366) (close global_V0k367))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k366, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k367, self)))));
}
static void global_V0lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_V0lambda85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close global_V0k365) platform (##string ##.string.764))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k365, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D764.sym, VPOINTER_OTHER));
}
static void toplevel0(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda1, self)), 1,
      _k);
}
static void toplevel1(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda2, self)), 1,
      _k);
}
static void toplevel2(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda3, self)), 1,
      _k);
}
static void toplevel3(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda4, self)), 1,
      _k);
}
static void toplevel4(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda5, self)), 1,
      _k);
}
static void toplevel5(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda6, self)), 1,
      _k);
}
static void toplevel6(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda7, self)), 1,
      _k);
}
static void toplevel7(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda8, self)), 1,
      _k);
}
static void toplevel8(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda9, self)), 1,
      _k);
}
static void toplevel9(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda10, self)), 1,
      _k);
}
static void toplevel10(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda11, self)), 1,
      _k);
}
static void toplevel11(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda12, self)), 1,
      _k);
}
static void toplevel12(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda13, self)), 1,
      _k);
}
static void toplevel13(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda14, self)), 1,
      _k);
}
static void toplevel14(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda15, self)), 1,
      _k);
}
static void toplevel15(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda16, self)), 1,
      _k);
}
static void toplevel16(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda17, self)), 1,
      _k);
}
static void toplevel17(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda18, self)), 1,
      _k);
}
static void toplevel18(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda19, self)), 1,
      _k);
}
static void toplevel19(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda20, self)), 1,
      _k);
}
static void toplevel20(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda21, self)), 1,
      _k);
}
static void toplevel21(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda22, self)), 1,
      _k);
}
static void toplevel22(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda23, self)), 1,
      _k);
}
static void toplevel23(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda24, self)), 1,
      _k);
}
static void toplevel24(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda25, self)), 1,
      _k);
}
static void toplevel25(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda26, self)), 1,
      _k);
}
static void toplevel26(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda27, self)), 1,
      _k);
}
static void toplevel27(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda28, self)), 1,
      _k);
}
static void toplevel28(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda29, self)), 1,
      _k);
}
static void toplevel29(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda30, self)), 1,
      _k);
}
static void toplevel30(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda31, self)), 1,
      _k);
}
static void toplevel31(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda32, self)), 1,
      _k);
}
static void toplevel32(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda33, self)), 1,
      _k);
}
static void toplevel33(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda34, self)), 1,
      _k);
}
static void toplevel34(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda35, self)), 1,
      _k);
}
static void toplevel35(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda36, self)), 1,
      _k);
}
static void toplevel36(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda37, self)), 1,
      _k);
}
static void toplevel37(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda38, self)), 1,
      _k);
}
static void toplevel38(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda39, self)), 1,
      _k);
}
static void toplevel39(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda40, self)), 1,
      _k);
}
static void toplevel40(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda41, self)), 1,
      _k);
}
static void toplevel41(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda42, self)), 1,
      _k);
}
static void toplevel42(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda43, self)), 1,
      _k);
}
static void toplevel43(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda46, self)), 1,
      _k);
}
static void toplevel44(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda48, self)), 1,
      _k);
}
static void toplevel45(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda50, self)), 1,
      _k);
}
static void toplevel46(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda52, self)), 1,
      _k);
}
static void toplevel47(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda54, self)), 1,
      _k);
}
static void toplevel48(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda56, self)), 1,
      _k);
}
static void toplevel49(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda58, self)), 1,
      _k);
}
static void toplevel50(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda60, self)), 1,
      _k);
}
static void toplevel51(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda62, self)), 1,
      _k);
}
static void toplevel52(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda64, self)), 1,
      _k);
}
static void toplevel53(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda69, self)), 1,
      _k);
}
static void toplevel54(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda73, self)), 1,
      _k);
}
static void toplevel55(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda77, self)), 1,
      _k);
}
static void toplevel56(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda79, self)), 1,
      _k);
}
static void toplevel57(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda81, self)), 1,
      _k);
}
static void toplevel58(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda83, self)), 1,
      _k);
}
static void toplevel59(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda85, self)), 1,
      _k);
}
VClosure VanityToplevels[] = {
  { .base.tag = VCLOSURE, .func = (VFunc)toplevel0
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel1
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel2
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel3
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel4
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel5
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel6
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel7
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel8
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel9
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel10
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel11
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel12
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel13
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel14
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel15
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel16
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel17
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel18
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel19
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel20
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel21
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel22
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel23
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel24
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel25
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel26
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel27
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel28
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel29
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel30
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel31
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel32
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel33
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel34
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel35
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel36
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel37
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel38
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel39
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel40
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel41
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel42
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel43
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel44
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel45
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel46
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel47
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel48
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel49
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel50
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel51
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel52
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel53
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel54
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel55
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel56
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel57
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel58
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel59
, .env = NULL },};
int VanityToplevelCount = sizeof VanityToplevels / sizeof *VanityToplevels;
#include <stdlib.h>
int VanityCurToplevel;
VRuntime * VanityRuntime;
int VanityStatus;
void VanityMainLoop() {
  if(VanityStatus == VEXITED)
    return;
  bool dotoplevel = VanityCurToplevel < VanityToplevelCount;
  VClosure * thunk = dotoplevel ? &VanityToplevels[VanityCurToplevel]
                                : (VClosure[]){VMakeClosure2((VFunc)VExit2, NULL)};
  VanityStatus = VExecute(VanityRuntime, thunk);
  if(VanityStatus == VEXITED) {
    int ret = VDecodeExitCode(VGetExitCode(VanityRuntime));
    VDestroyRuntime(VanityRuntime);
    VReallyExit(ret);
  }
  if(VanityStatus == VFINISHED)
    VanityCurToplevel++;
}

int main(int argc, char ** argv) {
  VInitRuntime2(&VanityRuntime, argc, argv);
  while(1) VanityMainLoop();
}
