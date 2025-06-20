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
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D860 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "file does not exist" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D859 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "read" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D858 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "expand" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D857 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "cps" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D856 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "optimize" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D855 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "extract" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D854 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "transpile" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D853 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "free variables in program" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D852 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "~A -I~A ~A ~A -c -o ~A ~A" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D851 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "compile" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D850 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, " -O~A" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D849 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D848 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, " -Wl,--no-as-needed" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D847 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, " -fPIC -shared" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D846 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, " -L~A/x86_64-w64-mingw32/lib/ -lvscheme" };
static struct { VBlob sym; char bytes[110]; } _V10_Dstring_D845 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 110 }, " -Wl,--whole-archive -lvscheme -ldfile -s LLD_REPORT_UNDEFINED -s ALLOW_MEMORY_GROWTH=1 -s STACK_SIZE=2097152" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D844 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, " -lvscheme" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D843 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~A -o ~A" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D842 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, " -I~A" };
static struct { VBlob sym; char bytes[87]; } _V10_Dstring_D841 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 87 }, "program has toplevel expressions in multiple files, and so it generated multiple mains" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D840 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D839 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, " -fPIC" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D838 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " -g" };
static struct { VBlob sym; char bytes[108]; } _V10_Dstring_D837 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 108 }, " -Wl,--export-all-symbols -Wl,--stack,8388608 -Wmissing-braces -masm=intel -I~A/x86_64-w64-mingw32/include/" };
static struct { VBlob sym; char bytes[47]; } _V10_Dstring_D836 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 47 }, " -Wno-gnu -DVANITY_PURE_C -fbracket-depth=4096" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D835 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, " -rdynamic -Wmissing-braces -masm=intel" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D834 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "/tmp/" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D833 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "sysv_amd64" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D832 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "windows_amd64" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D831 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "vghtco:I:O:E:W:" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D830 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".vasm" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D829 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".scmh" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D828 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".escm" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D827 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".c" };
static struct { VBlob sym; char bytes[56]; } _V10_Dstring_D826 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 56 }, "FIXME: -h and -c and -t and -E can only handle one file" };
static struct { VBlob sym; char bytes[89]; } _V10_Dstring_D825 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 89 }, "Cannot specify '-h' or '-c' or '-t' or '-E' or '--makefile' with '-o' and multiple files" };
static struct { VBlob sym; char bytes[75]; } _V10_Dstring_D824 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 75 }, "Cannot specify '-h' '-c' or '-t' or '-E' or '--makefile' with object files" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D823 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "No input file provided" };
static struct { VBlob sym; char bytes[68]; } _V10_Dstring_D822 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "Only one of '-h' or '-c' or '-t' or '-E' or '--makefile' can be set" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D821 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "windows" };
static struct { VBlob sym; char bytes[74]; } _V10_Dstring_D820 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 74 }, "Unknown --platform, only 'linux' and 'windows' and 'emscripten' are valid" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D819 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "emcc" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D818 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "/usr/bin/x86_64-w64-mingw32-gcc" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D817 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "gcc" };
VWEAK VWORD _V0help;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0help = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "help" };
VWEAK VWORD _V0version;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "version" };
VWEAK VWORD _V0shared;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0shared = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "shared" };
VWEAK VWORD _V0keep__temps;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0keep__temps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "keep-temps" };
VWEAK VWORD _V0makefile;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0makefile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "makefile" };
VWEAK VWORD _V0maketarget;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0maketarget = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "maketarget" };
VWEAK VWORD _V0bytecode;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0bytecode = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "bytecode" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D816 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "Unknown CLI option" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D815 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "emscripten" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D814 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "unbound" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D813 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "no-unbound" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D812 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "error=unbound" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D811 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "no-error=unbound" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D810 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, " -Wl," };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D809 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "Wrapper flag -W missing comma" };
static struct { VBlob sym; char bytes[67]; } _V10_Dstring_D808 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 67 }, "Wrapper flag -W can only pass args to the C compiler, eg -Wc,-Ilib" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D807 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "Expand flag -E expects integer between 0 and 2 inclusive" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D806 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "Optimization flag -O expects integer between 0 and 3 inclusive" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D805 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".a" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D804 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ".lib" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D803 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ".scm" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D802 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "File has unrecognized extension: ~A" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D801 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, ".ss" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D800 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, " -Wl,--no-whole-archive" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D799 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "-Wl,--whole-archive " };
VWEAK VWORD _V10vcore_Dpush__value;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dpush__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.push-value" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D798 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "vsc: " };
VWEAK VWORD _V10vcore_Dpop__value;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dpop__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.pop-value" };
VWEAK VWORD _V0handle__exception;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0handle__exception = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "handle-exception" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D797 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "Vanity Scheme Compiler ~A.~A~N" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D796 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "Copyright (C) 2023 Richard Van Natta" };
VWEAK VWORD _V0display__version;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0display__version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "display-version" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D795 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "Usage: vsc [options] file..." };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D794 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "Options:" };
static struct { VBlob sym; char bytes[94]; } _V10_Dstring_D793 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 94 }, "  -O<num>         Compile with optimization levels 0 (slowest codegen) to 3 (fastest codegen)" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D792 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  -g              Compile with debug symbols" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D791 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "  -h              Generate header file instead of compiling" };
static struct { VBlob sym; char bytes[118]; } _V10_Dstring_D790 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 118 }, "  -E<num>         Expand only, do not compile or link. 0: macros only, 1: continuation passing style, 2: optimization" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D789 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "  -t              Transpile only, do not compile or link" };
static struct { VBlob sym; char bytes[68]; } _V10_Dstring_D788 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "  -c              Transpile, compile, and assemble, but do not link" };
static struct { VBlob sym; char bytes[47]; } _V10_Dstring_D787 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 47 }, "  -o<file>        Place the output into <file>" };
static struct { VBlob sym; char bytes[87]; } _V10_Dstring_D786 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 87 }, "  -I<dir>         Add the directory to the list to be searched for scheme header files" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D785 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "  -Wc,<option>    Pass comma seperated to the C compiler" };
static struct { VBlob sym; char bytes[53]; } _V10_Dstring_D784 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 53 }, "  -Wl,<option>    Pass comma seperated to the linker" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D783 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  -v              Show intermediate commands" };
static struct { VBlob sym; char bytes[86]; } _V10_Dstring_D782 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 86 }, "  --makefile      Generate makefile dependencies, similar to gcc invoked with -MM -MG" };
static struct { VBlob sym; char bytes[110]; } _V10_Dstring_D781 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 110 }, "  --maketarget    Specify the target of the make dependency, additional --maketarget's add additional targets" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D780 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "  --shared        Compile as shared library" };
static struct { VBlob sym; char bytes[76]; } _V10_Dstring_D779 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 76 }, "  --keep-temps    Keep temporary compilation files, such as C intermediates" };
static struct { VBlob sym; char bytes[97]; } _V10_Dstring_D778 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 97 }, "  --platform=<os> Which OS to make executables for. Either 'linux' or 'windows' or 'emscripten'." };
static struct { VBlob sym; char bytes[104]; } _V10_Dstring_D777 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 104 }, "  --main=<main>   What style of main to use. Either 'main' or 'winmain' or 'emscripten-loop' or 'none'." };
static struct { VBlob sym; char bytes[72]; } _V10_Dstring_D776 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 72 }, "  --cc=<compiler> Use the C compiler of your choice. The default is gcc" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D775 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "  --help          You know about this" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D774 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "  --version       Show version and build info" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D773 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[58]; } _V10_Dstring_D772 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 58 }, "  -Wunbound     Enable unbound toplevel variable warnings" };
VWEAK VWORD _V0display__help;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0display__help = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "display-help" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D771 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "~A " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D770 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ":" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D769 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " ~A" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D768 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "invalid import" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D767 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".o" };
VWEAK VWORD _V0gen__makefile;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0gen__makefile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "gen-makefile" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D766 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "File did not produce a valid header" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D765 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "Only one statement permitted in header generation" };
VWEAK VWORD _V0gen__header;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0gen__header = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "gen-header" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D764 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "/bin/rm ~A" };
VWEAK VWORD _V0delete__file;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0delete__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "delete-file" };
VWEAK VWORD _V0count__true;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0count__true = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "count-true" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D763 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "realpath `dirname ~A`" };
VWEAK VWORD _V0realbasepath;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0realbasepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "realbasepath" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D762 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "realpath ~A" };
VWEAK VWORD _V0realpath;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0realpath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "realpath" };
VWEAK VWORD _V0decomma;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0decomma = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "decomma" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D761 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "." };
VWEAK VWORD _V0basepath;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0basepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "basepath" };
VWEAK VWORD _V0basename;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0basename = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "basename" };
VWEAK VWORD _V0change__extension;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0change__extension = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "change-extension" };
VWEAK VWORD _V0extension;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0extension = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "extension" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D760 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "~A: ~A seconds~N" };
VWEAK VWORD _V0benchmark;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0benchmark = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "benchmark" };
VWEAK VWORD _V0stdout;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "stdout" };
VWEAK VWORD _V0benchmark_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0benchmark_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "benchmark\?" };
VWEAK VWORD _V0maketargets;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0maketargets = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "maketargets" };
VWEAK VWORD _V0makefile_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0makefile_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "makefile\?" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D759 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "~Ainclude" };
VWEAK VWORD _V0paths;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0paths = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "paths" };
VWEAK VWORD _V0c__options;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0c__options = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "c-options" };
VWEAK VWORD _V0werror__unbound__variables;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V0werror__unbound__variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "werror-unbound-variables" };
VWEAK VWORD _V0w__unbound__variables;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0w__unbound__variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "w-unbound-variables" };
VWEAK VWORD _V0cc;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0cc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "cc" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D758 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "main" };
VWEAK VWORD _V0main;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0main = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "main" };
VWEAK VWORD _V0purec_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0purec_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "purec\?" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D757 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "linux" };
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
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D756 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "_V0vanity_V0compiler_V0alpha__convert_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D755 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D754 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "_V0vanity_V0compiler_V0library_V20" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D753 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "_V0vanity_V0compiler_V0bytecode_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D752 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0transpile_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D751 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0lower_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D750 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0cps_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D749 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0expand_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D748 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0getopt_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D747 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D746 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D745 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D744 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D743 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D742 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static __attribute__((constructor)) void VDllMain1() {
  _V0help = VEncodePointer(VLookupConstant("_V0help", &_VW_V0help), VPOINTER_OTHER);
  _V0version = VEncodePointer(VLookupConstant("_V0version", &_VW_V0version), VPOINTER_OTHER);
  _V0shared = VEncodePointer(VLookupConstant("_V0shared", &_VW_V0shared), VPOINTER_OTHER);
  _V0keep__temps = VEncodePointer(VLookupConstant("_V0keep__temps", &_VW_V0keep__temps), VPOINTER_OTHER);
  _V0makefile = VEncodePointer(VLookupConstant("_V0makefile", &_VW_V0makefile), VPOINTER_OTHER);
  _V0maketarget = VEncodePointer(VLookupConstant("_V0maketarget", &_VW_V0maketarget), VPOINTER_OTHER);
  _V0bytecode = VEncodePointer(VLookupConstant("_V0bytecode", &_VW_V0bytecode), VPOINTER_OTHER);
  _V10vcore_Dpush__value = VEncodePointer(VLookupConstant("_V10vcore_Dpush__value", &_VW_V10vcore_Dpush__value), VPOINTER_OTHER);
  _V10vcore_Dpop__value = VEncodePointer(VLookupConstant("_V10vcore_Dpop__value", &_VW_V10vcore_Dpop__value), VPOINTER_OTHER);
  _V0handle__exception = VEncodePointer(VLookupConstant("_V0handle__exception", &_VW_V0handle__exception), VPOINTER_OTHER);
  _V0display__version = VEncodePointer(VLookupConstant("_V0display__version", &_VW_V0display__version), VPOINTER_OTHER);
  _V0display__help = VEncodePointer(VLookupConstant("_V0display__help", &_VW_V0display__help), VPOINTER_OTHER);
  _V0gen__makefile = VEncodePointer(VLookupConstant("_V0gen__makefile", &_VW_V0gen__makefile), VPOINTER_OTHER);
  _V0gen__header = VEncodePointer(VLookupConstant("_V0gen__header", &_VW_V0gen__header), VPOINTER_OTHER);
  _V0delete__file = VEncodePointer(VLookupConstant("_V0delete__file", &_VW_V0delete__file), VPOINTER_OTHER);
  _V0count__true = VEncodePointer(VLookupConstant("_V0count__true", &_VW_V0count__true), VPOINTER_OTHER);
  _V0realbasepath = VEncodePointer(VLookupConstant("_V0realbasepath", &_VW_V0realbasepath), VPOINTER_OTHER);
  _V0realpath = VEncodePointer(VLookupConstant("_V0realpath", &_VW_V0realpath), VPOINTER_OTHER);
  _V0decomma = VEncodePointer(VLookupConstant("_V0decomma", &_VW_V0decomma), VPOINTER_OTHER);
  _V0basepath = VEncodePointer(VLookupConstant("_V0basepath", &_VW_V0basepath), VPOINTER_OTHER);
  _V0basename = VEncodePointer(VLookupConstant("_V0basename", &_VW_V0basename), VPOINTER_OTHER);
  _V0change__extension = VEncodePointer(VLookupConstant("_V0change__extension", &_VW_V0change__extension), VPOINTER_OTHER);
  _V0extension = VEncodePointer(VLookupConstant("_V0extension", &_VW_V0extension), VPOINTER_OTHER);
  _V0benchmark = VEncodePointer(VLookupConstant("_V0benchmark", &_VW_V0benchmark), VPOINTER_OTHER);
  _V0stdout = VEncodePointer(VLookupConstant("_V0stdout", &_VW_V0stdout), VPOINTER_OTHER);
  _V0benchmark_Q = VEncodePointer(VLookupConstant("_V0benchmark_Q", &_VW_V0benchmark_Q), VPOINTER_OTHER);
  _V0maketargets = VEncodePointer(VLookupConstant("_V0maketargets", &_VW_V0maketargets), VPOINTER_OTHER);
  _V0makefile_Q = VEncodePointer(VLookupConstant("_V0makefile_Q", &_VW_V0makefile_Q), VPOINTER_OTHER);
  _V0paths = VEncodePointer(VLookupConstant("_V0paths", &_VW_V0paths), VPOINTER_OTHER);
  _V0c__options = VEncodePointer(VLookupConstant("_V0c__options", &_VW_V0c__options), VPOINTER_OTHER);
  _V0werror__unbound__variables = VEncodePointer(VLookupConstant("_V0werror__unbound__variables", &_VW_V0werror__unbound__variables), VPOINTER_OTHER);
  _V0w__unbound__variables = VEncodePointer(VLookupConstant("_V0w__unbound__variables", &_VW_V0w__unbound__variables), VPOINTER_OTHER);
  _V0cc = VEncodePointer(VLookupConstant("_V0cc", &_VW_V0cc), VPOINTER_OTHER);
  _V0main = VEncodePointer(VLookupConstant("_V0main", &_VW_V0main), VPOINTER_OTHER);
  _V0purec_Q = VEncodePointer(VLookupConstant("_V0purec_Q", &_VW_V0purec_Q), VPOINTER_OTHER);
  _V0platform = VEncodePointer(VLookupConstant("_V0platform", &_VW_V0platform), VPOINTER_OTHER);
  _V0out__file = VEncodePointer(VLookupConstant("_V0out__file", &_VW_V0out__file), VPOINTER_OTHER);
  _V0api = VEncodePointer(VLookupConstant("_V0api", &_VW_V0api), VPOINTER_OTHER);
  _V0optimization = VEncodePointer(VLookupConstant("_V0optimization", &_VW_V0optimization), VPOINTER_OTHER);
  _V0verbose_Q = VEncodePointer(VLookupConstant("_V0verbose_Q", &_VW_V0verbose_Q), VPOINTER_OTHER);
  _V0debug_Q = VEncodePointer(VLookupConstant("_V0debug_Q", &_VW_V0debug_Q), VPOINTER_OTHER);
  _V0object_Q = VEncodePointer(VLookupConstant("_V0object_Q", &_VW_V0object_Q), VPOINTER_OTHER);
  _V0transpile_Q = VEncodePointer(VLookupConstant("_V0transpile_Q", &_VW_V0transpile_Q), VPOINTER_OTHER);
  _V0bytecode_Q = VEncodePointer(VLookupConstant("_V0bytecode_Q", &_VW_V0bytecode_Q), VPOINTER_OTHER);
  _V0header_Q = VEncodePointer(VLookupConstant("_V0header_Q", &_VW_V0header_Q), VPOINTER_OTHER);
  _V0keep_Q = VEncodePointer(VLookupConstant("_V0keep_Q", &_VW_V0keep_Q), VPOINTER_OTHER);
  _V0expand_Q = VEncodePointer(VLookupConstant("_V0expand_Q", &_VW_V0expand_Q), VPOINTER_OTHER);
  _V0shared_Q = VEncodePointer(VLookupConstant("_V0shared_Q", &_VW_V0shared_Q), VPOINTER_OTHER);
  _V0obj__files = VEncodePointer(VLookupConstant("_V0obj__files", &_VW_V0obj__files), VPOINTER_OTHER);
  _V0scm__files = VEncodePointer(VLookupConstant("_V0scm__files", &_VW_V0scm__files), VPOINTER_OTHER);
}
static void global_k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.104 1 0) (bruijn ##.x.105 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_k1) (##string ##.string.742))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k1, self)})),
      VEncodePointer(&_V10_Dstring_D742.sym, VPOINTER_OTHER));
}
static void global_k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.106 1 0) (bruijn ##.x.107 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_k2) (##string ##.string.743))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k2, self)})),
      VEncodePointer(&_V10_Dstring_D743.sym, VPOINTER_OTHER));
}
static void global_k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.108 1 0) (bruijn ##.x.109 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_k3) (##string ##.string.744))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k3, self)})),
      VEncodePointer(&_V10_Dstring_D744.sym, VPOINTER_OTHER));
}
static void global_k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.110 1 0) (bruijn ##.x.111 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_k4) (##string ##.string.745))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k4, self)})),
      VEncodePointer(&_V10_Dstring_D745.sym, VPOINTER_OTHER));
}
static void global_k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.112 1 0) (bruijn ##.x.113 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_k5) (##string ##.string.746))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k5, self)})),
      VEncodePointer(&_V10_Dstring_D746.sym, VPOINTER_OTHER));
}
static void global_k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.114 1 0) (bruijn ##.x.115 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_k6) (##string ##.string.747))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k6, self)})),
      VEncodePointer(&_V10_Dstring_D747.sym, VPOINTER_OTHER));
}
static void global_k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.116 1 0) (bruijn ##.x.117 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_k7) (##string ##.string.748))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k7, self)})),
      VEncodePointer(&_V10_Dstring_D748.sym, VPOINTER_OTHER));
}
static void global_k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.118 1 0) (bruijn ##.x.119 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_k8) (##string ##.string.749))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k8, self)})),
      VEncodePointer(&_V10_Dstring_D749.sym, VPOINTER_OTHER));
}
static void global_k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.120 1 0) (bruijn ##.x.121 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_k9) (##string ##.string.750))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k9, self)})),
      VEncodePointer(&_V10_Dstring_D750.sym, VPOINTER_OTHER));
}
static void global_k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.122 1 0) (bruijn ##.x.123 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_k10) (##string ##.string.751))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k10, self)})),
      VEncodePointer(&_V10_Dstring_D751.sym, VPOINTER_OTHER));
}
static void global_k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.124 1 0) (bruijn ##.x.125 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_k11) (##string ##.string.752))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k11, self)})),
      VEncodePointer(&_V10_Dstring_D752.sym, VPOINTER_OTHER));
}
static void global_k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.126 1 0) (bruijn ##.x.127 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_k12) (##string ##.string.753))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k12, self)})),
      VEncodePointer(&_V10_Dstring_D753.sym, VPOINTER_OTHER));
}
static void global_k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.128 1 0) (bruijn ##.x.129 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_k13) (##string ##.string.754))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k13, self)})),
      VEncodePointer(&_V10_Dstring_D754.sym, VPOINTER_OTHER));
}
static void global_k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.130 1 0) (bruijn ##.x.131 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_k14) (##string ##.string.755))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k14, self)})),
      VEncodePointer(&_V10_Dstring_D755.sym, VPOINTER_OTHER));
}
static void global_k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.132 1 0) (bruijn ##.x.133 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_k15) (##string ##.string.756))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k15, self)})),
      VEncodePointer(&_V10_Dstring_D756.sym, VPOINTER_OTHER));
}
static void global_lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.134 0 0) scm-files '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0scm__files,
      VNULL
    );
}
static void global_lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.135 0 0) obj-files '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0obj__files,
      VNULL
    );
}
static void global_lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.136 0 0) shared? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0shared_Q,
      VEncodeBool(false)
    );
}
static void global_lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.137 0 0) expand? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0expand_Q,
      VEncodeBool(false)
    );
}
static void global_lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.138 0 0) keep? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0keep_Q,
      VEncodeBool(false)
    );
}
static void global_lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.139 0 0) header? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0header_Q,
      VEncodeBool(false)
    );
}
static void global_lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.140 0 0) bytecode? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0bytecode_Q,
      VEncodeBool(false)
    );
}
static void global_lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.141 0 0) transpile? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0transpile_Q,
      VEncodeBool(false)
    );
}
static void global_lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.142 0 0) object? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0object_Q,
      VEncodeBool(false)
    );
}
static void global_lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.143 0 0) debug? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0debug_Q,
      VEncodeBool(false)
    );
}
static void global_lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.144 0 0) verbose? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0verbose_Q,
      VEncodeBool(false)
    );
}
static void global_lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.145 0 0) optimization 1)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0optimization,
      VEncodeInt(1l)
    );
}
static void global_lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.146 0 0) api 1)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0api,
      VEncodeInt(1l)
    );
}
static void global_lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.147 0 0) out-file #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0out__file,
      VEncodeBool(false)
    );
}
static void global_lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.148 0 0) platform (##string ##.string.757))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0platform,
      VEncodePointer(&_V10_Dstring_D757.sym, VPOINTER_OTHER)
    );
}
static void global_lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.149 0 0) purec? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0purec_Q,
      VEncodeBool(false)
    );
}
static void global_lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.150 0 0) main (##string ##.string.758))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0main,
      VEncodePointer(&_V10_Dstring_D758.sym, VPOINTER_OTHER)
    );
}
static void global_lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.151 0 0) cc #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0cc,
      VEncodeBool(false)
    );
}
static void global_lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.152 0 0) w-unbound-variables #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0w__unbound__variables,
      VEncodeBool(false)
    );
}
static void global_lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.153 0 0) werror-unbound-variables #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0werror__unbound__variables,
      VEncodeBool(false)
    );
}
static void global_lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.154 0 0) c-options '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0c__options,
      VNULL
    );
}
static void global_k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.155 2 0) paths (bruijn ##.x.156 0 0))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      statics->up->vars[0],
      _V0paths,
      _var0
    );
}
static void global_k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (list (close global_k17) (bruijn ##.x.157 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k17, self)})),
      _var0);
}
static void global_lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (sprintf (close global_k16) (##string ##.string.759) install-root)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k16, self)})),
      VEncodePointer(&_V10_Dstring_D759.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
static void global_lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.158 0 0) makefile? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0makefile_Q,
      VEncodeBool(false)
    );
}
static void global_lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.159 0 0) maketargets '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0maketargets,
      VNULL
    );
}
static void global_lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.160 0 0) benchmark? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0benchmark_Q,
      VEncodeBool(false)
    );
}
static void global_k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.161 1 0) stdout (bruijn ##.x.162 0 0))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      statics->vars[0],
      _V0stdout,
      _var0
    );
}
static void global_lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (current-output-port (close global_k18))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k18, self)})));
}
static void _V0benchmark_k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (format (bruijn ##.k.167 3 0) stdout (##string ##.string.760) (bruijn ##.label.0 7 1) (bruijn ##.x.168 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 5,
      statics->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "stdout"),
      VEncodePointer(&_V10_Dstring_D760.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 1),
      _var0);
}
static void _V0benchmark_k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (/ (close _V0benchmark_k24) (bruijn ##.x.169 1 0) (bruijn ##.x.170 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "/")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0benchmark_k24, self)})),
      statics->vars[0],
      _var0);
}
static void _V0benchmark_k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (jiffies-per-second (close _V0benchmark_k23))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "jiffies-per-second")), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0benchmark_k23, self)})));
}
static void _V0benchmark_k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if benchmark? (- (close _V0benchmark_k22) (bruijn ##.end.4 1 0) (bruijn ##.start.2 3 0)) ((bruijn ##.k.167 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "benchmark?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0benchmark_k22, self)})),
      statics->vars[0],
      statics->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0benchmark_k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (apply (bruijn ##.k.165 2 0) values (bruijn ##.args.3 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      statics->up->vars[0],
      VLookupGlobalVarFast2(runtime, "values"),
      statics->up->vars[1]);
}
static void _V0benchmark_k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0benchmark_k21) (close _V0benchmark_k25))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0benchmark_k21, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0benchmark_k25, self)})));
}
static void _V0benchmark_lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_lambda44, got ~D~N"
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
  // (current-jiffy (close _V0benchmark_k20))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-jiffy")), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0benchmark_k20, self)})));
}
static void _V0benchmark_k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (call-with-values (bruijn ##.k.164 1 0) (bruijn ##.thunk.1 1 2) (close _V0benchmark_lambda44))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "call-with-values")), 3,
      statics->vars[0],
      statics->vars[2],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0benchmark_lambda44, self)})));
}
static void _V0benchmark_lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_lambda43, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (current-jiffy (close _V0benchmark_k19))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-jiffy")), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0benchmark_k19, self)})));
}
static void global_lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.163 0 0) benchmark (close _V0benchmark_lambda43))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0benchmark,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0benchmark_lambda43, self)}))
    );
}
static void _V10_Dloop_D6_k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D6_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.6 5 0) (bruijn ##.k.173 4 0) (bruijn ##.x.176 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      statics->up->up->up->vars[0],
      _var0);
}
static void _V10_Dloop_D6_k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D6_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.175 0 0) (substring (bruijn ##.k.173 3 0) (bruijn ##.file.5 5 1) (bruijn ##.i.7 3 1)) (- (close _V10_Dloop_D6_k29) (bruijn ##.i.7 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 1),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D6_k29, self)})),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
static void _V10_Dloop_D6_k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D6_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D6_k28) #\. (bruijn ##.x.177 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D6_k28, self)})),
      VEncodeChar('.'),
      _var0);
}
static void _V10_Dloop_D6_k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D6_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.174 0 0) ((bruijn ##.k.173 1 0) #f) (string-ref (close _V10_Dloop_D6_k27) (bruijn ##.file.5 3 1) (bruijn ##.i.7 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D6_k27, self)})),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
static void _V10_Dloop_D6_lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D6_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (<= (close _V10_Dloop_D6_k26) (bruijn ##.i.7 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D6_k26, self)})),
      _var1,
      VEncodeInt(0l));
}
static void _V0extension_k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0extension_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.6 2 0) (bruijn ##.k.172 3 0) (bruijn ##.x.178 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      statics->up->up->vars[0],
      _var0);
}
static void _V0extension_k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0extension_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0extension_k31) (bruijn ##.x.179 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k31, self)})),
      _var0,
      VEncodeInt(1l));
}
static void _V0extension_lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0extension_lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D6_lambda47)) (string-length (close _V0extension_k30) (bruijn ##.file.5 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D6_lambda47, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k30, self)})),
      statics->vars[1]);
    }
}
static void global_lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.171 0 0) extension (close _V0extension_lambda46))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0extension,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_lambda46, self)}))
    );
}
static void _V10_Dloop_D10_k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D10_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (string-append (bruijn ##.k.182 4 0) (bruijn ##.x.185 0 0) (bruijn ##.new.9 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      statics->up->up->up->vars[0],
      _var0,
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dloop_D10_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D10_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.10 5 0) (bruijn ##.k.182 4 0) (bruijn ##.x.186 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      statics->up->up->up->vars[0],
      _var0);
}
static void _V10_Dloop_D10_k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D10_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.184 0 0) (substring (close _V10_Dloop_D10_k35) (bruijn ##.file.8 5 1) 0 (bruijn ##.i.11 3 1)) (- (close _V10_Dloop_D10_k36) (bruijn ##.i.11 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D10_k35, self)})),
      VGetArg(statics, 5-1, 1),
      VEncodeInt(0l),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D10_k36, self)})),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
static void _V10_Dloop_D10_k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D10_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D10_k34) #\. (bruijn ##.x.187 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D10_k34, self)})),
      VEncodeChar('.'),
      _var0);
}
static void _V10_Dloop_D10_k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D10_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.183 0 0) (string-append (bruijn ##.k.182 1 0) (bruijn ##.file.8 3 1) (bruijn ##.new.9 3 2)) (string-ref (close _V10_Dloop_D10_k33) (bruijn ##.file.8 3 1) (bruijn ##.i.11 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D10_k33, self)})),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
static void _V10_Dloop_D10_lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D10_lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (<= (close _V10_Dloop_D10_k32) (bruijn ##.i.11 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D10_k32, self)})),
      _var1,
      VEncodeInt(0l));
}
static void _V0change__extension_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0change__extension_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.10 2 0) (bruijn ##.k.181 3 0) (bruijn ##.x.188 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      statics->up->up->vars[0],
      _var0);
}
static void _V0change__extension_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0change__extension_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0change__extension_k38) (bruijn ##.x.189 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k38, self)})),
      _var0,
      VEncodeInt(1l));
}
static void _V0change__extension_lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0change__extension_lambda49, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D10_lambda50)) (string-length (close _V0change__extension_k37) (bruijn ##.file.8 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D10_lambda50, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k37, self)})),
      statics->vars[1]);
    }
}
static void global_lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.180 0 0) change-extension (close _V0change__extension_lambda49))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0change__extension,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_lambda49, self)}))
    );
}
static void _V10_Dloop_D13_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D13_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (substring (bruijn ##.k.192 4 0) (bruijn ##.file.12 6 1) (bruijn ##.x.195 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      statics->up->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      _var0);
}
static void _V10_Dloop_D13_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D13_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.13 5 0) (bruijn ##.k.192 4 0) (bruijn ##.x.196 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      statics->up->up->up->vars[0],
      _var0);
}
static void _V10_Dloop_D13_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D13_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.194 0 0) (+ (close _V10_Dloop_D13_k42) (bruijn ##.i.14 3 1) 1) (- (close _V10_Dloop_D13_k43) (bruijn ##.i.14 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D13_k42, self)})),
      statics->up->up->vars[1],
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D13_k43, self)})),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
static void _V10_Dloop_D13_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D13_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D13_k41) #\/ (bruijn ##.x.197 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D13_k41, self)})),
      VEncodeChar('/'),
      _var0);
}
static void _V10_Dloop_D13_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D13_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.193 0 0) ((bruijn ##.k.192 1 0) (bruijn ##.file.12 3 1)) (string-ref (close _V10_Dloop_D13_k40) (bruijn ##.file.12 3 1) (bruijn ##.i.14 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D13_k40, self)})),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
static void _V10_Dloop_D13_lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D13_lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (<= (close _V10_Dloop_D13_k39) (bruijn ##.i.14 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D13_k39, self)})),
      _var1,
      VEncodeInt(0l));
}
static void _V0basename_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basename_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.13 2 0) (bruijn ##.k.191 3 0) (bruijn ##.x.198 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      statics->up->up->vars[0],
      _var0);
}
static void _V0basename_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basename_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0basename_k45) (bruijn ##.x.199 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k45, self)})),
      _var0,
      VEncodeInt(1l));
}
static void _V0basename_lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0basename_lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D13_lambda53)) (string-length (close _V0basename_k44) (bruijn ##.file.12 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D13_lambda53, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k44, self)})),
      statics->vars[1]);
    }
}
static void global_lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.190 0 0) basename (close _V0basename_lambda52))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0basename,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_lambda52, self)}))
    );
}
static void _V10_Dloop_D16_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D16_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (substring (bruijn ##.k.202 4 0) (bruijn ##.file.15 6 1) 0 (bruijn ##.x.205 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      VEncodeInt(0l),
      _var0);
}
static void _V10_Dloop_D16_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D16_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.16 5 0) (bruijn ##.k.202 4 0) (bruijn ##.x.206 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      statics->up->up->up->vars[0],
      _var0);
}
static void _V10_Dloop_D16_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D16_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.204 0 0) (+ (close _V10_Dloop_D16_k49) (bruijn ##.i.17 3 1) 1) (- (close _V10_Dloop_D16_k50) (bruijn ##.i.17 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D16_k49, self)})),
      statics->up->up->vars[1],
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D16_k50, self)})),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
static void _V10_Dloop_D16_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D16_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D16_k48) #\/ (bruijn ##.x.207 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D16_k48, self)})),
      VEncodeChar('/'),
      _var0);
}
static void _V10_Dloop_D16_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D16_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.203 0 0) ((bruijn ##.k.202 1 0) (##string ##.string.761)) (string-ref (close _V10_Dloop_D16_k47) (bruijn ##.file.15 3 1) (bruijn ##.i.17 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D761.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D16_k47, self)})),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
static void _V10_Dloop_D16_lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D16_lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (<= (close _V10_Dloop_D16_k46) (bruijn ##.i.17 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D16_k46, self)})),
      _var1,
      VEncodeInt(0l));
}
static void _V0basepath_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basepath_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.16 2 0) (bruijn ##.k.201 3 0) (bruijn ##.x.208 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      statics->up->up->vars[0],
      _var0);
}
static void _V0basepath_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basepath_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0basepath_k52) (bruijn ##.x.209 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k52, self)})),
      _var0,
      VEncodeInt(1l));
}
static void _V0basepath_lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0basepath_lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D16_lambda56)) (string-length (close _V0basepath_k51) (bruijn ##.file.15 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D16_lambda56, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k51, self)})),
      statics->vars[1]);
    }
}
static void global_lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.200 0 0) basepath (close _V0basepath_lambda55))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0basepath,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_lambda55, self)}))
    );
}
static void _V10_Dloop_D19_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D19_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.19 6 0) (bruijn ##.k.212 5 0) (bruijn ##.x.216 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      _var0);
}
static void _V10_Dloop_D19_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D19_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V10_Dloop_D19_k57) (bruijn ##.i.20 4 1) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D19_k57, self)})),
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
}
static void _V10_Dloop_D19_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D19_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.19 5 0) (bruijn ##.k.212 4 0) (bruijn ##.x.217 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      statics->up->up->up->vars[0],
      _var0);
}
static void _V10_Dloop_D19_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D19_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.214 0 0) (string-set! (close _V10_Dloop_D19_k56) (bruijn ##.str.18 5 1) (bruijn ##.i.20 3 1) #\space) (- (close _V10_Dloop_D19_k58) (bruijn ##.i.20 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-set!")), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D19_k56, self)})),
      VGetArg(statics, 5-1, 1),
      statics->up->up->vars[1],
      VEncodeChar(' '));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D19_k58, self)})),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
static void _V10_Dloop_D19_k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D19_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D19_k55) #\, (bruijn ##.x.218 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D19_k55, self)})),
      VEncodeChar(','),
      _var0);
}
static void _V10_Dloop_D19_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D19_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.213 0 0) ((bruijn ##.k.212 1 0) (bruijn ##.str.18 3 1)) (string-ref (close _V10_Dloop_D19_k54) (bruijn ##.str.18 3 1) (bruijn ##.i.20 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D19_k54, self)})),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
static void _V10_Dloop_D19_lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D19_lambda59, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (< (close _V10_Dloop_D19_k53) (bruijn ##.i.20 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D19_k53, self)})),
      _var1,
      VEncodeInt(0l));
}
static void _V0decomma_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0decomma_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.19 2 0) (bruijn ##.k.211 3 0) (bruijn ##.x.219 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      statics->up->up->vars[0],
      _var0);
}
static void _V0decomma_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0decomma_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0decomma_k60) (bruijn ##.x.220 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k60, self)})),
      _var0,
      VEncodeInt(1l));
}
static void _V0decomma_lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0decomma_lambda58, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D19_lambda59)) (string-length (close _V0decomma_k59) (bruijn ##.str.18 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D19_lambda59, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k59, self)})),
      statics->vars[1]);
    }
}
static void global_lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.210 0 0) decomma (close _V0decomma_lambda58))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0decomma,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_lambda58, self)}))
    );
}
static void _V0realpath_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.222 4 0) (bruijn ##.ret.23 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->vars[0]);
}
static void _V0realpath_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (close-port (close _V0realpath_k64) (bruijn ##.proc.22 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "close-port")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k64, self)})),
      statics->vars[0]);
}
static void _V0realpath_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (read-line (close _V0realpath_k63) (bruijn ##.proc.22 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-line")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k63, self)})),
      _var0);
}
static void _V0realpath_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-process (close _V0realpath_k62) (bruijn ##.x.224 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-process")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k62, self)})),
      _var0);
}
static void _V0realpath_lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_lambda61, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (sprintf (close _V0realpath_k61) (##string ##.string.762) (bruijn ##.file.21 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k61, self)})),
      VEncodePointer(&_V10_Dstring_D762.sym, VPOINTER_OTHER),
      _var1);
}
static void global_lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.221 0 0) realpath (close _V0realpath_lambda61))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0realpath,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_lambda61, self)}))
    );
}
static void _V0realbasepath_k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.226 4 0) (bruijn ##.ret.26 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->vars[0]);
}
static void _V0realbasepath_k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (close-port (close _V0realbasepath_k68) (bruijn ##.proc.25 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "close-port")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k68, self)})),
      statics->vars[0]);
}
static void _V0realbasepath_k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (read-line (close _V0realbasepath_k67) (bruijn ##.proc.25 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-line")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k67, self)})),
      _var0);
}
static void _V0realbasepath_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-process (close _V0realbasepath_k66) (bruijn ##.x.228 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-process")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k66, self)})),
      _var0);
}
static void _V0realbasepath_lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (sprintf (close _V0realbasepath_k65) (##string ##.string.763) (bruijn ##.file.24 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k65, self)})),
      VEncodePointer(&_V10_Dstring_D763.sym, VPOINTER_OTHER),
      _var1);
}
static void global_lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.225 0 0) realbasepath (close _V0realbasepath_lambda63))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0realbasepath,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_lambda63, self)}))
    );
}
static void _V10_Dloop_D28_k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D28_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.236 1 0) ((bruijn ##.k.237 0 0) 1) ((bruijn ##.k.237 0 0) 0))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
}
static void _V10_Dloop_D28_k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D28_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.28 6 0) (bruijn ##.k.231 5 0) (bruijn ##.x.233 3 0) (bruijn ##.x.234 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[0],
      _var0);
}
static void _V10_Dloop_D28_k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D28_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (+ (close _V10_Dloop_D28_k74) (bruijn ##.ct.30 4 2) (bruijn ##.x.235 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D28_k74, self)})),
      statics->up->up->up->vars[2],
      _var0);
}
static void _V10_Dloop_D28_k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D28_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D28_k72) (close _V10_Dloop_D28_k73))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D28_k72, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D28_k73, self)})));
}
static void _V10_Dloop_D28_k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D28_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V10_Dloop_D28_k71) (bruijn ##.args.29 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D28_k71, self)})),
      statics->up->vars[1]);
}
static void _V10_Dloop_D28_k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D28_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.232 0 0) ((bruijn ##.k.231 1 0) (bruijn ##.ct.30 1 2)) (cdr (close _V10_Dloop_D28_k70) (bruijn ##.args.29 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D28_k70, self)})),
      statics->vars[1]);
}
}
static void _V10_Dloop_D28_lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D28_lambda66, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (null? (close _V10_Dloop_D28_k69) (bruijn ##.args.29 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D28_k69, self)})),
      _var1);
}
static void _V0count__true_lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V0count__true_lambda65, got ~D~N"
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
  // (letrec 1 ((close _V10_Dloop_D28_lambda66)) ((bruijn ##.loop.28 0 0) (bruijn ##.k.230 1 0) (bruijn ##.args.27 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D28_lambda66, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(0l));
    }
}
static void global_lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.229 0 0) count-true (close _V0count__true_lambda65))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0count__true,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0count__true_lambda65, self)}))
    );
}
static void _V0delete__file_k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0delete__file_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (system (bruijn ##.k.239 1 0) (bruijn ##.x.240 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "system")), 2,
      statics->vars[0],
      _var0);
}
static void _V0delete__file_lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0delete__file_lambda68, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (sprintf (close _V0delete__file_k75) (##string ##.string.764) (bruijn ##.f.31 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete__file_k75, self)})),
      VEncodePointer(&_V10_Dstring_D764.sym, VPOINTER_OTHER),
      _var1);
}
static void global_lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.238 0 0) delete-file (close _V0delete__file_lambda68))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0delete__file,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete__file_lambda68, self)}))
    );
}
static void _V0gen__header_k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.256 1 0) (compiler-error (bruijn ##.k.257 0 0) (##string ##.string.765)) ((bruijn ##.k.257 0 0) #f))
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
static void _V0gen__header_k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.254 1 0) ((bruijn ##.k.255 0 0) (bruijn ##.p.254 1 0)) (car (bruijn ##.k.255 0 0) (bruijn ##.headers.33 5 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      _var0,
      VGetArg(statics, 5-1, 0));
}
}
static void _V0gen__header_k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.251 1 0) (compiler-error (bruijn ##.k.252 0 0) (##string ##.string.766)) ((bruijn ##.k.252 0 0) #f))
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
static void _V0gen__header_k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (write (bruijn ##.k.248 1 0) (bruijn ##.x.249 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "write")), 2,
      statics->vars[0],
      _var0);
}
static void _V0gen__header_k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.247 1 0) (car (close _V0gen__header_k94) (bruijn ##.headers.33 11 0)) ((bruijn ##.k.248 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k94, self)})),
      VGetArg(statics, 11-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__header_k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (newline (bruijn ##.k.245 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "newline")), 1,
      statics->up->up->vars[0]);
}
static void _V0gen__header_k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__header_k93) (close _V0gen__header_k95))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0gen__header_k93, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k95, self)})));
}
static void _V0gen__header_k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V0gen__header_k92) (bruijn ##.x.250 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k92, self)})),
      _var0);
}
static void _V0gen__header_lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close _V0gen__header_k91) (bruijn ##.headers.33 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k91, self)})),
      VGetArg(statics, 8-1, 0));
}
static void _V0gen__header_k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (with-output-to-file (bruijn ##.k.242 12 0) out-file (close _V0gen__header_lambda71))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-output-to-file")), 3,
      VGetArg(statics, 12-1, 0),
      VLookupGlobalVarFast2(runtime, "out-file"),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_lambda71, self)})));
}
static void _V0gen__header_k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__header_k89) (close _V0gen__header_k90))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0gen__header_k89, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k90, self)})));
}
static void _V0gen__header_k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V0gen__header_k88) (bruijn ##.x.253 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k88, self)})),
      _var0);
}
static void _V0gen__header_k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__header_k86) (close _V0gen__header_k87))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0gen__header_k86, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k87, self)})));
}
static void _V0gen__header_k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close _V0gen__header_k85) (bruijn ##.headers.33 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k85, self)})),
      statics->up->up->vars[0]);
}
static void _V0gen__header_k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__header_k83) (close _V0gen__header_k84))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0gen__header_k83, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k84, self)})));
}
static void _V0gen__header_k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (> (close _V0gen__header_k82) (bruijn ##.x.258 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k82, self)})),
      _var0,
      VEncodeInt(1l));
}
static void _V0gen__header_k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (length (close _V0gen__header_k81) (bruijn ##.headers.33 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "length")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k81, self)})),
      _var0);
}
static void _V0gen__header_lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_lambda72, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.259 0 0) (bruijn ##.x.34 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
static void _V0gen__header_k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (filter (close _V0gen__header_k80) (close _V0gen__header_lambda72) (bruijn ##.x.260 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "filter")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k80, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_lambda72, self)})),
      _var0);
}
static void _V0gen__header_k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (close _V0gen__header_k79) header-from-library (bruijn ##.file.32 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k79, self)})),
      VLookupGlobalVarFast2(runtime, "header-from-library"),
      _var0);
}
static void _V0gen__header_k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (read-all (close _V0gen__header_k78) (bruijn ##.x.261 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-all")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k78, self)})),
      _var0);
}
static void _V0gen__header_k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-file (close _V0gen__header_k77) (bruijn ##.x.262 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-file")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k77, self)})),
      _var0);
}
static void _V0gen__header_lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_lambda70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V0gen__header_k76) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k76, self)})),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void global_lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.241 0 0) gen-header (close _V0gen__header_lambda70))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0gen__header,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_lambda70, self)}))
    );
}
static void _V0gen__makefile_k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.284 4 0) maketargets (bruijn ##.x.285 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->up->up->vars[0],
      _V0maketargets,
      _var0
    );
}
static void _V0gen__makefile_k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (list (close _V0gen__makefile_k101) (bruijn ##.x.286 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k101, self)})),
      _var0);
}
static void _V0gen__makefile_k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (change-extension (close _V0gen__makefile_k100) (bruijn ##.x.287 0 0) (##string ##.string.767))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k100, self)})),
      _var0,
      VEncodePointer(&_V10_Dstring_D767.sym, VPOINTER_OTHER));
}
static void _V0gen__makefile_k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close _V0gen__makefile_k99) (bruijn ##.x.288 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k99, self)})),
      _var0);
}
static void _V0gen__makefile_k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.283 1 0) (car (close _V0gen__makefile_k98) scm-files) ((bruijn ##.k.284 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k98, self)})),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if out-file (open-output-file (bruijn ##.k.280 0 0) out-file) (current-output-port (bruijn ##.k.280 0 0)))
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
static void _V0gen__makefile_k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if out-file (close-port (bruijn ##.k.264 13 0) (bruijn ##.port.37 6 0)) ((bruijn ##.k.264 13 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "close-port")), 2,
      VGetArg(statics, 13-1, 0),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (newline (close _V0gen__makefile_k114) (bruijn ##.port.37 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "newline")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k114, self)})),
      VGetArg(statics, 5-1, 0));
}
static void _V0gen__makefile_k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.275 1 0) (compiler-error (bruijn ##.k.276 0 0) (##string ##.string.768) (bruijn ##.dep.39 4 1)) ((bruijn ##.k.276 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D768.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (format (bruijn ##.k.271 5 0) (bruijn ##.port.37 10 0) (##string ##.string.769) (bruijn ##.x.274 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 4,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 10-1, 0),
      VEncodePointer(&_V10_Dstring_D769.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0gen__makefile_k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (import->path (close _V0gen__makefile_k120) (bruijn ##.dep.39 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "import->path")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k120, self)})),
      statics->up->up->up->vars[1]);
}
static void _V0gen__makefile_k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__makefile_k118) (close _V0gen__makefile_k119))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0gen__makefile_k118, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k119, self)})));
}
static void _V0gen__makefile_k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V0gen__makefile_k117) (bruijn ##.x.277 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k117, self)})),
      _var0);
}
static void _V0gen__makefile_k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.272 0 0) (valid-import? (close _V0gen__makefile_k116) (bruijn ##.dep.39 1 1)) ((bruijn ##.k.271 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "valid-import?")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k116, self)})),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_lambda75, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (pair? (close _V0gen__makefile_k115) (bruijn ##.dep.39 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "pair?")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k115, self)})),
      _var1);
}
static void _V0gen__makefile_k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (for-each (close _V0gen__makefile_k113) (close _V0gen__makefile_lambda75) (bruijn ##.deps.36 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k113, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_lambda75, self)})),
      VGetArg(statics, 5-1, 0));
}
static void _V0gen__makefile_k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (format (close _V0gen__makefile_k112) (bruijn ##.port.37 3 0) (##string ##.string.769) (bruijn ##.x.278 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k112, self)})),
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D769.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0gen__makefile_k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V0gen__makefile_k111) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k111, self)})),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void _V0gen__makefile_k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (display (close _V0gen__makefile_k110) (##string ##.string.770) (bruijn ##.port.37 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k110, self)})),
      VEncodePointer(&_V10_Dstring_D770.sym, VPOINTER_OTHER),
      statics->vars[0]);
}
static void _V0gen__makefile_lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_lambda76, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (format (bruijn ##.k.279 0 0) (bruijn ##.port.37 1 0) (##string ##.string.771) (bruijn ##.target.38 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 4,
      _var0,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D771.sym, VPOINTER_OTHER),
      _var1);
}
static void _V0gen__makefile_k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (for-each (close _V0gen__makefile_k109) (close _V0gen__makefile_lambda76) maketargets)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k109, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_lambda76, self)})),
      VLookupGlobalVarFast2(runtime, "maketargets"));
}
static void _V0gen__makefile_k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__makefile_k107) (close _V0gen__makefile_k108))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0gen__makefile_k107, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k108, self)})));
}
static void _V0gen__makefile_k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (gather-dependencies (close _V0gen__makefile_k106) (bruijn ##.file.35 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "gather-dependencies")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k106, self)})),
      _var0);
}
static void _V0gen__makefile_k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (read-all (close _V0gen__makefile_k105) (bruijn ##.x.281 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-all")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k105, self)})),
      _var0);
}
static void _V0gen__makefile_k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-file (close _V0gen__makefile_k104) (bruijn ##.x.282 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-file")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k104, self)})),
      _var0);
}
static void _V0gen__makefile_k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V0gen__makefile_k103) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k103, self)})),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void _V0gen__makefile_k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__makefile_k97) (close _V0gen__makefile_k102))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0gen__makefile_k97, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k102, self)})));
}
static void _V0gen__makefile_lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_lambda74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close _V0gen__makefile_k96) maketargets)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k96, self)})),
      VLookupGlobalVarFast2(runtime, "maketargets"));
}
static void global_lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.263 0 0) gen-makefile (close _V0gen__makefile_lambda74))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0gen__makefile,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_lambda74, self)}))
    );
}
static void _V0display__help_k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (displayln (bruijn ##.k.290 25 0) (##string ##.string.772))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VGetArg(statics, 25-1, 0),
      VEncodePointer(&_V10_Dstring_D772.sym, VPOINTER_OTHER));
}
static void _V0display__help_k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k145) (##string ##.string.773))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k145, self)})),
      VEncodePointer(&_V10_Dstring_D773.sym, VPOINTER_OTHER));
}
static void _V0display__help_k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k144) (##string ##.string.774))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k144, self)})),
      VEncodePointer(&_V10_Dstring_D774.sym, VPOINTER_OTHER));
}
static void _V0display__help_k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k143) (##string ##.string.775))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k143, self)})),
      VEncodePointer(&_V10_Dstring_D775.sym, VPOINTER_OTHER));
}
static void _V0display__help_k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k142) (##string ##.string.776))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k142, self)})),
      VEncodePointer(&_V10_Dstring_D776.sym, VPOINTER_OTHER));
}
static void _V0display__help_k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k141) (##string ##.string.777))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k141, self)})),
      VEncodePointer(&_V10_Dstring_D777.sym, VPOINTER_OTHER));
}
static void _V0display__help_k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k140) (##string ##.string.778))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k140, self)})),
      VEncodePointer(&_V10_Dstring_D778.sym, VPOINTER_OTHER));
}
static void _V0display__help_k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k139) (##string ##.string.779))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k139, self)})),
      VEncodePointer(&_V10_Dstring_D779.sym, VPOINTER_OTHER));
}
static void _V0display__help_k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k138) (##string ##.string.780))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k138, self)})),
      VEncodePointer(&_V10_Dstring_D780.sym, VPOINTER_OTHER));
}
static void _V0display__help_k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k137) (##string ##.string.773))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k137, self)})),
      VEncodePointer(&_V10_Dstring_D773.sym, VPOINTER_OTHER));
}
static void _V0display__help_k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k136) (##string ##.string.781))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k136, self)})),
      VEncodePointer(&_V10_Dstring_D781.sym, VPOINTER_OTHER));
}
static void _V0display__help_k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k135) (##string ##.string.782))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k135, self)})),
      VEncodePointer(&_V10_Dstring_D782.sym, VPOINTER_OTHER));
}
static void _V0display__help_k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k134) (##string ##.string.773))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k134, self)})),
      VEncodePointer(&_V10_Dstring_D773.sym, VPOINTER_OTHER));
}
static void _V0display__help_k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k133) (##string ##.string.783))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k133, self)})),
      VEncodePointer(&_V10_Dstring_D783.sym, VPOINTER_OTHER));
}
static void _V0display__help_k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k132) (##string ##.string.784))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k132, self)})),
      VEncodePointer(&_V10_Dstring_D784.sym, VPOINTER_OTHER));
}
static void _V0display__help_k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k131) (##string ##.string.785))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k131, self)})),
      VEncodePointer(&_V10_Dstring_D785.sym, VPOINTER_OTHER));
}
static void _V0display__help_k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k130) (##string ##.string.786))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k130, self)})),
      VEncodePointer(&_V10_Dstring_D786.sym, VPOINTER_OTHER));
}
static void _V0display__help_k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k129) (##string ##.string.787))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k129, self)})),
      VEncodePointer(&_V10_Dstring_D787.sym, VPOINTER_OTHER));
}
static void _V0display__help_k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k128) (##string ##.string.788))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k128, self)})),
      VEncodePointer(&_V10_Dstring_D788.sym, VPOINTER_OTHER));
}
static void _V0display__help_k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k127) (##string ##.string.789))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k127, self)})),
      VEncodePointer(&_V10_Dstring_D789.sym, VPOINTER_OTHER));
}
static void _V0display__help_k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k126) (##string ##.string.790))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k126, self)})),
      VEncodePointer(&_V10_Dstring_D790.sym, VPOINTER_OTHER));
}
static void _V0display__help_k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k125) (##string ##.string.791))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k125, self)})),
      VEncodePointer(&_V10_Dstring_D791.sym, VPOINTER_OTHER));
}
static void _V0display__help_k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k124) (##string ##.string.792))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k124, self)})),
      VEncodePointer(&_V10_Dstring_D792.sym, VPOINTER_OTHER));
}
static void _V0display__help_k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k123) (##string ##.string.793))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k123, self)})),
      VEncodePointer(&_V10_Dstring_D793.sym, VPOINTER_OTHER));
}
static void _V0display__help_k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k122) (##string ##.string.794))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k122, self)})),
      VEncodePointer(&_V10_Dstring_D794.sym, VPOINTER_OTHER));
}
static void _V0display__help_lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_k121) (##string ##.string.795))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k121, self)})),
      VEncodePointer(&_V10_Dstring_D795.sym, VPOINTER_OTHER));
}
static void global_lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.289 0 0) display-help (close _V0display__help_lambda78))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0display__help,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_lambda78, self)}))
    );
}
static void _V0display__version_k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (displayln (bruijn ##.k.317 3 0) (##string ##.string.796))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D796.sym, VPOINTER_OTHER));
}
static void _V0display__version_k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (printf (close _V0display__version_k148) (##string ##.string.797) (bruijn ##.x.319 1 0) (bruijn ##.x.320 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "printf")), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k148, self)})),
      VEncodePointer(&_V10_Dstring_D797.sym, VPOINTER_OTHER),
      statics->vars[0],
      _var0);
}
static void _V0display__version_k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cadr (close _V0display__version_k147) version)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cadr")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k147, self)})),
      VLookupGlobalVarFast2(runtime, "version"));
}
static void _V0display__version_lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_lambda80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V0display__version_k146) version)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k146, self)})),
      VLookupGlobalVarFast2(runtime, "version"));
}
static void global_lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.316 0 0) display-version (close _V0display__version_lambda80))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0display__version,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_lambda80, self)}))
    );
}
static void _V0handle__exception_k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.322 7 0) (bruijn ##.ret.42.46 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      statics->vars[0]);
}
static void _V0handle__exception_k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (current-output-port (close _V0handle__exception_k155) '##vcore.pop-value (bruijn ##.keyval.41.45 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k155, self)})),
      _V10vcore_Dpop__value,
      statics->up->up->up->vars[0]);
}
static void _V0handle__exception_k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (exit (close _V0handle__exception_k154) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k154, self)})),
      VEncodeInt(1l));
}
static void _V0handle__exception_k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (newline (close _V0handle__exception_k153))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "newline")), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k153, self)})));
}
static void _V0handle__exception_k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (display (close _V0handle__exception_k152) (bruijn ##.err.43 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k152, self)})),
      statics->up->up->vars[1]);
}
static void _V0handle__exception_k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (display (close _V0handle__exception_k151) (##string ##.string.798))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k151, self)})),
      VEncodePointer(&_V10_Dstring_D798.sym, VPOINTER_OTHER));
}
static void _V0handle__exception_k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (current-output-port (close _V0handle__exception_k150) '##vcore.push-value (bruijn ##.x.327 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k150, self)})),
      _V10vcore_Dpush__value,
      _var0);
}
static void _V0handle__exception_lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_lambda82, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (current-error-port (close _V0handle__exception_k149))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-error-port")), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k149, self)})));
}
static void global_lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.next.321 0 0) handle-exception (close _V0handle__exception_lambda82))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0handle__exception,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_lambda82, self)}))
    );
}
static void _V10_Dloop_D48_k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.395 5 0) obj-files (bruijn ##.x.397 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 5-1, 0),
      _V0obj__files,
      _var0
    );
}
static void _V10_Dloop_D48_k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V10_Dloop_D48_k165) (bruijn ##.x.398 0 0) obj-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k165, self)})),
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
}
static void _V10_Dloop_D48_k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.395 9 0) obj-files (bruijn ##.x.400 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 9-1, 0),
      _V0obj__files,
      _var0
    );
}
static void _V10_Dloop_D48_k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V10_Dloop_D48_k171) (bruijn ##.x.401 0 0) obj-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k171, self)})),
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
}
static void _V10_Dloop_D48_k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close _V10_Dloop_D48_k170) (##string ##.string.799) (bruijn ##.x.402 0 0) (##string ##.string.800))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k170, self)})),
      VEncodePointer(&_V10_Dstring_D799.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10_Dstring_D800.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.395 12 0) obj-files (bruijn ##.x.404 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 12-1, 0),
      _V0obj__files,
      _var0
    );
}
static void _V10_Dloop_D48_k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V10_Dloop_D48_k177) (bruijn ##.x.405 0 0) obj-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k177, self)})),
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
}
static void _V10_Dloop_D48_k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close _V10_Dloop_D48_k176) (##string ##.string.799) (bruijn ##.x.406 0 0) (##string ##.string.800))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k176, self)})),
      VEncodePointer(&_V10_Dstring_D799.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10_Dstring_D800.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (equal? (bruijn ##.k.412 2 0) (bruijn ##.x.413 0 0) (##string ##.string.801))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D801.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V10_Dloop_D48_k183) (bruijn ##.x.414 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k183, self)})),
      _var0);
}
static void _V10_Dloop_D48_k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.411 1 0) ((bruijn ##.k.412 0 0) (bruijn ##.p.411 1 0)) (cdar (close _V10_Dloop_D48_k182) (bruijn ##.args.49 18 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k182, self)})),
      VGetArg(statics, 18-1, 1));
}
}
static void _V10_Dloop_D48_k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.395 15 0) scm-files (bruijn ##.x.408 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 15-1, 0),
      _V0scm__files,
      _var0
    );
}
static void _V10_Dloop_D48_k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V10_Dloop_D48_k186) (bruijn ##.x.409 0 0) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k186, self)})),
      _var0,
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void _V10_Dloop_D48_k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.k.395 14 0) (##string ##.string.802) (bruijn ##.x.410 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(statics, 14-1, 0),
      VEncodePointer(&_V10_Dstring_D802.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dloop_D48_k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.407 0 0) (cdar (close _V10_Dloop_D48_k185) (bruijn ##.args.49 18 1)) (cdar (close _V10_Dloop_D48_k187) (bruijn ##.args.49 18 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k185, self)})),
      VGetArg(statics, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k187, self)})),
      VGetArg(statics, 18-1, 1));
}
}
static void _V10_Dloop_D48_k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D48_k181) (close _V10_Dloop_D48_k184))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D48_k181, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k184, self)})));
}
static void _V10_Dloop_D48_k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V10_Dloop_D48_k180) (bruijn ##.x.415 0 0) (##string ##.string.803))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k180, self)})),
      _var0,
      VEncodePointer(&_V10_Dstring_D803.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V10_Dloop_D48_k179) (bruijn ##.x.416 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k179, self)})),
      _var0);
}
static void _V10_Dloop_D48_k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.403 0 0) (cdar (close _V10_Dloop_D48_k175) (bruijn ##.args.49 14 1)) (cdar (close _V10_Dloop_D48_k178) (bruijn ##.args.49 14 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k175, self)})),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k178, self)})),
      VGetArg(statics, 14-1, 1));
}
}
static void _V10_Dloop_D48_k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V10_Dloop_D48_k174) (bruijn ##.x.417 0 0) (##string ##.string.804))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k174, self)})),
      _var0,
      VEncodePointer(&_V10_Dstring_D804.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V10_Dloop_D48_k173) (bruijn ##.x.418 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k173, self)})),
      _var0);
}
static void _V10_Dloop_D48_k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.399 0 0) (cdar (close _V10_Dloop_D48_k169) (bruijn ##.args.49 11 1)) (cdar (close _V10_Dloop_D48_k172) (bruijn ##.args.49 11 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k169, self)})),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k172, self)})),
      VGetArg(statics, 11-1, 1));
}
}
static void _V10_Dloop_D48_k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V10_Dloop_D48_k168) (bruijn ##.x.419 0 0) (##string ##.string.805))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k168, self)})),
      _var0,
      VEncodePointer(&_V10_Dstring_D805.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V10_Dloop_D48_k167) (bruijn ##.x.420 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k167, self)})),
      _var0);
}
static void _V10_Dloop_D48_k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.396 0 0) (cdar (close _V10_Dloop_D48_k164) (bruijn ##.args.49 8 1)) (cdar (close _V10_Dloop_D48_k166) (bruijn ##.args.49 8 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k164, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k166, self)})),
      VGetArg(statics, 8-1, 1));
}
}
static void _V10_Dloop_D48_k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V10_Dloop_D48_k163) (bruijn ##.x.421 0 0) (##string ##.string.767))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k163, self)})),
      _var0,
      VEncodePointer(&_V10_Dstring_D767.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V10_Dloop_D48_k162) (bruijn ##.x.422 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k162, self)})),
      _var0);
}
static void _V10_Dloop_D48_k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.395 7 0) out-file (bruijn ##.x.429 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 7-1, 0),
      _V0out__file,
      _var0
    );
}
static void _V10_Dloop_D48_k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.395 11 0) paths (bruijn ##.x.431 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 11-1, 0),
      _V0paths,
      _var0
    );
}
static void _V10_Dloop_D48_k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close _V10_Dloop_D48_k199) paths (bruijn ##.x.432 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k199, self)})),
      VLookupGlobalVarFast2(runtime, "paths"),
      _var0);
}
static void _V10_Dloop_D48_k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (list (close _V10_Dloop_D48_k198) (bruijn ##.x.433 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k198, self)})),
      _var0);
}
static void _V10_Dloop_D48_k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (realpath (close _V10_Dloop_D48_k197) (bruijn ##.x.434 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "realpath")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k197, self)})),
      _var0);
}
static void _V10_Dloop_D48_k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.441 0 0) (<= (bruijn ##.k.440 1 0) 0 optimization 3) ((bruijn ##.k.440 1 0) #f))
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
static void _V10_Dloop_D48_k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if optimization (integer? (close _V10_Dloop_D48_k205) optimization) ((bruijn ##.k.440 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "optimization"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "integer?")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k205, self)})),
      VLookupGlobalVarFast2(runtime, "optimization"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.k.395 14 0) (##string ##.string.806) (bruijn ##.x.438 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(statics, 14-1, 0),
      VEncodePointer(&_V10_Dstring_D806.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dloop_D48_k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.437 0 0) (cdar (close _V10_Dloop_D48_k208) (bruijn ##.args.49 18 1)) ((bruijn ##.k.395 13 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k208, self)})),
      VGetArg(statics, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V10_Dloop_D48_k207) (bruijn ##.x.439 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k207, self)})),
      _var0);
}
static void _V10_Dloop_D48_k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D48_k204) (close _V10_Dloop_D48_k206))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D48_k204, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k206, self)})));
}
static void _V10_Dloop_D48_k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Dloop_D48_k203) optimization (bruijn ##.x.442 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k203, self)})),
      _V0optimization,
      _var0
    );
}
static void _V10_Dloop_D48_k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string->number (close _V10_Dloop_D48_k202) (bruijn ##.x.443 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->number")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k202, self)})),
      _var0);
}
static void _V10_Dloop_D48_k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.450 0 0) (<= (bruijn ##.k.449 1 0) 0 expand? 2) ((bruijn ##.k.449 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 4,
      statics->vars[0],
      VEncodeInt(0l),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(2l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if expand? (integer? (close _V10_Dloop_D48_k214) expand?) ((bruijn ##.k.449 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "expand?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "integer?")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k214, self)})),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.k.395 15 0) (##string ##.string.807) (bruijn ##.x.447 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(statics, 15-1, 0),
      VEncodePointer(&_V10_Dstring_D807.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dloop_D48_k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.446 0 0) (cdar (close _V10_Dloop_D48_k217) (bruijn ##.args.49 19 1)) ((bruijn ##.k.395 14 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k217, self)})),
      VGetArg(statics, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V10_Dloop_D48_k216) (bruijn ##.x.448 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k216, self)})),
      _var0);
}
static void _V10_Dloop_D48_k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D48_k213) (close _V10_Dloop_D48_k215))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D48_k213, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k215, self)})));
}
static void _V10_Dloop_D48_k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Dloop_D48_k212) expand? (bruijn ##.x.451 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k212, self)})),
      _V0expand_Q,
      _var0
    );
}
static void _V10_Dloop_D48_k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string->number (close _V10_Dloop_D48_k211) (bruijn ##.x.452 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->number")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k211, self)})),
      _var0);
}
static void _V10_Dloop_D48_k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.395 15 0) werror-unbound-variables #f)
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 15-1, 0),
      _V0werror__unbound__variables,
      VEncodeBool(false)
    );
}
static void _V10_Dloop_D48_k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.395 17 0) werror-unbound-variables #t)
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 17-1, 0),
      _V0werror__unbound__variables,
      VEncodeBool(true)
    );
}
static void _V10_Dloop_D48_k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (eq? (bruijn ##.k.486 2 0) (bruijn ##.x.487 0 0) #\l)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      statics->up->vars[0],
      _var0,
      VEncodeChar('l'));
}
static void _V10_Dloop_D48_k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-ref (close _V10_Dloop_D48_k234) (bruijn ##.x.488 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k234, self)})),
      _var0,
      VEncodeInt(0l));
}
static void _V10_Dloop_D48_k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.485 1 0) ((bruijn ##.k.486 0 0) (bruijn ##.p.485 1 0)) (cdar (close _V10_Dloop_D48_k233) (bruijn ##.args.49 27 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k233, self)})),
      VGetArg(statics, 27-1, 1));
}
}
static void _V10_Dloop_D48_k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.482 1 0) (compiler-error (bruijn ##.k.483 0 0) (##string ##.string.808)) ((bruijn ##.k.483 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D808.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (eq? (bruijn ##.k.477 2 0) (bruijn ##.x.478 0 0) #\,)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      statics->up->vars[0],
      _var0,
      VEncodeChar(','));
}
static void _V10_Dloop_D48_k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-ref (close _V10_Dloop_D48_k244) (bruijn ##.x.479 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k244, self)})),
      _var0,
      VEncodeInt(1l));
}
static void _V10_Dloop_D48_k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.476 1 0) (cdar (close _V10_Dloop_D48_k243) (bruijn ##.args.49 33 1)) ((bruijn ##.k.477 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k243, self)})),
      VGetArg(statics, 33-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.473 1 0) (compiler-error (bruijn ##.k.474 0 0) (##string ##.string.809)) ((bruijn ##.k.474 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D809.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.395 37 0) c-options (bruijn ##.x.463 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 37-1, 0),
      _V0c__options,
      _var0
    );
}
static void _V10_Dloop_D48_k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V10_Dloop_D48_k255) (bruijn ##.x.464 0 0) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k255, self)})),
      _var0,
      VLookupGlobalVarFast2(runtime, "c-options"));
}
static void _V10_Dloop_D48_k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (decomma (close _V10_Dloop_D48_k254) (bruijn ##.x.465 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "decomma")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k254, self)})),
      _var0);
}
static void _V10_Dloop_D48_k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (substring (close _V10_Dloop_D48_k253) (bruijn ##.x.466 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k253, self)})),
      _var0,
      VEncodeInt(1l));
}
static void _V10_Dloop_D48_k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.395 37 0) c-options (bruijn ##.x.467 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 37-1, 0),
      _V0c__options,
      _var0
    );
}
static void _V10_Dloop_D48_k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V10_Dloop_D48_k259) (bruijn ##.x.468 0 0) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k259, self)})),
      _var0,
      VLookupGlobalVarFast2(runtime, "c-options"));
}
static void _V10_Dloop_D48_k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close _V10_Dloop_D48_k258) (##string ##.string.810) (bruijn ##.x.469 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k258, self)})),
      VEncodePointer(&_V10_Dstring_D810.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dloop_D48_k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (substring (close _V10_Dloop_D48_k257) (bruijn ##.x.470 0 0) 2)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k257, self)})),
      _var0,
      VEncodeInt(2l));
}
static void _V10_Dloop_D48_k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.462 0 0) (cdar (close _V10_Dloop_D48_k252) (bruijn ##.args.49 38 1)) (cdar (close _V10_Dloop_D48_k256) (bruijn ##.args.49 38 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k252, self)})),
      VGetArg(statics, 38-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k256, self)})),
      VGetArg(statics, 38-1, 1));
}
}
static void _V10_Dloop_D48_k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D48_k251) (bruijn ##.x.471 0 0) #\c)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k251, self)})),
      _var0,
      VEncodeChar('c'));
}
static void _V10_Dloop_D48_k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-ref (close _V10_Dloop_D48_k250) (bruijn ##.x.472 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k250, self)})),
      _var0,
      VEncodeInt(0l));
}
static void _V10_Dloop_D48_k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cdar (close _V10_Dloop_D48_k249) (bruijn ##.args.49 35 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k249, self)})),
      VGetArg(statics, 35-1, 1));
}
static void _V10_Dloop_D48_k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D48_k247) (close _V10_Dloop_D48_k248))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D48_k247, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k248, self)})));
}
static void _V10_Dloop_D48_k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V10_Dloop_D48_k246) (bruijn ##.x.475 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k246, self)})),
      _var0);
}
static void _V10_Dloop_D48_k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D48_k242) (close _V10_Dloop_D48_k245))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D48_k242, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k245, self)})));
}
static void _V10_Dloop_D48_k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (>= (close _V10_Dloop_D48_k241) (bruijn ##.x.480 0 0) 2)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">=")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k241, self)})),
      _var0,
      VEncodeInt(2l));
}
static void _V10_Dloop_D48_k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-length (close _V10_Dloop_D48_k240) (bruijn ##.x.481 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k240, self)})),
      _var0);
}
static void _V10_Dloop_D48_k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cdar (close _V10_Dloop_D48_k239) (bruijn ##.args.49 29 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k239, self)})),
      VGetArg(statics, 29-1, 1));
}
static void _V10_Dloop_D48_k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D48_k237) (close _V10_Dloop_D48_k238))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D48_k237, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k238, self)})));
}
static void _V10_Dloop_D48_k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V10_Dloop_D48_k236) (bruijn ##.x.484 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k236, self)})),
      _var0);
}
static void _V10_Dloop_D48_k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D48_k232) (close _V10_Dloop_D48_k235))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D48_k232, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k235, self)})));
}
static void _V10_Dloop_D48_k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D48_k231) (bruijn ##.x.489 0 0) #\c)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k231, self)})),
      _var0,
      VEncodeChar('c'));
}
static void _V10_Dloop_D48_k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-ref (close _V10_Dloop_D48_k230) (bruijn ##.x.490 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k230, self)})),
      _var0,
      VEncodeInt(0l));
}
static void _V10_Dloop_D48_k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.459 0 0) (set! (bruijn ##.k.395 18 0) werror-unbound-variables #f) (cdar (close _V10_Dloop_D48_k229) (bruijn ##.args.49 23 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 18-1, 0),
      _V0werror__unbound__variables,
      VEncodeBool(false)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k229, self)})),
      VGetArg(statics, 23-1, 1));
}
}
static void _V10_Dloop_D48_k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V10_Dloop_D48_k228) (bruijn ##.x.491 0 0) (##string ##.string.811))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k228, self)})),
      _var0,
      VEncodePointer(&_V10_Dstring_D811.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.457 0 0) (set! (close _V10_Dloop_D48_k226) w-unbound-variables #t) (cdar (close _V10_Dloop_D48_k227) (bruijn ##.args.49 21 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k226, self)})),
      _V0w__unbound__variables,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k227, self)})),
      VGetArg(statics, 21-1, 1));
}
}
static void _V10_Dloop_D48_k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V10_Dloop_D48_k225) (bruijn ##.x.492 0 0) (##string ##.string.812))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k225, self)})),
      _var0,
      VEncodePointer(&_V10_Dstring_D812.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.455 0 0) (set! (close _V10_Dloop_D48_k223) w-unbound-variables #f) (cdar (close _V10_Dloop_D48_k224) (bruijn ##.args.49 19 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k223, self)})),
      _V0w__unbound__variables,
      VEncodeBool(false)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k224, self)})),
      VGetArg(statics, 19-1, 1));
}
}
static void _V10_Dloop_D48_k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V10_Dloop_D48_k222) (bruijn ##.x.493 0 0) (##string ##.string.813))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k222, self)})),
      _var0,
      VEncodePointer(&_V10_Dstring_D813.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.454 0 0) (set! (bruijn ##.k.395 12 0) w-unbound-variables #t) (cdar (close _V10_Dloop_D48_k221) (bruijn ##.args.49 17 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 12-1, 0),
      _V0w__unbound__variables,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k221, self)})),
      VGetArg(statics, 17-1, 1));
}
}
static void _V10_Dloop_D48_k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V10_Dloop_D48_k220) (bruijn ##.x.494 0 0) (##string ##.string.814))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k220, self)})),
      _var0,
      VEncodePointer(&_V10_Dstring_D814.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (exit (bruijn ##.k.395 12 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 2,
      VGetArg(statics, 12-1, 0),
      VEncodeInt(0l));
}
static void _V10_Dloop_D48_k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (exit (bruijn ##.k.395 13 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 2,
      VGetArg(statics, 13-1, 0),
      VEncodeInt(0l));
}
static void _V10_Dloop_D48_k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.395 16 0) api (bruijn ##.x.501 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 16-1, 0),
      _V0api,
      _var0
    );
}
static void _V10_Dloop_D48_k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string->number (close _V10_Dloop_D48_k267) (bruijn ##.x.502 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->number")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k267, self)})),
      _var0);
}
static void _V10_Dloop_D48_k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.505 0 0) (set! (bruijn ##.k.395 18 0) purec? #t) ((bruijn ##.k.395 18 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 18-1, 0),
      _V0purec_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V10_Dloop_D48_k271) platform (##string ##.string.815))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k271, self)})),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D815.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Dloop_D48_k270) platform (bruijn ##.x.506 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k270, self)})),
      _V0platform,
      _var0
    );
}
static void _V10_Dloop_D48_k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.395 17 0) main (bruijn ##.x.508 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 17-1, 0),
      _V0main,
      _var0
    );
}
static void _V10_Dloop_D48_k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.395 18 0) cc (bruijn ##.x.510 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 18-1, 0),
      _V0cc,
      _var0
    );
}
static void _V10_Dloop_D48_k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.395 22 0) maketargets (bruijn ##.x.514 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 22-1, 0),
      _V0maketargets,
      _var0
    );
}
static void _V10_Dloop_D48_k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V10_Dloop_D48_k280) (bruijn ##.x.515 0 0) maketargets)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k280, self)})),
      _var0,
      VLookupGlobalVarFast2(runtime, "maketargets"));
}
static void _V10_Dloop_D48_k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.k.395 23 0) (##string ##.string.816) (bruijn ##.x.518 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(statics, 23-1, 0),
      VEncodePointer(&_V10_Dstring_D816.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dloop_D48_k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.517 0 0) (set! (bruijn ##.k.395 22 0) bytecode? #t) (cdar (close _V10_Dloop_D48_k283) (bruijn ##.args.49 27 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 22-1, 0),
      _V0bytecode_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k283, self)})),
      VGetArg(statics, 27-1, 1));
}
}
static void _V10_Dloop_D48_k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.516 0 0) (set! (bruijn ##.k.395 21 0) benchmark? #t) (eqv? (close _V10_Dloop_D48_k282) (bruijn ##.x.47.50 23 0) 'bytecode))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 21-1, 0),
      _V0benchmark_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k282, self)})),
      VGetArg(statics, 23-1, 0),
      _V0bytecode);
}
}
static void _V10_Dloop_D48_k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.513 0 0) (cdar (close _V10_Dloop_D48_k279) (bruijn ##.args.49 25 1)) (eqv? (close _V10_Dloop_D48_k281) (bruijn ##.x.47.50 22 0) 'benchmark))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k279, self)})),
      VGetArg(statics, 25-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k281, self)})),
      VGetArg(statics, 22-1, 0),
      _V0benchmark);
}
}
static void _V10_Dloop_D48_k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.512 0 0) (set! (bruijn ##.k.395 19 0) makefile? #t) (eqv? (close _V10_Dloop_D48_k278) (bruijn ##.x.47.50 21 0) 'maketarget))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 19-1, 0),
      _V0makefile_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k278, self)})),
      VGetArg(statics, 21-1, 0),
      _V0maketarget);
}
}
static void _V10_Dloop_D48_k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.511 0 0) (set! (bruijn ##.k.395 18 0) keep? #t) (eqv? (close _V10_Dloop_D48_k277) (bruijn ##.x.47.50 20 0) 'makefile))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 18-1, 0),
      _V0keep_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k277, self)})),
      VGetArg(statics, 20-1, 0),
      _V0makefile);
}
}
static void _V10_Dloop_D48_k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.509 0 0) (cdar (close _V10_Dloop_D48_k275) (bruijn ##.args.49 22 1)) (eqv? (close _V10_Dloop_D48_k276) (bruijn ##.x.47.50 19 0) 'keep-temps))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k275, self)})),
      VGetArg(statics, 22-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k276, self)})),
      VGetArg(statics, 19-1, 0),
      _V0keep__temps);
}
}
static void _V10_Dloop_D48_k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.507 0 0) (cdar (close _V10_Dloop_D48_k273) (bruijn ##.args.49 21 1)) (eqv? (close _V10_Dloop_D48_k274) (bruijn ##.x.47.50 18 0) 'cc))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k273, self)})),
      VGetArg(statics, 21-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k274, self)})),
      VGetArg(statics, 18-1, 0),
      _V0cc);
}
}
static void _V10_Dloop_D48_k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.503 0 0) (cdar (close _V10_Dloop_D48_k269) (bruijn ##.args.49 20 1)) (eqv? (close _V10_Dloop_D48_k272) (bruijn ##.x.47.50 17 0) 'main))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k269, self)})),
      VGetArg(statics, 20-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k272, self)})),
      VGetArg(statics, 17-1, 0),
      _V0main);
}
}
static void _V10_Dloop_D48_k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.500 0 0) (cdar (close _V10_Dloop_D48_k266) (bruijn ##.args.49 19 1)) (eqv? (close _V10_Dloop_D48_k268) (bruijn ##.x.47.50 16 0) 'platform))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k266, self)})),
      VGetArg(statics, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k268, self)})),
      VGetArg(statics, 16-1, 0),
      _V0platform);
}
}
static void _V10_Dloop_D48_k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.499 0 0) (set! (bruijn ##.k.395 13 0) shared? #t) (eqv? (close _V10_Dloop_D48_k265) (bruijn ##.x.47.50 15 0) 'api))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 13-1, 0),
      _V0shared_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k265, self)})),
      VGetArg(statics, 15-1, 0),
      _V0api);
}
}
static void _V10_Dloop_D48_k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.497 0 0) (display-version (close _V10_Dloop_D48_k263)) (eqv? (close _V10_Dloop_D48_k264) (bruijn ##.x.47.50 14 0) 'shared))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display-version")), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k263, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k264, self)})),
      VGetArg(statics, 14-1, 0),
      _V0shared);
}
}
static void _V10_Dloop_D48_k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.495 0 0) (display-help (close _V10_Dloop_D48_k261)) (eqv? (close _V10_Dloop_D48_k262) (bruijn ##.x.47.50 13 0) 'version))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display-help")), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k261, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k262, self)})),
      VGetArg(statics, 13-1, 0),
      _V0version);
}
}
static void _V10_Dloop_D48_k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.453 0 0) (cdar (close _V10_Dloop_D48_k219) (bruijn ##.args.49 15 1)) (eqv? (close _V10_Dloop_D48_k260) (bruijn ##.x.47.50 12 0) 'help))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k219, self)})),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k260, self)})),
      VGetArg(statics, 12-1, 0),
      _V0help);
}
}
static void _V10_Dloop_D48_k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.444 0 0) (cdar (close _V10_Dloop_D48_k210) (bruijn ##.args.49 14 1)) (eqv? (close _V10_Dloop_D48_k218) (bruijn ##.x.47.50 11 0) '#\W))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k210, self)})),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k218, self)})),
      VGetArg(statics, 11-1, 0),
      VEncodeChar('W'));
}
}
static void _V10_Dloop_D48_k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.435 0 0) (cdar (close _V10_Dloop_D48_k201) (bruijn ##.args.49 13 1)) (eqv? (close _V10_Dloop_D48_k209) (bruijn ##.x.47.50 10 0) '#\E))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k201, self)})),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k209, self)})),
      VGetArg(statics, 10-1, 0),
      VEncodeChar('E'));
}
}
static void _V10_Dloop_D48_k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.430 0 0) (cdar (close _V10_Dloop_D48_k196) (bruijn ##.args.49 12 1)) (eqv? (close _V10_Dloop_D48_k200) (bruijn ##.x.47.50 9 0) '#\O))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k196, self)})),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k200, self)})),
      VGetArg(statics, 9-1, 0),
      VEncodeChar('O'));
}
}
static void _V10_Dloop_D48_k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.428 0 0) (cdar (close _V10_Dloop_D48_k194) (bruijn ##.args.49 11 1)) (eqv? (close _V10_Dloop_D48_k195) (bruijn ##.x.47.50 8 0) '#\I))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k194, self)})),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k195, self)})),
      VGetArg(statics, 8-1, 0),
      VEncodeChar('I'));
}
}
static void _V10_Dloop_D48_k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.427 0 0) (set! (bruijn ##.k.395 5 0) object? #t) (eqv? (close _V10_Dloop_D48_k193) (bruijn ##.x.47.50 7 0) '#\o))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 5-1, 0),
      _V0object_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k193, self)})),
      VGetArg(statics, 7-1, 0),
      VEncodeChar('o'));
}
}
static void _V10_Dloop_D48_k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.426 0 0) (set! (bruijn ##.k.395 4 0) transpile? #t) (eqv? (close _V10_Dloop_D48_k192) (bruijn ##.x.47.50 6 0) '#\c))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->up->up->vars[0],
      _V0transpile_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k192, self)})),
      VGetArg(statics, 6-1, 0),
      VEncodeChar('c'));
}
}
static void _V10_Dloop_D48_k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.425 0 0) (set! (bruijn ##.k.395 3 0) header? #t) (eqv? (close _V10_Dloop_D48_k191) (bruijn ##.x.47.50 5 0) '#\t))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->up->vars[0],
      _V0header_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k191, self)})),
      VGetArg(statics, 5-1, 0),
      VEncodeChar('t'));
}
}
static void _V10_Dloop_D48_k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.424 0 0) (set! (bruijn ##.k.395 2 0) debug? #t) (eqv? (close _V10_Dloop_D48_k190) (bruijn ##.x.47.50 4 0) '#\h))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->vars[0],
      _V0debug_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k190, self)})),
      statics->up->up->up->vars[0],
      VEncodeChar('h'));
}
}
static void _V10_Dloop_D48_k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.423 0 0) (set! (bruijn ##.k.395 1 0) verbose? #t) (eqv? (close _V10_Dloop_D48_k189) (bruijn ##.x.47.50 3 0) '#\g))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->vars[0],
      _V0verbose_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k189, self)})),
      statics->up->up->vars[0],
      VEncodeChar('g'));
}
}
static void _V10_Dloop_D48_k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.394 1 0) (cdar (close _V10_Dloop_D48_k161) (bruijn ##.args.49 5 1)) (eqv? (close _V10_Dloop_D48_k188) (bruijn ##.x.47.50 2 0) '#\v))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k161, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k188, self)})),
      statics->up->vars[0],
      VEncodeChar('v'));
}
}
static void _V10_Dloop_D48_k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.48 7 0) (bruijn ##.k.390 6 0) (bruijn ##.x.393 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      VGetArg(statics, 6-1, 0),
      _var0);
}
static void _V10_Dloop_D48_k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cdr (close _V10_Dloop_D48_k285) (bruijn ##.args.49 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k285, self)})),
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dloop_D48_k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D48_k160) (close _V10_Dloop_D48_k284))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D48_k160, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k284, self)})));
}
static void _V10_Dloop_D48_k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eqv? (close _V10_Dloop_D48_k159) (bruijn ##.x.47.50 0 0) '#t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k159, self)})),
      _var0,
      VEncodeBool(true));
}
static void _V10_Dloop_D48_k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.391 0 0) (caar (close _V10_Dloop_D48_k158) (bruijn ##.args.49 2 1)) ((bruijn ##.k.390 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "caar")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k158, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V10_Dloop_D48_k157) (bruijn ##.x.519 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k157, self)})),
      _var0);
}
static void _V10_Dloop_D48_lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_lambda85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (null? (close _V10_Dloop_D48_k156) (bruijn ##.args.49 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k156, self)})),
      _var1);
}
static void global_k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.389 0 0) ((bruijn ##.k.387 2 0) (##string ##.string.819)) (compiler-error (bruijn ##.k.387 2 0) (##string ##.string.820) platform))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D819.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D820.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "platform"));
}
}
static void global_k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.388 0 0) ((bruijn ##.k.387 1 0) (##string ##.string.818)) (equal? (close global_k294) platform (##string ##.string.815)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D818.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k294, self)})),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D815.sym, VPOINTER_OTHER));
}
}
static void global_k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.386 1 0) ((bruijn ##.k.387 0 0) (##string ##.string.817)) (equal? (close global_k293) platform (##string ##.string.821)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D817.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k293, self)})),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D821.sym, VPOINTER_OTHER));
}
}
static void global_k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.384 2 0) cc (bruijn ##.x.385 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->vars[0],
      _V0cc,
      _var0
    );
}
static void global_k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k292) (close global_k295))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k292, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k295, self)})));
}
static void global_k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.383 1 0) (equal? (close global_k291) platform (##string ##.string.757)) ((bruijn ##.k.384 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k291, self)})),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D757.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.380 1 0) (compiler-error (bruijn ##.k.381 0 0) (##string ##.string.822)) ((bruijn ##.k.381 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D822.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.378 1 0) (null? (bruijn ##.k.379 0 0) obj-files) ((bruijn ##.k.379 0 0) #f))
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
static void global_k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.376 1 0) (compiler-error (bruijn ##.k.377 0 0) (##string ##.string.823)) ((bruijn ##.k.377 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D823.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if makefile? ((bruijn ##.k.375 0 0) makefile?) (if header? ((bruijn ##.k.375 0 0) header?) (if bytecode? ((bruijn ##.k.375 0 0) bytecode?) (if transpile? ((bruijn ##.k.375 0 0) transpile?) (if object? ((bruijn ##.k.375 0 0) object?) ((bruijn ##.k.375 0 0) expand?))))))
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
static void global_k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.k.373 1 0) (bruijn ##.x.374 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->vars[0],
      _var0);
}
static void global_k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.372 1 0) (null? (close global_k309) obj-files) ((bruijn ##.k.373 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k309, self)})),
      VLookupGlobalVarFast2(runtime, "obj-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.370 1 0) (compiler-error (bruijn ##.k.371 0 0) (##string ##.string.824)) ((bruijn ##.k.371 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D824.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if makefile? ((bruijn ##.k.369 0 0) makefile?) (if header? ((bruijn ##.k.369 0 0) header?) (if bytecode? ((bruijn ##.k.369 0 0) bytecode?) (if transpile? ((bruijn ##.k.369 0 0) transpile?) (if object? ((bruijn ##.k.369 0 0) object?) ((bruijn ##.k.369 0 0) expand?))))))
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
static void global_k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.k.366 2 0) (bruijn ##.x.367 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->up->vars[0],
      _var0);
}
static void global_k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close global_k317) (bruijn ##.x.368 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k317, self)})),
      _var0);
}
static void global_k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.365 1 0) (if out-file (cdr (close global_k316) scm-files) ((bruijn ##.k.366 0 0) #f)) ((bruijn ##.k.366 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k316, self)})),
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
static void global_k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.363 1 0) (compiler-error (bruijn ##.k.364 0 0) (##string ##.string.825)) ((bruijn ##.k.364 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D825.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if makefile? ((bruijn ##.k.362 0 0) makefile?) (if header? ((bruijn ##.k.362 0 0) header?) (if bytecode? ((bruijn ##.k.362 0 0) bytecode?) (if transpile? ((bruijn ##.k.362 0 0) transpile?) (if object? ((bruijn ##.k.362 0 0) object?) ((bruijn ##.k.362 0 0) expand?))))))
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
static void global_k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.k.359 2 0) (bruijn ##.x.360 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->up->vars[0],
      _var0);
}
static void global_k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close global_k325) (bruijn ##.x.361 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k325, self)})),
      _var0);
}
static void global_k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.358 1 0) (cdr (close global_k324) scm-files) ((bruijn ##.k.359 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k324, self)})),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.356 1 0) (compiler-error (bruijn ##.k.357 0 0) (##string ##.string.826)) ((bruijn ##.k.357 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D826.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.k.345 2 0) (bruijn ##.x.346 0 0) (##string ##.string.767))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D767.sym, VPOINTER_OTHER));
}
static void global_k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_k333) (bruijn ##.x.347 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k333, self)})),
      _var0);
}
static void global_k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.k.345 2 0) (bruijn ##.x.348 0 0) (##string ##.string.827))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D827.sym, VPOINTER_OTHER));
}
static void global_k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_k335) (bruijn ##.x.349 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k335, self)})),
      _var0);
}
static void global_k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.k.345 2 0) (bruijn ##.x.350 0 0) (##string ##.string.828))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D828.sym, VPOINTER_OTHER));
}
static void global_k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_k337) (bruijn ##.x.351 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k337, self)})),
      _var0);
}
static void global_k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.k.345 2 0) (bruijn ##.x.352 0 0) (##string ##.string.829))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D829.sym, VPOINTER_OTHER));
}
static void global_k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_k339) (bruijn ##.x.353 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k339, self)})),
      _var0);
}
static void global_k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.k.345 2 0) (bruijn ##.x.354 0 0) (##string ##.string.830))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D830.sym, VPOINTER_OTHER));
}
static void global_k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_k341) (bruijn ##.x.355 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k341, self)})),
      _var0);
}
static void global_k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if object? (car (close global_k332) scm-files) (if transpile? (car (close global_k334) scm-files) (if expand? (car (close global_k336) scm-files) (if header? (car (close global_k338) scm-files) (if bytecode? (car (close global_k340) scm-files) (if makefile? ((bruijn ##.k.345 0 0) out-file) ((bruijn ##.k.345 0 0) #f)))))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k332, self)})),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k334, self)})),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "expand?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k336, self)})),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k338, self)})),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k340, self)})),
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
static void global_k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.343 1 0) out-file (bruijn ##.x.344 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->vars[0],
      _V0out__file,
      _var0
    );
}
static void global_k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.342 1 0) ((close global_k331) (close global_k342)) ((bruijn ##.k.343 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k331, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k342, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (exit (bruijn ##.k.340 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 1,
      statics->vars[0]);
}
static void global_k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if header? (gen-header (close global_k345)) ((bruijn ##.k.340 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "gen-header")), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k345, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (exit (bruijn ##.k.329 25 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 1,
      VGetArg(statics, 25-1, 0));
}
static void global_k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if makefile? (gen-makefile (close global_k347)) ((bruijn ##.k.329 24 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "gen-makefile")), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k347, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 1,
      VEncodeBool(false));
}
}
static void global_k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k344) (close global_k346))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k344, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k346, self)})));
}
static void global_k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k330) (close global_k343))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k330, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k343, self)})));
}
static void global_k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close global_k329) out-file)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k329, self)})),
      VLookupGlobalVarFast2(runtime, "out-file"));
}
static void global_k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k327) (close global_k328))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k327, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k328, self)})));
}
static void global_k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k323) (close global_k326))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k323, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k326, self)})));
}
static void global_k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k321) (close global_k322))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k321, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k322, self)})));
}
static void global_k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k319) (close global_k320))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k319, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k320, self)})));
}
static void global_k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k315) (close global_k318))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k315, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k318, self)})));
}
static void global_k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k313) (close global_k314))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k313, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k314, self)})));
}
static void global_k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k311) (close global_k312))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k311, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k312, self)})));
}
static void global_k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k308) (close global_k310))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k308, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k310, self)})));
}
static void global_k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k306) (close global_k307))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k306, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k307, self)})));
}
static void global_k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k304) (close global_k305))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k304, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k305, self)})));
}
static void global_k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k302) (close global_k303))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k302, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k303, self)})));
}
static void global_k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close global_k301) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k301, self)})),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void global_k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k299) (close global_k300))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k299, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k300, self)})));
}
static void global_k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (> (close global_k298) (bruijn ##.x.382 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k298, self)})),
      _var0,
      VEncodeInt(1l));
}
static void global_k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (count-true (close global_k297) makefile? header? bytecode? transpile? object? expand?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "count-true")), 7,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k297, self)})),
      VLookupGlobalVarFast2(runtime, "makefile?"),
      VLookupGlobalVarFast2(runtime, "header?"),
      VLookupGlobalVarFast2(runtime, "bytecode?"),
      VLookupGlobalVarFast2(runtime, "transpile?"),
      VLookupGlobalVarFast2(runtime, "object?"),
      VLookupGlobalVarFast2(runtime, "expand?"));
}
static void global_k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k290) (close global_k296))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k290, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k296, self)})));
}
static void global_k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close global_k289) cc)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k289, self)})),
      VLookupGlobalVarFast2(runtime, "cc"));
}
static void global_k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.48 2 0) (close global_k288) (bruijn ##.x.520 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k288, self)})),
      _var0);
}
static void global_k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (getopt (close global_k287) (##string ##.string.831) (bruijn ##.x.521 0 0) (##inline ##vcore.qcons (##inline ##vcore.qcons 'shared (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'shared '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'help (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'help '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'api (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'api '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'platform (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'platform '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'main (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'main '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'cc (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'cc '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'version (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'version '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'keep-temps (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'keep-temps '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'makefile (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'makefile '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'maketarget (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'maketarget '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'bytecode (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'bytecode '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'benchmark (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'benchmark '()))) '())))))))))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "getopt")), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k287, self)})),
      VEncodePointer(&_V10_Dstring_D831.sym, VPOINTER_OTHER),
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
static void global_lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D48_lambda85)) (command-line (close global_k286)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_lambda85, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "command-line")), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k286, self)})));
    }
}
static void global_lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (with-exception-handler (bruijn ##.next.328 0 0) handle-exception (close global_lambda84))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-exception-handler")), 3,
      _var0,
      VLookupGlobalVarFast2(runtime, "handle-exception"),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda84, self)})));
}
static void global_k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.740 1 0) ((bruijn ##.k.741 0 0) (##string ##.string.832)) ((bruijn ##.k.741 0 0) (##string ##.string.833)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D832.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D833.sym, VPOINTER_OTHER));
}
}
static void global_k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if header? ((bruijn ##.k.739 0 0) header?) (if bytecode? ((bruijn ##.k.739 0 0) bytecode?) (if transpile? ((bruijn ##.k.739 0 0) transpile?) ((bruijn ##.k.739 0 0) expand?))))
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
static void global_k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (make-temporary-file (bruijn ##.k.736 2 0) (bruijn ##.x.737 0 0) (##string ##.string.827))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "make-temporary-file")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D827.sym, VPOINTER_OTHER));
}
static void global_k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close global_k356) (##string ##.string.834) (bruijn ##.x.738 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k356, self)})),
      VEncodePointer(&_V10_Dstring_D834.sym, VPOINTER_OTHER),
      _var0);
}
static void global_lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basename (close global_k355) (bruijn ##.file.62 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k355, self)})),
      _var1);
}
static void global_k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.734 1 0) (list (bruijn ##.k.735 0 0) out-file) (map (bruijn ##.k.735 0 0) (close global_lambda88) scm-files))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      _var0,
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda88, self)})),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
}
static void global_k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if header? ((bruijn ##.k.732 0 0) header?) (if bytecode? ((bruijn ##.k.732 0 0) bytecode?) (if transpile? ((bruijn ##.k.732 0 0) transpile?) ((bruijn ##.k.732 0 0) expand?))))
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
static void global_k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (make-temporary-file (bruijn ##.k.729 2 0) (bruijn ##.x.730 0 0) (##string ##.string.767))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "make-temporary-file")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D767.sym, VPOINTER_OTHER));
}
static void global_k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close global_k363) (##string ##.string.834) (bruijn ##.x.731 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k363, self)})),
      VEncodePointer(&_V10_Dstring_D834.sym, VPOINTER_OTHER),
      _var0);
}
static void global_lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda89, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basename (close global_k362) (bruijn ##.file.63 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k362, self)})),
      _var1);
}
static void global_k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.727 1 0) (list (bruijn ##.k.728 0 0) #f) (if object? (list (bruijn ##.k.728 0 0) out-file) (map (bruijn ##.k.728 0 0) (close global_lambda89) scm-files)))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda89, self)})),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
}
}
static void global_k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.725 0 0) ((bruijn ##.k.724 1 0) (##string ##.string.836)) (sprintf (bruijn ##.k.724 1 0) (##string ##.string.837) install-root))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D836.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D837.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
}
static void global_k367(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.723 1 0) ((bruijn ##.k.724 0 0) (##string ##.string.835)) (equal? (close global_k368) platform (##string ##.string.815)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D835.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k368, self)})),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D815.sym, VPOINTER_OTHER));
}
}
static void global_k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if debug? ((bruijn ##.k.721 0 0) (##string ##.string.838)) ((bruijn ##.k.721 0 0) (##string ##.string.773)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "debug?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D838.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D773.sym, VPOINTER_OTHER));
}
}
static void global_k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if shared? ((bruijn ##.k.720 0 0) (##string ##.string.839)) ((bruijn ##.k.720 0 0) (##string ##.string.773)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D839.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D773.sym, VPOINTER_OTHER));
}
}
static void global_k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if shared? (> (bruijn ##.k.655 0 0) (bruijn ##.num-mains.61 20 7) 0) ((bruijn ##.k.655 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      _var0,
      VGetArg(statics, 20-1, 7),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.653 1 0) (compiler-error (bruijn ##.k.654 0 0) (##string ##.string.840)) ((bruijn ##.k.654 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D840.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.651 1 0) (compiler-error (bruijn ##.k.652 0 0) (##string ##.string.841)) ((bruijn ##.k.652 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D841.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D92_k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D92_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.92 6 0) (bruijn ##.k.644 5 0) (bruijn ##.x.646 1 0) (bruijn ##.x.647 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D92_k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D92_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cdr (close _V10_Dloop_D92_k394) (bruijn ##.paths.94 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D92_k394, self)})),
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D92_k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D92_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close _V10_Dloop_D92_k393) (bruijn ##.acc.93 3 1) (bruijn ##.x.648 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D92_k393, self)})),
      statics->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D92_k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D92_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (sprintf (close _V10_Dloop_D92_k392) (##string ##.string.842) (bruijn ##.x.649 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D92_k392, self)})),
      VEncodePointer(&_V10_Dstring_D842.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dloop_D92_k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D92_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.645 0 0) ((bruijn ##.k.644 1 0) (bruijn ##.acc.93 1 1)) (car (close _V10_Dloop_D92_k391) (bruijn ##.paths.94 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D92_k391, self)})),
      statics->vars[2]);
}
}
static void _V10_Dloop_D92_lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D92_lambda90, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (null? (close _V10_Dloop_D92_k390) (bruijn ##.paths.94 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D92_k390, self)})),
      _var2);
}
static void global_k403(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.631 0 0) (not (bruijn ##.k.628 3 0) object?) ((bruijn ##.k.628 3 0) #f))
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
static void global_k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.630 0 0) (not (close global_k403) expand?) ((bruijn ##.k.628 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k403, self)})),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.629 0 0) (not (close global_k402) transpile?) ((bruijn ##.k.628 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k402, self)})),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.627 1 0) (not (close global_k401) bytecode?) ((bruijn ##.k.628 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k401, self)})),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if out-file (sprintf (bruijn ##.k.626 0 0) (##string ##.string.843) cc out-file) ((bruijn ##.k.626 0 0) cc))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D843.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "cc"),
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "cc"));
}
}
static void global_k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if debug? ((bruijn ##.k.625 0 0) (##string ##.string.838)) ((bruijn ##.k.625 0 0) (##string ##.string.773)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "debug?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D838.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D773.sym, VPOINTER_OTHER));
}
}
static void global_k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.624 0 0) ((bruijn ##.k.623 1 0) (##string ##.string.845)) (sprintf (bruijn ##.k.623 1 0) (##string ##.string.846) install-root))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D845.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D846.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
}
static void global_k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.622 1 0) ((bruijn ##.k.623 0 0) (##string ##.string.844)) (equal? (close global_k413) platform (##string ##.string.815)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D844.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k413, self)})),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D815.sym, VPOINTER_OTHER));
}
}
static void global_k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.621 0 0) ((bruijn ##.k.620 1 0) (##string ##.string.773)) ((bruijn ##.k.620 1 0) (##string ##.string.848)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D773.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D848.sym, VPOINTER_OTHER));
}
}
static void global_k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if shared? ((bruijn ##.k.620 0 0) (##string ##.string.847)) (equal? (close global_k416) platform (##string ##.string.815)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D847.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k416, self)})),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D815.sym, VPOINTER_OTHER));
}
}
static void global_k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if verbose? (displayln (bruijn ##.k.607 0 0) (bruijn ##.link-command.101 14 1)) ((bruijn ##.k.607 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "verbose?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      _var0,
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (system (bruijn ##.k.600 16 0) (bruijn ##.link-command.101 14 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "system")), 2,
      VGetArg(statics, 16-1, 0),
      VGetArg(statics, 14-1, 1));
}
static void global_k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k426) (close global_k427))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k426, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k427, self)})));
}
static void global_k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_k425) (bruijn ##.link-command.101 12 1) (bruijn ##.x.608 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k425, self)})),
      VEncodeInt(12l), VEncodeInt(1l),
      _var0
    );
}
static void global_k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close global_k424) (bruijn ##.link-command.101 11 1) (bruijn ##.link-command-flags.100 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k424, self)})),
      VGetArg(statics, 11-1, 1),
      VGetArg(statics, 11-1, 0));
}
static void global_k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.609 1 0) (bruijn ##.link-command.101 12 1) (bruijn ##.x.610 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->vars[0],
      VEncodeInt(12l), VEncodeInt(1l),
      _var0
    );
}
static void global_lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda91, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (string-append (close global_k428) (bruijn ##.link-command.101 11 1) (bruijn ##.option.103 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k428, self)})),
      VGetArg(statics, 11-1, 1),
      _var1);
}
static void global_k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (for-each (close global_k423) (close global_lambda91) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k423, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda91, self)})),
      VLookupGlobalVarFast2(runtime, "c-options"));
}
static void global_k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.611 1 0) (bruijn ##.link-command.101 11 1) (bruijn ##.x.612 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->vars[0],
      VEncodeInt(11l), VEncodeInt(1l),
      _var0
    );
}
static void global_lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (string-append (close global_k429) (bruijn ##.link-command.101 10 1) (##string ##.string.849) (bruijn ##.file.102 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k429, self)})),
      VGetArg(statics, 10-1, 1),
      VEncodePointer(&_V10_Dstring_D849.sym, VPOINTER_OTHER),
      _var1);
}
static void global_k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (for-each (close global_k422) (close global_lambda92) (bruijn ##.x.613 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k422, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda92, self)})),
      _var0);
}
static void global_k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close global_k421) (bruijn ##.cc-obj-files.55 42 1) (bruijn ##.x.614 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k421, self)})),
      VGetArg(statics, 42-1, 1),
      _var0);
}
static void global_k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (reverse (close global_k420) obj-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "reverse")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k420, self)})),
      VLookupGlobalVarFast2(runtime, "obj-files"));
}
static void global_k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_k419) (bruijn ##.link-command-flags.100 6 0) (bruijn ##.x.615 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k419, self)})),
      VEncodeInt(6l), VEncodeInt(0l),
      _var0
    );
}
static void global_k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close global_k418) (bruijn ##.base-cc-flags.56 39 2) (bruijn ##.x.616 4 0) (bruijn ##.x.617 3 0) (bruijn ##.x.618 1 0) (bruijn ##.x.619 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 6,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k418, self)})),
      VGetArg(statics, 39-1, 2),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->vars[0],
      _var0);
}
static void global_k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k415) (close global_k417))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k415, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k417, self)})));
}
static void global_k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k412) (close global_k414))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k412, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k414, self)})));
}
static void global_k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close global_k411) platform (##string ##.string.757))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k411, self)})),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D757.sym, VPOINTER_OTHER));
}
static void global_k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k409) (close global_k410))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k409, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k410, self)})));
}
static void global_k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 (#f (bruijn ##.x.601 1 0)) (sprintf (close global_k408) (##string ##.string.850) optimization))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k408, self)})),
      VEncodePointer(&_V10_Dstring_D850.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "optimization"));
    }
}
static void global_k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.599 1 0) ((close global_k406) (close global_k407)) ((bruijn ##.k.600 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k406, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k407, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.598 0 0) (not (bruijn ##.k.595 3 0) keep?) ((bruijn ##.k.595 3 0) #f))
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
static void global_k434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.597 0 0) (not (close global_k435) expand?) ((bruijn ##.k.595 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k435, self)})),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.596 0 0) (not (close global_k434) transpile?) ((bruijn ##.k.595 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k434, self)})),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.594 1 0) (not (close global_k433) bytecode?) ((bruijn ##.k.595 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k433, self)})),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.592 1 0) (for-each (bruijn ##.k.593 0 0) delete-file (bruijn ##.cc-files.54 35 0)) ((bruijn ##.k.593 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      _var0,
      VLookupGlobalVarFast2(runtime, "delete-file"),
      VGetArg(statics, 35-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.591 0 0) (not (bruijn ##.k.587 4 0) keep?) ((bruijn ##.k.587 4 0) #f))
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
static void global_k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.590 0 0) (not (close global_k444) object?) ((bruijn ##.k.587 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k444, self)})),
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.589 0 0) (not (close global_k443) expand?) ((bruijn ##.k.587 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k443, self)})),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.588 0 0) (not (close global_k442) transpile?) ((bruijn ##.k.587 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k442, self)})),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.586 1 0) (not (close global_k441) bytecode?) ((bruijn ##.k.587 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k441, self)})),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.585 0 0) (for-each (bruijn ##.k.571 41 0) delete-file (bruijn ##.cc-obj-files.55 37 1)) ((bruijn ##.k.571 41 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VGetArg(statics, 41-1, 0),
      VLookupGlobalVarFast2(runtime, "delete-file"),
      VGetArg(statics, 37-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 1,
      VEncodeBool(false));
}
}
static void global_k439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k440) (close global_k445))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k440, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k445, self)})));
}
static void global_k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close global_k439) header?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k439, self)})),
      VLookupGlobalVarFast2(runtime, "header?"));
}
static void global_k436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k437) (close global_k438))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k437, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k438, self)})));
}
static void global_k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k432) (close global_k436))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k432, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k436, self)})));
}
static void global_k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close global_k431) header?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k431, self)})),
      VLookupGlobalVarFast2(runtime, "header?"));
}
static void global_k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k405) (close global_k430))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k405, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k430, self)})));
}
static void global_k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k400) (close global_k404))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k400, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k404, self)})));
}
static void global_k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close global_k399) header?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k399, self)})),
      VLookupGlobalVarFast2(runtime, "header?"));
}
static void global_k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.642 0 0) (not (bruijn ##.k.640 2 0) expand?) ((bruijn ##.k.640 2 0) #f))
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
static void global_k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.641 0 0) (not (close global_k451) transpile?) ((bruijn ##.k.640 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k451, self)})),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.639 1 0) (not (close global_k450) bytecode?) ((bruijn ##.k.640 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k450, self)})),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if verbose? (displayln (bruijn ##.k.638 0 0) (bruijn ##.cc-cmd.99 3 0)) ((bruijn ##.k.638 0 0) #f))
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
static void global_k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (system (bruijn ##.k.634 6 0) (bruijn ##.cc-cmd.99 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "system")), 2,
      VGetArg(statics, 6-1, 0),
      statics->up->up->vars[0]);
}
static void global_k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.636 0 0) ((close global_k453) (close global_k454)) ((bruijn ##.k.634 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k453, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k454, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void global_k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k449) (close global_k452))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k449, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k452, self)})));
}
static void global_k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.x.635 1 0)) (not (close global_k448) header?))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k448, self)})),
      VLookupGlobalVarFast2(runtime, "header?"));
    }
}
static void global_k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (sprintf (close global_k447) (##string ##.string.852) cc (bruijn ##.path.98 0 0) (bruijn ##.cc-paths.91 7 0) (bruijn ##.cc-command.58 31 4) (bruijn ##.obj-file.97 1 3) (bruijn ##.cc-file.96 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 8,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k447, self)})),
      VEncodePointer(&_V10_Dstring_D852.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "cc"),
      _var0,
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 31-1, 4),
      statics->vars[3],
      statics->vars[2]);
}
static void global_lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to global_lambda94, got ~D~N"
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
  // (realbasepath (close global_k446) (bruijn ##.scm-file.95 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "realbasepath")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k446, self)})),
      _var1);
}
static void global_lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (for-each (bruijn ##.k.633 0 0) (close global_lambda94) scm-files (bruijn ##.cc-files.54 29 0) (bruijn ##.cc-obj-files.55 29 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 5,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda94, self)})),
      VLookupGlobalVarFast2(runtime, "scm-files"),
      VGetArg(statics, 29-1, 0),
      VGetArg(statics, 29-1, 1));
}
static void global_k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (benchmark (close global_k398) (##string ##.string.851) (close global_lambda93))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k398, self)})),
      VEncodePointer(&_V10_Dstring_D851.sym, VPOINTER_OTHER),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda93, self)})));
}
static void global_k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_k397) (bruijn ##.cc-paths.91 3 0) (bruijn ##.x.643 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k397, self)})),
      VEncodeInt(3l), VEncodeInt(0l),
      _var0
    );
}
static void global_k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.92 1 0) (close global_k396) (##string ##.string.773) (bruijn ##.x.650 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k396, self)})),
      VEncodePointer(&_V10_Dstring_D773.sym, VPOINTER_OTHER),
      _var0);
}
static void global_k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 (#f) (letrec 1 ((close _V10_Dloop_D92_lambda90)) (cdr (close global_k395) paths)))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D92_lambda90, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k395, self)})),
      VLookupGlobalVarFast2(runtime, "paths"));
    }
    }
}
static void global_k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k388) (close global_k389))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k388, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k389, self)})));
}
static void global_k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (> (close global_k387) (bruijn ##.num-mains.61 21 7) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k387, self)})),
      VGetArg(statics, 21-1, 7),
      VEncodeInt(1l));
}
static void global_k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k385) (close global_k386))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k385, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k386, self)})));
}
static void global_k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k383) (close global_k384))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k383, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k384, self)})));
}
static void global_k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_k382) (bruijn ##.num-mains.61 18 7) (bruijn ##.x.656 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k382, self)})),
      VEncodeInt(18l), VEncodeInt(7l),
      _var0
    );
}
static void global_k455(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.64 1 1) ((bruijn ##.k.659 0 0) 1) ((bruijn ##.k.659 0 0) 0))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
}
static void global_k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (+ (bruijn ##.k.657 1 0) (bruijn ##.acc.65 1 2) (bruijn ##.x.658 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      statics->vars[0],
      statics->vars[2],
      _var0);
}
static void global_lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to global_lambda95, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close global_k455) (close global_k456))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k455, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k456, self)})));
}
static void global_k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (fold (close global_k381) (close global_lambda95) 0 (bruijn ##.x.660 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "fold")), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k381, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda95, self)})),
      VEncodeInt(0l),
      _var0);
}
static void _V10_Dloop_D73_k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if werror-unbound-variables ((bruijn ##.k.692 0 0) compiler-error) ((bruijn ##.k.692 0 0) compiler-warning))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "werror-unbound-variables"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "compiler-error"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "compiler-warning"));
}
}
static void _V10_Dloop_D73_k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.691 0 0) (bruijn ##.k.688 5 0) (##string ##.string.853) (bruijn ##.free.77 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D853.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
static void _V10_Dloop_D73_k465(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.690 0 0) ((close _V10_Dloop_D73_k466) (close _V10_Dloop_D73_k467)) ((bruijn ##.k.688 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D73_k466, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k467, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D73_k464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V10_Dloop_D73_k465) (bruijn ##.x.693 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k465, self)})),
      _var0);
}
static void _V10_Dloop_D73_k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close _V10_Dloop_D73_k464) (bruijn ##.free.77 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k464, self)})),
      _var0);
}
static void _V10_Dloop_D73_k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.k.694 1 0) (bruijn ##.x.695 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D73_lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_lambda99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (memv (close _V10_Dloop_D73_k468) (bruijn ##.e.78 0 1) (bruijn ##.bound.75 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "memv")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k468, self)})),
      _var1,
      statics->up->vars[2]);
}
static void _V10_Dloop_D73_k473(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.73 8 0) (bruijn ##.k.688 7 0) (bruijn ##.x.697 2 0) (bruijn ##.new-bound.80 5 1) (bruijn ##.x.698 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 4,
      VGetArg(statics, 7-1, 0),
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D73_k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close _V10_Dloop_D73_k473) (bruijn ##.x.699 0 0) (bruijn ##.free.76 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k473, self)})),
      _var0,
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dloop_D73_k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.k.700 1 0) (bruijn ##.x.701 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D73_lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_lambda100, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (memv (close _V10_Dloop_D73_k474) (bruijn ##.e.84 0 1) (bruijn ##.free.76 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "memv")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k474, self)})),
      _var1,
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dloop_D73_k471(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (filter (close _V10_Dloop_D73_k472) (close _V10_Dloop_D73_lambda100) (bruijn ##.new-free.79 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "filter")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k472, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_lambda100, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Dloop_D73_k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cdr (close _V10_Dloop_D73_k471) (bruijn ##.exprs.74 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k471, self)})),
      statics->up->up->up->vars[1]);
}
static void _V10_Dloop_D73_k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Dloop_D73_k470) (bruijn ##.dummy.53.81 1 2) (bruijn ##.x.702 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k470, self)})),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Dloop_D73_k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (free-variables-toplevel (bruijn ##.k.703 2 0) (bruijn ##.x.704 1 0) (bruijn ##.bound.75 5 2) (bruijn ##.x.705 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "free-variables-toplevel")), 4,
      statics->up->vars[0],
      statics->vars[0],
      VGetArg(statics, 5-1, 2),
      _var0);
}
static void _V10_Dloop_D73_k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V10_Dloop_D73_k476) (bruijn ##.path.69 11 0) paths)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k476, self)})),
      VGetArg(statics, 11-1, 0),
      VLookupGlobalVarFast2(runtime, "paths"));
}
static void _V10_Dloop_D73_lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_lambda101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V10_Dloop_D73_k475) (bruijn ##.exprs.74 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k475, self)})),
      statics->up->up->vars[1]);
}
static void _V10_Dloop_D73_k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.706 1 0) (bruijn ##.new-bound.80 2 1) (bruijn ##.new-bound.52.83 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      statics->vars[2]
    );
}
static void _V10_Dloop_D73_lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_lambda102, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V10_Dloop_D73_k477) (bruijn ##.new-free.79 1 0) (bruijn ##.new-free.51.82 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k477, self)})),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
static void _V10_Dloop_D73_k462(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.689 0 0) (filter (close _V10_Dloop_D73_k463) (close _V10_Dloop_D73_lambda99) (bruijn ##.free.76 1 3)) (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Dloop_D73_k469) (close _V10_Dloop_D73_lambda101) (close _V10_Dloop_D73_lambda102))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "filter")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k463, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_lambda99, self)})),
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k469, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_lambda101, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_lambda102, self)})));
    }
}
}
static void _V10_Dloop_D73_lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_lambda98, got ~D~N"
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
  // (null? (close _V10_Dloop_D73_k462) (bruijn ##.exprs.74 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k462, self)})),
      _var1);
}
static void global_k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.73 1 0) (bruijn ##.k.687 2 0) (bruijn ##.x.708 0 0) '() '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 4,
      statics->up->vars[0],
      _var0,
      VNULL,
      VNULL);
}
static void global_k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if w-unbound-variables (letrec 1 ((close _V10_Dloop_D73_lambda98)) (apply (close global_k478) append (bruijn ##.expanded.72 2 0))) ((bruijn ##.k.687 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "w-unbound-variables"))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_lambda98, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k478, self)})),
      VLookupGlobalVarFast2(runtime, "append"),
      statics->up->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.k.667 6 0) (bruijn ##.x.669 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VGetArg(statics, 6-1, 0),
      _var0);
}
static void global_k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close global_k491) (bruijn ##.x.670 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k491, self)})),
      _var0);
}
static void global_k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (take-right (close global_k490) (bruijn ##.funs.87 5 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "take-right")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k490, self)})),
      VGetArg(statics, 5-1, 0),
      VEncodeInt(1l));
}
static void global_k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (write-bytecode (close global_k489) (bruijn ##.x.671 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "write-bytecode")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k489, self)})),
      _var0);
}
static void global_k487(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (apply (close global_k488) to-bytecode (bruijn ##.x.672 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k488, self)})),
      VLookupGlobalVarFast2(runtime, "to-bytecode"),
      _var0);
}
static void global_k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close global_k487) debug? (bruijn ##.x.673 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k487, self)})),
      VLookupGlobalVarFast2(runtime, "debug?"),
      _var0);
}
static void global_k495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (apply (bruijn ##.k.667 4 0) printout2 (bruijn ##.x.674 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      statics->up->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "printout2"),
      _var0);
}
static void global_k494(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close global_k495) main (bruijn ##.x.675 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k495, self)})),
      VLookupGlobalVarFast2(runtime, "main"),
      _var0);
}
static void global_k493(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close global_k494) purec? (bruijn ##.x.676 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k494, self)})),
      VLookupGlobalVarFast2(runtime, "purec?"),
      _var0);
}
static void global_k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close global_k493) debug? (bruijn ##.x.677 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k493, self)})),
      VLookupGlobalVarFast2(runtime, "debug?"),
      _var0);
}
static void global_lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if bytecode? (cons (close global_k486) shared? (bruijn ##.funs.87 1 0)) (cons (close global_k492) shared? (bruijn ##.funs.87 1 0)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k486, self)})),
      VLookupGlobalVarFast2(runtime, "shared?"),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k492, self)})),
      VLookupGlobalVarFast2(runtime, "shared?"),
      statics->vars[0]);
}
}
static void global_k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (benchmark (bruijn ##.k.662 10 0) (##string ##.string.854) (close global_lambda103))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      VGetArg(statics, 10-1, 0),
      VEncodePointer(&_V10_Dstring_D854.sym, VPOINTER_OTHER),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda103, self)})));
}
static void global_k497(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (to-functions (bruijn ##.k.678 2 0) (bruijn ##.x.679 1 0) (bruijn ##.x.680 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "to-functions")), 3,
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void global_k496(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close global_k497) bytecode?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k497, self)})),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
}
static void global_lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (close global_k496) bruijn-ify (bruijn ##.opt.86 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k496, self)})),
      VLookupGlobalVarFast2(runtime, "bruijn-ify"),
      statics->up->vars[0]);
}
static void global_k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.666 0 0) (for-each (bruijn ##.k.662 9 0) pretty-print (bruijn ##.opt.86 1 0)) (benchmark (close global_k485) (##string ##.string.855) (close global_lambda104)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VGetArg(statics, 9-1, 0),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k485, self)})),
      VEncodePointer(&_V10_Dstring_D855.sym, VPOINTER_OTHER),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda104, self)})));
}
}
static void global_k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close global_k484) expand? 2)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k484, self)})),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(2l));
}
static void global_k498(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (optimize (bruijn ##.k.682 1 0) (bruijn ##.expr.88 1 1) (bruijn ##.x.683 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "optimize")), 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
static void global_lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda106, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (not (close global_k498) bytecode?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k498, self)})),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
}
static void global_lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (bruijn ##.k.681 0 0) (close global_lambda106) (bruijn ##.cps.85 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda106, self)})),
      statics->up->vars[0]);
}
static void global_k482(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.665 0 0) (for-each (bruijn ##.k.662 7 0) pretty-print (bruijn ##.cps.85 1 0)) (benchmark (close global_k483) (##string ##.string.856) (close global_lambda105)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VGetArg(statics, 7-1, 0),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k483, self)})),
      VEncodePointer(&_V10_Dstring_D856.sym, VPOINTER_OTHER),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda105, self)})));
}
}
static void global_k481(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close global_k482) expand? 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k482, self)})),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(1l));
}
static void global_lambda108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda108, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (to-cps (bruijn ##.k.685 0 0) (bruijn ##.expr.89 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "to-cps")), 2,
      _var0,
      _var1);
}
static void global_k499(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (bruijn ##.k.684 1 0) (close global_lambda108) (bruijn ##.x.686 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda108, self)})),
      _var0);
}
static void global_lambda107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (apply (close global_k499) append (bruijn ##.expanded.72 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k499, self)})),
      VLookupGlobalVarFast2(runtime, "append"),
      statics->up->up->vars[0]);
}
static void global_k480(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.664 0 0) (for-each (bruijn ##.k.662 5 0) pretty-print (bruijn ##.expanded.72 2 0)) (benchmark (close global_k481) (##string ##.string.857) (close global_lambda107)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VGetArg(statics, 5-1, 0),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k481, self)})),
      VEncodePointer(&_V10_Dstring_D857.sym, VPOINTER_OTHER),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda107, self)})));
}
}
static void global_k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close global_k480) expand? 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k480, self)})),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(0l));
}
static void global_k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k461) (close global_k479))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k461, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k479, self)})));
}
static void global_k501(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (map (bruijn ##.k.710 2 0) alpha-convert (bruijn ##.x.711 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      statics->up->vars[0],
      VLookupGlobalVarFast2(runtime, "alpha-convert"),
      _var0);
}
static void global_k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (expand-toplevel (close global_k501) (bruijn ##.e.90 1 1) (bruijn ##.x.712 0 0) (bruijn ##.architecture.59 24 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "expand-toplevel")), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k501, self)})),
      statics->vars[1],
      _var0,
      VGetArg(statics, 24-1, 5));
}
static void global_lambda110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (cons (close global_k500) (bruijn ##.path.69 5 0) paths)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k500, self)})),
      VGetArg(statics, 5-1, 0),
      VLookupGlobalVarFast2(runtime, "paths"));
}
static void global_lambda109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (bruijn ##.k.709 0 0) (close global_lambda110) (bruijn ##.file.71 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda110, self)})),
      statics->vars[0]);
}
static void global_k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (benchmark (close global_k460) (##string ##.string.858) (close global_lambda109))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k460, self)})),
      VEncodePointer(&_V10_Dstring_D858.sym, VPOINTER_OTHER),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda109, self)})));
}
static void global_k502(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (append (bruijn ##.k.713 1 0) (bruijn ##.x.714 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 2,
      statics->vars[0],
      _var0);
}
static void global_lambda111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.fd.70 1 0) (read-all (close global_k502) (bruijn ##.fd.70 1 0)) (compiler-error (bruijn ##.k.713 0 0) (##string ##.string.860) (bruijn ##.scm-file.66 4 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-all")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k502, self)})),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D860.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
}
static void global_k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (benchmark (close global_k459) (##string ##.string.859) (close global_lambda111))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k459, self)})),
      VEncodePointer(&_V10_Dstring_D859.sym, VPOINTER_OTHER),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda111, self)})));
}
static void global_lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-file (close global_k458) (bruijn ##.scm-file.66 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-file")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k458, self)})),
      statics->up->vars[1]);
}
static void global_k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (with-output-to-file (bruijn ##.k.661 1 0) (bruijn ##.cc-file.67 1 2) (close global_lambda97))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-output-to-file")), 3,
      statics->vars[0],
      statics->vars[2],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda97, self)})));
}
static void global_lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to global_lambda96, got ~D~N"
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
  // (realbasepath (close global_k457) (bruijn ##.scm-file.66 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "realbasepath")), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k457, self)})),
      _var1);
}
static void global_k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (close global_k380) (close global_lambda96) scm-files (bruijn ##.cc-files.54 16 0) (bruijn ##.cc-obj-files.55 16 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k380, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda96, self)})),
      VLookupGlobalVarFast2(runtime, "scm-files"),
      VGetArg(statics, 16-1, 0),
      VGetArg(statics, 16-1, 1));
}
static void global_k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_k379) (bruijn ##.cc-command.58 15 4) (bruijn ##.x.715 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k379, self)})),
      VEncodeInt(15l), VEncodeInt(4l),
      _var0
    );
}
static void global_k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (apply (close global_k378) string-append (bruijn ##.cc-command-flags.57 14 3) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k378, self)})),
      VLookupGlobalVarFast2(runtime, "string-append"),
      VGetArg(statics, 14-1, 3),
      VLookupGlobalVarFast2(runtime, "c-options"));
}
static void global_k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_k377) (bruijn ##.cc-command-flags.57 13 3) (bruijn ##.x.716 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k377, self)})),
      VEncodeInt(13l), VEncodeInt(3l),
      _var0
    );
}
static void global_k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close global_k376) (bruijn ##.base-cc-flags.56 12 2) (bruijn ##.x.717 2 0) (bruijn ##.x.718 1 0) (bruijn ##.x.719 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k376, self)})),
      VGetArg(statics, 12-1, 2),
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void global_k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k374) (close global_k375))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k374, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k375, self)})));
}
static void global_k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k372) (close global_k373))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k372, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k373, self)})));
}
static void global_k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (sprintf (close global_k371) (##string ##.string.850) optimization)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k371, self)})),
      VEncodePointer(&_V10_Dstring_D850.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "optimization"));
}
static void global_k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_k370) (bruijn ##.base-cc-flags.56 8 2) (bruijn ##.x.722 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k370, self)})),
      VEncodeInt(8l), VEncodeInt(2l),
      _var0
    );
}
static void global_k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k367) (close global_k369))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k367, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k369, self)})));
}
static void global_k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close global_k366) platform (##string ##.string.757))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k366, self)})),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D757.sym, VPOINTER_OTHER));
}
static void global_k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_k365) (bruijn ##.cc-obj-files.55 5 1) (bruijn ##.x.726 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k365, self)})),
      VEncodeInt(5l), VEncodeInt(1l),
      _var0
    );
}
static void global_k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k361) (close global_k364))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k361, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k364, self)})));
}
static void global_k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k359) (close global_k360))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k359, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k360, self)})));
}
static void global_k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_k358) (bruijn ##.cc-files.54 2 0) (bruijn ##.x.733 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k358, self)})),
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
}
static void global_k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k354) (close global_k357))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k354, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k357, self)})));
}
static void global_k351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 8 (#f #f #f #f #f (bruijn ##.x.572 2 0) (bruijn ##.x.573 1 0) #f) ((close global_k352) (close global_k353)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    self->vars[3] = VEncodeBool(false);
    self->vars[4] = VEncodeBool(false);
    self->vars[5] = statics->up->vars[0];
    self->vars[6] = statics->vars[0];
    self->vars[7] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k352, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k353, self)})));
    }
}
static void global_k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (current-output-port (close global_k351))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k351, self)})));
}
static void global_k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_k349) (close global_k350))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k349, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k350, self)})));
}
static void global_lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close global_k348) platform (##string ##.string.821))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k348, self)})),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D821.sym, VPOINTER_OTHER));
}
static void global_lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (with-exception-handler (bruijn ##.next.570 0 0) handle-exception (close global_lambda87))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-exception-handler")), 3,
      _var0,
      VLookupGlobalVarFast2(runtime, "handle-exception"),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda87, self)})));
}
static void toplevel0(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda1, .env = self }, }, 1,
      _k);
}
static void toplevel1(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda2, .env = self }, }, 1,
      _k);
}
static void toplevel2(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda3, .env = self }, }, 1,
      _k);
}
static void toplevel3(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda4, .env = self }, }, 1,
      _k);
}
static void toplevel4(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda5, .env = self }, }, 1,
      _k);
}
static void toplevel5(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda6, .env = self }, }, 1,
      _k);
}
static void toplevel6(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda7, .env = self }, }, 1,
      _k);
}
static void toplevel7(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda8, .env = self }, }, 1,
      _k);
}
static void toplevel8(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda9, .env = self }, }, 1,
      _k);
}
static void toplevel9(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda10, .env = self }, }, 1,
      _k);
}
static void toplevel10(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda11, .env = self }, }, 1,
      _k);
}
static void toplevel11(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda12, .env = self }, }, 1,
      _k);
}
static void toplevel12(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda13, .env = self }, }, 1,
      _k);
}
static void toplevel13(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda14, .env = self }, }, 1,
      _k);
}
static void toplevel14(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda15, .env = self }, }, 1,
      _k);
}
static void toplevel15(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda16, .env = self }, }, 1,
      _k);
}
static void toplevel16(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda17, .env = self }, }, 1,
      _k);
}
static void toplevel17(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda18, .env = self }, }, 1,
      _k);
}
static void toplevel18(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda19, .env = self }, }, 1,
      _k);
}
static void toplevel19(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda20, .env = self }, }, 1,
      _k);
}
static void toplevel20(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda21, .env = self }, }, 1,
      _k);
}
static void toplevel21(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda22, .env = self }, }, 1,
      _k);
}
static void toplevel22(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda23, .env = self }, }, 1,
      _k);
}
static void toplevel23(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda24, .env = self }, }, 1,
      _k);
}
static void toplevel24(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda25, .env = self }, }, 1,
      _k);
}
static void toplevel25(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda26, .env = self }, }, 1,
      _k);
}
static void toplevel26(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda27, .env = self }, }, 1,
      _k);
}
static void toplevel27(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda28, .env = self }, }, 1,
      _k);
}
static void toplevel28(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda29, .env = self }, }, 1,
      _k);
}
static void toplevel29(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda30, .env = self }, }, 1,
      _k);
}
static void toplevel30(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda31, .env = self }, }, 1,
      _k);
}
static void toplevel31(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda32, .env = self }, }, 1,
      _k);
}
static void toplevel32(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda33, .env = self }, }, 1,
      _k);
}
static void toplevel33(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda34, .env = self }, }, 1,
      _k);
}
static void toplevel34(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda35, .env = self }, }, 1,
      _k);
}
static void toplevel35(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda36, .env = self }, }, 1,
      _k);
}
static void toplevel36(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda37, .env = self }, }, 1,
      _k);
}
static void toplevel37(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda38, .env = self }, }, 1,
      _k);
}
static void toplevel38(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda39, .env = self }, }, 1,
      _k);
}
static void toplevel39(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda40, .env = self }, }, 1,
      _k);
}
static void toplevel40(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda41, .env = self }, }, 1,
      _k);
}
static void toplevel41(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda42, .env = self }, }, 1,
      _k);
}
static void toplevel42(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda45, .env = self }, }, 1,
      _k);
}
static void toplevel43(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda48, .env = self }, }, 1,
      _k);
}
static void toplevel44(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda51, .env = self }, }, 1,
      _k);
}
static void toplevel45(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda54, .env = self }, }, 1,
      _k);
}
static void toplevel46(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda57, .env = self }, }, 1,
      _k);
}
static void toplevel47(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda60, .env = self }, }, 1,
      _k);
}
static void toplevel48(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda62, .env = self }, }, 1,
      _k);
}
static void toplevel49(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda64, .env = self }, }, 1,
      _k);
}
static void toplevel50(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda67, .env = self }, }, 1,
      _k);
}
static void toplevel51(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda69, .env = self }, }, 1,
      _k);
}
static void toplevel52(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda73, .env = self }, }, 1,
      _k);
}
static void toplevel53(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda77, .env = self }, }, 1,
      _k);
}
static void toplevel54(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda79, .env = self }, }, 1,
      _k);
}
static void toplevel55(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda81, .env = self }, }, 1,
      _k);
}
static void toplevel56(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda83, .env = self }, }, 1,
      _k);
}
static void toplevel57(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda86, .env = self }, }, 1,
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
    exit(ret);
  }
  if(VanityStatus == VFINISHED)
    VanityCurToplevel++;
}

int main(int argc, char ** argv) {
  VInitRuntime2(&VanityRuntime, argc, argv);
  while(1) VanityMainLoop();
}
