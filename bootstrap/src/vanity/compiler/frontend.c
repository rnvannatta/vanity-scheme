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
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D804 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "file does not exist" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D803 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "read" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D802 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "expand" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D801 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "cps" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D800 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "optimize" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D799 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "extract" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D798 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "transpile" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D797 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "free variables in program" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D796 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "~A -I~A ~A ~A -c -o ~A ~A" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D795 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "compile" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D794 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, " -O~A" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D793 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D792 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~A -o ~A" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D791 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, " -Wl,--no-as-needed" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D790 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, " -fPIC -shared" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D789 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, " -L~A/x86_64-w64-mingw32/lib/ -lvscheme" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D788 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, " -lvscheme" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D787 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, " -I~A" };
static struct { VBlob sym; char bytes[87]; } _V10_Dstring_D786 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 87 }, "program has toplevel expressions in multiple files, and so it generated multiple mains" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D785 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D784 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, " -fPIC" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D783 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " -g" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D782 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "/tmp/" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D781 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "sysv_amd64" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D780 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "windows_amd64" };
static struct { VBlob sym; char bytes[108]; } _V10_Dstring_D779 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 108 }, " -Wl,--export-all-symbols -Wl,--stack,8388608 -Wmissing-braces -masm=intel -I~A/x86_64-w64-mingw32/include/" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D778 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, " -rdynamic -Wmissing-braces -masm=intel" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D777 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "vghtco:I:O:E:W:" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D776 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".vasm" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D775 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".scmh" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D774 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".escm" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D773 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".c" };
static struct { VBlob sym; char bytes[56]; } _V10_Dstring_D772 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 56 }, "FIXME: -h and -c and -t and -E can only handle one file" };
static struct { VBlob sym; char bytes[89]; } _V10_Dstring_D771 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 89 }, "Cannot specify '-h' or '-c' or '-t' or '-E' or '--makefile' with '-o' and multiple files" };
static struct { VBlob sym; char bytes[75]; } _V10_Dstring_D770 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 75 }, "Cannot specify '-h' '-c' or '-t' or '-E' or '--makefile' with object files" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D769 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "No input file provided" };
static struct { VBlob sym; char bytes[68]; } _V10_Dstring_D768 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "Only one of '-h' or '-c' or '-t' or '-E' or '--makefile' can be set" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D767 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "windows" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D766 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "Unknown --platform, only 'linux' and 'windows' are valid" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D765 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "/usr/bin/x86_64-w64-mingw32-gcc" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D764 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "gcc" };
VWEAK VWORD _V0help;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0help = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "help" };
VWEAK VWORD _V0version;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "version" };
VWEAK VWORD _V0shared;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0shared = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "shared" };
VWEAK VWORD _V0keep__temps;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0keep__temps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "keep-temps" };
VWEAK VWORD _V0makefile;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0makefile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "makefile" };
VWEAK VWORD _V0maketarget;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0maketarget = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "maketarget" };
VWEAK VWORD _V0bytecode;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0bytecode = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "bytecode" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D763 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "Unknown CLI option" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D762 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "unbound" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D761 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "no-unbound" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D760 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "error=unbound" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D759 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "no-error=unbound" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D758 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "Wrapper flag -W missing comma" };
static struct { VBlob sym; char bytes[67]; } _V10_Dstring_D757 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 67 }, "Wrapper flag -W can only pass args to the C compiler, eg -Wc,-Ilib" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D756 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "Expand flag -E expects integer between 0 and 2 inclusive" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D755 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "Optimization flag -O expects integer between 0 and 3 inclusive" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D754 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ".scm" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D753 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "File has unrecognized extension: ~A" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D752 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, ".ss" };
VWEAK VWORD _V10vcore_Dpush__value;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dpush__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.push-value" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D751 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "vsc: " };
VWEAK VWORD _V10vcore_Dpop__value;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dpop__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.pop-value" };
VWEAK VWORD _V0handle__exception;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0handle__exception = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "handle-exception" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D750 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "Vanity Scheme Compiler ~A.~A~N" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D749 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "Copyright (C) 2023 Richard Van Natta" };
VWEAK VWORD _V0display__version;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0display__version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "display-version" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D748 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "Usage: vsc [options] file..." };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D747 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "Options:" };
static struct { VBlob sym; char bytes[94]; } _V10_Dstring_D746 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 94 }, "  -O<num>         Compile with optimization levels 0 (slowest codegen) to 3 (fastest codegen)" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D745 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  -g              Compile with debug symbols" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D744 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "  -h              Generate header file instead of compiling" };
static struct { VBlob sym; char bytes[118]; } _V10_Dstring_D743 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 118 }, "  -E<num>         Expand only, do not compile or link. 0: macros only, 1: continuation passing style, 2: optimization" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D742 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "  -t              Transpile only, do not compile or link" };
static struct { VBlob sym; char bytes[68]; } _V10_Dstring_D741 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "  -c              Transpile, compile, and assemble, but do not link" };
static struct { VBlob sym; char bytes[47]; } _V10_Dstring_D740 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 47 }, "  -o<file>        Place the output into <file>" };
static struct { VBlob sym; char bytes[87]; } _V10_Dstring_D739 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 87 }, "  -I<dir>         Add the directory to the list to be searched for scheme header files" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D738 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "  -Wc,<option>    Pass comma seperated to the C compiler" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D737 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  -v              Show intermediate commands" };
static struct { VBlob sym; char bytes[86]; } _V10_Dstring_D736 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 86 }, "  --makefile      Generate makefile dependencies, similar to gcc invoked with -MM -MG" };
static struct { VBlob sym; char bytes[110]; } _V10_Dstring_D735 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 110 }, "  --maketarget    Specify the target of the make dependency, additional --maketarget's add additional targets" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D734 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "  --shared        Compile as shared library" };
static struct { VBlob sym; char bytes[76]; } _V10_Dstring_D733 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 76 }, "  --keep-temps    Keep temporary compilation files, such as C intermediates" };
static struct { VBlob sym; char bytes[81]; } _V10_Dstring_D732 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 81 }, "  --platform=<os> Which OS to make executables for. Either 'linux' or 'windows'." };
static struct { VBlob sym; char bytes[72]; } _V10_Dstring_D731 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 72 }, "  --cc=<compiler> Use the C compiler of your choice. The default is gcc" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D730 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "  --help          You know about this" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D729 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "  --version       Show version and build info" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D728 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[58]; } _V10_Dstring_D727 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 58 }, "  -Wunbound     Enable unbound toplevel variable warnings" };
VWEAK VWORD _V0display__help;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0display__help = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "display-help" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D726 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "~A " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D725 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ":" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D724 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " ~A" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D723 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "invalid import" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D722 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".o" };
VWEAK VWORD _V0gen__makefile;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0gen__makefile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "gen-makefile" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D721 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "File did not produce a valid header" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D720 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "Only one statement permitted in header generation" };
VWEAK VWORD _V0gen__header;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0gen__header = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "gen-header" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D719 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "/bin/rm ~A" };
VWEAK VWORD _V0delete__file;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0delete__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "delete-file" };
VWEAK VWORD _V0count__true;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0count__true = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "count-true" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D718 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "realpath `dirname ~A`" };
VWEAK VWORD _V0realbasepath;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0realbasepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "realbasepath" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D717 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "realpath ~A" };
VWEAK VWORD _V0realpath;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0realpath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "realpath" };
VWEAK VWORD _V0decomma;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0decomma = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "decomma" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D716 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "." };
VWEAK VWORD _V0basepath;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0basepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "basepath" };
VWEAK VWORD _V0basename;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0basename = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "basename" };
VWEAK VWORD _V0change__extension;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0change__extension = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "change-extension" };
VWEAK VWORD _V0extension;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0extension = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "extension" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D715 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "~A: ~A seconds~N" };
VWEAK VWORD _V0benchmark;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0benchmark = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "benchmark" };
VWEAK VWORD _V0stdout;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "stdout" };
VWEAK VWORD _V0benchmark_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0benchmark_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "benchmark\?" };
VWEAK VWORD _V0maketargets;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0maketargets = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "maketargets" };
VWEAK VWORD _V0makefile_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0makefile_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "makefile\?" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D714 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "~Ainclude" };
VWEAK VWORD _V0paths;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0paths = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "paths" };
VWEAK VWORD _V0c__options;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0c__options = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "c-options" };
VWEAK VWORD _V0werror__unbound__variables;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V0werror__unbound__variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "werror-unbound-variables" };
VWEAK VWORD _V0w__unbound__variables;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0w__unbound__variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "w-unbound-variables" };
VWEAK VWORD _V0cc;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0cc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "cc" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D713 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "linux" };
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
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D712 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "_V0vanity_V0compiler_V0alpha__convert_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D711 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D710 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "_V0vanity_V0compiler_V0library_V20" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D709 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "_V0vanity_V0compiler_V0bytecode_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D708 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0transpile_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D707 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0lower_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D706 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0cps_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D705 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0expand_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D704 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0getopt_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D703 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D702 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D701 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D700 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D699 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D698 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
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
  // (##vcore.multidefine (bruijn ##.next.104 1 0) (bruijn ##.x.105 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      upenv->vars[0],
      _var0);
}
static void global_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k1) (##string ##.string.698))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k1, env)}),
      VEncodePointer(&_V10_Dstring_D698.sym, VPOINTER_OTHER));
}
static void global_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.106 1 0) (bruijn ##.x.107 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      upenv->vars[0],
      _var0);
}
static void global_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k2) (##string ##.string.699))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k2, env)}),
      VEncodePointer(&_V10_Dstring_D699.sym, VPOINTER_OTHER));
}
static void global_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.108 1 0) (bruijn ##.x.109 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      upenv->vars[0],
      _var0);
}
static void global_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k3) (##string ##.string.700))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k3, env)}),
      VEncodePointer(&_V10_Dstring_D700.sym, VPOINTER_OTHER));
}
static void global_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.110 1 0) (bruijn ##.x.111 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      upenv->vars[0],
      _var0);
}
static void global_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k4) (##string ##.string.701))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k4, env)}),
      VEncodePointer(&_V10_Dstring_D701.sym, VPOINTER_OTHER));
}
static void global_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.112 1 0) (bruijn ##.x.113 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      upenv->vars[0],
      _var0);
}
static void global_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k5) (##string ##.string.702))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k5, env)}),
      VEncodePointer(&_V10_Dstring_D702.sym, VPOINTER_OTHER));
}
static void global_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.114 1 0) (bruijn ##.x.115 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      upenv->vars[0],
      _var0);
}
static void global_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k6) (##string ##.string.703))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k6, env)}),
      VEncodePointer(&_V10_Dstring_D703.sym, VPOINTER_OTHER));
}
static void global_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.116 1 0) (bruijn ##.x.117 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      upenv->vars[0],
      _var0);
}
static void global_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k7) (##string ##.string.704))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k7, env)}),
      VEncodePointer(&_V10_Dstring_D704.sym, VPOINTER_OTHER));
}
static void global_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.118 1 0) (bruijn ##.x.119 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      upenv->vars[0],
      _var0);
}
static void global_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k8) (##string ##.string.705))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k8, env)}),
      VEncodePointer(&_V10_Dstring_D705.sym, VPOINTER_OTHER));
}
static void global_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.120 1 0) (bruijn ##.x.121 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      upenv->vars[0],
      _var0);
}
static void global_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k9) (##string ##.string.706))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k9, env)}),
      VEncodePointer(&_V10_Dstring_D706.sym, VPOINTER_OTHER));
}
static void global_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.122 1 0) (bruijn ##.x.123 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      upenv->vars[0],
      _var0);
}
static void global_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k10) (##string ##.string.707))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k10, env)}),
      VEncodePointer(&_V10_Dstring_D707.sym, VPOINTER_OTHER));
}
static void global_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.124 1 0) (bruijn ##.x.125 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      upenv->vars[0],
      _var0);
}
static void global_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k11) (##string ##.string.708))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k11, env)}),
      VEncodePointer(&_V10_Dstring_D708.sym, VPOINTER_OTHER));
}
static void global_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.126 1 0) (bruijn ##.x.127 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      upenv->vars[0],
      _var0);
}
static void global_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k12) (##string ##.string.709))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k12, env)}),
      VEncodePointer(&_V10_Dstring_D709.sym, VPOINTER_OTHER));
}
static void global_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.128 1 0) (bruijn ##.x.129 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      upenv->vars[0],
      _var0);
}
static void global_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k13) (##string ##.string.710))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k13, env)}),
      VEncodePointer(&_V10_Dstring_D710.sym, VPOINTER_OTHER));
}
static void global_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.130 1 0) (bruijn ##.x.131 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      upenv->vars[0],
      _var0);
}
static void global_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k14) (##string ##.string.711))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k14, env)}),
      VEncodePointer(&_V10_Dstring_D711.sym, VPOINTER_OTHER));
}
static void global_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.next.132 1 0) (bruijn ##.x.133 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      upenv->vars[0],
      _var0);
}
static void global_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k15) (##string ##.string.712))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k15, env)}),
      VEncodePointer(&_V10_Dstring_D712.sym, VPOINTER_OTHER));
}
static void global_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.134 0 0) scm-files '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0scm__files,
      VNULL
    );
}
static void global_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.135 0 0) obj-files '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0obj__files,
      VNULL
    );
}
static void global_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.136 0 0) shared? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0shared_Q,
      VEncodeBool(false)
    );
}
static void global_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.137 0 0) expand? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0expand_Q,
      VEncodeBool(false)
    );
}
static void global_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.138 0 0) keep? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0keep_Q,
      VEncodeBool(false)
    );
}
static void global_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.139 0 0) header? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0header_Q,
      VEncodeBool(false)
    );
}
static void global_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.140 0 0) bytecode? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0bytecode_Q,
      VEncodeBool(false)
    );
}
static void global_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.141 0 0) transpile? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0transpile_Q,
      VEncodeBool(false)
    );
}
static void global_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.142 0 0) object? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0object_Q,
      VEncodeBool(false)
    );
}
static void global_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.143 0 0) debug? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0debug_Q,
      VEncodeBool(false)
    );
}
static void global_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.144 0 0) verbose? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0verbose_Q,
      VEncodeBool(false)
    );
}
static void global_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.145 0 0) optimization 1)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0optimization,
      VEncodeInt(1l)
    );
}
static void global_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.146 0 0) api 1)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0api,
      VEncodeInt(1l)
    );
}
static void global_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.147 0 0) out-file #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0out__file,
      VEncodeBool(false)
    );
}
static void global_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.148 0 0) platform (##string ##.string.713))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0platform,
      VEncodePointer(&_V10_Dstring_D713.sym, VPOINTER_OTHER)
    );
}
static void global_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.149 0 0) cc #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0cc,
      VEncodeBool(false)
    );
}
static void global_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.150 0 0) w-unbound-variables #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0w__unbound__variables,
      VEncodeBool(false)
    );
}
static void global_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.151 0 0) werror-unbound-variables #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0werror__unbound__variables,
      VEncodeBool(false)
    );
}
static void global_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.152 0 0) c-options '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0c__options,
      VNULL
    );
}
static void global_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.153 2 0) paths (bruijn ##.x.154 0 0))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      upenv->up->vars[0],
      _V0paths,
      _var0
    );
}
static void global_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (list (close global_k17) (bruijn ##.x.155 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k17, env)}),
      _var0);
}
static void global_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (sprintf (close global_k16) (##string ##.string.714) install-root)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k16, env)}),
      VEncodePointer(&_V10_Dstring_D714.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
static void global_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.156 0 0) makefile? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0makefile_Q,
      VEncodeBool(false)
    );
}
static void global_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.157 0 0) maketargets '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0maketargets,
      VNULL
    );
}
static void global_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.158 0 0) benchmark? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0benchmark_Q,
      VEncodeBool(false)
    );
}
static void global_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.159 1 0) stdout (bruijn ##.x.160 0 0))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      upenv->vars[0],
      _V0stdout,
      _var0
    );
}
static void global_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (current-output-port (close global_k18))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k18, env)}));
}
static void _V0benchmark_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (format (bruijn ##.k.165 3 0) stdout (##string ##.string.715) (bruijn ##.label.0 7 1) (bruijn ##.x.166 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 5,
      upenv->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "stdout"),
      VEncodePointer(&_V10_Dstring_D715.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 1),
      _var0);
}
static void _V0benchmark_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (/ (close _V0benchmark_k24) (bruijn ##.x.167 1 0) (bruijn ##.x.168 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "/")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0benchmark_k24, env)}),
      upenv->vars[0],
      _var0);
}
static void _V0benchmark_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (jiffies-per-second (close _V0benchmark_k23))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "jiffies-per-second")), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0benchmark_k23, env)}));
}
static void _V0benchmark_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if benchmark? (- (close _V0benchmark_k22) (bruijn ##.end.4 1 0) (bruijn ##.start.2 3 0)) ((bruijn ##.k.165 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "benchmark?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0benchmark_k22, env)}),
      upenv->vars[0],
      upenv->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0benchmark_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (apply (bruijn ##.k.163 2 0) values (bruijn ##.args.3 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      upenv->up->vars[0],
      VLookupGlobalVarFast2(runtime, "values"),
      upenv->up->vars[1]);
}
static void _V0benchmark_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0benchmark_k21) (close _V0benchmark_k25))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0benchmark_k21, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0benchmark_k25, env)}));
}
static void _V0benchmark_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_lambda42, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // (current-jiffy (close _V0benchmark_k20))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-jiffy")), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0benchmark_k20, env)}));
}
static void _V0benchmark_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (call-with-values (bruijn ##.k.162 1 0) (bruijn ##.thunk.1 1 2) (close _V0benchmark_lambda42))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "call-with-values")), 3,
      upenv->vars[0],
      upenv->vars[2],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0benchmark_lambda42, env)}));
}
static void _V0benchmark_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_lambda41, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (current-jiffy (close _V0benchmark_k19))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-jiffy")), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0benchmark_k19, env)}));
}
static void global_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.161 0 0) benchmark (close _V0benchmark_lambda41))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0benchmark,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0benchmark_lambda41, env)})
    );
}
static void _V10_Dloop_D6_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D6_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.6 5 0) (bruijn ##.k.171 4 0) (bruijn ##.x.174 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 2,
      upenv->up->up->up->vars[0],
      _var0);
}
static void _V10_Dloop_D6_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D6_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.173 0 0) (substring (bruijn ##.k.171 3 0) (bruijn ##.file.5 5 1) (bruijn ##.i.7 3 1)) (- (close _V10_Dloop_D6_k29) (bruijn ##.i.7 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D6_k29, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
}
static void _V10_Dloop_D6_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D6_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D6_k28) #\. (bruijn ##.x.175 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D6_k28, env)}),
      VEncodeChar('.'),
      _var0);
}
static void _V10_Dloop_D6_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D6_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.172 0 0) ((bruijn ##.k.171 1 0) #f) (string-ref (close _V10_Dloop_D6_k27) (bruijn ##.file.5 3 1) (bruijn ##.i.7 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D6_k27, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
}
static void _V10_Dloop_D6_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D6_lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V10_Dloop_D6_k26) (bruijn ##.i.7 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D6_k26, env)}),
      _var1,
      VEncodeInt(0l));
}
static void _V0extension_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0extension_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.6 2 0) (bruijn ##.k.170 3 0) (bruijn ##.x.176 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 2,
      upenv->up->up->vars[0],
      _var0);
}
static void _V0extension_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0extension_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0extension_k31) (bruijn ##.x.177 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k31, env)}),
      _var0,
      VEncodeInt(1l));
}
static void _V0extension_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0extension_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D6_lambda45)) (string-length (close _V0extension_k30) (bruijn ##.file.5 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D6_lambda45, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k30, env)}),
      upenv->vars[1]);
    }
}
static void global_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.169 0 0) extension (close _V0extension_lambda44))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0extension,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_lambda44, env)})
    );
}
static void _V10_Dloop_D10_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D10_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (string-append (bruijn ##.k.180 4 0) (bruijn ##.x.183 0 0) (bruijn ##.new.9 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      upenv->up->up->up->vars[0],
      _var0,
      VGetArg(upenv, 6-1, 2));
}
static void _V10_Dloop_D10_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D10_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.10 5 0) (bruijn ##.k.180 4 0) (bruijn ##.x.184 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 2,
      upenv->up->up->up->vars[0],
      _var0);
}
static void _V10_Dloop_D10_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D10_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.182 0 0) (substring (close _V10_Dloop_D10_k35) (bruijn ##.file.8 5 1) 0 (bruijn ##.i.11 3 1)) (- (close _V10_Dloop_D10_k36) (bruijn ##.i.11 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D10_k35, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(0l),
      upenv->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D10_k36, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
}
static void _V10_Dloop_D10_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D10_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D10_k34) #\. (bruijn ##.x.185 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D10_k34, env)}),
      VEncodeChar('.'),
      _var0);
}
static void _V10_Dloop_D10_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D10_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.181 0 0) (string-append (bruijn ##.k.180 1 0) (bruijn ##.file.8 3 1) (bruijn ##.new.9 3 2)) (string-ref (close _V10_Dloop_D10_k33) (bruijn ##.file.8 3 1) (bruijn ##.i.11 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      upenv->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D10_k33, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
}
static void _V10_Dloop_D10_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D10_lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V10_Dloop_D10_k32) (bruijn ##.i.11 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D10_k32, env)}),
      _var1,
      VEncodeInt(0l));
}
static void _V0change__extension_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0change__extension_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.10 2 0) (bruijn ##.k.179 3 0) (bruijn ##.x.186 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 2,
      upenv->up->up->vars[0],
      _var0);
}
static void _V0change__extension_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0change__extension_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0change__extension_k38) (bruijn ##.x.187 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k38, env)}),
      _var0,
      VEncodeInt(1l));
}
static void _V0change__extension_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0change__extension_lambda47, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D10_lambda48)) (string-length (close _V0change__extension_k37) (bruijn ##.file.8 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D10_lambda48, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k37, env)}),
      upenv->vars[1]);
    }
}
static void global_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.178 0 0) change-extension (close _V0change__extension_lambda47))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0change__extension,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_lambda47, env)})
    );
}
static void _V10_Dloop_D13_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D13_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (substring (bruijn ##.k.190 4 0) (bruijn ##.file.12 6 1) (bruijn ##.x.193 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      _var0);
}
static void _V10_Dloop_D13_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D13_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.13 5 0) (bruijn ##.k.190 4 0) (bruijn ##.x.194 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 2,
      upenv->up->up->up->vars[0],
      _var0);
}
static void _V10_Dloop_D13_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D13_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.192 0 0) (+ (close _V10_Dloop_D13_k42) (bruijn ##.i.14 3 1) 1) (- (close _V10_Dloop_D13_k43) (bruijn ##.i.14 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D13_k42, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D13_k43, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
}
static void _V10_Dloop_D13_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D13_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D13_k41) #\/ (bruijn ##.x.195 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D13_k41, env)}),
      VEncodeChar('/'),
      _var0);
}
static void _V10_Dloop_D13_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D13_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.191 0 0) ((bruijn ##.k.190 1 0) (bruijn ##.file.12 3 1)) (string-ref (close _V10_Dloop_D13_k40) (bruijn ##.file.12 3 1) (bruijn ##.i.14 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      upenv->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D13_k40, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
}
static void _V10_Dloop_D13_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D13_lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V10_Dloop_D13_k39) (bruijn ##.i.14 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D13_k39, env)}),
      _var1,
      VEncodeInt(0l));
}
static void _V0basename_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basename_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.13 2 0) (bruijn ##.k.189 3 0) (bruijn ##.x.196 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 2,
      upenv->up->up->vars[0],
      _var0);
}
static void _V0basename_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basename_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0basename_k45) (bruijn ##.x.197 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k45, env)}),
      _var0,
      VEncodeInt(1l));
}
static void _V0basename_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0basename_lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D13_lambda51)) (string-length (close _V0basename_k44) (bruijn ##.file.12 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D13_lambda51, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k44, env)}),
      upenv->vars[1]);
    }
}
static void global_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.188 0 0) basename (close _V0basename_lambda50))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0basename,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_lambda50, env)})
    );
}
static void _V10_Dloop_D16_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D16_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (substring (bruijn ##.k.200 4 0) (bruijn ##.file.15 6 1) 0 (bruijn ##.x.203 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 4,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      VEncodeInt(0l),
      _var0);
}
static void _V10_Dloop_D16_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D16_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.16 5 0) (bruijn ##.k.200 4 0) (bruijn ##.x.204 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 2,
      upenv->up->up->up->vars[0],
      _var0);
}
static void _V10_Dloop_D16_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D16_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.202 0 0) (+ (close _V10_Dloop_D16_k49) (bruijn ##.i.17 3 1) 1) (- (close _V10_Dloop_D16_k50) (bruijn ##.i.17 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D16_k49, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D16_k50, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
}
static void _V10_Dloop_D16_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D16_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D16_k48) #\/ (bruijn ##.x.205 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D16_k48, env)}),
      VEncodeChar('/'),
      _var0);
}
static void _V10_Dloop_D16_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D16_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.201 0 0) ((bruijn ##.k.200 1 0) (##string ##.string.716)) (string-ref (close _V10_Dloop_D16_k47) (bruijn ##.file.15 3 1) (bruijn ##.i.17 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D716.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D16_k47, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
}
static void _V10_Dloop_D16_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D16_lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V10_Dloop_D16_k46) (bruijn ##.i.17 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D16_k46, env)}),
      _var1,
      VEncodeInt(0l));
}
static void _V0basepath_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basepath_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.16 2 0) (bruijn ##.k.199 3 0) (bruijn ##.x.206 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 2,
      upenv->up->up->vars[0],
      _var0);
}
static void _V0basepath_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basepath_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0basepath_k52) (bruijn ##.x.207 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k52, env)}),
      _var0,
      VEncodeInt(1l));
}
static void _V0basepath_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0basepath_lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D16_lambda54)) (string-length (close _V0basepath_k51) (bruijn ##.file.15 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D16_lambda54, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k51, env)}),
      upenv->vars[1]);
    }
}
static void global_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.198 0 0) basepath (close _V0basepath_lambda53))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0basepath,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_lambda53, env)})
    );
}
static void _V10_Dloop_D19_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D19_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.19 6 0) (bruijn ##.k.210 5 0) (bruijn ##.x.214 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 2,
      VGetArg(upenv, 5-1, 0),
      _var0);
}
static void _V10_Dloop_D19_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D19_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V10_Dloop_D19_k57) (bruijn ##.i.20 4 1) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D19_k57, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
}
static void _V10_Dloop_D19_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D19_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.19 5 0) (bruijn ##.k.210 4 0) (bruijn ##.x.215 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 2,
      upenv->up->up->up->vars[0],
      _var0);
}
static void _V10_Dloop_D19_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D19_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.212 0 0) (string-set! (close _V10_Dloop_D19_k56) (bruijn ##.str.18 5 1) (bruijn ##.i.20 3 1) #\space) (- (close _V10_Dloop_D19_k58) (bruijn ##.i.20 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-set!")), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D19_k56, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->up->up->vars[1],
      VEncodeChar(' '));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D19_k58, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
}
static void _V10_Dloop_D19_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D19_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D19_k55) #\, (bruijn ##.x.216 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D19_k55, env)}),
      VEncodeChar(','),
      _var0);
}
static void _V10_Dloop_D19_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D19_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.211 0 0) ((bruijn ##.k.210 1 0) (bruijn ##.str.18 3 1)) (string-ref (close _V10_Dloop_D19_k54) (bruijn ##.str.18 3 1) (bruijn ##.i.20 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      upenv->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D19_k54, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
}
static void _V10_Dloop_D19_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D19_lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (< (close _V10_Dloop_D19_k53) (bruijn ##.i.20 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D19_k53, env)}),
      _var1,
      VEncodeInt(0l));
}
static void _V0decomma_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0decomma_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.19 2 0) (bruijn ##.k.209 3 0) (bruijn ##.x.217 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 2,
      upenv->up->up->vars[0],
      _var0);
}
static void _V0decomma_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0decomma_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0decomma_k60) (bruijn ##.x.218 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k60, env)}),
      _var0,
      VEncodeInt(1l));
}
static void _V0decomma_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0decomma_lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D19_lambda57)) (string-length (close _V0decomma_k59) (bruijn ##.str.18 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D19_lambda57, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k59, env)}),
      upenv->vars[1]);
    }
}
static void global_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.208 0 0) decomma (close _V0decomma_lambda56))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0decomma,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_lambda56, env)})
    );
}
static void _V0realpath_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.220 4 0) (bruijn ##.ret.23 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      upenv->vars[0]);
}
static void _V0realpath_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (close-port (close _V0realpath_k64) (bruijn ##.proc.22 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "close-port")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k64, env)}),
      upenv->vars[0]);
}
static void _V0realpath_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (read-line (close _V0realpath_k63) (bruijn ##.proc.22 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-line")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k63, env)}),
      _var0);
}
static void _V0realpath_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-process (close _V0realpath_k62) (bruijn ##.x.222 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-process")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k62, env)}),
      _var0);
}
static void _V0realpath_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_lambda59, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (sprintf (close _V0realpath_k61) (##string ##.string.717) (bruijn ##.file.21 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k61, env)}),
      VEncodePointer(&_V10_Dstring_D717.sym, VPOINTER_OTHER),
      _var1);
}
static void global_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.219 0 0) realpath (close _V0realpath_lambda59))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0realpath,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_lambda59, env)})
    );
}
static void _V0realbasepath_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.224 4 0) (bruijn ##.ret.26 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      upenv->vars[0]);
}
static void _V0realbasepath_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (close-port (close _V0realbasepath_k68) (bruijn ##.proc.25 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "close-port")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k68, env)}),
      upenv->vars[0]);
}
static void _V0realbasepath_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (read-line (close _V0realbasepath_k67) (bruijn ##.proc.25 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-line")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k67, env)}),
      _var0);
}
static void _V0realbasepath_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-process (close _V0realbasepath_k66) (bruijn ##.x.226 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-process")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k66, env)}),
      _var0);
}
static void _V0realbasepath_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_lambda61, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (sprintf (close _V0realbasepath_k65) (##string ##.string.718) (bruijn ##.file.24 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k65, env)}),
      VEncodePointer(&_V10_Dstring_D718.sym, VPOINTER_OTHER),
      _var1);
}
static void global_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.223 0 0) realbasepath (close _V0realbasepath_lambda61))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0realbasepath,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_lambda61, env)})
    );
}
static void _V10_Dloop_D28_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D28_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.234 1 0) ((bruijn ##.k.235 0 0) 1) ((bruijn ##.k.235 0 0) 0))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
}
static void _V10_Dloop_D28_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D28_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.28 6 0) (bruijn ##.k.229 5 0) (bruijn ##.x.231 3 0) (bruijn ##.x.232 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 3,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Dloop_D28_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D28_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (+ (close _V10_Dloop_D28_k74) (bruijn ##.ct.30 4 2) (bruijn ##.x.233 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D28_k74, env)}),
      upenv->up->up->up->vars[2],
      _var0);
}
static void _V10_Dloop_D28_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D28_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D28_k72) (close _V10_Dloop_D28_k73))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D28_k72, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D28_k73, env)}));
}
static void _V10_Dloop_D28_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D28_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V10_Dloop_D28_k71) (bruijn ##.args.29 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D28_k71, env)}),
      upenv->up->vars[1]);
}
static void _V10_Dloop_D28_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D28_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.230 0 0) ((bruijn ##.k.229 1 0) (bruijn ##.ct.30 1 2)) (cdr (close _V10_Dloop_D28_k70) (bruijn ##.args.29 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D28_k70, env)}),
      upenv->vars[1]);
}
}
static void _V10_Dloop_D28_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D28_lambda64, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (null? (close _V10_Dloop_D28_k69) (bruijn ##.args.29 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D28_k69, env)}),
      _var1);
}
static void _V0count__true_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V0count__true_lambda63, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D28_lambda64)) ((bruijn ##.loop.28 0 0) (bruijn ##.k.228 1 0) (bruijn ##.args.27 1 1) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D28_lambda64, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 3,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeInt(0l));
    }
}
static void global_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.227 0 0) count-true (close _V0count__true_lambda63))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0count__true,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0count__true_lambda63, env)})
    );
}
static void _V0delete__file_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0delete__file_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (system (bruijn ##.k.237 1 0) (bruijn ##.x.238 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "system")), 2,
      upenv->vars[0],
      _var0);
}
static void _V0delete__file_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0delete__file_lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (sprintf (close _V0delete__file_k75) (##string ##.string.719) (bruijn ##.f.31 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete__file_k75, env)}),
      VEncodePointer(&_V10_Dstring_D719.sym, VPOINTER_OTHER),
      _var1);
}
static void global_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.236 0 0) delete-file (close _V0delete__file_lambda66))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0delete__file,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete__file_lambda66, env)})
    );
}
static void _V0gen__header_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.254 1 0) (compiler-error (bruijn ##.k.255 0 0) (##string ##.string.720)) ((bruijn ##.k.255 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D720.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__header_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.252 1 0) ((bruijn ##.k.253 0 0) (bruijn ##.p.252 1 0)) (car (bruijn ##.k.253 0 0) (bruijn ##.headers.33 5 0)))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      _var0,
      VGetArg(upenv, 5-1, 0));
}
}
static void _V0gen__header_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.249 1 0) (compiler-error (bruijn ##.k.250 0 0) (##string ##.string.721)) ((bruijn ##.k.250 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D721.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__header_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (write (bruijn ##.k.246 1 0) (bruijn ##.x.247 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "write")), 2,
      upenv->vars[0],
      _var0);
}
static void _V0gen__header_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.245 1 0) (car (close _V0gen__header_k94) (bruijn ##.headers.33 11 0)) ((bruijn ##.k.246 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k94, env)}),
      VGetArg(upenv, 11-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__header_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (newline (bruijn ##.k.243 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "newline")), 1,
      upenv->up->up->vars[0]);
}
static void _V0gen__header_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__header_k93) (close _V0gen__header_k95))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0gen__header_k93, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k95, env)}));
}
static void _V0gen__header_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V0gen__header_k92) (bruijn ##.x.248 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k92, env)}),
      _var0);
}
static void _V0gen__header_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close _V0gen__header_k91) (bruijn ##.headers.33 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k91, env)}),
      VGetArg(upenv, 8-1, 0));
}
static void _V0gen__header_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (with-output-to-file (bruijn ##.k.240 12 0) out-file (close _V0gen__header_lambda69))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-output-to-file")), 3,
      VGetArg(upenv, 12-1, 0),
      VLookupGlobalVarFast2(runtime, "out-file"),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_lambda69, env)}));
}
static void _V0gen__header_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__header_k89) (close _V0gen__header_k90))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0gen__header_k89, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k90, env)}));
}
static void _V0gen__header_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V0gen__header_k88) (bruijn ##.x.251 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k88, env)}),
      _var0);
}
static void _V0gen__header_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__header_k86) (close _V0gen__header_k87))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0gen__header_k86, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k87, env)}));
}
static void _V0gen__header_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close _V0gen__header_k85) (bruijn ##.headers.33 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k85, env)}),
      upenv->up->up->vars[0]);
}
static void _V0gen__header_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__header_k83) (close _V0gen__header_k84))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0gen__header_k83, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k84, env)}));
}
static void _V0gen__header_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (> (close _V0gen__header_k82) (bruijn ##.x.256 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k82, env)}),
      _var0,
      VEncodeInt(1l));
}
static void _V0gen__header_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (length (close _V0gen__header_k81) (bruijn ##.headers.33 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "length")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k81, env)}),
      _var0);
}
static void _V0gen__header_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.257 0 0) (bruijn ##.x.34 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
static void _V0gen__header_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (filter (close _V0gen__header_k80) (close _V0gen__header_lambda70) (bruijn ##.x.258 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "filter")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k80, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_lambda70, env)}),
      _var0);
}
static void _V0gen__header_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (map (close _V0gen__header_k79) header-from-library (bruijn ##.file.32 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k79, env)}),
      VLookupGlobalVarFast2(runtime, "header-from-library"),
      _var0);
}
static void _V0gen__header_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (read-all (close _V0gen__header_k78) (bruijn ##.x.259 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-all")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k78, env)}),
      _var0);
}
static void _V0gen__header_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-file (close _V0gen__header_k77) (bruijn ##.x.260 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-file")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k77, env)}),
      _var0);
}
static void _V0gen__header_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V0gen__header_k76) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k76, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void global_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.239 0 0) gen-header (close _V0gen__header_lambda68))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0gen__header,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_lambda68, env)})
    );
}
static void _V0gen__makefile_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.282 4 0) maketargets (bruijn ##.x.283 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      upenv->up->up->up->vars[0],
      _V0maketargets,
      _var0
    );
}
static void _V0gen__makefile_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (list (close _V0gen__makefile_k101) (bruijn ##.x.284 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k101, env)}),
      _var0);
}
static void _V0gen__makefile_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (change-extension (close _V0gen__makefile_k100) (bruijn ##.x.285 0 0) (##string ##.string.722))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k100, env)}),
      _var0,
      VEncodePointer(&_V10_Dstring_D722.sym, VPOINTER_OTHER));
}
static void _V0gen__makefile_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (basename (close _V0gen__makefile_k99) (bruijn ##.x.286 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k99, env)}),
      _var0);
}
static void _V0gen__makefile_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.281 1 0) (car (close _V0gen__makefile_k98) scm-files) ((bruijn ##.k.282 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k98, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if out-file (open-output-file (bruijn ##.k.278 0 0) out-file) (current-output-port (bruijn ##.k.278 0 0)))
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
static void _V0gen__makefile_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if out-file (close-port (bruijn ##.k.262 13 0) (bruijn ##.port.37 6 0)) ((bruijn ##.k.262 13 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "close-port")), 2,
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (newline (close _V0gen__makefile_k114) (bruijn ##.port.37 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "newline")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k114, env)}),
      VGetArg(upenv, 5-1, 0));
}
static void _V0gen__makefile_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.273 1 0) (compiler-error (bruijn ##.k.274 0 0) (##string ##.string.723) (bruijn ##.dep.39 4 1)) ((bruijn ##.k.274 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D723.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (format (bruijn ##.k.269 5 0) (bruijn ##.port.37 10 0) (##string ##.string.724) (bruijn ##.x.272 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 4,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10_Dstring_D724.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0gen__makefile_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (import->path (close _V0gen__makefile_k120) (bruijn ##.dep.39 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "import->path")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k120, env)}),
      upenv->up->up->up->vars[1]);
}
static void _V0gen__makefile_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__makefile_k118) (close _V0gen__makefile_k119))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0gen__makefile_k118, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k119, env)}));
}
static void _V0gen__makefile_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V0gen__makefile_k117) (bruijn ##.x.275 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k117, env)}),
      _var0);
}
static void _V0gen__makefile_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.270 0 0) (valid-import? (close _V0gen__makefile_k116) (bruijn ##.dep.39 1 1)) ((bruijn ##.k.269 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "valid-import?")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k116, env)}),
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_lambda73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (pair? (close _V0gen__makefile_k115) (bruijn ##.dep.39 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "pair?")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k115, env)}),
      _var1);
}
static void _V0gen__makefile_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (for-each (close _V0gen__makefile_k113) (close _V0gen__makefile_lambda73) (bruijn ##.deps.36 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k113, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_lambda73, env)}),
      VGetArg(upenv, 5-1, 0));
}
static void _V0gen__makefile_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (format (close _V0gen__makefile_k112) (bruijn ##.port.37 3 0) (##string ##.string.724) (bruijn ##.x.276 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k112, env)}),
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D724.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0gen__makefile_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V0gen__makefile_k111) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k111, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void _V0gen__makefile_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (display (close _V0gen__makefile_k110) (##string ##.string.725) (bruijn ##.port.37 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k110, env)}),
      VEncodePointer(&_V10_Dstring_D725.sym, VPOINTER_OTHER),
      upenv->vars[0]);
}
static void _V0gen__makefile_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (format (bruijn ##.k.277 0 0) (bruijn ##.port.37 1 0) (##string ##.string.726) (bruijn ##.target.38 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 4,
      _var0,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D726.sym, VPOINTER_OTHER),
      _var1);
}
static void _V0gen__makefile_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (for-each (close _V0gen__makefile_k109) (close _V0gen__makefile_lambda74) maketargets)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k109, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_lambda74, env)}),
      VLookupGlobalVarFast2(runtime, "maketargets"));
}
static void _V0gen__makefile_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__makefile_k107) (close _V0gen__makefile_k108))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0gen__makefile_k107, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k108, env)}));
}
static void _V0gen__makefile_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (gather-dependencies (close _V0gen__makefile_k106) (bruijn ##.file.35 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "gather-dependencies")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k106, env)}),
      _var0);
}
static void _V0gen__makefile_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (read-all (close _V0gen__makefile_k105) (bruijn ##.x.279 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-all")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k105, env)}),
      _var0);
}
static void _V0gen__makefile_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-file (close _V0gen__makefile_k104) (bruijn ##.x.280 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-file")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k104, env)}),
      _var0);
}
static void _V0gen__makefile_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V0gen__makefile_k103) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k103, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void _V0gen__makefile_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__makefile_k97) (close _V0gen__makefile_k102))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0gen__makefile_k97, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k102, env)}));
}
static void _V0gen__makefile_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close _V0gen__makefile_k96) maketargets)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k96, env)}),
      VLookupGlobalVarFast2(runtime, "maketargets"));
}
static void global_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.261 0 0) gen-makefile (close _V0gen__makefile_lambda72))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0gen__makefile,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_lambda72, env)})
    );
}
static void _V0display__help_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (displayln (bruijn ##.k.288 23 0) (##string ##.string.727))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VGetArg(upenv, 23-1, 0),
      VEncodePointer(&_V10_Dstring_D727.sym, VPOINTER_OTHER));
}
static void _V0display__help_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k143) (##string ##.string.728))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k143, env)}),
      VEncodePointer(&_V10_Dstring_D728.sym, VPOINTER_OTHER));
}
static void _V0display__help_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k142) (##string ##.string.729))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k142, env)}),
      VEncodePointer(&_V10_Dstring_D729.sym, VPOINTER_OTHER));
}
static void _V0display__help_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k141) (##string ##.string.730))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k141, env)}),
      VEncodePointer(&_V10_Dstring_D730.sym, VPOINTER_OTHER));
}
static void _V0display__help_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k140) (##string ##.string.731))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k140, env)}),
      VEncodePointer(&_V10_Dstring_D731.sym, VPOINTER_OTHER));
}
static void _V0display__help_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k139) (##string ##.string.732))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k139, env)}),
      VEncodePointer(&_V10_Dstring_D732.sym, VPOINTER_OTHER));
}
static void _V0display__help_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k138) (##string ##.string.733))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k138, env)}),
      VEncodePointer(&_V10_Dstring_D733.sym, VPOINTER_OTHER));
}
static void _V0display__help_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k137) (##string ##.string.734))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k137, env)}),
      VEncodePointer(&_V10_Dstring_D734.sym, VPOINTER_OTHER));
}
static void _V0display__help_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k136) (##string ##.string.728))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k136, env)}),
      VEncodePointer(&_V10_Dstring_D728.sym, VPOINTER_OTHER));
}
static void _V0display__help_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k135) (##string ##.string.735))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k135, env)}),
      VEncodePointer(&_V10_Dstring_D735.sym, VPOINTER_OTHER));
}
static void _V0display__help_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k134) (##string ##.string.736))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k134, env)}),
      VEncodePointer(&_V10_Dstring_D736.sym, VPOINTER_OTHER));
}
static void _V0display__help_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k133) (##string ##.string.728))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k133, env)}),
      VEncodePointer(&_V10_Dstring_D728.sym, VPOINTER_OTHER));
}
static void _V0display__help_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k132) (##string ##.string.737))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k132, env)}),
      VEncodePointer(&_V10_Dstring_D737.sym, VPOINTER_OTHER));
}
static void _V0display__help_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k131) (##string ##.string.738))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k131, env)}),
      VEncodePointer(&_V10_Dstring_D738.sym, VPOINTER_OTHER));
}
static void _V0display__help_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k130) (##string ##.string.739))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k130, env)}),
      VEncodePointer(&_V10_Dstring_D739.sym, VPOINTER_OTHER));
}
static void _V0display__help_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k129) (##string ##.string.740))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k129, env)}),
      VEncodePointer(&_V10_Dstring_D740.sym, VPOINTER_OTHER));
}
static void _V0display__help_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k128) (##string ##.string.741))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k128, env)}),
      VEncodePointer(&_V10_Dstring_D741.sym, VPOINTER_OTHER));
}
static void _V0display__help_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k127) (##string ##.string.742))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k127, env)}),
      VEncodePointer(&_V10_Dstring_D742.sym, VPOINTER_OTHER));
}
static void _V0display__help_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k126) (##string ##.string.743))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k126, env)}),
      VEncodePointer(&_V10_Dstring_D743.sym, VPOINTER_OTHER));
}
static void _V0display__help_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k125) (##string ##.string.744))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k125, env)}),
      VEncodePointer(&_V10_Dstring_D744.sym, VPOINTER_OTHER));
}
static void _V0display__help_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k124) (##string ##.string.745))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k124, env)}),
      VEncodePointer(&_V10_Dstring_D745.sym, VPOINTER_OTHER));
}
static void _V0display__help_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k123) (##string ##.string.746))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k123, env)}),
      VEncodePointer(&_V10_Dstring_D746.sym, VPOINTER_OTHER));
}
static void _V0display__help_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k122) (##string ##.string.747))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k122, env)}),
      VEncodePointer(&_V10_Dstring_D747.sym, VPOINTER_OTHER));
}
static void _V0display__help_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_lambda76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k121) (##string ##.string.748))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k121, env)}),
      VEncodePointer(&_V10_Dstring_D748.sym, VPOINTER_OTHER));
}
static void global_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.287 0 0) display-help (close _V0display__help_lambda76))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0display__help,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_lambda76, env)})
    );
}
static void _V0display__version_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (displayln (bruijn ##.k.313 3 0) (##string ##.string.749))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D749.sym, VPOINTER_OTHER));
}
static void _V0display__version_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (printf (close _V0display__version_k146) (##string ##.string.750) (bruijn ##.x.315 1 0) (bruijn ##.x.316 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "printf")), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k146, env)}),
      VEncodePointer(&_V10_Dstring_D750.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0);
}
static void _V0display__version_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cadr (close _V0display__version_k145) version)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cadr")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k145, env)}),
      VLookupGlobalVarFast2(runtime, "version"));
}
static void _V0display__version_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V0display__version_k144) version)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k144, env)}),
      VLookupGlobalVarFast2(runtime, "version"));
}
static void global_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.312 0 0) display-version (close _V0display__version_lambda78))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0display__version,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_lambda78, env)})
    );
}
static void _V0handle__exception_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.318 7 0) (bruijn ##.ret.42.46 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 1,
      upenv->vars[0]);
}
static void _V0handle__exception_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (current-output-port (close _V0handle__exception_k153) '##vcore.pop-value (bruijn ##.keyval.41.45 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k153, env)}),
      _V10vcore_Dpop__value,
      upenv->up->up->up->vars[0]);
}
static void _V0handle__exception_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (exit (close _V0handle__exception_k152) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k152, env)}),
      VEncodeInt(1l));
}
static void _V0handle__exception_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (newline (close _V0handle__exception_k151))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "newline")), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k151, env)}));
}
static void _V0handle__exception_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (write (close _V0handle__exception_k150) (bruijn ##.err.43 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "write")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k150, env)}),
      upenv->up->up->vars[1]);
}
static void _V0handle__exception_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (display (close _V0handle__exception_k149) (##string ##.string.751))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k149, env)}),
      VEncodePointer(&_V10_Dstring_D751.sym, VPOINTER_OTHER));
}
static void _V0handle__exception_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (current-output-port (close _V0handle__exception_k148) '##vcore.push-value (bruijn ##.x.323 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k148, env)}),
      _V10vcore_Dpush__value,
      _var0);
}
static void _V0handle__exception_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_lambda80, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (current-error-port (close _V0handle__exception_k147))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-error-port")), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_k147, env)}));
}
static void global_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##.next.317 0 0) handle-exception (close _V0handle__exception_lambda80))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0handle__exception,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0handle__exception_lambda80, env)})
    );
}
static void _V10_Dloop_D48_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.390 5 0) obj-files (bruijn ##.x.392 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 5-1, 0),
      _V0obj__files,
      _var0
    );
}
static void _V10_Dloop_D48_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close _V10_Dloop_D48_k163) (bruijn ##.x.393 0 0) obj-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k163, env)}),
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
}
static void _V10_Dloop_D48_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (equal? (bruijn ##.k.399 2 0) (bruijn ##.x.400 0 0) (##string ##.string.752))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D752.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (extension (close _V10_Dloop_D48_k169) (bruijn ##.x.401 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k169, env)}),
      _var0);
}
static void _V10_Dloop_D48_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.398 1 0) ((bruijn ##.k.399 0 0) (bruijn ##.p.398 1 0)) (cdar (close _V10_Dloop_D48_k168) (bruijn ##.args.49 12 1)))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k168, env)}),
      VGetArg(upenv, 12-1, 1));
}
}
static void _V10_Dloop_D48_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.390 9 0) scm-files (bruijn ##.x.395 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 9-1, 0),
      _V0scm__files,
      _var0
    );
}
static void _V10_Dloop_D48_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close _V10_Dloop_D48_k172) (bruijn ##.x.396 0 0) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k172, env)}),
      _var0,
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void _V10_Dloop_D48_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.k.390 8 0) (##string ##.string.753) (bruijn ##.x.397 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D753.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dloop_D48_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.394 0 0) (cdar (close _V10_Dloop_D48_k171) (bruijn ##.args.49 12 1)) (cdar (close _V10_Dloop_D48_k173) (bruijn ##.args.49 12 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k171, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k173, env)}),
      VGetArg(upenv, 12-1, 1));
}
}
static void _V10_Dloop_D48_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D48_k167) (close _V10_Dloop_D48_k170))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D48_k167, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k170, env)}));
}
static void _V10_Dloop_D48_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close _V10_Dloop_D48_k166) (bruijn ##.x.402 0 0) (##string ##.string.754))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k166, env)}),
      _var0,
      VEncodePointer(&_V10_Dstring_D754.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (extension (close _V10_Dloop_D48_k165) (bruijn ##.x.403 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k165, env)}),
      _var0);
}
static void _V10_Dloop_D48_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.391 0 0) (cdar (close _V10_Dloop_D48_k162) (bruijn ##.args.49 8 1)) (cdar (close _V10_Dloop_D48_k164) (bruijn ##.args.49 8 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k162, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k164, env)}),
      VGetArg(upenv, 8-1, 1));
}
}
static void _V10_Dloop_D48_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close _V10_Dloop_D48_k161) (bruijn ##.x.404 0 0) (##string ##.string.722))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k161, env)}),
      _var0,
      VEncodePointer(&_V10_Dstring_D722.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (extension (close _V10_Dloop_D48_k160) (bruijn ##.x.405 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k160, env)}),
      _var0);
}
static void _V10_Dloop_D48_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.390 7 0) out-file (bruijn ##.x.412 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 7-1, 0),
      _V0out__file,
      _var0
    );
}
static void _V10_Dloop_D48_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.390 11 0) paths (bruijn ##.x.414 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 11-1, 0),
      _V0paths,
      _var0
    );
}
static void _V10_Dloop_D48_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (append (close _V10_Dloop_D48_k185) paths (bruijn ##.x.415 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k185, env)}),
      VLookupGlobalVarFast2(runtime, "paths"),
      _var0);
}
static void _V10_Dloop_D48_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (list (close _V10_Dloop_D48_k184) (bruijn ##.x.416 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k184, env)}),
      _var0);
}
static void _V10_Dloop_D48_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (realpath (close _V10_Dloop_D48_k183) (bruijn ##.x.417 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "realpath")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k183, env)}),
      _var0);
}
static void _V10_Dloop_D48_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.424 0 0) (<= (bruijn ##.k.423 1 0) 0 optimization 3) ((bruijn ##.k.423 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 4,
      upenv->vars[0],
      VEncodeInt(0l),
      VLookupGlobalVarFast2(runtime, "optimization"),
      VEncodeInt(3l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if optimization (integer? (close _V10_Dloop_D48_k191) optimization) ((bruijn ##.k.423 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "optimization"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "integer?")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k191, env)}),
      VLookupGlobalVarFast2(runtime, "optimization"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.k.390 14 0) (##string ##.string.755) (bruijn ##.x.421 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(upenv, 14-1, 0),
      VEncodePointer(&_V10_Dstring_D755.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dloop_D48_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.420 0 0) (cdar (close _V10_Dloop_D48_k194) (bruijn ##.args.49 18 1)) ((bruijn ##.k.390 13 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k194, env)}),
      VGetArg(upenv, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V10_Dloop_D48_k193) (bruijn ##.x.422 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k193, env)}),
      _var0);
}
static void _V10_Dloop_D48_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D48_k190) (close _V10_Dloop_D48_k192))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D48_k190, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k192, env)}));
}
static void _V10_Dloop_D48_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Dloop_D48_k189) optimization (bruijn ##.x.425 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k189, env)}),
      _V0optimization,
      _var0
    );
}
static void _V10_Dloop_D48_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string->number (close _V10_Dloop_D48_k188) (bruijn ##.x.426 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->number")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k188, env)}),
      _var0);
}
static void _V10_Dloop_D48_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.433 0 0) (<= (bruijn ##.k.432 1 0) 0 expand? 2) ((bruijn ##.k.432 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 4,
      upenv->vars[0],
      VEncodeInt(0l),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(2l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if expand? (integer? (close _V10_Dloop_D48_k200) expand?) ((bruijn ##.k.432 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "expand?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "integer?")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k200, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.k.390 15 0) (##string ##.string.756) (bruijn ##.x.430 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(upenv, 15-1, 0),
      VEncodePointer(&_V10_Dstring_D756.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dloop_D48_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.429 0 0) (cdar (close _V10_Dloop_D48_k203) (bruijn ##.args.49 19 1)) ((bruijn ##.k.390 14 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k203, env)}),
      VGetArg(upenv, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V10_Dloop_D48_k202) (bruijn ##.x.431 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k202, env)}),
      _var0);
}
static void _V10_Dloop_D48_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D48_k199) (close _V10_Dloop_D48_k201))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D48_k199, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k201, env)}));
}
static void _V10_Dloop_D48_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Dloop_D48_k198) expand? (bruijn ##.x.434 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k198, env)}),
      _V0expand_Q,
      _var0
    );
}
static void _V10_Dloop_D48_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string->number (close _V10_Dloop_D48_k197) (bruijn ##.x.435 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->number")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k197, env)}),
      _var0);
}
static void _V10_Dloop_D48_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.390 15 0) werror-unbound-variables #f)
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 15-1, 0),
      _V0werror__unbound__variables,
      VEncodeBool(false)
    );
}
static void _V10_Dloop_D48_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.390 17 0) werror-unbound-variables #t)
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 17-1, 0),
      _V0werror__unbound__variables,
      VEncodeBool(true)
    );
}
static void _V10_Dloop_D48_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.458 1 0) (compiler-error (bruijn ##.k.459 0 0) (##string ##.string.757)) ((bruijn ##.k.459 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D757.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (eq? (bruijn ##.k.453 2 0) (bruijn ##.x.454 0 0) #\,)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      upenv->up->vars[0],
      _var0,
      VEncodeChar(','));
}
static void _V10_Dloop_D48_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-ref (close _V10_Dloop_D48_k226) (bruijn ##.x.455 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k226, env)}),
      _var0,
      VEncodeInt(1l));
}
static void _V10_Dloop_D48_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.452 1 0) (cdar (close _V10_Dloop_D48_k225) (bruijn ##.args.49 32 1)) ((bruijn ##.k.453 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k225, env)}),
      VGetArg(upenv, 32-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.449 1 0) (compiler-error (bruijn ##.k.450 0 0) (##string ##.string.758)) ((bruijn ##.k.450 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D758.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.390 33 0) c-options (bruijn ##.x.445 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 33-1, 0),
      _V0c__options,
      _var0
    );
}
static void _V10_Dloop_D48_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close _V10_Dloop_D48_k234) (bruijn ##.x.446 0 0) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k234, env)}),
      _var0,
      VLookupGlobalVarFast2(runtime, "c-options"));
}
static void _V10_Dloop_D48_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (decomma (close _V10_Dloop_D48_k233) (bruijn ##.x.447 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "decomma")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k233, env)}),
      _var0);
}
static void _V10_Dloop_D48_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (substring (close _V10_Dloop_D48_k232) (bruijn ##.x.448 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k232, env)}),
      _var0,
      VEncodeInt(1l));
}
static void _V10_Dloop_D48_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cdar (close _V10_Dloop_D48_k231) (bruijn ##.args.49 34 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k231, env)}),
      VGetArg(upenv, 34-1, 1));
}
static void _V10_Dloop_D48_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D48_k229) (close _V10_Dloop_D48_k230))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D48_k229, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k230, env)}));
}
static void _V10_Dloop_D48_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V10_Dloop_D48_k228) (bruijn ##.x.451 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k228, env)}),
      _var0);
}
static void _V10_Dloop_D48_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D48_k224) (close _V10_Dloop_D48_k227))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D48_k224, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k227, env)}));
}
static void _V10_Dloop_D48_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (>= (close _V10_Dloop_D48_k223) (bruijn ##.x.456 0 0) 2)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">=")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k223, env)}),
      _var0,
      VEncodeInt(2l));
}
static void _V10_Dloop_D48_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-length (close _V10_Dloop_D48_k222) (bruijn ##.x.457 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k222, env)}),
      _var0);
}
static void _V10_Dloop_D48_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cdar (close _V10_Dloop_D48_k221) (bruijn ##.args.49 28 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k221, env)}),
      VGetArg(upenv, 28-1, 1));
}
static void _V10_Dloop_D48_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D48_k219) (close _V10_Dloop_D48_k220))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D48_k219, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k220, env)}));
}
static void _V10_Dloop_D48_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V10_Dloop_D48_k218) (bruijn ##.x.460 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k218, env)}),
      _var0);
}
static void _V10_Dloop_D48_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V10_Dloop_D48_k217) (bruijn ##.x.461 0 0) #\c)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k217, env)}),
      _var0,
      VEncodeChar('c'));
}
static void _V10_Dloop_D48_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-ref (close _V10_Dloop_D48_k216) (bruijn ##.x.462 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k216, env)}),
      _var0,
      VEncodeInt(0l));
}
static void _V10_Dloop_D48_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.442 0 0) (set! (bruijn ##.k.390 18 0) werror-unbound-variables #f) (cdar (close _V10_Dloop_D48_k215) (bruijn ##.args.49 23 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 18-1, 0),
      _V0werror__unbound__variables,
      VEncodeBool(false)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k215, env)}),
      VGetArg(upenv, 23-1, 1));
}
}
static void _V10_Dloop_D48_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close _V10_Dloop_D48_k214) (bruijn ##.x.463 0 0) (##string ##.string.759))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k214, env)}),
      _var0,
      VEncodePointer(&_V10_Dstring_D759.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.440 0 0) (set! (close _V10_Dloop_D48_k212) w-unbound-variables #t) (cdar (close _V10_Dloop_D48_k213) (bruijn ##.args.49 21 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k212, env)}),
      _V0w__unbound__variables,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k213, env)}),
      VGetArg(upenv, 21-1, 1));
}
}
static void _V10_Dloop_D48_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close _V10_Dloop_D48_k211) (bruijn ##.x.464 0 0) (##string ##.string.760))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k211, env)}),
      _var0,
      VEncodePointer(&_V10_Dstring_D760.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.438 0 0) (set! (close _V10_Dloop_D48_k209) w-unbound-variables #f) (cdar (close _V10_Dloop_D48_k210) (bruijn ##.args.49 19 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k209, env)}),
      _V0w__unbound__variables,
      VEncodeBool(false)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k210, env)}),
      VGetArg(upenv, 19-1, 1));
}
}
static void _V10_Dloop_D48_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close _V10_Dloop_D48_k208) (bruijn ##.x.465 0 0) (##string ##.string.761))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k208, env)}),
      _var0,
      VEncodePointer(&_V10_Dstring_D761.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.437 0 0) (set! (bruijn ##.k.390 12 0) w-unbound-variables #t) (cdar (close _V10_Dloop_D48_k207) (bruijn ##.args.49 17 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 12-1, 0),
      _V0w__unbound__variables,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k207, env)}),
      VGetArg(upenv, 17-1, 1));
}
}
static void _V10_Dloop_D48_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close _V10_Dloop_D48_k206) (bruijn ##.x.466 0 0) (##string ##.string.762))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k206, env)}),
      _var0,
      VEncodePointer(&_V10_Dstring_D762.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D48_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (exit (bruijn ##.k.390 12 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 2,
      VGetArg(upenv, 12-1, 0),
      VEncodeInt(0l));
}
static void _V10_Dloop_D48_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (exit (bruijn ##.k.390 13 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 2,
      VGetArg(upenv, 13-1, 0),
      VEncodeInt(0l));
}
static void _V10_Dloop_D48_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.390 16 0) api (bruijn ##.x.473 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 16-1, 0),
      _V0api,
      _var0
    );
}
static void _V10_Dloop_D48_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string->number (close _V10_Dloop_D48_k242) (bruijn ##.x.474 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->number")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k242, env)}),
      _var0);
}
static void _V10_Dloop_D48_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.390 16 0) platform (bruijn ##.x.476 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 16-1, 0),
      _V0platform,
      _var0
    );
}
static void _V10_Dloop_D48_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.390 17 0) cc (bruijn ##.x.478 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 17-1, 0),
      _V0cc,
      _var0
    );
}
static void _V10_Dloop_D48_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.390 21 0) maketargets (bruijn ##.x.482 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 21-1, 0),
      _V0maketargets,
      _var0
    );
}
static void _V10_Dloop_D48_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close _V10_Dloop_D48_k251) (bruijn ##.x.483 0 0) maketargets)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k251, env)}),
      _var0,
      VLookupGlobalVarFast2(runtime, "maketargets"));
}
static void _V10_Dloop_D48_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.k.390 22 0) (##string ##.string.763) (bruijn ##.x.486 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(upenv, 22-1, 0),
      VEncodePointer(&_V10_Dstring_D763.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dloop_D48_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.485 0 0) (set! (bruijn ##.k.390 21 0) bytecode? #t) (cdar (close _V10_Dloop_D48_k254) (bruijn ##.args.49 26 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 21-1, 0),
      _V0bytecode_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k254, env)}),
      VGetArg(upenv, 26-1, 1));
}
}
static void _V10_Dloop_D48_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.484 0 0) (set! (bruijn ##.k.390 20 0) benchmark? #t) (eqv? (close _V10_Dloop_D48_k253) (bruijn ##.x.47.50 22 0) 'bytecode))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 20-1, 0),
      _V0benchmark_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k253, env)}),
      VGetArg(upenv, 22-1, 0),
      _V0bytecode);
}
}
static void _V10_Dloop_D48_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.481 0 0) (cdar (close _V10_Dloop_D48_k250) (bruijn ##.args.49 24 1)) (eqv? (close _V10_Dloop_D48_k252) (bruijn ##.x.47.50 21 0) 'benchmark))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k250, env)}),
      VGetArg(upenv, 24-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k252, env)}),
      VGetArg(upenv, 21-1, 0),
      _V0benchmark);
}
}
static void _V10_Dloop_D48_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.480 0 0) (set! (bruijn ##.k.390 18 0) makefile? #t) (eqv? (close _V10_Dloop_D48_k249) (bruijn ##.x.47.50 20 0) 'maketarget))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 18-1, 0),
      _V0makefile_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k249, env)}),
      VGetArg(upenv, 20-1, 0),
      _V0maketarget);
}
}
static void _V10_Dloop_D48_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.479 0 0) (set! (bruijn ##.k.390 17 0) keep? #t) (eqv? (close _V10_Dloop_D48_k248) (bruijn ##.x.47.50 19 0) 'makefile))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 17-1, 0),
      _V0keep_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k248, env)}),
      VGetArg(upenv, 19-1, 0),
      _V0makefile);
}
}
static void _V10_Dloop_D48_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.477 0 0) (cdar (close _V10_Dloop_D48_k246) (bruijn ##.args.49 21 1)) (eqv? (close _V10_Dloop_D48_k247) (bruijn ##.x.47.50 18 0) 'keep-temps))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k246, env)}),
      VGetArg(upenv, 21-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k247, env)}),
      VGetArg(upenv, 18-1, 0),
      _V0keep__temps);
}
}
static void _V10_Dloop_D48_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.475 0 0) (cdar (close _V10_Dloop_D48_k244) (bruijn ##.args.49 20 1)) (eqv? (close _V10_Dloop_D48_k245) (bruijn ##.x.47.50 17 0) 'cc))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k244, env)}),
      VGetArg(upenv, 20-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k245, env)}),
      VGetArg(upenv, 17-1, 0),
      _V0cc);
}
}
static void _V10_Dloop_D48_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.472 0 0) (cdar (close _V10_Dloop_D48_k241) (bruijn ##.args.49 19 1)) (eqv? (close _V10_Dloop_D48_k243) (bruijn ##.x.47.50 16 0) 'platform))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k241, env)}),
      VGetArg(upenv, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k243, env)}),
      VGetArg(upenv, 16-1, 0),
      _V0platform);
}
}
static void _V10_Dloop_D48_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.471 0 0) (set! (bruijn ##.k.390 13 0) shared? #t) (eqv? (close _V10_Dloop_D48_k240) (bruijn ##.x.47.50 15 0) 'api))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 13-1, 0),
      _V0shared_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k240, env)}),
      VGetArg(upenv, 15-1, 0),
      _V0api);
}
}
static void _V10_Dloop_D48_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.469 0 0) (display-version (close _V10_Dloop_D48_k238)) (eqv? (close _V10_Dloop_D48_k239) (bruijn ##.x.47.50 14 0) 'shared))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display-version")), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k238, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k239, env)}),
      VGetArg(upenv, 14-1, 0),
      _V0shared);
}
}
static void _V10_Dloop_D48_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.467 0 0) (display-help (close _V10_Dloop_D48_k236)) (eqv? (close _V10_Dloop_D48_k237) (bruijn ##.x.47.50 13 0) 'version))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display-help")), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k236, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k237, env)}),
      VGetArg(upenv, 13-1, 0),
      _V0version);
}
}
static void _V10_Dloop_D48_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.436 0 0) (cdar (close _V10_Dloop_D48_k205) (bruijn ##.args.49 15 1)) (eqv? (close _V10_Dloop_D48_k235) (bruijn ##.x.47.50 12 0) 'help))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k205, env)}),
      VGetArg(upenv, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k235, env)}),
      VGetArg(upenv, 12-1, 0),
      _V0help);
}
}
static void _V10_Dloop_D48_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.427 0 0) (cdar (close _V10_Dloop_D48_k196) (bruijn ##.args.49 14 1)) (eqv? (close _V10_Dloop_D48_k204) (bruijn ##.x.47.50 11 0) '#\W))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k196, env)}),
      VGetArg(upenv, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k204, env)}),
      VGetArg(upenv, 11-1, 0),
      VEncodeChar('W'));
}
}
static void _V10_Dloop_D48_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.418 0 0) (cdar (close _V10_Dloop_D48_k187) (bruijn ##.args.49 13 1)) (eqv? (close _V10_Dloop_D48_k195) (bruijn ##.x.47.50 10 0) '#\E))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k187, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k195, env)}),
      VGetArg(upenv, 10-1, 0),
      VEncodeChar('E'));
}
}
static void _V10_Dloop_D48_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.413 0 0) (cdar (close _V10_Dloop_D48_k182) (bruijn ##.args.49 12 1)) (eqv? (close _V10_Dloop_D48_k186) (bruijn ##.x.47.50 9 0) '#\O))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k182, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k186, env)}),
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('O'));
}
}
static void _V10_Dloop_D48_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.411 0 0) (cdar (close _V10_Dloop_D48_k180) (bruijn ##.args.49 11 1)) (eqv? (close _V10_Dloop_D48_k181) (bruijn ##.x.47.50 8 0) '#\I))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k180, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k181, env)}),
      VGetArg(upenv, 8-1, 0),
      VEncodeChar('I'));
}
}
static void _V10_Dloop_D48_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.410 0 0) (set! (bruijn ##.k.390 5 0) object? #t) (eqv? (close _V10_Dloop_D48_k179) (bruijn ##.x.47.50 7 0) '#\o))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(upenv, 5-1, 0),
      _V0object_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k179, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('o'));
}
}
static void _V10_Dloop_D48_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.409 0 0) (set! (bruijn ##.k.390 4 0) transpile? #t) (eqv? (close _V10_Dloop_D48_k178) (bruijn ##.x.47.50 6 0) '#\c))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      upenv->up->up->up->vars[0],
      _V0transpile_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k178, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('c'));
}
}
static void _V10_Dloop_D48_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.408 0 0) (set! (bruijn ##.k.390 3 0) header? #t) (eqv? (close _V10_Dloop_D48_k177) (bruijn ##.x.47.50 5 0) '#\t))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      upenv->up->up->vars[0],
      _V0header_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k177, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('t'));
}
}
static void _V10_Dloop_D48_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.407 0 0) (set! (bruijn ##.k.390 2 0) debug? #t) (eqv? (close _V10_Dloop_D48_k176) (bruijn ##.x.47.50 4 0) '#\h))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      upenv->up->vars[0],
      _V0debug_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k176, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('h'));
}
}
static void _V10_Dloop_D48_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.406 0 0) (set! (bruijn ##.k.390 1 0) verbose? #t) (eqv? (close _V10_Dloop_D48_k175) (bruijn ##.x.47.50 3 0) '#\g))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      upenv->vars[0],
      _V0verbose_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k175, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('g'));
}
}
static void _V10_Dloop_D48_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.389 1 0) (cdar (close _V10_Dloop_D48_k159) (bruijn ##.args.49 5 1)) (eqv? (close _V10_Dloop_D48_k174) (bruijn ##.x.47.50 2 0) '#\v))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k159, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k174, env)}),
      upenv->up->vars[0],
      VEncodeChar('v'));
}
}
static void _V10_Dloop_D48_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.48 7 0) (bruijn ##.k.385 6 0) (bruijn ##.x.388 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 2,
      VGetArg(upenv, 6-1, 0),
      _var0);
}
static void _V10_Dloop_D48_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cdr (close _V10_Dloop_D48_k256) (bruijn ##.args.49 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k256, env)}),
      VGetArg(upenv, 5-1, 1));
}
static void _V10_Dloop_D48_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D48_k158) (close _V10_Dloop_D48_k255))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D48_k158, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k255, env)}));
}
static void _V10_Dloop_D48_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eqv? (close _V10_Dloop_D48_k157) (bruijn ##.x.47.50 0 0) '#t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k157, env)}),
      _var0,
      VEncodeBool(true));
}
static void _V10_Dloop_D48_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.386 0 0) (caar (close _V10_Dloop_D48_k156) (bruijn ##.args.49 2 1)) ((bruijn ##.k.385 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "caar")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k156, env)}),
      upenv->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D48_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V10_Dloop_D48_k155) (bruijn ##.x.487 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k155, env)}),
      _var0);
}
static void _V10_Dloop_D48_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D48_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (null? (close _V10_Dloop_D48_k154) (bruijn ##.args.49 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_k154, env)}),
      _var1);
}
static void global_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.384 0 0) ((bruijn ##.k.383 1 0) (##string ##.string.765)) (compiler-error (bruijn ##.k.383 1 0) (##string ##.string.766) platform))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D765.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D766.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "platform"));
}
}
static void global_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.382 1 0) ((bruijn ##.k.383 0 0) (##string ##.string.764)) (equal? (close global_k264) platform (##string ##.string.767)))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D764.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k264, env)}),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D767.sym, VPOINTER_OTHER));
}
}
static void global_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.380 2 0) cc (bruijn ##.x.381 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      upenv->up->vars[0],
      _V0cc,
      _var0
    );
}
static void global_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k263) (close global_k265))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k263, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k265, env)}));
}
static void global_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.379 1 0) (equal? (close global_k262) platform (##string ##.string.713)) ((bruijn ##.k.380 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k262, env)}),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D713.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.376 1 0) (compiler-error (bruijn ##.k.377 0 0) (##string ##.string.768)) ((bruijn ##.k.377 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D768.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.374 1 0) (null? (bruijn ##.k.375 0 0) obj-files) ((bruijn ##.k.375 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.372 1 0) (compiler-error (bruijn ##.k.373 0 0) (##string ##.string.769)) ((bruijn ##.k.373 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D769.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if makefile? ((bruijn ##.k.371 0 0) makefile?) (if header? ((bruijn ##.k.371 0 0) header?) (if bytecode? ((bruijn ##.k.371 0 0) bytecode?) (if transpile? ((bruijn ##.k.371 0 0) transpile?) (if object? ((bruijn ##.k.371 0 0) object?) ((bruijn ##.k.371 0 0) expand?))))))
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
static void global_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.k.369 1 0) (bruijn ##.x.370 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      upenv->vars[0],
      _var0);
}
static void global_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.368 1 0) (null? (close global_k279) obj-files) ((bruijn ##.k.369 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k279, env)}),
      VLookupGlobalVarFast2(runtime, "obj-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.366 1 0) (compiler-error (bruijn ##.k.367 0 0) (##string ##.string.770)) ((bruijn ##.k.367 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D770.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if makefile? ((bruijn ##.k.365 0 0) makefile?) (if header? ((bruijn ##.k.365 0 0) header?) (if bytecode? ((bruijn ##.k.365 0 0) bytecode?) (if transpile? ((bruijn ##.k.365 0 0) transpile?) (if object? ((bruijn ##.k.365 0 0) object?) ((bruijn ##.k.365 0 0) expand?))))))
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
static void global_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.k.362 2 0) (bruijn ##.x.363 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      upenv->up->vars[0],
      _var0);
}
static void global_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close global_k287) (bruijn ##.x.364 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k287, env)}),
      _var0);
}
static void global_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.361 1 0) (if out-file (cdr (close global_k286) scm-files) ((bruijn ##.k.362 0 0) #f)) ((bruijn ##.k.362 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k286, env)}),
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
static void global_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.359 1 0) (compiler-error (bruijn ##.k.360 0 0) (##string ##.string.771)) ((bruijn ##.k.360 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D771.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if makefile? ((bruijn ##.k.358 0 0) makefile?) (if header? ((bruijn ##.k.358 0 0) header?) (if bytecode? ((bruijn ##.k.358 0 0) bytecode?) (if transpile? ((bruijn ##.k.358 0 0) transpile?) (if object? ((bruijn ##.k.358 0 0) object?) ((bruijn ##.k.358 0 0) expand?))))))
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
static void global_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.k.355 2 0) (bruijn ##.x.356 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      upenv->up->vars[0],
      _var0);
}
static void global_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close global_k295) (bruijn ##.x.357 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k295, env)}),
      _var0);
}
static void global_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.354 1 0) (cdr (close global_k294) scm-files) ((bruijn ##.k.355 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k294, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.352 1 0) (compiler-error (bruijn ##.k.353 0 0) (##string ##.string.772)) ((bruijn ##.k.353 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D772.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.k.341 2 0) (bruijn ##.x.342 0 0) (##string ##.string.722))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D722.sym, VPOINTER_OTHER));
}
static void global_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (basename (close global_k303) (bruijn ##.x.343 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k303, env)}),
      _var0);
}
static void global_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.k.341 2 0) (bruijn ##.x.344 0 0) (##string ##.string.773))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D773.sym, VPOINTER_OTHER));
}
static void global_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (basename (close global_k305) (bruijn ##.x.345 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k305, env)}),
      _var0);
}
static void global_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.k.341 2 0) (bruijn ##.x.346 0 0) (##string ##.string.774))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D774.sym, VPOINTER_OTHER));
}
static void global_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (basename (close global_k307) (bruijn ##.x.347 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k307, env)}),
      _var0);
}
static void global_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.k.341 2 0) (bruijn ##.x.348 0 0) (##string ##.string.775))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D775.sym, VPOINTER_OTHER));
}
static void global_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (basename (close global_k309) (bruijn ##.x.349 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k309, env)}),
      _var0);
}
static void global_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.k.341 2 0) (bruijn ##.x.350 0 0) (##string ##.string.776))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D776.sym, VPOINTER_OTHER));
}
static void global_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (basename (close global_k311) (bruijn ##.x.351 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k311, env)}),
      _var0);
}
static void global_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if object? (car (close global_k302) scm-files) (if transpile? (car (close global_k304) scm-files) (if expand? (car (close global_k306) scm-files) (if header? (car (close global_k308) scm-files) (if bytecode? (car (close global_k310) scm-files) (if makefile? ((bruijn ##.k.341 0 0) out-file) ((bruijn ##.k.341 0 0) #f)))))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k302, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k304, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "expand?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k306, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k308, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k310, env)}),
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
static void global_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.339 1 0) out-file (bruijn ##.x.340 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      upenv->vars[0],
      _V0out__file,
      _var0
    );
}
static void global_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.338 1 0) ((close global_k301) (close global_k312)) ((bruijn ##.k.339 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k301, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k312, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (exit (bruijn ##.k.336 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 1,
      upenv->vars[0]);
}
static void global_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if header? (gen-header (close global_k315)) ((bruijn ##.k.336 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "gen-header")), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k315, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (exit (bruijn ##.k.325 25 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 1,
      VGetArg(upenv, 25-1, 0));
}
static void global_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if makefile? (gen-makefile (close global_k317)) ((bruijn ##.k.325 24 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "gen-makefile")), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k317, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 0)), 1,
      VEncodeBool(false));
}
}
static void global_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k314) (close global_k316))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k314, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k316, env)}));
}
static void global_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k300) (close global_k313))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k300, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k313, env)}));
}
static void global_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k299) out-file)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k299, env)}),
      VLookupGlobalVarFast2(runtime, "out-file"));
}
static void global_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k297) (close global_k298))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k297, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k298, env)}));
}
static void global_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k293) (close global_k296))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k293, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k296, env)}));
}
static void global_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k291) (close global_k292))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k291, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k292, env)}));
}
static void global_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k289) (close global_k290))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k289, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k290, env)}));
}
static void global_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k285) (close global_k288))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k285, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k288, env)}));
}
static void global_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k283) (close global_k284))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k283, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k284, env)}));
}
static void global_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k281) (close global_k282))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k281, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k282, env)}));
}
static void global_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k278) (close global_k280))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k278, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k280, env)}));
}
static void global_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k276) (close global_k277))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k276, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k277, env)}));
}
static void global_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k274) (close global_k275))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k274, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k275, env)}));
}
static void global_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k272) (close global_k273))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k272, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k273, env)}));
}
static void global_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close global_k271) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k271, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void global_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k269) (close global_k270))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k269, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k270, env)}));
}
static void global_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (> (close global_k268) (bruijn ##.x.378 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k268, env)}),
      _var0,
      VEncodeInt(1l));
}
static void global_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (count-true (close global_k267) makefile? header? bytecode? transpile? object? expand?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "count-true")), 7,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k267, env)}),
      VLookupGlobalVarFast2(runtime, "makefile?"),
      VLookupGlobalVarFast2(runtime, "header?"),
      VLookupGlobalVarFast2(runtime, "bytecode?"),
      VLookupGlobalVarFast2(runtime, "transpile?"),
      VLookupGlobalVarFast2(runtime, "object?"),
      VLookupGlobalVarFast2(runtime, "expand?"));
}
static void global_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k261) (close global_k266))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k261, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k266, env)}));
}
static void global_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k260) cc)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k260, env)}),
      VLookupGlobalVarFast2(runtime, "cc"));
}
static void global_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.48 2 0) (close global_k259) (bruijn ##.x.488 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k259, env)}),
      _var0);
}
static void global_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (getopt (close global_k258) (##string ##.string.777) (bruijn ##.x.489 0 0) (##inline ##vcore.qcons (##inline ##vcore.qcons 'shared (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'shared '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'help (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'help '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'api (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'api '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'platform (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'platform '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'cc (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'cc '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'version (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'version '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'keep-temps (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'keep-temps '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'makefile (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'makefile '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'maketarget (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'maketarget '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'bytecode (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'bytecode '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'benchmark (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'benchmark '()))) '()))))))))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "getopt")), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k258, env)}),
      VEncodePointer(&_V10_Dstring_D777.sym, VPOINTER_OTHER),
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
static void global_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D48_lambda83)) (command-line (close global_k257)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D48_lambda83, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "command-line")), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k257, env)}));
    }
}
static void global_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (with-exception-handler (bruijn ##.next.324 0 0) handle-exception (close global_lambda82))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-exception-handler")), 3,
      _var0,
      VLookupGlobalVarFast2(runtime, "handle-exception"),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda82, env)}));
}
static void global_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.696 1 0) ((bruijn ##.k.697 0 0) (##string ##.string.778)) (sprintf (bruijn ##.k.697 0 0) (##string ##.string.779) install-root))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D778.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D779.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
}
static void global_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.694 1 0) ((bruijn ##.k.695 0 0) (##string ##.string.780)) ((bruijn ##.k.695 0 0) (##string ##.string.781)))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D780.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D781.sym, VPOINTER_OTHER));
}
}
static void global_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if header? ((bruijn ##.k.693 0 0) header?) (if bytecode? ((bruijn ##.k.693 0 0) bytecode?) (if transpile? ((bruijn ##.k.693 0 0) transpile?) ((bruijn ##.k.693 0 0) expand?))))
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
static void global_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (make-temporary-file (bruijn ##.k.690 2 0) (bruijn ##.x.691 0 0) (##string ##.string.773))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "make-temporary-file")), 3,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D773.sym, VPOINTER_OTHER));
}
static void global_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-append (close global_k329) (##string ##.string.782) (bruijn ##.x.692 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k329, env)}),
      VEncodePointer(&_V10_Dstring_D782.sym, VPOINTER_OTHER),
      _var0);
}
static void global_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda86, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (basename (close global_k328) (bruijn ##.file.62 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k328, env)}),
      _var1);
}
static void global_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.688 1 0) (list (bruijn ##.k.689 0 0) out-file) (map (bruijn ##.k.689 0 0) (close global_lambda86) scm-files))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      _var0,
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda86, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
}
static void global_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if header? ((bruijn ##.k.686 0 0) header?) (if bytecode? ((bruijn ##.k.686 0 0) bytecode?) (if transpile? ((bruijn ##.k.686 0 0) transpile?) ((bruijn ##.k.686 0 0) expand?))))
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
static void global_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (make-temporary-file (bruijn ##.k.683 2 0) (bruijn ##.x.684 0 0) (##string ##.string.722))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "make-temporary-file")), 3,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D722.sym, VPOINTER_OTHER));
}
static void global_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-append (close global_k336) (##string ##.string.782) (bruijn ##.x.685 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k336, env)}),
      VEncodePointer(&_V10_Dstring_D782.sym, VPOINTER_OTHER),
      _var0);
}
static void global_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda87, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (basename (close global_k335) (bruijn ##.file.63 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k335, env)}),
      _var1);
}
static void global_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.681 1 0) (list (bruijn ##.k.682 0 0) #f) (if object? (list (bruijn ##.k.682 0 0) out-file) (map (bruijn ##.k.682 0 0) (close global_lambda87) scm-files)))
if(VDecodeBool(
upenv->vars[0])) {
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
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda87, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
}
}
static void global_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if debug? ((bruijn ##.k.679 0 0) (##string ##.string.783)) ((bruijn ##.k.679 0 0) (##string ##.string.728)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "debug?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D783.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D728.sym, VPOINTER_OTHER));
}
}
static void global_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if shared? ((bruijn ##.k.678 0 0) (##string ##.string.784)) ((bruijn ##.k.678 0 0) (##string ##.string.728)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D784.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D728.sym, VPOINTER_OTHER));
}
}
static void global_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if shared? (> (bruijn ##.k.615 0 0) (bruijn ##.num-mains.61 17 7) 0) ((bruijn ##.k.615 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      _var0,
      VGetArg(upenv, 17-1, 7),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.613 1 0) (compiler-error (bruijn ##.k.614 0 0) (##string ##.string.785)) ((bruijn ##.k.614 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D785.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.611 1 0) (compiler-error (bruijn ##.k.612 0 0) (##string ##.string.786)) ((bruijn ##.k.612 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D786.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D92_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D92_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.92 6 0) (bruijn ##.k.604 5 0) (bruijn ##.x.606 1 0) (bruijn ##.x.607 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 3,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D92_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D92_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cdr (close _V10_Dloop_D92_k362) (bruijn ##.paths.94 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D92_k362, env)}),
      upenv->up->up->up->vars[2]);
}
static void _V10_Dloop_D92_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D92_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-append (close _V10_Dloop_D92_k361) (bruijn ##.acc.93 3 1) (bruijn ##.x.608 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D92_k361, env)}),
      upenv->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D92_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D92_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (sprintf (close _V10_Dloop_D92_k360) (##string ##.string.787) (bruijn ##.x.609 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D92_k360, env)}),
      VEncodePointer(&_V10_Dstring_D787.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dloop_D92_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D92_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.605 0 0) ((bruijn ##.k.604 1 0) (bruijn ##.acc.93 1 1)) (car (close _V10_Dloop_D92_k359) (bruijn ##.paths.94 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D92_k359, env)}),
      upenv->vars[2]);
}
}
static void _V10_Dloop_D92_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D92_lambda88, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (null? (close _V10_Dloop_D92_k358) (bruijn ##.paths.94 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D92_k358, env)}),
      _var2);
}
static void global_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.591 0 0) (not (bruijn ##.k.588 3 0) object?) ((bruijn ##.k.588 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      upenv->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.590 0 0) (not (close global_k371) expand?) ((bruijn ##.k.588 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k371, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.589 0 0) (not (close global_k370) transpile?) ((bruijn ##.k.588 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k370, env)}),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.587 1 0) (not (close global_k369) bytecode?) ((bruijn ##.k.588 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k369, env)}),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if debug? ((bruijn ##.k.586 0 0) (##string ##.string.783)) ((bruijn ##.k.586 0 0) (##string ##.string.728)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "debug?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D783.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D728.sym, VPOINTER_OTHER));
}
}
static void global_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.584 1 0) ((bruijn ##.k.585 0 0) (##string ##.string.788)) (sprintf (bruijn ##.k.585 0 0) (##string ##.string.789) install-root))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D788.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D789.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
}
static void global_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if shared? ((bruijn ##.k.583 0 0) (##string ##.string.790)) ((bruijn ##.k.583 0 0) (##string ##.string.791)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D790.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D791.sym, VPOINTER_OTHER));
}
}
static void global_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if out-file (sprintf (bruijn ##.k.578 0 0) (##string ##.string.792) cc out-file) ((bruijn ##.k.578 0 0) cc))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D792.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "cc"),
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "cc"));
}
}
static void global_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if verbose? (displayln (bruijn ##.k.571 0 0) (bruijn ##.link-command.101 6 1)) ((bruijn ##.k.571 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "verbose?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      _var0,
      VGetArg(upenv, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (system (bruijn ##.k.564 14 0) (bruijn ##.link-command.101 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "system")), 2,
      VGetArg(upenv, 14-1, 0),
      VGetArg(upenv, 6-1, 1));
}
static void global_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k390) (close global_k391))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k390, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k391, env)}));
}
static void global_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k389) (bruijn ##.link-command.101 4 1) (bruijn ##.x.572 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k389, env)}),
      VEncodeInt(4l), VEncodeInt(1l),
      _var0
    );
}
static void global_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-append (close global_k388) (bruijn ##.link-command.101 3 1) (bruijn ##.link-command-flags.100 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k388, env)}),
      upenv->up->up->vars[1],
      upenv->up->up->vars[0]);
}
static void global_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.573 1 0) (bruijn ##.link-command.101 4 1) (bruijn ##.x.574 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      upenv->vars[0],
      VEncodeInt(4l), VEncodeInt(1l),
      _var0
    );
}
static void global_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda89, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (string-append (close global_k392) (bruijn ##.link-command.101 3 1) (bruijn ##.option.103 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k392, env)}),
      upenv->up->up->vars[1],
      _var1);
}
static void global_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (for-each (close global_k387) (close global_lambda89) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k387, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda89, env)}),
      VLookupGlobalVarFast2(runtime, "c-options"));
}
static void global_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.575 1 0) (bruijn ##.link-command.101 3 1) (bruijn ##.x.576 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      upenv->vars[0],
      VEncodeInt(3l), VEncodeInt(1l),
      _var0
    );
}
static void global_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda90, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (string-append (close global_k393) (bruijn ##.link-command.101 2 1) (##string ##.string.793) (bruijn ##.file.102 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k393, env)}),
      upenv->up->vars[1],
      VEncodePointer(&_V10_Dstring_D793.sym, VPOINTER_OTHER),
      _var1);
}
static void global_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (for-each (close global_k386) (close global_lambda90) (bruijn ##.x.577 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k386, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda90, env)}),
      _var0);
}
static void global_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.x.565 2 0) (bruijn ##.x.566 1 0)) (append (close global_k385) obj-files (bruijn ##.cc-obj-files.55 37 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = upenv->up->vars[0];
    env->vars[1] = upenv->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k385, env)}),
      VLookupGlobalVarFast2(runtime, "obj-files"),
      VGetArg(upenv, 37-1, 1));
    }
}
static void global_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k383) (close global_k384))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k383, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k384, env)}));
}
static void global_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-append (close global_k382) (bruijn ##.base-cc-flags.56 34 2) (bruijn ##.x.579 4 0) (bruijn ##.x.580 3 0) (bruijn ##.x.581 1 0) (bruijn ##.x.582 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 6,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k382, env)}),
      VGetArg(upenv, 34-1, 2),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
}
static void global_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k380) (close global_k381))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k380, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k381, env)}));
}
static void global_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k378) (close global_k379))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k378, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k379, env)}));
}
static void global_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close global_k377) platform (##string ##.string.713))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k377, env)}),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D713.sym, VPOINTER_OTHER));
}
static void global_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k375) (close global_k376))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k375, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k376, env)}));
}
static void global_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.563 1 0) (sprintf (close global_k374) (##string ##.string.794) optimization) ((bruijn ##.k.564 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k374, env)}),
      VEncodePointer(&_V10_Dstring_D794.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "optimization"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.562 0 0) (not (bruijn ##.k.559 3 0) keep?) ((bruijn ##.k.559 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      upenv->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "keep?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.561 0 0) (not (close global_k399) expand?) ((bruijn ##.k.559 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k399, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.560 0 0) (not (close global_k398) transpile?) ((bruijn ##.k.559 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k398, env)}),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.558 1 0) (not (close global_k397) bytecode?) ((bruijn ##.k.559 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k397, env)}),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.556 1 0) (for-each (bruijn ##.k.557 0 0) delete-file (bruijn ##.cc-files.54 32 0)) ((bruijn ##.k.557 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      _var0,
      VLookupGlobalVarFast2(runtime, "delete-file"),
      VGetArg(upenv, 32-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.555 0 0) (not (bruijn ##.k.551 4 0) keep?) ((bruijn ##.k.551 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      upenv->up->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "keep?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.554 0 0) (not (close global_k408) object?) ((bruijn ##.k.551 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k408, env)}),
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.553 0 0) (not (close global_k407) expand?) ((bruijn ##.k.551 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k407, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.552 0 0) (not (close global_k406) transpile?) ((bruijn ##.k.551 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k406, env)}),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.550 1 0) (not (close global_k405) bytecode?) ((bruijn ##.k.551 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k405, env)}),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.549 0 0) (for-each (bruijn ##.k.535 40 0) delete-file (bruijn ##.cc-obj-files.55 34 1)) ((bruijn ##.k.535 40 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VGetArg(upenv, 40-1, 0),
      VLookupGlobalVarFast2(runtime, "delete-file"),
      VGetArg(upenv, 34-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 40-1, 0)), 1,
      VEncodeBool(false));
}
}
static void global_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k404) (close global_k409))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k404, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k409, env)}));
}
static void global_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k403) header?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k403, env)}),
      VLookupGlobalVarFast2(runtime, "header?"));
}
static void global_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k401) (close global_k402))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k401, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k402, env)}));
}
static void global_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k396) (close global_k400))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k396, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k400, env)}));
}
static void global_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k395) header?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k395, env)}),
      VLookupGlobalVarFast2(runtime, "header?"));
}
static void global_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k373) (close global_k394))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k373, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k394, env)}));
}
static void global_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k368) (close global_k372))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k368, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k372, env)}));
}
static void global_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k367) header?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k367, env)}),
      VLookupGlobalVarFast2(runtime, "header?"));
}
static void global_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.602 0 0) (not (bruijn ##.k.600 2 0) expand?) ((bruijn ##.k.600 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      upenv->up->vars[0],
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.601 0 0) (not (close global_k415) transpile?) ((bruijn ##.k.600 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k415, env)}),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.599 1 0) (not (close global_k414) bytecode?) ((bruijn ##.k.600 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k414, env)}),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if verbose? (displayln (bruijn ##.k.598 0 0) (bruijn ##.cc-cmd.99 3 0)) ((bruijn ##.k.598 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "verbose?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      _var0,
      upenv->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (system (bruijn ##.k.594 6 0) (bruijn ##.cc-cmd.99 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "system")), 2,
      VGetArg(upenv, 6-1, 0),
      upenv->up->up->vars[0]);
}
static void global_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.596 0 0) ((close global_k417) (close global_k418)) ((bruijn ##.k.594 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k417, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k418, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void global_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k413) (close global_k416))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k413, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k416, env)}));
}
static void global_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.x.595 1 0)) (not (close global_k412) header?))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = upenv->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k412, env)}),
      VLookupGlobalVarFast2(runtime, "header?"));
    }
}
static void global_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (sprintf (close global_k411) (##string ##.string.796) cc (bruijn ##.path.98 0 0) (bruijn ##.cc-paths.91 7 0) (bruijn ##.cc-command.58 28 4) (bruijn ##.obj-file.97 1 3) (bruijn ##.cc-file.96 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 8,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k411, env)}),
      VEncodePointer(&_V10_Dstring_D796.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "cc"),
      _var0,
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 28-1, 4),
      upenv->vars[3],
      upenv->vars[2]);
}
static void global_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to global_lambda92, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (realbasepath (close global_k410) (bruijn ##.scm-file.95 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "realbasepath")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k410, env)}),
      _var1);
}
static void global_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (for-each (bruijn ##.k.593 0 0) (close global_lambda92) scm-files (bruijn ##.cc-files.54 26 0) (bruijn ##.cc-obj-files.55 26 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 5,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda92, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"),
      VGetArg(upenv, 26-1, 0),
      VGetArg(upenv, 26-1, 1));
}
static void global_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (benchmark (close global_k366) (##string ##.string.795) (close global_lambda91))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k366, env)}),
      VEncodePointer(&_V10_Dstring_D795.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda91, env)}));
}
static void global_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k365) (bruijn ##.cc-paths.91 3 0) (bruijn ##.x.603 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k365, env)}),
      VEncodeInt(3l), VEncodeInt(0l),
      _var0
    );
}
static void global_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.92 1 0) (close global_k364) (##string ##.string.728) (bruijn ##.x.610 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k364, env)}),
      VEncodePointer(&_V10_Dstring_D728.sym, VPOINTER_OTHER),
      _var0);
}
static void global_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 (#f) (letrec 1 ((close _V10_Dloop_D92_lambda88)) (cdr (close global_k363) paths)))
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
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D92_lambda88, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k363, env)}),
      VLookupGlobalVarFast2(runtime, "paths"));
    }
    }
}
static void global_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k356) (close global_k357))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k356, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k357, env)}));
}
static void global_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (> (close global_k355) (bruijn ##.num-mains.61 18 7) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k355, env)}),
      VGetArg(upenv, 18-1, 7),
      VEncodeInt(1l));
}
static void global_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k353) (close global_k354))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k353, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k354, env)}));
}
static void global_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k351) (close global_k352))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k351, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k352, env)}));
}
static void global_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k350) (bruijn ##.num-mains.61 15 7) (bruijn ##.x.616 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k350, env)}),
      VEncodeInt(15l), VEncodeInt(7l),
      _var0
    );
}
static void global_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.64 1 1) ((bruijn ##.k.619 0 0) 1) ((bruijn ##.k.619 0 0) 0))
if(VDecodeBool(
upenv->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
}
static void global_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (+ (bruijn ##.k.617 1 0) (bruijn ##.acc.65 1 2) (bruijn ##.x.618 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      upenv->vars[0],
      upenv->vars[2],
      _var0);
}
static void global_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to global_lambda93, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close global_k419) (close global_k420))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k419, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k420, env)}));
}
static void global_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (fold (close global_k349) (close global_lambda93) 0 (bruijn ##.x.620 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "fold")), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k349, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda93, env)}),
      VEncodeInt(0l),
      _var0);
}
static void _V10_Dloop_D73_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if werror-unbound-variables ((bruijn ##.k.650 0 0) compiler-error) ((bruijn ##.k.650 0 0) compiler-warning))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "werror-unbound-variables"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "compiler-error"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "compiler-warning"));
}
}
static void _V10_Dloop_D73_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.649 0 0) (bruijn ##.k.646 5 0) (##string ##.string.797) (bruijn ##.free.77 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 3,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D797.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
}
static void _V10_Dloop_D73_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.648 0 0) ((close _V10_Dloop_D73_k430) (close _V10_Dloop_D73_k431)) ((bruijn ##.k.646 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D73_k430, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k431, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D73_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V10_Dloop_D73_k429) (bruijn ##.x.651 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k429, env)}),
      _var0);
}
static void _V10_Dloop_D73_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close _V10_Dloop_D73_k428) (bruijn ##.free.77 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k428, env)}),
      _var0);
}
static void _V10_Dloop_D73_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.k.652 1 0) (bruijn ##.x.653 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D73_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_lambda97, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (memv (close _V10_Dloop_D73_k432) (bruijn ##.e.78 0 1) (bruijn ##.bound.75 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "memv")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k432, env)}),
      _var1,
      upenv->up->vars[2]);
}
static void _V10_Dloop_D73_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.73 8 0) (bruijn ##.k.646 7 0) (bruijn ##.x.655 2 0) (bruijn ##.new-bound.80 5 1) (bruijn ##.x.656 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 4,
      VGetArg(upenv, 7-1, 0),
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D73_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (append (close _V10_Dloop_D73_k437) (bruijn ##.x.657 0 0) (bruijn ##.free.76 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k437, env)}),
      _var0,
      VGetArg(upenv, 6-1, 3));
}
static void _V10_Dloop_D73_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.k.658 1 0) (bruijn ##.x.659 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D73_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (memv (close _V10_Dloop_D73_k438) (bruijn ##.e.84 0 1) (bruijn ##.free.76 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "memv")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k438, env)}),
      _var1,
      VGetArg(upenv, 6-1, 3));
}
static void _V10_Dloop_D73_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (filter (close _V10_Dloop_D73_k436) (close _V10_Dloop_D73_lambda98) (bruijn ##.new-free.79 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "filter")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k436, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_lambda98, env)}),
      upenv->up->up->vars[0]);
}
static void _V10_Dloop_D73_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cdr (close _V10_Dloop_D73_k435) (bruijn ##.exprs.74 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k435, env)}),
      upenv->up->up->up->vars[1]);
}
static void _V10_Dloop_D73_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Dloop_D73_k434) (bruijn ##.dummy.53.81 1 2) (bruijn ##.x.660 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k434, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Dloop_D73_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (free-variables-toplevel (bruijn ##.k.661 2 0) (bruijn ##.x.662 1 0) (bruijn ##.bound.75 5 2) (bruijn ##.x.663 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "free-variables-toplevel")), 4,
      upenv->up->vars[0],
      upenv->vars[0],
      VGetArg(upenv, 5-1, 2),
      _var0);
}
static void _V10_Dloop_D73_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close _V10_Dloop_D73_k440) (bruijn ##.path.69 11 0) paths)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k440, env)}),
      VGetArg(upenv, 11-1, 0),
      VLookupGlobalVarFast2(runtime, "paths"));
}
static void _V10_Dloop_D73_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_lambda99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V10_Dloop_D73_k439) (bruijn ##.exprs.74 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k439, env)}),
      upenv->up->up->vars[1]);
}
static void _V10_Dloop_D73_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.664 1 0) (bruijn ##.new-bound.80 2 1) (bruijn ##.new-bound.52.83 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      upenv->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      upenv->vars[2]
    );
}
static void _V10_Dloop_D73_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_lambda100, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V10_Dloop_D73_k441) (bruijn ##.new-free.79 1 0) (bruijn ##.new-free.51.82 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k441, env)}),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
static void _V10_Dloop_D73_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.647 0 0) (filter (close _V10_Dloop_D73_k427) (close _V10_Dloop_D73_lambda97) (bruijn ##.free.76 1 3)) (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Dloop_D73_k433) (close _V10_Dloop_D73_lambda99) (close _V10_Dloop_D73_lambda100))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "filter")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k427, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_lambda97, env)}),
      upenv->vars[3]);
} else {
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = VEncodeBool(false);
    env->vars[1] = VEncodeBool(false);
    env->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k433, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_lambda99, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_lambda100, env)}));
    }
}
}
static void _V10_Dloop_D73_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_lambda96, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (null? (close _V10_Dloop_D73_k426) (bruijn ##.exprs.74 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k426, env)}),
      _var1);
}
static void global_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.73 1 0) (bruijn ##.k.645 2 0) (bruijn ##.x.666 0 0) '() '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 4,
      upenv->up->vars[0],
      _var0,
      VNULL,
      VNULL);
}
static void global_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if w-unbound-variables (letrec 1 ((close _V10_Dloop_D73_lambda96)) (apply (close global_k442) append (bruijn ##.expanded.72 2 0))) ((bruijn ##.k.645 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "w-unbound-variables"))) {
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_lambda96, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k442, env)}),
      VLookupGlobalVarFast2(runtime, "append"),
      upenv->up->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.k.627 6 0) (bruijn ##.x.629 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VGetArg(upenv, 6-1, 0),
      _var0);
}
static void global_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close global_k455) (bruijn ##.x.630 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k455, env)}),
      _var0);
}
static void global_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (take-right (close global_k454) (bruijn ##.funs.87 5 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "take-right")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k454, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeInt(1l));
}
static void global_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (write-bytecode (close global_k453) (bruijn ##.x.631 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "write-bytecode")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k453, env)}),
      _var0);
}
static void global_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (apply (close global_k452) to-bytecode (bruijn ##.x.632 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k452, env)}),
      VLookupGlobalVarFast2(runtime, "to-bytecode"),
      _var0);
}
static void global_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close global_k451) debug? (bruijn ##.x.633 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k451, env)}),
      VLookupGlobalVarFast2(runtime, "debug?"),
      _var0);
}
static void global_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (apply (bruijn ##.k.627 2 0) printout2 (bruijn ##.x.634 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      upenv->up->vars[0],
      VLookupGlobalVarFast2(runtime, "printout2"),
      _var0);
}
static void global_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close global_k457) debug? (bruijn ##.x.635 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k457, env)}),
      VLookupGlobalVarFast2(runtime, "debug?"),
      _var0);
}
static void global_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if bytecode? (cons (close global_k450) shared? (bruijn ##.funs.87 1 0)) (cons (close global_k456) shared? (bruijn ##.funs.87 1 0)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k450, env)}),
      VLookupGlobalVarFast2(runtime, "shared?"),
      upenv->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k456, env)}),
      VLookupGlobalVarFast2(runtime, "shared?"),
      upenv->vars[0]);
}
}
static void global_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (benchmark (bruijn ##.k.622 10 0) (##string ##.string.798) (close global_lambda101))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10_Dstring_D798.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda101, env)}));
}
static void global_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (to-functions (bruijn ##.k.636 2 0) (bruijn ##.x.637 1 0) (bruijn ##.x.638 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "to-functions")), 3,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
}
static void global_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k459) bytecode?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k459, env)}),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
}
static void global_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (map (close global_k458) bruijn-ify (bruijn ##.opt.86 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k458, env)}),
      VLookupGlobalVarFast2(runtime, "bruijn-ify"),
      upenv->up->vars[0]);
}
static void global_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.626 0 0) (for-each (bruijn ##.k.622 9 0) pretty-print (bruijn ##.opt.86 1 0)) (benchmark (close global_k449) (##string ##.string.799) (close global_lambda102)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VGetArg(upenv, 9-1, 0),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      upenv->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k449, env)}),
      VEncodePointer(&_V10_Dstring_D799.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda102, env)}));
}
}
static void global_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close global_k448) expand? 2)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k448, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(2l));
}
static void global_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (optimize (bruijn ##.k.640 1 0) (bruijn ##.expr.88 1 1) (bruijn ##.x.641 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "optimize")), 3,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
}
static void global_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (not (close global_k460) bytecode?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k460, env)}),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
}
static void global_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (map (bruijn ##.k.639 0 0) (close global_lambda104) (bruijn ##.cps.85 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda104, env)}),
      upenv->up->vars[0]);
}
static void global_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.625 0 0) (for-each (bruijn ##.k.622 7 0) pretty-print (bruijn ##.cps.85 1 0)) (benchmark (close global_k447) (##string ##.string.800) (close global_lambda103)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VGetArg(upenv, 7-1, 0),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      upenv->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k447, env)}),
      VEncodePointer(&_V10_Dstring_D800.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda103, env)}));
}
}
static void global_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close global_k446) expand? 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k446, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(1l));
}
static void global_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda106, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (to-cps (bruijn ##.k.643 0 0) (bruijn ##.expr.89 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "to-cps")), 2,
      _var0,
      _var1);
}
static void global_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (map (bruijn ##.k.642 1 0) (close global_lambda106) (bruijn ##.x.644 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda106, env)}),
      _var0);
}
static void global_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (apply (close global_k461) append (bruijn ##.expanded.72 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k461, env)}),
      VLookupGlobalVarFast2(runtime, "append"),
      upenv->up->up->vars[0]);
}
static void global_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.624 0 0) (for-each (bruijn ##.k.622 5 0) pretty-print (bruijn ##.expanded.72 2 0)) (benchmark (close global_k445) (##string ##.string.801) (close global_lambda105)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VGetArg(upenv, 5-1, 0),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      upenv->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k445, env)}),
      VEncodePointer(&_V10_Dstring_D801.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda105, env)}));
}
}
static void global_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close global_k444) expand? 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k444, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(0l));
}
static void global_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k425) (close global_k443))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k425, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k443, env)}));
}
static void global_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (map (bruijn ##.k.668 2 0) alpha-convert (bruijn ##.x.669 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      upenv->up->vars[0],
      VLookupGlobalVarFast2(runtime, "alpha-convert"),
      _var0);
}
static void global_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (expand-toplevel (close global_k463) (bruijn ##.e.90 1 1) (bruijn ##.x.670 0 0) (bruijn ##.architecture.59 21 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "expand-toplevel")), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k463, env)}),
      upenv->vars[1],
      _var0,
      VGetArg(upenv, 21-1, 5));
}
static void global_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_lambda108, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (cons (close global_k462) (bruijn ##.path.69 5 0) paths)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k462, env)}),
      VGetArg(upenv, 5-1, 0),
      VLookupGlobalVarFast2(runtime, "paths"));
}
static void global_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (map (bruijn ##.k.667 0 0) (close global_lambda108) (bruijn ##.file.71 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda108, env)}),
      upenv->vars[0]);
}
static void global_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (benchmark (close global_k424) (##string ##.string.802) (close global_lambda107))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k424, env)}),
      VEncodePointer(&_V10_Dstring_D802.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda107, env)}));
}
static void global_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (append (bruijn ##.k.671 1 0) (bruijn ##.x.672 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 2,
      upenv->vars[0],
      _var0);
}
static void global_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.fd.70 1 0) (read-all (close global_k464) (bruijn ##.fd.70 1 0)) (compiler-error (bruijn ##.k.671 0 0) (##string ##.string.804) (bruijn ##.scm-file.66 4 1)))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-all")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k464, env)}),
      upenv->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D804.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]);
}
}
static void global_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (benchmark (close global_k423) (##string ##.string.803) (close global_lambda109))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k423, env)}),
      VEncodePointer(&_V10_Dstring_D803.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda109, env)}));
}
static void global_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-file (close global_k422) (bruijn ##.scm-file.66 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-file")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k422, env)}),
      upenv->up->vars[1]);
}
static void global_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (with-output-to-file (bruijn ##.k.621 1 0) (bruijn ##.cc-file.67 1 2) (close global_lambda95))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-output-to-file")), 3,
      upenv->vars[0],
      upenv->vars[2],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda95, env)}));
}
static void global_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to global_lambda94, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (realbasepath (close global_k421) (bruijn ##.scm-file.66 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "realbasepath")), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k421, env)}),
      _var1);
}
static void global_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (map (close global_k348) (close global_lambda94) scm-files (bruijn ##.cc-files.54 13 0) (bruijn ##.cc-obj-files.55 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 5,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k348, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda94, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"),
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 13-1, 1));
}
static void global_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k347) (bruijn ##.cc-command.58 12 4) (bruijn ##.x.673 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k347, env)}),
      VEncodeInt(12l), VEncodeInt(4l),
      _var0
    );
}
static void global_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (apply (close global_k346) string-append (bruijn ##.cc-command-flags.57 11 3) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k346, env)}),
      VLookupGlobalVarFast2(runtime, "string-append"),
      VGetArg(upenv, 11-1, 3),
      VLookupGlobalVarFast2(runtime, "c-options"));
}
static void global_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k345) (bruijn ##.cc-command-flags.57 10 3) (bruijn ##.x.674 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k345, env)}),
      VEncodeInt(10l), VEncodeInt(3l),
      _var0
    );
}
static void global_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-append (close global_k344) (bruijn ##.base-cc-flags.56 9 2) (bruijn ##.x.675 2 0) (bruijn ##.x.676 1 0) (bruijn ##.x.677 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 5,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k344, env)}),
      VGetArg(upenv, 9-1, 2),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
}
static void global_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k342) (close global_k343))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k342, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k343, env)}));
}
static void global_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k340) (close global_k341))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k340, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k341, env)}));
}
static void global_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (sprintf (close global_k339) (##string ##.string.794) optimization)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k339, env)}),
      VEncodePointer(&_V10_Dstring_D794.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "optimization"));
}
static void global_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k338) (bruijn ##.cc-obj-files.55 5 1) (bruijn ##.x.680 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k338, env)}),
      VEncodeInt(5l), VEncodeInt(1l),
      _var0
    );
}
static void global_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k334) (close global_k337))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k334, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k337, env)}));
}
static void global_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k332) (close global_k333))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k332, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k333, env)}));
}
static void global_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k331) (bruijn ##.cc-files.54 2 0) (bruijn ##.x.687 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k331, env)}),
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
}
static void global_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k327) (close global_k330))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k327, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k330, env)}));
}
static void global_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 8 (#f #f (bruijn ##.x.536 4 0) #f #f (bruijn ##.x.537 2 0) (bruijn ##.x.538 1 0) #f) ((close global_k325) (close global_k326)))
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
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k325, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k326, env)}));
    }
}
static void global_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (current-output-port (close global_k324))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k324, env)}));
}
static void global_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k322) (close global_k323))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k322, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k323, env)}));
}
static void global_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close global_k321) platform (##string ##.string.767))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k321, env)}),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D767.sym, VPOINTER_OTHER));
}
static void global_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k319) (close global_k320))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_k319, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k320, env)}));
}
static void global_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close global_k318) platform (##string ##.string.713))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k318, env)}),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D713.sym, VPOINTER_OTHER));
}
static void global_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_lambda84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (with-exception-handler (bruijn ##.next.534 0 0) handle-exception (close global_lambda85))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-exception-handler")), 3,
      _var0,
      VLookupGlobalVarFast2(runtime, "handle-exception"),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda85, env)}));
}
void toplevel0(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda1, .env = env }, }, 1,
      _k);
}
void toplevel1(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda2, .env = env }, }, 1,
      _k);
}
void toplevel2(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda3, .env = env }, }, 1,
      _k);
}
void toplevel3(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda4, .env = env }, }, 1,
      _k);
}
void toplevel4(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda5, .env = env }, }, 1,
      _k);
}
void toplevel5(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda6, .env = env }, }, 1,
      _k);
}
void toplevel6(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda7, .env = env }, }, 1,
      _k);
}
void toplevel7(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda8, .env = env }, }, 1,
      _k);
}
void toplevel8(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda9, .env = env }, }, 1,
      _k);
}
void toplevel9(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda10, .env = env }, }, 1,
      _k);
}
void toplevel10(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda11, .env = env }, }, 1,
      _k);
}
void toplevel11(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda12, .env = env }, }, 1,
      _k);
}
void toplevel12(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda13, .env = env }, }, 1,
      _k);
}
void toplevel13(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda14, .env = env }, }, 1,
      _k);
}
void toplevel14(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda15, .env = env }, }, 1,
      _k);
}
void toplevel15(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda16, .env = env }, }, 1,
      _k);
}
void toplevel16(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda17, .env = env }, }, 1,
      _k);
}
void toplevel17(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda18, .env = env }, }, 1,
      _k);
}
void toplevel18(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda19, .env = env }, }, 1,
      _k);
}
void toplevel19(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda20, .env = env }, }, 1,
      _k);
}
void toplevel20(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda21, .env = env }, }, 1,
      _k);
}
void toplevel21(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda22, .env = env }, }, 1,
      _k);
}
void toplevel22(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda23, .env = env }, }, 1,
      _k);
}
void toplevel23(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda24, .env = env }, }, 1,
      _k);
}
void toplevel24(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda25, .env = env }, }, 1,
      _k);
}
void toplevel25(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda26, .env = env }, }, 1,
      _k);
}
void toplevel26(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda27, .env = env }, }, 1,
      _k);
}
void toplevel27(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda28, .env = env }, }, 1,
      _k);
}
void toplevel28(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda29, .env = env }, }, 1,
      _k);
}
void toplevel29(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda30, .env = env }, }, 1,
      _k);
}
void toplevel30(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda31, .env = env }, }, 1,
      _k);
}
void toplevel31(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda32, .env = env }, }, 1,
      _k);
}
void toplevel32(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda33, .env = env }, }, 1,
      _k);
}
void toplevel33(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda34, .env = env }, }, 1,
      _k);
}
void toplevel34(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda35, .env = env }, }, 1,
      _k);
}
void toplevel35(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda36, .env = env }, }, 1,
      _k);
}
void toplevel36(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda37, .env = env }, }, 1,
      _k);
}
void toplevel37(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda38, .env = env }, }, 1,
      _k);
}
void toplevel38(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda39, .env = env }, }, 1,
      _k);
}
void toplevel39(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda40, .env = env }, }, 1,
      _k);
}
void toplevel40(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda43, .env = env }, }, 1,
      _k);
}
void toplevel41(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda46, .env = env }, }, 1,
      _k);
}
void toplevel42(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda49, .env = env }, }, 1,
      _k);
}
void toplevel43(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda52, .env = env }, }, 1,
      _k);
}
void toplevel44(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda55, .env = env }, }, 1,
      _k);
}
void toplevel45(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda58, .env = env }, }, 1,
      _k);
}
void toplevel46(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda60, .env = env }, }, 1,
      _k);
}
void toplevel47(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda62, .env = env }, }, 1,
      _k);
}
void toplevel48(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda65, .env = env }, }, 1,
      _k);
}
void toplevel49(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda67, .env = env }, }, 1,
      _k);
}
void toplevel50(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda71, .env = env }, }, 1,
      _k);
}
void toplevel51(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda75, .env = env }, }, 1,
      _k);
}
void toplevel52(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda77, .env = env }, }, 1,
      _k);
}
void toplevel53(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda79, .env = env }, }, 1,
      _k);
}
void toplevel54(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda81, .env = env }, }, 1,
      _k);
}
void toplevel55(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)global_lambda84, .env = env }, }, 1,
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
,  toplevel52
,  toplevel53
,  toplevel54
,  toplevel55
,};
int VanityToplevelCount = sizeof VanityToplevels / sizeof *VanityToplevels;
int main(int argc, char ** argv) {
  VRuntime * runtime;
  VInitRuntime2(&runtime, argc, argv);
  return VDecodeExitCode(VStart2(runtime, VanityToplevelCount, VanityToplevels));
}
