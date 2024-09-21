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
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D717 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "file does not exist" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D716 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "~A -I~A ~A ~A -c -o ~A ~A" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D715 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, " -O~A" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D714 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D713 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~A -o ~A" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D712 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, " -Wl,--no-as-needed" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D711 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, " -fPIC -shared" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D710 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, " -L~A/x86_64-w64-mingw32/lib/ -lvscheme" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D709 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, " -lvscheme" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D708 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, " -I~A" };
static struct { VBlob sym; char bytes[87]; } _V10_Dstring_D707 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 87 }, "program has toplevel expressions in multiple files, and so it generated multiple mains" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D706 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D705 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, " -fPIC" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D704 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " -g" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D703 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "/tmp/" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D702 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "sysv_amd64" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D701 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "windows_amd64" };
static struct { VBlob sym; char bytes[108]; } _V10_Dstring_D700 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 108 }, " -Wl,--export-all-symbols -Wl,--stack,8388608 -Wmissing-braces -masm=intel -I~A/x86_64-w64-mingw32/include/" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D699 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, " -rdynamic -Wmissing-braces -masm=intel" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D698 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "vghtco:I:O:E:W:" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D697 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".vasm" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D696 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".scmh" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D695 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".escm" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D694 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".c" };
static struct { VBlob sym; char bytes[56]; } _V10_Dstring_D693 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 56 }, "FIXME: -h and -c and -t and -E can only handle one file" };
static struct { VBlob sym; char bytes[89]; } _V10_Dstring_D692 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 89 }, "Cannot specify '-h' or '-c' or '-t' or '-E' or '--makefile' with '-o' and multiple files" };
static struct { VBlob sym; char bytes[75]; } _V10_Dstring_D691 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 75 }, "Cannot specify '-h' '-c' or '-t' or '-E' or '--makefile' with object files" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D690 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "No input file provided" };
static struct { VBlob sym; char bytes[68]; } _V10_Dstring_D689 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "Only one of '-h' or '-c' or '-t' or '-E' or '--makefile' can be set" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D688 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "windows" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D687 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "Unknown --platform, only 'linux' and 'windows' are valid" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D686 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "/usr/bin/x86_64-w64-mingw32-gcc" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D685 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "gcc" };
VWEAK VWORD _V0help;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0help = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "help" };
VWEAK VWORD _V0version;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "version" };
VWEAK VWORD _V0shared;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0shared = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "shared" };
VWEAK VWORD _V0keep__temps;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0keep__temps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "keep-temps" };
VWEAK VWORD _V0makefile;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0makefile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "makefile" };
VWEAK VWORD _V0maketarget;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0maketarget = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "maketarget" };
VWEAK VWORD _V0benchmark;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0benchmark = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "benchmark" };
VWEAK VWORD _V0bytecode;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0bytecode = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "bytecode" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D684 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "Unknown CLI option" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D683 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "Wrapper flag -W missing comma" };
static struct { VBlob sym; char bytes[67]; } _V10_Dstring_D682 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 67 }, "Wrapper flag -W can only pass args to the C compiler, eg -Wc,-Ilib" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D681 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "Expand flag -E expects integer between 0 and 2 inclusive" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D680 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "Optimization flag -O expects integer between 0 and 3 inclusive" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D679 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ".scm" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D678 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "File has unrecognized extension: ~A" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D677 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, ".ss" };
VWEAK VWORD _V10vcore_Dpush__value;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dpush__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.push-value" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D676 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "vsc: " };
VWEAK VWORD _V10vcore_Dpop__value;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dpop__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.pop-value" };
VWEAK VWORD _V0handle__exception;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0handle__exception = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "handle-exception" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D675 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "Vanity Scheme Compiler ~A.~A~N" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D674 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "Copyright (C) 2023 Richard Van Natta" };
VWEAK VWORD _V0display__version;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0display__version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "display-version" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D673 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "Usage: vsc [options] file..." };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D672 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "Options:" };
static struct { VBlob sym; char bytes[94]; } _V10_Dstring_D671 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 94 }, "  -O<num>         Compile with optimization levels 0 (slowest codegen) to 3 (fastest codegen)" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D670 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  -g              Compile with debug symbols" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D669 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "  -h              Generate header file instead of compiling" };
static struct { VBlob sym; char bytes[118]; } _V10_Dstring_D668 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 118 }, "  -E<num>         Expand only, do not compile or link. 0: macros only, 1: continuation passing style, 2: optimization" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D667 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "  -t              Transpile only, do not compile or link" };
static struct { VBlob sym; char bytes[68]; } _V10_Dstring_D666 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "  -c              Transpile, compile, and assemble, but do not link" };
static struct { VBlob sym; char bytes[47]; } _V10_Dstring_D665 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 47 }, "  -o<file>        Place the output into <file>" };
static struct { VBlob sym; char bytes[87]; } _V10_Dstring_D664 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 87 }, "  -I<dir>         Add the directory to the list to be searched for scheme header files" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D663 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "  -Wc,<option>    Pass comma seperated to the C compiler" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D662 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  -v              Show intermediate commands" };
static struct { VBlob sym; char bytes[86]; } _V10_Dstring_D661 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 86 }, "  --makefile      Generate makefile dependencies, similar to gcc invoked with -MM -MG" };
static struct { VBlob sym; char bytes[110]; } _V10_Dstring_D660 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 110 }, "  --maketarget    Specify the target of the make dependency, additional --maketarget's add additional targets" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D659 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D658 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "  --shared        Compile as shared library" };
static struct { VBlob sym; char bytes[76]; } _V10_Dstring_D657 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 76 }, "  --keep-temps    Keep temporary compilation files, such as C intermediates" };
static struct { VBlob sym; char bytes[81]; } _V10_Dstring_D656 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 81 }, "  --platform=<os> Which OS to make executables for. Either 'linux' or 'windows'." };
static struct { VBlob sym; char bytes[72]; } _V10_Dstring_D655 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 72 }, "  --cc=<compiler> Use the C compiler of your choice. The default is gcc" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D654 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "  --help          You know about this" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D653 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "  --version       Show version and build info" };
VWEAK VWORD _V0display__help;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0display__help = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "display-help" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D652 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "~A " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D651 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ":" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D650 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " ~A" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D649 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "invalid import" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D648 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".o" };
VWEAK VWORD _V0gen__makefile;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0gen__makefile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "gen-makefile" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D647 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "File did not produce a valid header" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D646 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "Only one statement permitted in header generation" };
VWEAK VWORD _V0gen__header;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0gen__header = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "gen-header" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D645 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "/bin/rm ~A" };
VWEAK VWORD _V0delete__file;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0delete__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "delete-file" };
VWEAK VWORD _V0count__true;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0count__true = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "count-true" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D644 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "realpath `dirname ~A`" };
VWEAK VWORD _V0realbasepath;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0realbasepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "realbasepath" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D643 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "realpath ~A" };
VWEAK VWORD _V0realpath;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0realpath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "realpath" };
VWEAK VWORD _V0decomma;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0decomma = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "decomma" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D642 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "." };
VWEAK VWORD _V0basepath;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0basepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "basepath" };
VWEAK VWORD _V0basename;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0basename = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "basename" };
VWEAK VWORD _V0change__extension;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0change__extension = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "change-extension" };
VWEAK VWORD _V0extension;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0extension = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "extension" };
VWEAK VWORD _V0benchmark_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0benchmark_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "benchmark\?" };
VWEAK VWORD _V0maketargets;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0maketargets = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "maketargets" };
VWEAK VWORD _V0makefile_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0makefile_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "makefile\?" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D641 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "~Ainclude" };
VWEAK VWORD _V0paths;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0paths = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "paths" };
VWEAK VWORD _V0c__options;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0c__options = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "c-options" };
VWEAK VWORD _V0cc;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0cc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "cc" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D640 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "linux" };
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
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D639 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "_V0vanity_V0compiler_V0alpha__convert_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D638 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D637 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "_V0vanity_V0compiler_V0library_V20" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D636 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "_V0vanity_V0compiler_V0bytecode_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D635 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0transpile_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D634 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0lower_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D633 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0cps_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D632 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0expand_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D631 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0getopt_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D630 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D629 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D628 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D627 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D626 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D625 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static __attribute__((constructor)) void VDllMain1() {
  _V0help = VEncodePointer(VLookupConstant("_V0help", &_VW_V0help), VPOINTER_OTHER);
  _V0version = VEncodePointer(VLookupConstant("_V0version", &_VW_V0version), VPOINTER_OTHER);
  _V0shared = VEncodePointer(VLookupConstant("_V0shared", &_VW_V0shared), VPOINTER_OTHER);
  _V0keep__temps = VEncodePointer(VLookupConstant("_V0keep__temps", &_VW_V0keep__temps), VPOINTER_OTHER);
  _V0makefile = VEncodePointer(VLookupConstant("_V0makefile", &_VW_V0makefile), VPOINTER_OTHER);
  _V0maketarget = VEncodePointer(VLookupConstant("_V0maketarget", &_VW_V0maketarget), VPOINTER_OTHER);
  _V0benchmark = VEncodePointer(VLookupConstant("_V0benchmark", &_VW_V0benchmark), VPOINTER_OTHER);
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
  _V0benchmark_Q = VEncodePointer(VLookupConstant("_V0benchmark_Q", &_VW_V0benchmark_Q), VPOINTER_OTHER);
  _V0maketargets = VEncodePointer(VLookupConstant("_V0maketargets", &_VW_V0maketargets), VPOINTER_OTHER);
  _V0makefile_Q = VEncodePointer(VLookupConstant("_V0makefile_Q", &_VW_V0makefile_Q), VPOINTER_OTHER);
  _V0paths = VEncodePointer(VLookupConstant("_V0paths", &_VW_V0paths), VPOINTER_OTHER);
  _V0c__options = VEncodePointer(VLookupConstant("_V0c__options", &_VW_V0c__options), VPOINTER_OTHER);
  _V0cc = VEncodePointer(VLookupConstant("_V0cc", &_VW_V0cc), VPOINTER_OTHER);
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
static void global_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k1, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (bruijn ##.next.85 1 0) (bruijn ##.x.86 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k1) (##string ##.string.625))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k1, env)}),
      VEncodePointer(&_V10_Dstring_D625.sym, VPOINTER_OTHER));
 }
}
static void global_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k2, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (bruijn ##.next.87 1 0) (bruijn ##.x.88 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k2) (##string ##.string.626))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k2, env)}),
      VEncodePointer(&_V10_Dstring_D626.sym, VPOINTER_OTHER));
 }
}
static void global_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k3, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (bruijn ##.next.89 1 0) (bruijn ##.x.90 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k3) (##string ##.string.627))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k3, env)}),
      VEncodePointer(&_V10_Dstring_D627.sym, VPOINTER_OTHER));
 }
}
static void global_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k4, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (bruijn ##.next.91 1 0) (bruijn ##.x.92 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k4) (##string ##.string.628))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k4, env)}),
      VEncodePointer(&_V10_Dstring_D628.sym, VPOINTER_OTHER));
 }
}
static void global_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k5, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (bruijn ##.next.93 1 0) (bruijn ##.x.94 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k5) (##string ##.string.629))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k5, env)}),
      VEncodePointer(&_V10_Dstring_D629.sym, VPOINTER_OTHER));
 }
}
static void global_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k6, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (bruijn ##.next.95 1 0) (bruijn ##.x.96 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k6) (##string ##.string.630))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k6, env)}),
      VEncodePointer(&_V10_Dstring_D630.sym, VPOINTER_OTHER));
 }
}
static void global_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k7, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (bruijn ##.next.97 1 0) (bruijn ##.x.98 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k7) (##string ##.string.631))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k7, env)}),
      VEncodePointer(&_V10_Dstring_D631.sym, VPOINTER_OTHER));
 }
}
static void global_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k8, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (bruijn ##.next.99 1 0) (bruijn ##.x.100 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k8) (##string ##.string.632))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k8, env)}),
      VEncodePointer(&_V10_Dstring_D632.sym, VPOINTER_OTHER));
 }
}
static void global_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k9, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (bruijn ##.next.101 1 0) (bruijn ##.x.102 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k9) (##string ##.string.633))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k9, env)}),
      VEncodePointer(&_V10_Dstring_D633.sym, VPOINTER_OTHER));
 }
}
static void global_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k10, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (bruijn ##.next.103 1 0) (bruijn ##.x.104 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k10) (##string ##.string.634))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k10, env)}),
      VEncodePointer(&_V10_Dstring_D634.sym, VPOINTER_OTHER));
 }
}
static void global_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k11, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (bruijn ##.next.105 1 0) (bruijn ##.x.106 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k11) (##string ##.string.635))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k11, env)}),
      VEncodePointer(&_V10_Dstring_D635.sym, VPOINTER_OTHER));
 }
}
static void global_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k12, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (bruijn ##.next.107 1 0) (bruijn ##.x.108 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k12) (##string ##.string.636))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k12, env)}),
      VEncodePointer(&_V10_Dstring_D636.sym, VPOINTER_OTHER));
 }
}
static void global_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k13, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (bruijn ##.next.109 1 0) (bruijn ##.x.110 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k13) (##string ##.string.637))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k13, env)}),
      VEncodePointer(&_V10_Dstring_D637.sym, VPOINTER_OTHER));
 }
}
static void global_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k14, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (bruijn ##.next.111 1 0) (bruijn ##.x.112 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k14) (##string ##.string.638))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k14, env)}),
      VEncodePointer(&_V10_Dstring_D638.sym, VPOINTER_OTHER));
 }
}
static void global_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k15, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (bruijn ##.next.113 1 0) (bruijn ##.x.114 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k15) (##string ##.string.639))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k15, env)}),
      VEncodePointer(&_V10_Dstring_D639.sym, VPOINTER_OTHER));
 }
}
static void global_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.115 0 0) scm-files '())
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0scm__files,
      VNULL
    );
 }
}
static void global_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.116 0 0) obj-files '())
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0obj__files,
      VNULL
    );
 }
}
static void global_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.117 0 0) shared? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0shared_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.118 0 0) expand? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0expand_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.119 0 0) keep? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0keep_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.120 0 0) header? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0header_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.121 0 0) bytecode? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0bytecode_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.122 0 0) transpile? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0transpile_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.123 0 0) object? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0object_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.124 0 0) debug? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0debug_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.125 0 0) verbose? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0verbose_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.126 0 0) optimization 1)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0optimization,
      VEncodeInt(1l)
    );
 }
}
static void global_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.127 0 0) api 1)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0api,
      VEncodeInt(1l)
    );
 }
}
static void global_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.128 0 0) out-file #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0out__file,
      VEncodeBool(false)
    );
 }
}
static void global_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.129 0 0) platform (##string ##.string.640))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0platform,
      VEncodePointer(&_V10_Dstring_D640.sym, VPOINTER_OTHER)
    );
 }
}
static void global_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.130 0 0) cc #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0cc,
      VEncodeBool(false)
    );
 }
}
static void global_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.131 0 0) c-options '())
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0c__options,
      VNULL
    );
 }
}
static void global_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.132 2 0) paths (bruijn ##.x.133 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      upenv->up->vars[0],
      _V0paths,
      _var0
    );
 }
}
static void global_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (list (close global_k17) (bruijn ##.x.134 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "list"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k17, env)}),
      _var0);
 }
}
static void global_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (sprintf (close global_k16) (##string ##.string.641) install-root)
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k16, env)}),
      VEncodePointer(&_V10_Dstring_D641.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
 }
}
static void global_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.135 0 0) makefile? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0makefile_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.136 0 0) maketargets '())
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0maketargets,
      VNULL
    );
 }
}
static void global_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.137 0 0) benchmark? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0benchmark_Q,
      VEncodeBool(false)
    );
 }
}
static void _V10_Dloop_D1_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D1_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D1_k21, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.1 5 0) (bruijn ##.k.140 4 0) (bruijn ##.x.143 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D1_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D1_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D1_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.142 0 0) (substring (bruijn ##.k.140 3 0) (bruijn ##.file.0 5 1) (bruijn ##.i.2 3 1)) (- (close _V10_Dloop_D1_k21) (bruijn ##.i.2 3 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "substring"), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->up->up->vars[1]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D1_k21, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V10_Dloop_D1_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D1_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D1_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D1_k20) #\. (bruijn ##.x.144 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D1_k20, env)}),
      VEncodeChar('.'),
      _var0);
 }
}
static void _V10_Dloop_D1_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D1_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D1_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.141 0 0) ((bruijn ##.k.140 1 0) #f) (string-ref (close _V10_Dloop_D1_k19) (bruijn ##.file.0 3 1) (bruijn ##.i.2 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D1_k19, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D1_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D1_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D1_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V10_Dloop_D1_k18) (bruijn ##.i.2 0 1) 0)
    V_CALL(VLookupGlobalVarFast2(runtime, "<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D1_k18, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0extension_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0extension_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_k23, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.1 2 0) (bruijn ##.k.139 3 0) (bruijn ##.x.145 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0extension_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0extension_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0extension_k23) (bruijn ##.x.146 0 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k23, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0extension_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0extension_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_lambda38, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D1_lambda39)) (string-length (close _V0extension_k22) (bruijn ##.file.0 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D1_lambda39, env)});
    V_CALL(VLookupGlobalVarFast2(runtime, "string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k22, env)}),
      upenv->vars[1]);
    }
 }
}
static void global_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.138 0 0) extension (close _V0extension_lambda38))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0extension,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_lambda38, env)})
    );
 }
}
static void _V10_Dloop_D5_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D5_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D5_k27, runtime, upenv, 1, argc, _var0) {
  // (string-append (bruijn ##.k.149 4 0) (bruijn ##.x.152 0 0) (bruijn ##.new.4 6 2))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V10_Dloop_D5_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D5_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D5_k28, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.5 5 0) (bruijn ##.k.149 4 0) (bruijn ##.x.153 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D5_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D5_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D5_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.151 0 0) (substring (close _V10_Dloop_D5_k27) (bruijn ##.file.3 5 1) 0 (bruijn ##.i.6 3 1)) (- (close _V10_Dloop_D5_k28) (bruijn ##.i.6 3 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "substring"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D5_k27, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(0l),
      upenv->up->up->vars[1]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D5_k28, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V10_Dloop_D5_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D5_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D5_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D5_k26) #\. (bruijn ##.x.154 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D5_k26, env)}),
      VEncodeChar('.'),
      _var0);
 }
}
static void _V10_Dloop_D5_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D5_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D5_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.150 0 0) (string-append (bruijn ##.k.149 1 0) (bruijn ##.file.3 3 1) (bruijn ##.new.4 3 2)) (string-ref (close _V10_Dloop_D5_k25) (bruijn ##.file.3 3 1) (bruijn ##.i.6 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      upenv->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D5_k25, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D5_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D5_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D5_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V10_Dloop_D5_k24) (bruijn ##.i.6 0 1) 0)
    V_CALL(VLookupGlobalVarFast2(runtime, "<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D5_k24, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0change__extension_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0change__extension_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_k30, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.5 2 0) (bruijn ##.k.148 3 0) (bruijn ##.x.155 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0change__extension_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0change__extension_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0change__extension_k30) (bruijn ##.x.156 0 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k30, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0change__extension_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0change__extension_lambda41, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_lambda41, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D5_lambda42)) (string-length (close _V0change__extension_k29) (bruijn ##.file.3 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D5_lambda42, env)});
    V_CALL(VLookupGlobalVarFast2(runtime, "string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k29, env)}),
      upenv->vars[1]);
    }
 }
}
static void global_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.147 0 0) change-extension (close _V0change__extension_lambda41))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0change__extension,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_lambda41, env)})
    );
 }
}
static void _V10_Dloop_D8_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D8_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D8_k34, runtime, upenv, 1, argc, _var0) {
  // (substring (bruijn ##.k.159 4 0) (bruijn ##.file.7 6 1) (bruijn ##.x.162 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "substring"), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      _var0);
 }
}
static void _V10_Dloop_D8_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D8_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D8_k35, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.8 5 0) (bruijn ##.k.159 4 0) (bruijn ##.x.163 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D8_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D8_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D8_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.161 0 0) (+ (close _V10_Dloop_D8_k34) (bruijn ##.i.9 3 1) 1) (- (close _V10_Dloop_D8_k35) (bruijn ##.i.9 3 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "+"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D8_k34, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D8_k35, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V10_Dloop_D8_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D8_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D8_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D8_k33) #\/ (bruijn ##.x.164 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D8_k33, env)}),
      VEncodeChar('/'),
      _var0);
 }
}
static void _V10_Dloop_D8_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D8_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D8_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.160 0 0) ((bruijn ##.k.159 1 0) (bruijn ##.file.7 3 1)) (string-ref (close _V10_Dloop_D8_k32) (bruijn ##.file.7 3 1) (bruijn ##.i.9 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[1]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D8_k32, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D8_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D8_lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D8_lambda45, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V10_Dloop_D8_k31) (bruijn ##.i.9 0 1) 0)
    V_CALL(VLookupGlobalVarFast2(runtime, "<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D8_k31, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0basename_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basename_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_k37, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.8 2 0) (bruijn ##.k.158 3 0) (bruijn ##.x.165 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0basename_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basename_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0basename_k37) (bruijn ##.x.166 0 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k37, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0basename_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0basename_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_lambda44, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D8_lambda45)) (string-length (close _V0basename_k36) (bruijn ##.file.7 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D8_lambda45, env)});
    V_CALL(VLookupGlobalVarFast2(runtime, "string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k36, env)}),
      upenv->vars[1]);
    }
 }
}
static void global_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.157 0 0) basename (close _V0basename_lambda44))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0basename,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_lambda44, env)})
    );
 }
}
static void _V10_Dloop_D11_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D11_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D11_k41, runtime, upenv, 1, argc, _var0) {
  // (substring (bruijn ##.k.169 4 0) (bruijn ##.file.10 6 1) 0 (bruijn ##.x.172 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "substring"), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      VEncodeInt(0l),
      _var0);
 }
}
static void _V10_Dloop_D11_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D11_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D11_k42, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.11 5 0) (bruijn ##.k.169 4 0) (bruijn ##.x.173 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D11_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D11_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D11_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.171 0 0) (+ (close _V10_Dloop_D11_k41) (bruijn ##.i.12 3 1) 1) (- (close _V10_Dloop_D11_k42) (bruijn ##.i.12 3 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "+"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D11_k41, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D11_k42, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V10_Dloop_D11_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D11_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D11_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D11_k40) #\/ (bruijn ##.x.174 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D11_k40, env)}),
      VEncodeChar('/'),
      _var0);
 }
}
static void _V10_Dloop_D11_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D11_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D11_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.170 0 0) ((bruijn ##.k.169 1 0) (##string ##.string.642)) (string-ref (close _V10_Dloop_D11_k39) (bruijn ##.file.10 3 1) (bruijn ##.i.12 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodePointer(&_V10_Dstring_D642.sym, VPOINTER_OTHER));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D11_k39, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D11_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D11_lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D11_lambda48, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V10_Dloop_D11_k38) (bruijn ##.i.12 0 1) 0)
    V_CALL(VLookupGlobalVarFast2(runtime, "<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D11_k38, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0basepath_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basepath_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_k44, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.11 2 0) (bruijn ##.k.168 3 0) (bruijn ##.x.175 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0basepath_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basepath_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0basepath_k44) (bruijn ##.x.176 0 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k44, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0basepath_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0basepath_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D11_lambda48)) (string-length (close _V0basepath_k43) (bruijn ##.file.10 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D11_lambda48, env)});
    V_CALL(VLookupGlobalVarFast2(runtime, "string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k43, env)}),
      upenv->vars[1]);
    }
 }
}
static void global_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.167 0 0) basepath (close _V0basepath_lambda47))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0basepath,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_lambda47, env)})
    );
 }
}
static void _V10_Dloop_D14_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D14_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D14_k49, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.14 6 0) (bruijn ##.k.179 5 0) (bruijn ##.x.183 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D14_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D14_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D14_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V10_Dloop_D14_k49) (bruijn ##.i.15 4 1) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D14_k49, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D14_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D14_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D14_k50, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.14 5 0) (bruijn ##.k.179 4 0) (bruijn ##.x.184 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D14_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D14_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D14_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.181 0 0) (string-set! (close _V10_Dloop_D14_k48) (bruijn ##.str.13 5 1) (bruijn ##.i.15 3 1) #\space) (- (close _V10_Dloop_D14_k50) (bruijn ##.i.15 3 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "string-set!"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D14_k48, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->up->up->vars[1],
      VEncodeChar(' '));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D14_k50, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V10_Dloop_D14_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D14_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D14_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D14_k47) #\, (bruijn ##.x.185 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D14_k47, env)}),
      VEncodeChar(','),
      _var0);
 }
}
static void _V10_Dloop_D14_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D14_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D14_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.180 0 0) ((bruijn ##.k.179 1 0) (bruijn ##.str.13 3 1)) (string-ref (close _V10_Dloop_D14_k46) (bruijn ##.str.13 3 1) (bruijn ##.i.15 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[1]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D14_k46, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D14_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D14_lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D14_lambda51, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (< (close _V10_Dloop_D14_k45) (bruijn ##.i.15 0 1) 0)
    V_CALL(VLookupGlobalVarFast2(runtime, "<"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D14_k45, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0decomma_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0decomma_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_k52, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.14 2 0) (bruijn ##.k.178 3 0) (bruijn ##.x.186 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0decomma_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0decomma_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0decomma_k52) (bruijn ##.x.187 0 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k52, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0decomma_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0decomma_lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_lambda50, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D14_lambda51)) (string-length (close _V0decomma_k51) (bruijn ##.str.13 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D14_lambda51, env)});
    V_CALL(VLookupGlobalVarFast2(runtime, "string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k51, env)}),
      upenv->vars[1]);
    }
 }
}
static void global_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.177 0 0) decomma (close _V0decomma_lambda50))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0decomma,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_lambda50, env)})
    );
 }
}
static void _V0realpath_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_k56, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.189 4 0) (bruijn ##.ret.18 1 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]);
 }
}
static void _V0realpath_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (close-port (close _V0realpath_k56) (bruijn ##.proc.17 1 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "close-port"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k56, env)}),
      upenv->vars[0]);
 }
}
static void _V0realpath_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (read-line (close _V0realpath_k55) (bruijn ##.proc.17 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "read-line"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k55, env)}),
      _var0);
 }
}
static void _V0realpath_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-process (close _V0realpath_k54) (bruijn ##.x.191 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "open-input-process"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k54, env)}),
      _var0);
 }
}
static void _V0realpath_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_lambda53, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (sprintf (close _V0realpath_k53) (##string ##.string.643) (bruijn ##.file.16 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k53, env)}),
      VEncodePointer(&_V10_Dstring_D643.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void global_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.188 0 0) realpath (close _V0realpath_lambda53))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0realpath,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_lambda53, env)})
    );
 }
}
static void _V0realbasepath_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_k60, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.193 4 0) (bruijn ##.ret.21 1 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]);
 }
}
static void _V0realbasepath_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (close-port (close _V0realbasepath_k60) (bruijn ##.proc.20 1 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "close-port"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k60, env)}),
      upenv->vars[0]);
 }
}
static void _V0realbasepath_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (read-line (close _V0realbasepath_k59) (bruijn ##.proc.20 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "read-line"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k59, env)}),
      _var0);
 }
}
static void _V0realbasepath_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-process (close _V0realbasepath_k58) (bruijn ##.x.195 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "open-input-process"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k58, env)}),
      _var0);
 }
}
static void _V0realbasepath_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_lambda55, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (sprintf (close _V0realbasepath_k57) (##string ##.string.644) (bruijn ##.file.19 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k57, env)}),
      VEncodePointer(&_V10_Dstring_D644.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void global_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.192 0 0) realbasepath (close _V0realbasepath_lambda55))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0realbasepath,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_lambda55, env)})
    );
 }
}
static void _V10_Dloop_D23_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D23_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D23_k64, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.203 1 0) ((bruijn ##.k.204 0 0) 1) ((bruijn ##.k.204 0 0) 0))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodeInt(1l));
} else {
    V_CALL(_var0, runtime,
      VEncodeInt(0l));
}
 }
}
static void _V10_Dloop_D23_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D23_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D23_k66, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.23 6 0) (bruijn ##.k.198 5 0) (bruijn ##.x.200 3 0) (bruijn ##.x.201 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D23_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D23_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D23_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (+ (close _V10_Dloop_D23_k66) (bruijn ##.ct.25 4 2) (bruijn ##.x.202 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "+"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D23_k66, env)}),
      upenv->up->up->up->vars[2],
      _var0);
 }
}
static void _V10_Dloop_D23_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D23_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D23_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D23_k64) (close _V10_Dloop_D23_k65))
    V_CALL_FUNC(_V10_Dloop_D23_k64, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D23_k65, env)}));
 }
}
static void _V10_Dloop_D23_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D23_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D23_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V10_Dloop_D23_k63) (bruijn ##.args.24 2 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D23_k63, env)}),
      upenv->up->vars[1]);
 }
}
static void _V10_Dloop_D23_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D23_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D23_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.199 0 0) ((bruijn ##.k.198 1 0) (bruijn ##.ct.25 1 2)) (cdr (close _V10_Dloop_D23_k62) (bruijn ##.args.24 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D23_k62, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D23_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D23_lambda58, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D23_lambda58, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (null? (close _V10_Dloop_D23_k61) (bruijn ##.args.24 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D23_k61, env)}),
      _var1);
 }
}
static void _V0count__true_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V0count__true_lambda57, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0count__true_lambda57, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D23_lambda58)) ((bruijn ##.loop.23 0 0) (bruijn ##.k.197 1 0) (bruijn ##.args.22 1 1) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D23_lambda58, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeInt(0l));
    }
 }
}
static void global_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.196 0 0) count-true (close _V0count__true_lambda57))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0count__true,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0count__true_lambda57, env)})
    );
 }
}
static void _V0delete__file_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0delete__file_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0delete__file_k67, runtime, upenv, 1, argc, _var0) {
  // (system (bruijn ##.k.206 1 0) (bruijn ##.x.207 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "system"), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0delete__file_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0delete__file_lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0delete__file_lambda60, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (sprintf (close _V0delete__file_k67) (##string ##.string.645) (bruijn ##.f.26 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete__file_k67, env)}),
      VEncodePointer(&_V10_Dstring_D645.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void global_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.205 0 0) delete-file (close _V0delete__file_lambda60))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0delete__file,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete__file_lambda60, env)})
    );
 }
}
static void _V0gen__header_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k75, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.223 1 0) (compiler-error (bruijn ##.k.224 0 0) (##string ##.string.646)) ((bruijn ##.k.224 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D646.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0gen__header_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k78, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.221 1 0) ((bruijn ##.k.222 0 0) (bruijn ##.p.221 1 0)) (car (bruijn ##.k.222 0 0) (bruijn ##.headers.28 5 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      _var0,
      VGetArg(upenv, 5-1, 0));
}
 }
}
static void _V0gen__header_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k81, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.218 1 0) (compiler-error (bruijn ##.k.219 0 0) (##string ##.string.647)) ((bruijn ##.k.219 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D647.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0gen__header_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k86, runtime, upenv, 1, argc, _var0) {
  // (write (bruijn ##.k.215 1 0) (bruijn ##.x.216 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "write"), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0gen__header_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.214 1 0) (car (close _V0gen__header_k86) (bruijn ##.headers.28 11 0)) ((bruijn ##.k.215 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k86, env)}),
      VGetArg(upenv, 11-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0gen__header_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k87, runtime, upenv, 1, argc, _var0) {
  // (newline (bruijn ##.k.212 3 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "newline"), runtime,
      upenv->up->up->vars[0]);
 }
}
static void _V0gen__header_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__header_k85) (close _V0gen__header_k87))
    V_CALL_FUNC(_V0gen__header_k85, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k87, env)}));
 }
}
static void _V0gen__header_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V0gen__header_k84) (bruijn ##.x.217 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k84, env)}),
      _var0);
 }
}
static void _V0gen__header_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_lambda63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_lambda63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close _V0gen__header_k83) (bruijn ##.headers.28 8 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k83, env)}),
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0gen__header_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (with-output-to-file (bruijn ##.k.209 12 0) out-file (close _V0gen__header_lambda63))
    V_CALL(VLookupGlobalVarFast2(runtime, "with-output-to-file"), runtime,
      VGetArg(upenv, 12-1, 0),
      VLookupGlobalVarFast2(runtime, "out-file"),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_lambda63, env)}));
 }
}
static void _V0gen__header_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__header_k81) (close _V0gen__header_k82))
    V_CALL_FUNC(_V0gen__header_k81, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k82, env)}));
 }
}
static void _V0gen__header_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V0gen__header_k80) (bruijn ##.x.220 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k80, env)}),
      _var0);
 }
}
static void _V0gen__header_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__header_k78) (close _V0gen__header_k79))
    V_CALL_FUNC(_V0gen__header_k78, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k79, env)}));
 }
}
static void _V0gen__header_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close _V0gen__header_k77) (bruijn ##.headers.28 3 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k77, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0gen__header_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__header_k75) (close _V0gen__header_k76))
    V_CALL_FUNC(_V0gen__header_k75, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k76, env)}));
 }
}
static void _V0gen__header_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (> (close _V0gen__header_k74) (bruijn ##.x.225 0 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, ">"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k74, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0gen__header_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (length (close _V0gen__header_k73) (bruijn ##.headers.28 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k73, env)}),
      _var0);
 }
}
static void _V0gen__header_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_lambda64, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_lambda64, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.226 0 0) (bruijn ##.x.29 0 1))
    V_CALL(_var0, runtime,
      _var1);
 }
}
static void _V0gen__header_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (filter (close _V0gen__header_k72) (close _V0gen__header_lambda64) (bruijn ##.x.227 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "filter"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k72, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_lambda64, env)}),
      _var0);
 }
}
static void _V0gen__header_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (map (close _V0gen__header_k71) header-from-library (bruijn ##.file.27 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k71, env)}),
      VLookupGlobalVarFast2(runtime, "header-from-library"),
      _var0);
 }
}
static void _V0gen__header_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (read-all (close _V0gen__header_k70) (bruijn ##.x.228 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "read-all"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k70, env)}),
      _var0);
 }
}
static void _V0gen__header_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-file (close _V0gen__header_k69) (bruijn ##.x.229 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "open-input-file"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k69, env)}),
      _var0);
 }
}
static void _V0gen__header_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_lambda62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V0gen__header_k68) scm-files)
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k68, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
 }
}
static void global_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.208 0 0) gen-header (close _V0gen__header_lambda62))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0gen__header,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_lambda62, env)})
    );
 }
}
static void _V0gen__makefile_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.251 4 0) maketargets (bruijn ##.x.252 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->up->up->vars[0],
      _V0maketargets,
      _var0
    );
 }
}
static void _V0gen__makefile_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (list (close _V0gen__makefile_k93) (bruijn ##.x.253 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "list"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k93, env)}),
      _var0);
 }
}
static void _V0gen__makefile_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (change-extension (close _V0gen__makefile_k92) (bruijn ##.x.254 0 0) (##string ##.string.648))
    V_CALL(VLookupGlobalVarFast2(runtime, "change-extension"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k92, env)}),
      _var0,
      VEncodePointer(&_V10_Dstring_D648.sym, VPOINTER_OTHER));
 }
}
static void _V0gen__makefile_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (basename (close _V0gen__makefile_k91) (bruijn ##.x.255 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k91, env)}),
      _var0);
 }
}
static void _V0gen__makefile_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.250 1 0) (car (close _V0gen__makefile_k90) scm-files) ((bruijn ##.k.251 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k90, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0gen__makefile_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k99, runtime, upenv, 1, argc, _var0) {
  // (if out-file (open-output-file (bruijn ##.k.247 0 0) out-file) (current-output-port (bruijn ##.k.247 0 0)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "open-output-file"), runtime,
      _var0,
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "current-output-port"), runtime,
      _var0);
}
 }
}
static void _V0gen__makefile_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k106, runtime, upenv, 1, argc, _var0) {
  // (if out-file (close-port (bruijn ##.k.231 13 0) (bruijn ##.port.32 6 0)) ((bruijn ##.k.231 13 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "close-port"), runtime,
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 6-1, 0));
} else {
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0gen__makefile_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (newline (close _V0gen__makefile_k106) (bruijn ##.port.32 5 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "newline"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k106, env)}),
      VGetArg(upenv, 5-1, 0));
 }
}
static void _V0gen__makefile_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k110, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.242 1 0) (compiler-error (bruijn ##.k.243 0 0) (##string ##.string.649) (bruijn ##.dep.34 4 1)) ((bruijn ##.k.243 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D649.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0gen__makefile_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k112, runtime, upenv, 1, argc, _var0) {
  // (format (bruijn ##.k.238 5 0) (bruijn ##.port.32 10 0) (##string ##.string.650) (bruijn ##.x.241 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "format"), runtime,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10_Dstring_D650.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0gen__makefile_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (import->path (close _V0gen__makefile_k112) (bruijn ##.dep.34 4 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "import->path"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k112, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0gen__makefile_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__makefile_k110) (close _V0gen__makefile_k111))
    V_CALL_FUNC(_V0gen__makefile_k110, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k111, env)}));
 }
}
static void _V0gen__makefile_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V0gen__makefile_k109) (bruijn ##.x.244 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k109, env)}),
      _var0);
 }
}
static void _V0gen__makefile_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.239 0 0) (valid-import? (close _V0gen__makefile_k108) (bruijn ##.dep.34 1 1)) ((bruijn ##.k.238 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "valid-import?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k108, env)}),
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0gen__makefile_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_lambda67, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (pair? (close _V0gen__makefile_k107) (bruijn ##.dep.34 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "pair?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k107, env)}),
      _var1);
 }
}
static void _V0gen__makefile_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (for-each (close _V0gen__makefile_k105) (close _V0gen__makefile_lambda67) (bruijn ##.deps.31 5 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k105, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_lambda67, env)}),
      VGetArg(upenv, 5-1, 0));
 }
}
static void _V0gen__makefile_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (format (close _V0gen__makefile_k104) (bruijn ##.port.32 3 0) (##string ##.string.650) (bruijn ##.x.245 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "format"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k104, env)}),
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D650.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0gen__makefile_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V0gen__makefile_k103) scm-files)
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k103, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
 }
}
static void _V0gen__makefile_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (display (close _V0gen__makefile_k102) (##string ##.string.651) (bruijn ##.port.32 1 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "display"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k102, env)}),
      VEncodePointer(&_V10_Dstring_D651.sym, VPOINTER_OTHER),
      upenv->vars[0]);
 }
}
static void _V0gen__makefile_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_lambda68, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_lambda68, runtime, upenv, 2, argc, _var0, _var1) {
  // (format (bruijn ##.k.246 0 0) (bruijn ##.port.32 1 0) (##string ##.string.652) (bruijn ##.target.33 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "format"), runtime,
      _var0,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D652.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0gen__makefile_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (for-each (close _V0gen__makefile_k101) (close _V0gen__makefile_lambda68) maketargets)
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k101, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_lambda68, env)}),
      VLookupGlobalVarFast2(runtime, "maketargets"));
 }
}
static void _V0gen__makefile_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__makefile_k99) (close _V0gen__makefile_k100))
    V_CALL_FUNC(_V0gen__makefile_k99, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k100, env)}));
 }
}
static void _V0gen__makefile_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (gather-dependencies (close _V0gen__makefile_k98) (bruijn ##.file.30 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "gather-dependencies"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k98, env)}),
      _var0);
 }
}
static void _V0gen__makefile_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (read-all (close _V0gen__makefile_k97) (bruijn ##.x.248 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "read-all"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k97, env)}),
      _var0);
 }
}
static void _V0gen__makefile_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-file (close _V0gen__makefile_k96) (bruijn ##.x.249 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "open-input-file"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k96, env)}),
      _var0);
 }
}
static void _V0gen__makefile_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V0gen__makefile_k95) scm-files)
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k95, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
 }
}
static void _V0gen__makefile_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__makefile_k89) (close _V0gen__makefile_k94))
    V_CALL_FUNC(_V0gen__makefile_k89, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k94, env)}));
 }
}
static void _V0gen__makefile_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_lambda66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_lambda66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close _V0gen__makefile_k88) maketargets)
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k88, env)}),
      VLookupGlobalVarFast2(runtime, "maketargets"));
 }
}
static void global_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.230 0 0) gen-makefile (close _V0gen__makefile_lambda66))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0gen__makefile,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_lambda66, env)})
    );
 }
}
static void _V0display__help_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k133, runtime, upenv, 1, argc, _var0) {
  // (displayln (bruijn ##.k.257 21 0) (##string ##.string.653))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VGetArg(upenv, 21-1, 0),
      VEncodePointer(&_V10_Dstring_D653.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k133) (##string ##.string.654))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k133, env)}),
      VEncodePointer(&_V10_Dstring_D654.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k132) (##string ##.string.655))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k132, env)}),
      VEncodePointer(&_V10_Dstring_D655.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k131) (##string ##.string.656))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k131, env)}),
      VEncodePointer(&_V10_Dstring_D656.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k130) (##string ##.string.657))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k130, env)}),
      VEncodePointer(&_V10_Dstring_D657.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k129) (##string ##.string.658))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k129, env)}),
      VEncodePointer(&_V10_Dstring_D658.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k128) (##string ##.string.659))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k128, env)}),
      VEncodePointer(&_V10_Dstring_D659.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k127) (##string ##.string.660))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k127, env)}),
      VEncodePointer(&_V10_Dstring_D660.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k126) (##string ##.string.661))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k126, env)}),
      VEncodePointer(&_V10_Dstring_D661.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k125) (##string ##.string.659))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k125, env)}),
      VEncodePointer(&_V10_Dstring_D659.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k124) (##string ##.string.662))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k124, env)}),
      VEncodePointer(&_V10_Dstring_D662.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k123) (##string ##.string.663))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k123, env)}),
      VEncodePointer(&_V10_Dstring_D663.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k122) (##string ##.string.664))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k122, env)}),
      VEncodePointer(&_V10_Dstring_D664.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k121) (##string ##.string.665))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k121, env)}),
      VEncodePointer(&_V10_Dstring_D665.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k120) (##string ##.string.666))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k120, env)}),
      VEncodePointer(&_V10_Dstring_D666.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k119) (##string ##.string.667))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k119, env)}),
      VEncodePointer(&_V10_Dstring_D667.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k118) (##string ##.string.668))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k118, env)}),
      VEncodePointer(&_V10_Dstring_D668.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k117) (##string ##.string.669))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k117, env)}),
      VEncodePointer(&_V10_Dstring_D669.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k116) (##string ##.string.670))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k116, env)}),
      VEncodePointer(&_V10_Dstring_D670.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k115) (##string ##.string.671))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k115, env)}),
      VEncodePointer(&_V10_Dstring_D671.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k114) (##string ##.string.672))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k114, env)}),
      VEncodePointer(&_V10_Dstring_D672.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_lambda70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_lambda70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k113) (##string ##.string.673))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k113, env)}),
      VEncodePointer(&_V10_Dstring_D673.sym, VPOINTER_OTHER));
 }
}
static void global_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.256 0 0) display-help (close _V0display__help_lambda70))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0display__help,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_lambda70, env)})
    );
 }
}
static void _V0display__version_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__version_k136, runtime, upenv, 1, argc, _var0) {
  // (displayln (bruijn ##.k.280 3 0) (##string ##.string.674))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D674.sym, VPOINTER_OTHER));
 }
}
static void _V0display__version_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__version_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (printf (close _V0display__version_k136) (##string ##.string.675) (bruijn ##.x.282 1 0) (bruijn ##.x.283 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "printf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k136, env)}),
      VEncodePointer(&_V10_Dstring_D675.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0);
 }
}
static void _V0display__version_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__version_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cadr (close _V0display__version_k135) version)
    V_CALL(VLookupGlobalVarFast2(runtime, "cadr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k135, env)}),
      VLookupGlobalVarFast2(runtime, "version"));
 }
}
static void _V0display__version_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__version_lambda72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V0display__version_k134) version)
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k134, env)}),
      VLookupGlobalVarFast2(runtime, "version"));
 }
}
static void global_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.279 0 0) display-version (close _V0display__version_lambda72))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0display__version,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_lambda72, env)})
    );
 }
}
static void _V0handle__exception_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0handle__exception_k143, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.285 8 0) (bruijn ##.ret.37.41 1 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      upenv->vars[0]);
 }
}
static void _V0handle__exception_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0handle__exception_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.parameter.35.39 6 0) (close _V0handle__exception_k143) '##vcore.pop-value (bruijn ##.keyval.36.40 4 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k143, env)}),
      _V10vcore_Dpop__value,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0handle__exception_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0handle__exception_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (exit (close _V0handle__exception_k142) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "exit"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k142, env)}),
      VEncodeInt(1l));
 }
}
static void _V0handle__exception_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0handle__exception_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (newline (close _V0handle__exception_k141))
    V_CALL(VLookupGlobalVarFast2(runtime, "newline"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k141, env)}));
 }
}
static void _V0handle__exception_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0handle__exception_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (write (close _V0handle__exception_k140) (bruijn ##.err.38 4 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "write"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k140, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0handle__exception_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0handle__exception_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (display (close _V0handle__exception_k139) (##string ##.string.676))
    V_CALL(VLookupGlobalVarFast2(runtime, "display"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k139, env)}),
      VEncodePointer(&_V10_Dstring_D676.sym, VPOINTER_OTHER));
 }
}
static void _V0handle__exception_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0handle__exception_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.parameter.35.39 1 0) (close _V0handle__exception_k138) '##vcore.push-value (bruijn ##.x.290 0 0))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k138, env)}),
      _V10vcore_Dpush__value,
      _var0);
 }
}
static void _V0handle__exception_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V0handle__exception_lambda75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (current-error-port (close _V0handle__exception_k137))
    V_CALL(VLookupGlobalVarFast2(runtime, "current-error-port"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k137, env)}));
 }
}
static void _V0handle__exception_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0handle__exception_lambda74, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0handle__exception_lambda75) current-output-port)
    V_CALL_FUNC(_V0handle__exception_lambda75, env, runtime,
      VLookupGlobalVarFast2(runtime, "current-output-port"));
 }
}
static void global_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.284 0 0) handle-exception (close _V0handle__exception_lambda74))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0handle__exception,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_lambda74, env)})
    );
 }
}
static void _V10_Dloop_D43_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.357 5 0) obj-files (bruijn ##.x.359 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 5-1, 0),
      _V0obj__files,
      _var0
    );
 }
}
static void _V10_Dloop_D43_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close _V10_Dloop_D43_k153) (bruijn ##.x.360 0 0) obj-files)
    V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k153, env)}),
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
 }
}
static void _V10_Dloop_D43_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k159, runtime, upenv, 1, argc, _var0) {
  // (equal? (bruijn ##.k.366 2 0) (bruijn ##.x.367 0 0) (##string ##.string.677))
    V_CALL(VLookupGlobalVarFast2(runtime, "equal?"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D677.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dloop_D43_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (extension (close _V10_Dloop_D43_k159) (bruijn ##.x.368 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "extension"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k159, env)}),
      _var0);
 }
}
static void _V10_Dloop_D43_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.365 1 0) ((bruijn ##.k.366 0 0) (bruijn ##.p.365 1 0)) (cdar (close _V10_Dloop_D43_k158) (bruijn ##.args.44 12 1)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k158, env)}),
      VGetArg(upenv, 12-1, 1));
}
 }
}
static void _V10_Dloop_D43_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.357 9 0) scm-files (bruijn ##.x.362 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 9-1, 0),
      _V0scm__files,
      _var0
    );
 }
}
static void _V10_Dloop_D43_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close _V10_Dloop_D43_k162) (bruijn ##.x.363 0 0) scm-files)
    V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k162, env)}),
      _var0,
      VLookupGlobalVarFast2(runtime, "scm-files"));
 }
}
static void _V10_Dloop_D43_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k163, runtime, upenv, 1, argc, _var0) {
  // (compiler-error (bruijn ##.k.357 8 0) (##string ##.string.678) (bruijn ##.x.364 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D678.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dloop_D43_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.361 0 0) (cdar (close _V10_Dloop_D43_k161) (bruijn ##.args.44 12 1)) (cdar (close _V10_Dloop_D43_k163) (bruijn ##.args.44 12 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k161, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k163, env)}),
      VGetArg(upenv, 12-1, 1));
}
 }
}
static void _V10_Dloop_D43_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D43_k157) (close _V10_Dloop_D43_k160))
    V_CALL_FUNC(_V10_Dloop_D43_k157, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k160, env)}));
 }
}
static void _V10_Dloop_D43_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close _V10_Dloop_D43_k156) (bruijn ##.x.369 0 0) (##string ##.string.679))
    V_CALL(VLookupGlobalVarFast2(runtime, "equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k156, env)}),
      _var0,
      VEncodePointer(&_V10_Dstring_D679.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dloop_D43_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (extension (close _V10_Dloop_D43_k155) (bruijn ##.x.370 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "extension"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k155, env)}),
      _var0);
 }
}
static void _V10_Dloop_D43_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.358 0 0) (cdar (close _V10_Dloop_D43_k152) (bruijn ##.args.44 8 1)) (cdar (close _V10_Dloop_D43_k154) (bruijn ##.args.44 8 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k152, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k154, env)}),
      VGetArg(upenv, 8-1, 1));
}
 }
}
static void _V10_Dloop_D43_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close _V10_Dloop_D43_k151) (bruijn ##.x.371 0 0) (##string ##.string.648))
    V_CALL(VLookupGlobalVarFast2(runtime, "equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k151, env)}),
      _var0,
      VEncodePointer(&_V10_Dstring_D648.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dloop_D43_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (extension (close _V10_Dloop_D43_k150) (bruijn ##.x.372 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "extension"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k150, env)}),
      _var0);
 }
}
static void _V10_Dloop_D43_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.357 7 0) out-file (bruijn ##.x.379 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 7-1, 0),
      _V0out__file,
      _var0
    );
 }
}
static void _V10_Dloop_D43_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.357 11 0) paths (bruijn ##.x.381 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 11-1, 0),
      _V0paths,
      _var0
    );
 }
}
static void _V10_Dloop_D43_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (append (close _V10_Dloop_D43_k175) paths (bruijn ##.x.382 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k175, env)}),
      VLookupGlobalVarFast2(runtime, "paths"),
      _var0);
 }
}
static void _V10_Dloop_D43_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (list (close _V10_Dloop_D43_k174) (bruijn ##.x.383 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "list"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k174, env)}),
      _var0);
 }
}
static void _V10_Dloop_D43_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (realpath (close _V10_Dloop_D43_k173) (bruijn ##.x.384 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "realpath"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k173, env)}),
      _var0);
 }
}
static void _V10_Dloop_D43_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k181, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.391 0 0) (<= (bruijn ##.k.390 1 0) 0 optimization 3) ((bruijn ##.k.390 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "<="), runtime,
      upenv->vars[0],
      VEncodeInt(0l),
      VLookupGlobalVarFast2(runtime, "optimization"),
      VEncodeInt(3l));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D43_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if optimization (integer? (close _V10_Dloop_D43_k181) optimization) ((bruijn ##.k.390 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "optimization"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "integer?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k181, env)}),
      VLookupGlobalVarFast2(runtime, "optimization"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D43_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k184, runtime, upenv, 1, argc, _var0) {
  // (compiler-error (bruijn ##.k.357 14 0) (##string ##.string.680) (bruijn ##.x.388 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      VGetArg(upenv, 14-1, 0),
      VEncodePointer(&_V10_Dstring_D680.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dloop_D43_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.387 0 0) (cdar (close _V10_Dloop_D43_k184) (bruijn ##.args.44 18 1)) ((bruijn ##.k.357 13 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k184, env)}),
      VGetArg(upenv, 18-1, 1));
} else {
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D43_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V10_Dloop_D43_k183) (bruijn ##.x.389 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k183, env)}),
      _var0);
 }
}
static void _V10_Dloop_D43_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D43_k180) (close _V10_Dloop_D43_k182))
    V_CALL_FUNC(_V10_Dloop_D43_k180, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k182, env)}));
 }
}
static void _V10_Dloop_D43_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Dloop_D43_k179) optimization (bruijn ##.x.392 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k179, env)}),
      _V0optimization,
      _var0
    );
 }
}
static void _V10_Dloop_D43_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string->number (close _V10_Dloop_D43_k178) (bruijn ##.x.393 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string->number"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k178, env)}),
      _var0);
 }
}
static void _V10_Dloop_D43_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k190, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.400 0 0) (<= (bruijn ##.k.399 1 0) 0 expand? 2) ((bruijn ##.k.399 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "<="), runtime,
      upenv->vars[0],
      VEncodeInt(0l),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(2l));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D43_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if expand? (integer? (close _V10_Dloop_D43_k190) expand?) ((bruijn ##.k.399 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "expand?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "integer?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k190, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D43_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k193, runtime, upenv, 1, argc, _var0) {
  // (compiler-error (bruijn ##.k.357 15 0) (##string ##.string.681) (bruijn ##.x.397 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      VGetArg(upenv, 15-1, 0),
      VEncodePointer(&_V10_Dstring_D681.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dloop_D43_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.396 0 0) (cdar (close _V10_Dloop_D43_k193) (bruijn ##.args.44 19 1)) ((bruijn ##.k.357 14 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k193, env)}),
      VGetArg(upenv, 19-1, 1));
} else {
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D43_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V10_Dloop_D43_k192) (bruijn ##.x.398 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k192, env)}),
      _var0);
 }
}
static void _V10_Dloop_D43_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D43_k189) (close _V10_Dloop_D43_k191))
    V_CALL_FUNC(_V10_Dloop_D43_k189, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k191, env)}));
 }
}
static void _V10_Dloop_D43_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Dloop_D43_k188) expand? (bruijn ##.x.401 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k188, env)}),
      _V0expand_Q,
      _var0
    );
 }
}
static void _V10_Dloop_D43_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string->number (close _V10_Dloop_D43_k187) (bruijn ##.x.402 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string->number"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k187, env)}),
      _var0);
 }
}
static void _V10_Dloop_D43_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k199, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.419 1 0) (compiler-error (bruijn ##.k.420 0 0) (##string ##.string.682)) ((bruijn ##.k.420 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D682.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D43_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k206, runtime, upenv, 1, argc, _var0) {
  // (eq? (bruijn ##.k.414 2 0) (bruijn ##.x.415 0 0) #\,)
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodeChar(','));
 }
}
static void _V10_Dloop_D43_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-ref (close _V10_Dloop_D43_k206) (bruijn ##.x.416 0 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k206, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D43_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.413 1 0) (cdar (close _V10_Dloop_D43_k205) (bruijn ##.args.44 24 1)) ((bruijn ##.k.414 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k205, env)}),
      VGetArg(upenv, 24-1, 1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D43_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k209, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.410 1 0) (compiler-error (bruijn ##.k.411 0 0) (##string ##.string.683)) ((bruijn ##.k.411 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D683.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D43_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.357 25 0) c-options (bruijn ##.x.406 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 25-1, 0),
      _V0c__options,
      _var0
    );
 }
}
static void _V10_Dloop_D43_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close _V10_Dloop_D43_k214) (bruijn ##.x.407 0 0) c-options)
    V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k214, env)}),
      _var0,
      VLookupGlobalVarFast2(runtime, "c-options"));
 }
}
static void _V10_Dloop_D43_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (decomma (close _V10_Dloop_D43_k213) (bruijn ##.x.408 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "decomma"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k213, env)}),
      _var0);
 }
}
static void _V10_Dloop_D43_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (substring (close _V10_Dloop_D43_k212) (bruijn ##.x.409 0 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "substring"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k212, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D43_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cdar (close _V10_Dloop_D43_k211) (bruijn ##.args.44 26 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k211, env)}),
      VGetArg(upenv, 26-1, 1));
 }
}
static void _V10_Dloop_D43_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D43_k209) (close _V10_Dloop_D43_k210))
    V_CALL_FUNC(_V10_Dloop_D43_k209, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k210, env)}));
 }
}
static void _V10_Dloop_D43_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V10_Dloop_D43_k208) (bruijn ##.x.412 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k208, env)}),
      _var0);
 }
}
static void _V10_Dloop_D43_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D43_k204) (close _V10_Dloop_D43_k207))
    V_CALL_FUNC(_V10_Dloop_D43_k204, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k207, env)}));
 }
}
static void _V10_Dloop_D43_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (>= (close _V10_Dloop_D43_k203) (bruijn ##.x.417 0 0) 2)
    V_CALL(VLookupGlobalVarFast2(runtime, ">="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k203, env)}),
      _var0,
      VEncodeInt(2l));
 }
}
static void _V10_Dloop_D43_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-length (close _V10_Dloop_D43_k202) (bruijn ##.x.418 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k202, env)}),
      _var0);
 }
}
static void _V10_Dloop_D43_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cdar (close _V10_Dloop_D43_k201) (bruijn ##.args.44 20 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k201, env)}),
      VGetArg(upenv, 20-1, 1));
 }
}
static void _V10_Dloop_D43_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D43_k199) (close _V10_Dloop_D43_k200))
    V_CALL_FUNC(_V10_Dloop_D43_k199, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k200, env)}));
 }
}
static void _V10_Dloop_D43_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V10_Dloop_D43_k198) (bruijn ##.x.421 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k198, env)}),
      _var0);
 }
}
static void _V10_Dloop_D43_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D43_k197) (bruijn ##.x.422 0 0) #\c)
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k197, env)}),
      _var0,
      VEncodeChar('c'));
 }
}
static void _V10_Dloop_D43_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-ref (close _V10_Dloop_D43_k196) (bruijn ##.x.423 0 0) 0)
    V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k196, env)}),
      _var0,
      VEncodeInt(0l));
 }
}
static void _V10_Dloop_D43_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k216, runtime, upenv, 1, argc, _var0) {
  // (exit (bruijn ##.k.357 12 0) 0)
    V_CALL(VLookupGlobalVarFast2(runtime, "exit"), runtime,
      VGetArg(upenv, 12-1, 0),
      VEncodeInt(0l));
 }
}
static void _V10_Dloop_D43_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k218, runtime, upenv, 1, argc, _var0) {
  // (exit (bruijn ##.k.357 13 0) 0)
    V_CALL(VLookupGlobalVarFast2(runtime, "exit"), runtime,
      VGetArg(upenv, 13-1, 0),
      VEncodeInt(0l));
 }
}
static void _V10_Dloop_D43_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.357 16 0) api (bruijn ##.x.430 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 16-1, 0),
      _V0api,
      _var0
    );
 }
}
static void _V10_Dloop_D43_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string->number (close _V10_Dloop_D43_k222) (bruijn ##.x.431 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string->number"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k222, env)}),
      _var0);
 }
}
static void _V10_Dloop_D43_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.357 16 0) platform (bruijn ##.x.433 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 16-1, 0),
      _V0platform,
      _var0
    );
 }
}
static void _V10_Dloop_D43_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.357 17 0) cc (bruijn ##.x.435 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 17-1, 0),
      _V0cc,
      _var0
    );
 }
}
static void _V10_Dloop_D43_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.357 21 0) maketargets (bruijn ##.x.439 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 21-1, 0),
      _V0maketargets,
      _var0
    );
 }
}
static void _V10_Dloop_D43_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close _V10_Dloop_D43_k231) (bruijn ##.x.440 0 0) maketargets)
    V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k231, env)}),
      _var0,
      VLookupGlobalVarFast2(runtime, "maketargets"));
 }
}
static void _V10_Dloop_D43_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k234, runtime, upenv, 1, argc, _var0) {
  // (compiler-error (bruijn ##.k.357 22 0) (##string ##.string.684) (bruijn ##.x.443 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      VGetArg(upenv, 22-1, 0),
      VEncodePointer(&_V10_Dstring_D684.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dloop_D43_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.442 0 0) (set! (bruijn ##.k.357 21 0) bytecode? #t) (cdar (close _V10_Dloop_D43_k234) (bruijn ##.args.44 26 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 21-1, 0),
      _V0bytecode_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k234, env)}),
      VGetArg(upenv, 26-1, 1));
}
 }
}
static void _V10_Dloop_D43_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.441 0 0) (set! (bruijn ##.k.357 20 0) benchmark? #t) (eqv? (close _V10_Dloop_D43_k233) (bruijn ##.x.42.45 22 0) 'bytecode))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 20-1, 0),
      _V0benchmark_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k233, env)}),
      VGetArg(upenv, 22-1, 0),
      _V0bytecode);
}
 }
}
static void _V10_Dloop_D43_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.438 0 0) (cdar (close _V10_Dloop_D43_k230) (bruijn ##.args.44 24 1)) (eqv? (close _V10_Dloop_D43_k232) (bruijn ##.x.42.45 21 0) 'benchmark))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k230, env)}),
      VGetArg(upenv, 24-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k232, env)}),
      VGetArg(upenv, 21-1, 0),
      _V0benchmark);
}
 }
}
static void _V10_Dloop_D43_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.437 0 0) (set! (bruijn ##.k.357 18 0) makefile? #t) (eqv? (close _V10_Dloop_D43_k229) (bruijn ##.x.42.45 20 0) 'maketarget))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 18-1, 0),
      _V0makefile_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k229, env)}),
      VGetArg(upenv, 20-1, 0),
      _V0maketarget);
}
 }
}
static void _V10_Dloop_D43_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.436 0 0) (set! (bruijn ##.k.357 17 0) keep? #t) (eqv? (close _V10_Dloop_D43_k228) (bruijn ##.x.42.45 19 0) 'makefile))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 17-1, 0),
      _V0keep_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k228, env)}),
      VGetArg(upenv, 19-1, 0),
      _V0makefile);
}
 }
}
static void _V10_Dloop_D43_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.434 0 0) (cdar (close _V10_Dloop_D43_k226) (bruijn ##.args.44 21 1)) (eqv? (close _V10_Dloop_D43_k227) (bruijn ##.x.42.45 18 0) 'keep-temps))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k226, env)}),
      VGetArg(upenv, 21-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k227, env)}),
      VGetArg(upenv, 18-1, 0),
      _V0keep__temps);
}
 }
}
static void _V10_Dloop_D43_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.432 0 0) (cdar (close _V10_Dloop_D43_k224) (bruijn ##.args.44 20 1)) (eqv? (close _V10_Dloop_D43_k225) (bruijn ##.x.42.45 17 0) 'cc))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k224, env)}),
      VGetArg(upenv, 20-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k225, env)}),
      VGetArg(upenv, 17-1, 0),
      _V0cc);
}
 }
}
static void _V10_Dloop_D43_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.429 0 0) (cdar (close _V10_Dloop_D43_k221) (bruijn ##.args.44 19 1)) (eqv? (close _V10_Dloop_D43_k223) (bruijn ##.x.42.45 16 0) 'platform))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k221, env)}),
      VGetArg(upenv, 19-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k223, env)}),
      VGetArg(upenv, 16-1, 0),
      _V0platform);
}
 }
}
static void _V10_Dloop_D43_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.428 0 0) (set! (bruijn ##.k.357 13 0) shared? #t) (eqv? (close _V10_Dloop_D43_k220) (bruijn ##.x.42.45 15 0) 'api))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 13-1, 0),
      _V0shared_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k220, env)}),
      VGetArg(upenv, 15-1, 0),
      _V0api);
}
 }
}
static void _V10_Dloop_D43_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.426 0 0) (display-version (close _V10_Dloop_D43_k218)) (eqv? (close _V10_Dloop_D43_k219) (bruijn ##.x.42.45 14 0) 'shared))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "display-version"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k218, env)}));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k219, env)}),
      VGetArg(upenv, 14-1, 0),
      _V0shared);
}
 }
}
static void _V10_Dloop_D43_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.424 0 0) (display-help (close _V10_Dloop_D43_k216)) (eqv? (close _V10_Dloop_D43_k217) (bruijn ##.x.42.45 13 0) 'version))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "display-help"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k216, env)}));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k217, env)}),
      VGetArg(upenv, 13-1, 0),
      _V0version);
}
 }
}
static void _V10_Dloop_D43_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.403 0 0) (cdar (close _V10_Dloop_D43_k195) (bruijn ##.args.44 15 1)) (eqv? (close _V10_Dloop_D43_k215) (bruijn ##.x.42.45 12 0) 'help))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k195, env)}),
      VGetArg(upenv, 15-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k215, env)}),
      VGetArg(upenv, 12-1, 0),
      _V0help);
}
 }
}
static void _V10_Dloop_D43_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.394 0 0) (cdar (close _V10_Dloop_D43_k186) (bruijn ##.args.44 14 1)) (eqv? (close _V10_Dloop_D43_k194) (bruijn ##.x.42.45 11 0) '#\W))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k186, env)}),
      VGetArg(upenv, 14-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k194, env)}),
      VGetArg(upenv, 11-1, 0),
      VEncodeChar('W'));
}
 }
}
static void _V10_Dloop_D43_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.385 0 0) (cdar (close _V10_Dloop_D43_k177) (bruijn ##.args.44 13 1)) (eqv? (close _V10_Dloop_D43_k185) (bruijn ##.x.42.45 10 0) '#\E))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k177, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k185, env)}),
      VGetArg(upenv, 10-1, 0),
      VEncodeChar('E'));
}
 }
}
static void _V10_Dloop_D43_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.380 0 0) (cdar (close _V10_Dloop_D43_k172) (bruijn ##.args.44 12 1)) (eqv? (close _V10_Dloop_D43_k176) (bruijn ##.x.42.45 9 0) '#\O))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k172, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k176, env)}),
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('O'));
}
 }
}
static void _V10_Dloop_D43_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.378 0 0) (cdar (close _V10_Dloop_D43_k170) (bruijn ##.args.44 11 1)) (eqv? (close _V10_Dloop_D43_k171) (bruijn ##.x.42.45 8 0) '#\I))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k170, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k171, env)}),
      VGetArg(upenv, 8-1, 0),
      VEncodeChar('I'));
}
 }
}
static void _V10_Dloop_D43_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.377 0 0) (set! (bruijn ##.k.357 5 0) object? #t) (eqv? (close _V10_Dloop_D43_k169) (bruijn ##.x.42.45 7 0) '#\o))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 5-1, 0),
      _V0object_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k169, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('o'));
}
 }
}
static void _V10_Dloop_D43_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.376 0 0) (set! (bruijn ##.k.357 4 0) transpile? #t) (eqv? (close _V10_Dloop_D43_k168) (bruijn ##.x.42.45 6 0) '#\c))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->up->up->vars[0],
      _V0transpile_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k168, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('c'));
}
 }
}
static void _V10_Dloop_D43_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.375 0 0) (set! (bruijn ##.k.357 3 0) header? #t) (eqv? (close _V10_Dloop_D43_k167) (bruijn ##.x.42.45 5 0) '#\t))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->up->vars[0],
      _V0header_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k167, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('t'));
}
 }
}
static void _V10_Dloop_D43_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.374 0 0) (set! (bruijn ##.k.357 2 0) debug? #t) (eqv? (close _V10_Dloop_D43_k166) (bruijn ##.x.42.45 4 0) '#\h))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->vars[0],
      _V0debug_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k166, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('h'));
}
 }
}
static void _V10_Dloop_D43_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.373 0 0) (set! (bruijn ##.k.357 1 0) verbose? #t) (eqv? (close _V10_Dloop_D43_k165) (bruijn ##.x.42.45 3 0) '#\g))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->vars[0],
      _V0verbose_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k165, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('g'));
}
 }
}
static void _V10_Dloop_D43_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.356 1 0) (cdar (close _V10_Dloop_D43_k149) (bruijn ##.args.44 5 1)) (eqv? (close _V10_Dloop_D43_k164) (bruijn ##.x.42.45 2 0) '#\v))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k149, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k164, env)}),
      upenv->up->vars[0],
      VEncodeChar('v'));
}
 }
}
static void _V10_Dloop_D43_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k236, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.43 7 0) (bruijn ##.k.352 6 0) (bruijn ##.x.355 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D43_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cdr (close _V10_Dloop_D43_k236) (bruijn ##.args.44 5 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k236, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V10_Dloop_D43_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D43_k148) (close _V10_Dloop_D43_k235))
    V_CALL_FUNC(_V10_Dloop_D43_k148, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k235, env)}));
 }
}
static void _V10_Dloop_D43_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eqv? (close _V10_Dloop_D43_k147) (bruijn ##.x.42.45 0 0) '#t)
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k147, env)}),
      _var0,
      VEncodeBool(true));
 }
}
static void _V10_Dloop_D43_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.353 0 0) (caar (close _V10_Dloop_D43_k146) (bruijn ##.args.44 2 1)) ((bruijn ##.k.352 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "caar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k146, env)}),
      upenv->up->vars[1]);
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D43_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V10_Dloop_D43_k145) (bruijn ##.x.444 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k145, env)}),
      _var0);
 }
}
static void _V10_Dloop_D43_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D43_lambda78, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D43_lambda78, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (null? (close _V10_Dloop_D43_k144) (bruijn ##.args.44 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_k144, env)}),
      _var1);
 }
}
static void global_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k244, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.351 0 0) ((bruijn ##.k.350 1 0) (##string ##.string.686)) (compiler-error (bruijn ##.k.350 1 0) (##string ##.string.687) platform))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodePointer(&_V10_Dstring_D686.sym, VPOINTER_OTHER));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D687.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "platform"));
}
 }
}
static void global_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.349 1 0) ((bruijn ##.k.350 0 0) (##string ##.string.685)) (equal? (close global_k244) platform (##string ##.string.688)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10_Dstring_D685.sym, VPOINTER_OTHER));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k244, env)}),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D688.sym, VPOINTER_OTHER));
}
 }
}
static void global_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.347 2 0) cc (bruijn ##.x.348 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->vars[0],
      _V0cc,
      _var0
    );
 }
}
static void global_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k243) (close global_k245))
    V_CALL_FUNC(global_k243, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k245, env)}));
 }
}
static void global_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.346 1 0) (equal? (close global_k242) platform (##string ##.string.640)) ((bruijn ##.k.347 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k242, env)}),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D640.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k249, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.343 1 0) (compiler-error (bruijn ##.k.344 0 0) (##string ##.string.689)) ((bruijn ##.k.344 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D689.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k252, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.341 1 0) (null? (bruijn ##.k.342 0 0) obj-files) ((bruijn ##.k.342 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k254, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.339 1 0) (compiler-error (bruijn ##.k.340 0 0) (##string ##.string.690)) ((bruijn ##.k.340 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D690.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k256, runtime, upenv, 1, argc, _var0) {
  // (if makefile? ((bruijn ##.k.338 0 0) makefile?) (if header? ((bruijn ##.k.338 0 0) header?) (if bytecode? ((bruijn ##.k.338 0 0) bytecode?) (if transpile? ((bruijn ##.k.338 0 0) transpile?) (if object? ((bruijn ##.k.338 0 0) object?) ((bruijn ##.k.338 0 0) expand?))))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "makefile?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "header?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "expand?"));
}
}
}
}
}
 }
}
static void global_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k259, runtime, upenv, 1, argc, _var0) {
  // (not (bruijn ##.k.336 1 0) (bruijn ##.x.337 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.335 1 0) (null? (close global_k259) obj-files) ((bruijn ##.k.336 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k259, env)}),
      VLookupGlobalVarFast2(runtime, "obj-files"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k261, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.333 1 0) (compiler-error (bruijn ##.k.334 0 0) (##string ##.string.691)) ((bruijn ##.k.334 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D691.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k263, runtime, upenv, 1, argc, _var0) {
  // (if makefile? ((bruijn ##.k.332 0 0) makefile?) (if header? ((bruijn ##.k.332 0 0) header?) (if bytecode? ((bruijn ##.k.332 0 0) bytecode?) (if transpile? ((bruijn ##.k.332 0 0) transpile?) (if object? ((bruijn ##.k.332 0 0) object?) ((bruijn ##.k.332 0 0) expand?))))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "makefile?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "header?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "expand?"));
}
}
}
}
}
 }
}
static void global_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k267, runtime, upenv, 1, argc, _var0) {
  // (not (bruijn ##.k.329 2 0) (bruijn ##.x.330 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void global_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close global_k267) (bruijn ##.x.331 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k267, env)}),
      _var0);
 }
}
static void global_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.328 1 0) (if out-file (cdr (close global_k266) scm-files) ((bruijn ##.k.329 0 0) #f)) ((bruijn ##.k.329 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k266, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k269, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.326 1 0) (compiler-error (bruijn ##.k.327 0 0) (##string ##.string.692)) ((bruijn ##.k.327 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D692.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k271, runtime, upenv, 1, argc, _var0) {
  // (if makefile? ((bruijn ##.k.325 0 0) makefile?) (if header? ((bruijn ##.k.325 0 0) header?) (if bytecode? ((bruijn ##.k.325 0 0) bytecode?) (if transpile? ((bruijn ##.k.325 0 0) transpile?) (if object? ((bruijn ##.k.325 0 0) object?) ((bruijn ##.k.325 0 0) expand?))))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "makefile?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "header?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "expand?"));
}
}
}
}
}
 }
}
static void global_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k275, runtime, upenv, 1, argc, _var0) {
  // (not (bruijn ##.k.322 2 0) (bruijn ##.x.323 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void global_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close global_k275) (bruijn ##.x.324 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k275, env)}),
      _var0);
 }
}
static void global_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.321 1 0) (cdr (close global_k274) scm-files) ((bruijn ##.k.322 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k274, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k277, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.319 1 0) (compiler-error (bruijn ##.k.320 0 0) (##string ##.string.693)) ((bruijn ##.k.320 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D693.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k283, runtime, upenv, 1, argc, _var0) {
  // (change-extension (bruijn ##.k.308 2 0) (bruijn ##.x.309 0 0) (##string ##.string.648))
    V_CALL(VLookupGlobalVarFast2(runtime, "change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D648.sym, VPOINTER_OTHER));
 }
}
static void global_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (basename (close global_k283) (bruijn ##.x.310 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k283, env)}),
      _var0);
 }
}
static void global_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k285, runtime, upenv, 1, argc, _var0) {
  // (change-extension (bruijn ##.k.308 2 0) (bruijn ##.x.311 0 0) (##string ##.string.694))
    V_CALL(VLookupGlobalVarFast2(runtime, "change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D694.sym, VPOINTER_OTHER));
 }
}
static void global_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (basename (close global_k285) (bruijn ##.x.312 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k285, env)}),
      _var0);
 }
}
static void global_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k287, runtime, upenv, 1, argc, _var0) {
  // (change-extension (bruijn ##.k.308 2 0) (bruijn ##.x.313 0 0) (##string ##.string.695))
    V_CALL(VLookupGlobalVarFast2(runtime, "change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D695.sym, VPOINTER_OTHER));
 }
}
static void global_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k286, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (basename (close global_k287) (bruijn ##.x.314 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k287, env)}),
      _var0);
 }
}
static void global_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k289, runtime, upenv, 1, argc, _var0) {
  // (change-extension (bruijn ##.k.308 2 0) (bruijn ##.x.315 0 0) (##string ##.string.696))
    V_CALL(VLookupGlobalVarFast2(runtime, "change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D696.sym, VPOINTER_OTHER));
 }
}
static void global_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (basename (close global_k289) (bruijn ##.x.316 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k289, env)}),
      _var0);
 }
}
static void global_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k291, runtime, upenv, 1, argc, _var0) {
  // (change-extension (bruijn ##.k.308 2 0) (bruijn ##.x.317 0 0) (##string ##.string.697))
    V_CALL(VLookupGlobalVarFast2(runtime, "change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D697.sym, VPOINTER_OTHER));
 }
}
static void global_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (basename (close global_k291) (bruijn ##.x.318 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k291, env)}),
      _var0);
 }
}
static void global_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if object? (car (close global_k282) scm-files) (if transpile? (car (close global_k284) scm-files) (if expand? (car (close global_k286) scm-files) (if header? (car (close global_k288) scm-files) (if bytecode? (car (close global_k290) scm-files) (if makefile? ((bruijn ##.k.308 0 0) out-file) ((bruijn ##.k.308 0 0) #f)))))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k282, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k284, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "expand?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k286, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k288, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k290, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
}
}
}
}
}
 }
}
static void global_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.306 1 0) out-file (bruijn ##.x.307 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->vars[0],
      _V0out__file,
      _var0
    );
 }
}
static void global_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.305 1 0) ((close global_k281) (close global_k292)) ((bruijn ##.k.306 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(global_k281, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k292, env)}));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k295, runtime, upenv, 1, argc, _var0) {
  // (exit (bruijn ##.k.303 1 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "exit"), runtime,
      upenv->vars[0]);
 }
}
static void global_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if header? (gen-header (close global_k295)) ((bruijn ##.k.303 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "gen-header"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k295, env)}));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k297, runtime, upenv, 1, argc, _var0) {
  // (exit (bruijn ##.k.292 25 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "exit"), runtime,
      VGetArg(upenv, 25-1, 0));
 }
}
static void global_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if makefile? (gen-makefile (close global_k297)) ((bruijn ##.k.292 24 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "gen-makefile"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k297, env)}));
} else {
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void global_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k294) (close global_k296))
    V_CALL_FUNC(global_k294, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k296, env)}));
 }
}
static void global_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k280) (close global_k293))
    V_CALL_FUNC(global_k280, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k293, env)}));
 }
}
static void global_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k279) out-file)
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k279, env)}),
      VLookupGlobalVarFast2(runtime, "out-file"));
 }
}
static void global_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k277) (close global_k278))
    V_CALL_FUNC(global_k277, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k278, env)}));
 }
}
static void global_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k273) (close global_k276))
    V_CALL_FUNC(global_k273, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k276, env)}));
 }
}
static void global_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k271) (close global_k272))
    V_CALL_FUNC(global_k271, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k272, env)}));
 }
}
static void global_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k269) (close global_k270))
    V_CALL_FUNC(global_k269, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k270, env)}));
 }
}
static void global_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k265) (close global_k268))
    V_CALL_FUNC(global_k265, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k268, env)}));
 }
}
static void global_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k263) (close global_k264))
    V_CALL_FUNC(global_k263, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k264, env)}));
 }
}
static void global_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k261) (close global_k262))
    V_CALL_FUNC(global_k261, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k262, env)}));
 }
}
static void global_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k258) (close global_k260))
    V_CALL_FUNC(global_k258, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k260, env)}));
 }
}
static void global_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k256) (close global_k257))
    V_CALL_FUNC(global_k256, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k257, env)}));
 }
}
static void global_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k254) (close global_k255))
    V_CALL_FUNC(global_k254, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k255, env)}));
 }
}
static void global_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k252) (close global_k253))
    V_CALL_FUNC(global_k252, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k253, env)}));
 }
}
static void global_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close global_k251) scm-files)
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k251, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
 }
}
static void global_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k249) (close global_k250))
    V_CALL_FUNC(global_k249, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k250, env)}));
 }
}
static void global_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (> (close global_k248) (bruijn ##.x.345 0 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, ">"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k248, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void global_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (count-true (close global_k247) makefile? header? bytecode? transpile? object? expand?)
    V_CALL(VLookupGlobalVarFast2(runtime, "count-true"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k247, env)}),
      VLookupGlobalVarFast2(runtime, "makefile?"),
      VLookupGlobalVarFast2(runtime, "header?"),
      VLookupGlobalVarFast2(runtime, "bytecode?"),
      VLookupGlobalVarFast2(runtime, "transpile?"),
      VLookupGlobalVarFast2(runtime, "object?"),
      VLookupGlobalVarFast2(runtime, "expand?"));
 }
}
static void global_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k241) (close global_k246))
    V_CALL_FUNC(global_k241, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k246, env)}));
 }
}
static void global_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k240) cc)
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k240, env)}),
      VLookupGlobalVarFast2(runtime, "cc"));
 }
}
static void global_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.43 2 0) (close global_k239) (bruijn ##.x.445 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k239, env)}),
      _var0);
 }
}
static void global_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (getopt (close global_k238) (##string ##.string.698) (bruijn ##.x.446 0 0) (##inline ##vcore.qcons (##inline ##vcore.qcons 'shared (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'shared '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'help (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'help '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'api (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'api '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'platform (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'platform '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'cc (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'cc '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'version (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'version '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'keep-temps (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'keep-temps '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'makefile (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'makefile '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'maketarget (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'maketarget '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'bytecode (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'bytecode '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'benchmark (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'benchmark '()))) '()))))))))))))
    V_CALL(VLookupGlobalVarFast2(runtime, "getopt"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k238, env)}),
      VEncodePointer(&_V10_Dstring_D698.sym, VPOINTER_OTHER),
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
        VNULL))))))))))));
 }
}
static void global_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D43_lambda78)) (command-line (close global_k237)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D43_lambda78, env)});
    V_CALL(VLookupGlobalVarFast2(runtime, "command-line"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k237, env)}));
    }
 }
}
static void global_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (with-exception-handler (bruijn ##.next.291 0 0) handle-exception (close global_lambda77))
    V_CALL(VLookupGlobalVarFast2(runtime, "with-exception-handler"), runtime,
      _var0,
      VLookupGlobalVarFast2(runtime, "handle-exception"),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda77, env)}));
 }
}
static void global_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k299, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.623 1 0) ((bruijn ##.k.624 0 0) (##string ##.string.699)) (sprintf (bruijn ##.k.624 0 0) (##string ##.string.700) install-root))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10_Dstring_D699.sym, VPOINTER_OTHER));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D700.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
 }
}
static void global_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k302, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.621 1 0) ((bruijn ##.k.622 0 0) (##string ##.string.701)) ((bruijn ##.k.622 0 0) (##string ##.string.702)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10_Dstring_D701.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10_Dstring_D702.sym, VPOINTER_OTHER));
}
 }
}
static void global_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k305, runtime, upenv, 1, argc, _var0) {
  // (if header? ((bruijn ##.k.620 0 0) header?) (if bytecode? ((bruijn ##.k.620 0 0) bytecode?) (if transpile? ((bruijn ##.k.620 0 0) transpile?) ((bruijn ##.k.620 0 0) expand?))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "header?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "expand?"));
}
}
}
 }
}
static void global_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k309, runtime, upenv, 1, argc, _var0) {
  // (make-temporary-file (bruijn ##.k.617 2 0) (bruijn ##.x.618 0 0) (##string ##.string.694))
    V_CALL(VLookupGlobalVarFast2(runtime, "make-temporary-file"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D694.sym, VPOINTER_OTHER));
 }
}
static void global_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-append (close global_k309) (##string ##.string.703) (bruijn ##.x.619 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k309, env)}),
      VEncodePointer(&_V10_Dstring_D703.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void global_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda81, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda81, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (basename (close global_k308) (bruijn ##.file.54 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k308, env)}),
      _var1);
 }
}
static void global_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.615 1 0) (list (bruijn ##.k.616 0 0) out-file) (map (bruijn ##.k.616 0 0) (close global_lambda81) scm-files))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "list"), runtime,
      _var0,
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda81, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
 }
}
static void global_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k312, runtime, upenv, 1, argc, _var0) {
  // (if header? ((bruijn ##.k.613 0 0) header?) (if bytecode? ((bruijn ##.k.613 0 0) bytecode?) (if transpile? ((bruijn ##.k.613 0 0) transpile?) ((bruijn ##.k.613 0 0) expand?))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "header?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "expand?"));
}
}
}
 }
}
static void global_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k316, runtime, upenv, 1, argc, _var0) {
  // (make-temporary-file (bruijn ##.k.610 2 0) (bruijn ##.x.611 0 0) (##string ##.string.648))
    V_CALL(VLookupGlobalVarFast2(runtime, "make-temporary-file"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D648.sym, VPOINTER_OTHER));
 }
}
static void global_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-append (close global_k316) (##string ##.string.703) (bruijn ##.x.612 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k316, env)}),
      VEncodePointer(&_V10_Dstring_D703.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void global_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda82, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda82, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (basename (close global_k315) (bruijn ##.file.55 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k315, env)}),
      _var1);
 }
}
static void global_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k314, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.608 1 0) (list (bruijn ##.k.609 0 0) #f) (if object? (list (bruijn ##.k.609 0 0) out-file) (map (bruijn ##.k.609 0 0) (close global_lambda82) scm-files)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "list"), runtime,
      _var0,
      VEncodeBool(false));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "list"), runtime,
      _var0,
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda82, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
}
 }
}
static void global_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k320, runtime, upenv, 1, argc, _var0) {
  // (if debug? ((bruijn ##.k.606 0 0) (##string ##.string.704)) ((bruijn ##.k.606 0 0) (##string ##.string.659)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "debug?"))) {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10_Dstring_D704.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10_Dstring_D659.sym, VPOINTER_OTHER));
}
 }
}
static void global_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k322, runtime, upenv, 1, argc, _var0) {
  // (if shared? ((bruijn ##.k.605 0 0) (##string ##.string.705)) ((bruijn ##.k.605 0 0) (##string ##.string.659)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10_Dstring_D705.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10_Dstring_D659.sym, VPOINTER_OTHER));
}
 }
}
static void global_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k331, runtime, upenv, 1, argc, _var0) {
  // (if shared? (> (bruijn ##.k.571 0 0) (bruijn ##.num-mains.53 17 7) 0) ((bruijn ##.k.571 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, ">"), runtime,
      _var0,
      VGetArg(upenv, 17-1, 7),
      VEncodeInt(0l));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k333, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.569 1 0) (compiler-error (bruijn ##.k.570 0 0) (##string ##.string.706)) ((bruijn ##.k.570 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D706.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k336, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.567 1 0) (compiler-error (bruijn ##.k.568 0 0) (##string ##.string.707)) ((bruijn ##.k.568 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D707.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D73_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D73_k342, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.73 6 0) (bruijn ##.k.560 5 0) (bruijn ##.x.562 1 0) (bruijn ##.x.563 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D73_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D73_k341, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cdr (close _V10_Dloop_D73_k342) (bruijn ##.paths.75 4 2))
    V_CALL(VLookupGlobalVarFast2(runtime, "cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k342, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D73_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D73_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-append (close _V10_Dloop_D73_k341) (bruijn ##.acc.74 3 1) (bruijn ##.x.564 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k341, env)}),
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D73_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D73_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (sprintf (close _V10_Dloop_D73_k340) (##string ##.string.708) (bruijn ##.x.565 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k340, env)}),
      VEncodePointer(&_V10_Dstring_D708.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dloop_D73_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D73_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.561 0 0) ((bruijn ##.k.560 1 0) (bruijn ##.acc.74 1 1)) (car (close _V10_Dloop_D73_k339) (bruijn ##.paths.75 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k339, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Dloop_D73_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_lambda83, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D73_lambda83, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (null? (close _V10_Dloop_D73_k338) (bruijn ##.paths.75 0 2))
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k338, env)}),
      _var2);
 }
}
static void global_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k351, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.548 0 0) (not (bruijn ##.k.545 3 0) object?) ((bruijn ##.k.545 3 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      upenv->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.547 0 0) (not (close global_k351) expand?) ((bruijn ##.k.545 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k351, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.546 0 0) (not (close global_k350) transpile?) ((bruijn ##.k.545 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k350, env)}),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.544 1 0) (not (close global_k349) bytecode?) ((bruijn ##.k.545 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k349, env)}),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k355, runtime, upenv, 1, argc, _var0) {
  // (if debug? ((bruijn ##.k.543 0 0) (##string ##.string.704)) ((bruijn ##.k.543 0 0) (##string ##.string.659)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "debug?"))) {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10_Dstring_D704.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10_Dstring_D659.sym, VPOINTER_OTHER));
}
 }
}
static void global_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k358, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.541 1 0) ((bruijn ##.k.542 0 0) (##string ##.string.709)) (sprintf (bruijn ##.k.542 0 0) (##string ##.string.710) install-root))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10_Dstring_D709.sym, VPOINTER_OTHER));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D710.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
 }
}
static void global_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k360, runtime, upenv, 1, argc, _var0) {
  // (if shared? ((bruijn ##.k.540 0 0) (##string ##.string.711)) ((bruijn ##.k.540 0 0) (##string ##.string.712)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10_Dstring_D711.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10_Dstring_D712.sym, VPOINTER_OTHER));
}
 }
}
static void global_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k363, runtime, upenv, 1, argc, _var0) {
  // (if out-file (sprintf (bruijn ##.k.535 0 0) (##string ##.string.713) cc out-file) ((bruijn ##.k.535 0 0) cc))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D713.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "cc"),
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "cc"));
}
 }
}
static void global_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k370, runtime, upenv, 1, argc, _var0) {
  // (if verbose? (displayln (bruijn ##.k.528 0 0) (bruijn ##.link-command.82 6 1)) ((bruijn ##.k.528 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "verbose?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      _var0,
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k371, runtime, upenv, 1, argc, _var0) {
  // (system (bruijn ##.k.521 14 0) (bruijn ##.link-command.82 6 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "system"), runtime,
      VGetArg(upenv, 14-1, 0),
      VGetArg(upenv, 6-1, 1));
 }
}
static void global_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k369, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k370) (close global_k371))
    V_CALL_FUNC(global_k370, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k371, env)}));
 }
}
static void global_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k368, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k369) (bruijn ##.link-command.82 4 1) (bruijn ##.x.529 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k369, env)}),
      VEncodeInt(4l), VEncodeInt(1l),
      _var0
    );
 }
}
static void global_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-append (close global_k368) (bruijn ##.link-command.82 3 1) (bruijn ##.link-command-flags.81 3 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k368, env)}),
      upenv->up->up->vars[1],
      upenv->up->up->vars[0]);
 }
}
static void global_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.530 1 0) (bruijn ##.link-command.82 4 1) (bruijn ##.x.531 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->vars[0],
      VEncodeInt(4l), VEncodeInt(1l),
      _var0
    );
 }
}
static void global_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda84, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda84, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (string-append (close global_k372) (bruijn ##.link-command.82 3 1) (bruijn ##.option.84 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k372, env)}),
      upenv->up->up->vars[1],
      _var1);
 }
}
static void global_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k366, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (for-each (close global_k367) (close global_lambda84) c-options)
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k367, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda84, env)}),
      VLookupGlobalVarFast2(runtime, "c-options"));
 }
}
static void global_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.532 1 0) (bruijn ##.link-command.82 3 1) (bruijn ##.x.533 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->vars[0],
      VEncodeInt(3l), VEncodeInt(1l),
      _var0
    );
 }
}
static void global_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda85, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (string-append (close global_k373) (bruijn ##.link-command.82 2 1) (##string ##.string.714) (bruijn ##.file.83 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k373, env)}),
      upenv->up->vars[1],
      VEncodePointer(&_V10_Dstring_D714.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void global_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k365, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (for-each (close global_k366) (close global_lambda85) (bruijn ##.x.534 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k366, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda85, env)}),
      _var0);
 }
}
static void global_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.x.522 2 0) (bruijn ##.x.523 1 0)) (append (close global_k365) obj-files (bruijn ##.cc-obj-files.47 37 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = upenv->up->vars[0];
    env->vars[1] = upenv->vars[0];
    V_CALL(VLookupGlobalVarFast2(runtime, "append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k365, env)}),
      VLookupGlobalVarFast2(runtime, "obj-files"),
      VGetArg(upenv, 37-1, 1));
    }
 }
}
static void global_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k362, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k363) (close global_k364))
    V_CALL_FUNC(global_k363, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k364, env)}));
 }
}
static void global_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-append (close global_k362) (bruijn ##.base-cc-flags.48 34 2) (bruijn ##.x.536 4 0) (bruijn ##.x.537 3 0) (bruijn ##.x.538 1 0) (bruijn ##.x.539 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k362, env)}),
      VGetArg(upenv, 34-1, 2),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void global_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k360) (close global_k361))
    V_CALL_FUNC(global_k360, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k361, env)}));
 }
}
static void global_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k358) (close global_k359))
    V_CALL_FUNC(global_k358, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k359, env)}));
 }
}
static void global_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close global_k357) platform (##string ##.string.640))
    V_CALL(VLookupGlobalVarFast2(runtime, "equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k357, env)}),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D640.sym, VPOINTER_OTHER));
 }
}
static void global_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k354, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k355) (close global_k356))
    V_CALL_FUNC(global_k355, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k356, env)}));
 }
}
static void global_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k353, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.520 1 0) (sprintf (close global_k354) (##string ##.string.715) optimization) ((bruijn ##.k.521 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k354, env)}),
      VEncodePointer(&_V10_Dstring_D715.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "optimization"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k379, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.519 0 0) (not (bruijn ##.k.516 3 0) keep?) ((bruijn ##.k.516 3 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      upenv->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "keep?"));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.518 0 0) (not (close global_k379) expand?) ((bruijn ##.k.516 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k379, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.517 0 0) (not (close global_k378) transpile?) ((bruijn ##.k.516 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k378, env)}),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.515 1 0) (not (close global_k377) bytecode?) ((bruijn ##.k.516 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k377, env)}),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k381, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.513 1 0) (for-each (bruijn ##.k.514 0 0) delete-file (bruijn ##.cc-files.46 32 0)) ((bruijn ##.k.514 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      _var0,
      VLookupGlobalVarFast2(runtime, "delete-file"),
      VGetArg(upenv, 32-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k388, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.512 0 0) (not (bruijn ##.k.508 4 0) keep?) ((bruijn ##.k.508 4 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      upenv->up->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "keep?"));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k387, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.511 0 0) (not (close global_k388) object?) ((bruijn ##.k.508 3 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k388, env)}),
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.510 0 0) (not (close global_k387) expand?) ((bruijn ##.k.508 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k387, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.509 0 0) (not (close global_k386) transpile?) ((bruijn ##.k.508 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k386, env)}),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k384, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.507 1 0) (not (close global_k385) bytecode?) ((bruijn ##.k.508 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k385, env)}),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k389, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.506 0 0) (for-each (bruijn ##.k.492 40 0) delete-file (bruijn ##.cc-obj-files.47 34 1)) ((bruijn ##.k.492 40 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VGetArg(upenv, 40-1, 0),
      VLookupGlobalVarFast2(runtime, "delete-file"),
      VGetArg(upenv, 34-1, 1));
} else {
    V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void global_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k384) (close global_k389))
    V_CALL_FUNC(global_k384, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k389, env)}));
 }
}
static void global_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k383) header?)
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k383, env)}),
      VLookupGlobalVarFast2(runtime, "header?"));
 }
}
static void global_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k381) (close global_k382))
    V_CALL_FUNC(global_k381, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k382, env)}));
 }
}
static void global_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k376) (close global_k380))
    V_CALL_FUNC(global_k376, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k380, env)}));
 }
}
static void global_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k374, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k375) header?)
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k375, env)}),
      VLookupGlobalVarFast2(runtime, "header?"));
 }
}
static void global_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k353) (close global_k374))
    V_CALL_FUNC(global_k353, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k374, env)}));
 }
}
static void global_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k347, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k348) (close global_k352))
    V_CALL_FUNC(global_k348, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k352, env)}));
 }
}
static void global_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k347) header?)
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k347, env)}),
      VLookupGlobalVarFast2(runtime, "header?"));
 }
}
static void global_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k395, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.558 0 0) (not (bruijn ##.k.556 2 0) expand?) ((bruijn ##.k.556 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      upenv->up->vars[0],
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k394, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.557 0 0) (not (close global_k395) transpile?) ((bruijn ##.k.556 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k395, env)}),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.555 1 0) (not (close global_k394) bytecode?) ((bruijn ##.k.556 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k394, env)}),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k397, runtime, upenv, 1, argc, _var0) {
  // (if verbose? (displayln (bruijn ##.k.554 0 0) (bruijn ##.cc-cmd.80 3 0)) ((bruijn ##.k.554 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "verbose?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      _var0,
      upenv->up->up->vars[0]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k398, runtime, upenv, 1, argc, _var0) {
  // (system (bruijn ##.k.550 6 0) (bruijn ##.cc-cmd.80 3 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "system"), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->up->vars[0]);
 }
}
static void global_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k396, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.552 0 0) ((close global_k397) (close global_k398)) ((bruijn ##.k.550 5 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(global_k397, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k398, env)}));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void global_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k392, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k393) (close global_k396))
    V_CALL_FUNC(global_k393, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k396, env)}));
 }
}
static void global_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k391, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.x.551 1 0)) (not (close global_k392) header?))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = upenv->vars[0];
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k392, env)}),
      VLookupGlobalVarFast2(runtime, "header?"));
    }
 }
}
static void global_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (sprintf (close global_k391) (##string ##.string.716) cc (bruijn ##.path.79 0 0) (bruijn ##.cc-paths.72 6 0) (bruijn ##.cc-command.50 27 4) (bruijn ##.obj-file.78 1 3) (bruijn ##.cc-file.77 1 2))
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k391, env)}),
      VEncodePointer(&_V10_Dstring_D716.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "cc"),
      _var0,
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 27-1, 4),
      upenv->vars[3],
      upenv->vars[2]);
 }
}
static void global_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to global_lambda86, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda86, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (realbasepath (close global_k390) (bruijn ##.scm-file.76 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "realbasepath"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k390, env)}),
      _var1);
 }
}
static void global_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (for-each (close global_k346) (close global_lambda86) scm-files (bruijn ##.cc-files.46 25 0) (bruijn ##.cc-obj-files.47 25 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k346, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda86, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"),
      VGetArg(upenv, 25-1, 0),
      VGetArg(upenv, 25-1, 1));
 }
}
static void global_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k345) (bruijn ##.cc-paths.72 3 0) (bruijn ##.x.559 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k345, env)}),
      VEncodeInt(3l), VEncodeInt(0l),
      _var0
    );
 }
}
static void global_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.73 1 0) (close global_k344) (##string ##.string.659) (bruijn ##.x.566 0 0))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k344, env)}),
      VEncodePointer(&_V10_Dstring_D659.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void global_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 (#f) (letrec 1 ((close _V10_Dloop_D73_lambda83)) (cdr (close global_k343) paths)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeBool(false);
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_lambda83, env)});
    V_CALL(VLookupGlobalVarFast2(runtime, "cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k343, env)}),
      VLookupGlobalVarFast2(runtime, "paths"));
    }
    }
 }
}
static void global_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k336) (close global_k337))
    V_CALL_FUNC(global_k336, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k337, env)}));
 }
}
static void global_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k334, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (> (close global_k335) (bruijn ##.num-mains.53 18 7) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, ">"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k335, env)}),
      VGetArg(upenv, 18-1, 7),
      VEncodeInt(1l));
 }
}
static void global_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k333) (close global_k334))
    V_CALL_FUNC(global_k333, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k334, env)}));
 }
}
static void global_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k331) (close global_k332))
    V_CALL_FUNC(global_k331, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k332, env)}));
 }
}
static void global_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k330) (bruijn ##.num-mains.53 15 7) (bruijn ##.x.572 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k330, env)}),
      VEncodeInt(15l), VEncodeInt(7l),
      _var0
    );
 }
}
static void global_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k399, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.x.56 1 1) ((bruijn ##.k.575 0 0) 1) ((bruijn ##.k.575 0 0) 0))
if(VDecodeBool(
upenv->vars[1])) {
    V_CALL(_var0, runtime,
      VEncodeInt(1l));
} else {
    V_CALL(_var0, runtime,
      VEncodeInt(0l));
}
 }
}
static void global_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k400, runtime, upenv, 1, argc, _var0) {
  // (+ (bruijn ##.k.573 1 0) (bruijn ##.acc.57 1 2) (bruijn ##.x.574 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "+"), runtime,
      upenv->vars[0],
      upenv->vars[2],
      _var0);
 }
}
static void global_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to global_lambda87, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda87, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close global_k399) (close global_k400))
    V_CALL_FUNC(global_k399, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k400, env)}));
 }
}
static void global_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (fold (close global_k329) (close global_lambda87) 0 (bruijn ##.x.576 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "fold"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k329, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda87, env)}),
      VEncodeInt(0l),
      _var0);
 }
}
static void global_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k404, runtime, upenv, 1, argc, _var0) {
  // (append (bruijn ##.k.598 1 0) (bruijn ##.x.599 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "append"), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k403, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.fd.62 1 0) (read-all (close global_k404) (bruijn ##.fd.62 1 0)) (compiler-error (bruijn ##.k.598 0 0) (##string ##.string.717) (bruijn ##.scm-file.58 4 1)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "read-all"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k404, env)}),
      upenv->vars[0]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D717.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]);
}
 }
}
static void global_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k421, runtime, upenv, 1, argc, _var0) {
  // (not (bruijn ##.k.578 18 0) (bruijn ##.x.583 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VGetArg(upenv, 18-1, 0),
      _var0);
 }
}
static void global_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close global_k421) (bruijn ##.x.584 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k421, env)}),
      _var0);
 }
}
static void global_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k419, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (take-right (close global_k420) (bruijn ##.funs.68 4 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "take-right"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k420, env)}),
      upenv->up->up->up->vars[0],
      VEncodeInt(1l));
 }
}
static void global_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k418, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (write-bytecode (close global_k419) (bruijn ##.x.585 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "write-bytecode"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k419, env)}),
      _var0);
 }
}
static void global_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (apply (close global_k418) to-bytecode (bruijn ##.x.586 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "apply"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k418, env)}),
      VLookupGlobalVarFast2(runtime, "to-bytecode"),
      _var0);
 }
}
static void global_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close global_k417) debug? (bruijn ##.x.587 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k417, env)}),
      VLookupGlobalVarFast2(runtime, "debug?"),
      _var0);
 }
}
static void global_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k423, runtime, upenv, 1, argc, _var0) {
  // (apply (bruijn ##.k.578 14 0) printout2 (bruijn ##.x.588 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "apply"), runtime,
      VGetArg(upenv, 14-1, 0),
      VLookupGlobalVarFast2(runtime, "printout2"),
      _var0);
 }
}
static void global_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k422, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close global_k423) debug? (bruijn ##.x.589 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k423, env)}),
      VLookupGlobalVarFast2(runtime, "debug?"),
      _var0);
 }
}
static void global_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k415, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if bytecode? (cons (close global_k416) shared? (bruijn ##.funs.68 0 0)) (cons (close global_k422) shared? (bruijn ##.funs.68 0 0)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k416, env)}),
      VLookupGlobalVarFast2(runtime, "shared?"),
      _var0);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k422, env)}),
      VLookupGlobalVarFast2(runtime, "shared?"),
      _var0);
}
 }
}
static void global_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k414, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (to-functions (close global_k415) (bruijn ##.bruijn.67 1 0) (bruijn ##.x.590 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "to-functions"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k415, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void global_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k413, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k414) bytecode?)
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k414, env)}),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
 }
}
static void global_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k412, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.581 0 0) (for-each (bruijn ##.k.578 9 0) pretty-print (bruijn ##.opt.66 1 0)) (map (close global_k413) bruijn-ify (bruijn ##.opt.66 1 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VGetArg(upenv, 9-1, 0),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      upenv->vars[0]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k413, env)}),
      VLookupGlobalVarFast2(runtime, "bruijn-ify"),
      upenv->vars[0]);
}
 }
}
static void global_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k411, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close global_k412) expand? 2)
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k412, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(2l));
 }
}
static void global_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k424, runtime, upenv, 1, argc, _var0) {
  // (optimize (bruijn ##.k.591 1 0) (bruijn ##.expr.69 1 1) (bruijn ##.x.592 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "optimize"), runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
 }
}
static void global_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda90, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda90, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (not (close global_k424) bytecode?)
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k424, env)}),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
 }
}
static void global_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.580 0 0) (for-each (bruijn ##.k.578 7 0) pretty-print (bruijn ##.cps.65 1 0)) (map (close global_k411) (close global_lambda90) (bruijn ##.cps.65 1 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VGetArg(upenv, 7-1, 0),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      upenv->vars[0]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k411, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda90, env)}),
      upenv->vars[0]);
}
 }
}
static void global_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k409, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close global_k410) expand? 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k410, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(1l));
 }
}
static void global_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda91, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda91, runtime, upenv, 2, argc, _var0, _var1) {
  // (to-cps (bruijn ##.k.593 0 0) (bruijn ##.expr.70 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "to-cps"), runtime,
      _var0,
      _var1);
 }
}
static void global_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (map (close global_k409) (close global_lambda91) (bruijn ##.x.594 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k409, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda91, env)}),
      _var0);
 }
}
static void global_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k407, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.579 0 0) (for-each (bruijn ##.k.578 4 0) pretty-print (bruijn ##.expanded.64 1 0)) (apply (close global_k408) append (bruijn ##.expanded.64 1 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      upenv->up->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      upenv->vars[0]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "apply"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k408, env)}),
      VLookupGlobalVarFast2(runtime, "append"),
      upenv->vars[0]);
}
 }
}
static void global_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close global_k407) expand? 0)
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k407, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(0l));
 }
}
static void global_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k426, runtime, upenv, 1, argc, _var0) {
  // (map (bruijn ##.k.595 2 0) alpha-convert (bruijn ##.x.596 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      upenv->up->vars[0],
      VLookupGlobalVarFast2(runtime, "alpha-convert"),
      _var0);
 }
}
static void global_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k425, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (expand-toplevel (close global_k426) (bruijn ##.e.71 1 1) (bruijn ##.x.597 0 0) (bruijn ##.architecture.51 20 5))
    V_CALL(VLookupGlobalVarFast2(runtime, "expand-toplevel"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k426, env)}),
      upenv->vars[1],
      _var0,
      VGetArg(upenv, 20-1, 5));
 }
}
static void global_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda92, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (cons (close global_k425) (bruijn ##.path.61 4 0) paths)
    V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k425, env)}),
      upenv->up->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "paths"));
 }
}
static void global_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k405, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (map (close global_k406) (close global_lambda92) (bruijn ##.file.63 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k406, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda92, env)}),
      _var0);
 }
}
static void global_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k403) (close global_k405))
    V_CALL_FUNC(global_k403, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k405, env)}));
 }
}
static void global_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-file (close global_k402) (bruijn ##.scm-file.58 2 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "open-input-file"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k402, env)}),
      upenv->up->vars[1]);
 }
}
static void global_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (with-output-to-file (bruijn ##.k.577 1 0) (bruijn ##.cc-file.59 1 2) (close global_lambda89))
    V_CALL(VLookupGlobalVarFast2(runtime, "with-output-to-file"), runtime,
      upenv->vars[0],
      upenv->vars[2],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda89, env)}));
 }
}
static void global_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to global_lambda88, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda88, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (realbasepath (close global_k401) (bruijn ##.scm-file.58 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "realbasepath"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k401, env)}),
      _var1);
 }
}
static void global_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (map (close global_k328) (close global_lambda88) scm-files (bruijn ##.cc-files.46 13 0) (bruijn ##.cc-obj-files.47 13 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k328, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda88, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"),
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 13-1, 1));
 }
}
static void global_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k327) (bruijn ##.cc-command.50 12 4) (bruijn ##.x.600 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k327, env)}),
      VEncodeInt(12l), VEncodeInt(4l),
      _var0
    );
 }
}
static void global_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (apply (close global_k326) string-append (bruijn ##.cc-command-flags.49 11 3) c-options)
    V_CALL(VLookupGlobalVarFast2(runtime, "apply"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k326, env)}),
      VLookupGlobalVarFast2(runtime, "string-append"),
      VGetArg(upenv, 11-1, 3),
      VLookupGlobalVarFast2(runtime, "c-options"));
 }
}
static void global_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k325) (bruijn ##.cc-command-flags.49 10 3) (bruijn ##.x.601 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k325, env)}),
      VEncodeInt(10l), VEncodeInt(3l),
      _var0
    );
 }
}
static void global_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-append (close global_k324) (bruijn ##.base-cc-flags.48 9 2) (bruijn ##.x.602 2 0) (bruijn ##.x.603 1 0) (bruijn ##.x.604 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k324, env)}),
      VGetArg(upenv, 9-1, 2),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void global_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k322) (close global_k323))
    V_CALL_FUNC(global_k322, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k323, env)}));
 }
}
static void global_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k320) (close global_k321))
    V_CALL_FUNC(global_k320, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k321, env)}));
 }
}
static void global_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (sprintf (close global_k319) (##string ##.string.715) optimization)
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k319, env)}),
      VEncodePointer(&_V10_Dstring_D715.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "optimization"));
 }
}
static void global_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k318) (bruijn ##.cc-obj-files.47 5 1) (bruijn ##.x.607 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k318, env)}),
      VEncodeInt(5l), VEncodeInt(1l),
      _var0
    );
 }
}
static void global_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k314) (close global_k317))
    V_CALL_FUNC(global_k314, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k317, env)}));
 }
}
static void global_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k312) (close global_k313))
    V_CALL_FUNC(global_k312, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k313, env)}));
 }
}
static void global_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k311) (bruijn ##.cc-files.46 2 0) (bruijn ##.x.614 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k311, env)}),
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
 }
}
static void global_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k307) (close global_k310))
    V_CALL_FUNC(global_k307, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k310, env)}));
 }
}
static void global_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 8 (#f #f (bruijn ##.x.493 4 0) #f #f (bruijn ##.x.494 2 0) (bruijn ##.x.495 1 0) #f) ((close global_k305) (close global_k306)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[8]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 8, 8, upenv);
    env->vars[0] = VEncodeBool(false);
    env->vars[1] = VEncodeBool(false);
    env->vars[2] = upenv->up->up->up->vars[0];
    env->vars[3] = VEncodeBool(false);
    env->vars[4] = VEncodeBool(false);
    env->vars[5] = upenv->up->vars[0];
    env->vars[6] = upenv->vars[0];
    env->vars[7] = VEncodeBool(false);
    V_CALL_FUNC(global_k305, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k306, env)}));
    }
 }
}
static void global_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (current-output-port (close global_k304))
    V_CALL(VLookupGlobalVarFast2(runtime, "current-output-port"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k304, env)}));
 }
}
static void global_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k302) (close global_k303))
    V_CALL_FUNC(global_k302, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k303, env)}));
 }
}
static void global_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k300, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close global_k301) platform (##string ##.string.688))
    V_CALL(VLookupGlobalVarFast2(runtime, "equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k301, env)}),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D688.sym, VPOINTER_OTHER));
 }
}
static void global_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k299) (close global_k300))
    V_CALL_FUNC(global_k299, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k300, env)}));
 }
}
static void global_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close global_k298) platform (##string ##.string.640))
    V_CALL(VLookupGlobalVarFast2(runtime, "equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k298, env)}),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D640.sym, VPOINTER_OTHER));
 }
}
static void global_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (with-exception-handler (bruijn ##.next.491 0 0) handle-exception (close global_lambda80))
    V_CALL(VLookupGlobalVarFast2(runtime, "with-exception-handler"), runtime,
      _var0,
      VLookupGlobalVarFast2(runtime, "handle-exception"),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda80, env)}));
 }
}
void toplevel0(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda1, env, runtime,
      _k);
}
void toplevel1(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda2, env, runtime,
      _k);
}
void toplevel2(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda3, env, runtime,
      _k);
}
void toplevel3(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda4, env, runtime,
      _k);
}
void toplevel4(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda5, env, runtime,
      _k);
}
void toplevel5(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda6, env, runtime,
      _k);
}
void toplevel6(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda7, env, runtime,
      _k);
}
void toplevel7(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda8, env, runtime,
      _k);
}
void toplevel8(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda9, env, runtime,
      _k);
}
void toplevel9(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda10, env, runtime,
      _k);
}
void toplevel10(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda11, env, runtime,
      _k);
}
void toplevel11(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda12, env, runtime,
      _k);
}
void toplevel12(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda13, env, runtime,
      _k);
}
void toplevel13(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda14, env, runtime,
      _k);
}
void toplevel14(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda15, env, runtime,
      _k);
}
void toplevel15(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda16, env, runtime,
      _k);
}
void toplevel16(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda17, env, runtime,
      _k);
}
void toplevel17(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda18, env, runtime,
      _k);
}
void toplevel18(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda19, env, runtime,
      _k);
}
void toplevel19(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda20, env, runtime,
      _k);
}
void toplevel20(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda21, env, runtime,
      _k);
}
void toplevel21(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda22, env, runtime,
      _k);
}
void toplevel22(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda23, env, runtime,
      _k);
}
void toplevel23(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda24, env, runtime,
      _k);
}
void toplevel24(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda25, env, runtime,
      _k);
}
void toplevel25(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda26, env, runtime,
      _k);
}
void toplevel26(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda27, env, runtime,
      _k);
}
void toplevel27(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda28, env, runtime,
      _k);
}
void toplevel28(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda29, env, runtime,
      _k);
}
void toplevel29(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda30, env, runtime,
      _k);
}
void toplevel30(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda31, env, runtime,
      _k);
}
void toplevel31(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda32, env, runtime,
      _k);
}
void toplevel32(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda33, env, runtime,
      _k);
}
void toplevel33(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda34, env, runtime,
      _k);
}
void toplevel34(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda35, env, runtime,
      _k);
}
void toplevel35(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda36, env, runtime,
      _k);
}
void toplevel36(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda37, env, runtime,
      _k);
}
void toplevel37(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda40, env, runtime,
      _k);
}
void toplevel38(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda43, env, runtime,
      _k);
}
void toplevel39(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda46, env, runtime,
      _k);
}
void toplevel40(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda49, env, runtime,
      _k);
}
void toplevel41(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda52, env, runtime,
      _k);
}
void toplevel42(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda54, env, runtime,
      _k);
}
void toplevel43(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda56, env, runtime,
      _k);
}
void toplevel44(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda59, env, runtime,
      _k);
}
void toplevel45(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda61, env, runtime,
      _k);
}
void toplevel46(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda65, env, runtime,
      _k);
}
void toplevel47(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda69, env, runtime,
      _k);
}
void toplevel48(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda71, env, runtime,
      _k);
}
void toplevel49(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda73, env, runtime,
      _k);
}
void toplevel50(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda76, env, runtime,
      _k);
}
void toplevel51(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda79, env, runtime,
      _k);
}
VThunk VanityToplevels[] = {
  toplevel0
,  toplevel1
,  toplevel2
,  toplevel3
,  toplevel4
,  toplevel5
,  toplevel6
,  toplevel7
,  toplevel8
,  toplevel9
,  toplevel10
,  toplevel11
,  toplevel12
,  toplevel13
,  toplevel14
,  toplevel15
,  toplevel16
,  toplevel17
,  toplevel18
,  toplevel19
,  toplevel20
,  toplevel21
,  toplevel22
,  toplevel23
,  toplevel24
,  toplevel25
,  toplevel26
,  toplevel27
,  toplevel28
,  toplevel29
,  toplevel30
,  toplevel31
,  toplevel32
,  toplevel33
,  toplevel34
,  toplevel35
,  toplevel36
,  toplevel37
,  toplevel38
,  toplevel39
,  toplevel40
,  toplevel41
,  toplevel42
,  toplevel43
,  toplevel44
,  toplevel45
,  toplevel46
,  toplevel47
,  toplevel48
,  toplevel49
,  toplevel50
,  toplevel51
,};
int VanityToplevelCount = sizeof VanityToplevels / sizeof *VanityToplevels;
int main(int argc, char ** argv) {
  VRuntime * runtime;
  VInitRuntime2(&runtime, argc, argv);
  return VDecodeExitCode(VStart2(runtime, VanityToplevelCount, VanityToplevels));
}
