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
static struct { VBlob sym; char bytes[2]; } _V10string_D506 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static struct { VBlob sym; char bytes[9]; } _V10string_D505 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~A -o ~A" };
static struct { VBlob sym; char bytes[20]; } _V10string_D504 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, " -Wl,--no-as-needed" };
static struct { VBlob sym; char bytes[15]; } _V10string_D503 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, " -fPIC -shared" };
static struct { VBlob sym; char bytes[40]; } _V10string_D502 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, " -L~A/x86_64-w64-mingw32/lib/ -lvscheme" };
static struct { VBlob sym; char bytes[11]; } _V10string_D501 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, " -lvscheme" };
static struct { VBlob sym; char bytes[11]; } _V10string_D500 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "/bin/rm ~A" };
VWEAK VWORD _V0delete__file;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0delete__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "delete-file" };
static struct { VBlob sym; char bytes[87]; } _V10string_D499 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 87 }, "program has toplevel expressions in multiple files, and so it generated multiple mains" };
static struct { VBlob sym; char bytes[51]; } _V10string_D498 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[23]; } _V10string_D497 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "~A -I~A ~A -c -o ~A ~A" };
static struct { VBlob sym; char bytes[20]; } _V10string_D496 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "file does not exist" };
VWEAK VWORD _V0num__mains;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0num__mains = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "num-mains" };
VWEAK VWORD _V0stdout;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "stdout" };
VWEAK VWORD _V0cc__command;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0cc__command = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "cc-command" };
static struct { VBlob sym; char bytes[6]; } _V10string_D495 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, " -O~A" };
VWEAK VWORD _V0cc__command__flags;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0cc__command__flags = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "cc-command-flags" };
static struct { VBlob sym; char bytes[7]; } _V10string_D494 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, " -fPIC" };
static struct { VBlob sym; char bytes[4]; } _V10string_D493 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " -g" };
VWEAK VWORD _V0base__cc__flags;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0base__cc__flags = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "base-cc-flags" };
static struct { VBlob sym; char bytes[108]; } _V10string_D492 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 108 }, " -Wl,--export-all-symbols -Wl,--stack,8388608 -Wmissing-braces -masm=intel -I~A/x86_64-w64-mingw32/include/" };
static struct { VBlob sym; char bytes[40]; } _V10string_D491 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, " -rdynamic -Wmissing-braces -masm=intel" };
VWEAK VWORD _V0cc__obj__files;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0cc__obj__files = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "cc-obj-files" };
VWEAK VWORD _V0cc__files;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0cc__files = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "cc-files" };
static struct { VBlob sym; char bytes[6]; } _V10string_D490 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "/tmp/" };
static struct { VBlob sym; char bytes[4]; } _V10string_D489 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "~A " };
static struct { VBlob sym; char bytes[2]; } _V10string_D488 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ":" };
static struct { VBlob sym; char bytes[4]; } _V10string_D487 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " ~A" };
static struct { VBlob sym; char bytes[15]; } _V10string_D486 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "invalid import" };
VWEAK VWORD _V0gen__makefile;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0gen__makefile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "gen-makefile" };
static struct { VBlob sym; char bytes[36]; } _V10string_D485 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "File did not produce a valid header" };
static struct { VBlob sym; char bytes[50]; } _V10string_D484 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "Only one statement permitted in header generation" };
VWEAK VWORD _V0gen__header;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0gen__header = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "gen-header" };
static struct { VBlob sym; char bytes[6]; } _V10string_D483 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".scmh" };
static struct { VBlob sym; char bytes[6]; } _V10string_D482 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".escm" };
static struct { VBlob sym; char bytes[3]; } _V10string_D481 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".c" };
static struct { VBlob sym; char bytes[56]; } _V10string_D480 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 56 }, "FIXME: -h and -c and -t and -E can only handle one file" };
static struct { VBlob sym; char bytes[89]; } _V10string_D479 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 89 }, "Cannot specify '-h' or '-c' or '-t' or '-E' or '--makefile' with '-o' and multiple files" };
static struct { VBlob sym; char bytes[75]; } _V10string_D478 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 75 }, "Cannot specify '-h' '-c' or '-t' or '-E' or '--makefile' with object files" };
static struct { VBlob sym; char bytes[23]; } _V10string_D477 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "No input file provided" };
static struct { VBlob sym; char bytes[68]; } _V10string_D476 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "Only one of '-h' or '-c' or '-t' or '-E' or '--makefile' can be set" };
VWEAK VWORD _V0count__true;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0count__true = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "count-true" };
static struct { VBlob sym; char bytes[8]; } _V10string_D475 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "windows" };
static struct { VBlob sym; char bytes[57]; } _V10string_D474 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "Unknown --platform, only 'linux' and 'windows' are valid" };
static struct { VBlob sym; char bytes[32]; } _V10string_D473 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "/usr/bin/x86_64-w64-mingw32-gcc" };
static struct { VBlob sym; char bytes[4]; } _V10string_D472 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "gcc" };
static struct { VBlob sym; char bytes[19]; } _V10string_D471 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "Unknown CLI option" };
static struct { VBlob sym; char bytes[30]; } _V10string_D470 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "Wrapper flag -W missing comma" };
static struct { VBlob sym; char bytes[67]; } _V10string_D469 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 67 }, "Wrapper flag -W can only pass args to the C compiler, eg -Wc,-Ilib" };
static struct { VBlob sym; char bytes[57]; } _V10string_D468 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "Expand flag -E expects integer between 0 and 2 inclusive" };
static struct { VBlob sym; char bytes[63]; } _V10string_D467 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "Optimization flag -O expects integer between 0 and 3 inclusive" };
static struct { VBlob sym; char bytes[3]; } _V10string_D466 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".o" };
VWEAK VWORD _V0benchmark;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0benchmark = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "benchmark" };
VWEAK VWORD _V0maketarget;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0maketarget = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "maketarget" };
VWEAK VWORD _V0makefile;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0makefile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "makefile" };
VWEAK VWORD _V0keep__temps;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0keep__temps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "keep-temps" };
VWEAK VWORD _V0version;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "version" };
VWEAK VWORD _V0help;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0help = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "help" };
VWEAK VWORD _V0shared;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0shared = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "shared" };
static struct { VBlob sym; char bytes[16]; } _V10string_D465 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "vghtco:I:O:E:W:" };
static struct { VBlob sym; char bytes[31]; } _V10string_D464 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "Vanity Scheme Compiler ~A.~A~N" };
static struct { VBlob sym; char bytes[37]; } _V10string_D463 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "Copyright (C) 2023 Richard Van Natta" };
VWEAK VWORD _V0display__version;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0display__version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "display-version" };
static struct { VBlob sym; char bytes[29]; } _V10string_D462 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "Usage: vsc [options] file..." };
static struct { VBlob sym; char bytes[9]; } _V10string_D461 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "Options:" };
static struct { VBlob sym; char bytes[94]; } _V10string_D460 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 94 }, "  -O<num>         Compile with optimization levels 0 (slowest codegen) to 3 (fastest codegen)" };
static struct { VBlob sym; char bytes[45]; } _V10string_D459 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  -g              Compile with debug symbols" };
static struct { VBlob sym; char bytes[60]; } _V10string_D458 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "  -h              Generate header file instead of compiling" };
static struct { VBlob sym; char bytes[118]; } _V10string_D457 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 118 }, "  -E<num>         Expand only, do not compile or link. 0: macros only, 1: continuation passing style, 2: optimization" };
static struct { VBlob sym; char bytes[57]; } _V10string_D456 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "  -t              Transpile only, do not compile or link" };
static struct { VBlob sym; char bytes[68]; } _V10string_D455 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "  -c              Transpile, compile, and assemble, but do not link" };
static struct { VBlob sym; char bytes[47]; } _V10string_D454 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 47 }, "  -o<file>        Place the output into <file>" };
static struct { VBlob sym; char bytes[87]; } _V10string_D453 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 87 }, "  -I<dir>         Add the directory to the list to be searched for scheme header files" };
static struct { VBlob sym; char bytes[57]; } _V10string_D452 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "  -Wc,<option>    Pass comma seperated to the C compiler" };
static struct { VBlob sym; char bytes[45]; } _V10string_D451 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  -v              Show intermediate commands" };
static struct { VBlob sym; char bytes[86]; } _V10string_D450 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 86 }, "  --makefile      Generate makefile dependencies, similar to gcc invoked with -MM -MG" };
static struct { VBlob sym; char bytes[110]; } _V10string_D449 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 110 }, "  --maketarget    Specify the target of the make dependency, additional --maketarget's add additional targets" };
static struct { VBlob sym; char bytes[1]; } _V10string_D448 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[44]; } _V10string_D447 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "  --shared        Compile as shared library" };
static struct { VBlob sym; char bytes[76]; } _V10string_D446 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 76 }, "  --keep-temps    Keep temporary compilation files, such as C intermediates" };
static struct { VBlob sym; char bytes[81]; } _V10string_D445 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 81 }, "  --platform=<os> Which OS to make executables for. Either 'linux' or 'windows'." };
static struct { VBlob sym; char bytes[72]; } _V10string_D444 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 72 }, "  --cc=<compiler> Use the C compiler of your choice. The default is gcc" };
static struct { VBlob sym; char bytes[38]; } _V10string_D443 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "  --help          You know about this" };
static struct { VBlob sym; char bytes[46]; } _V10string_D442 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "  --version       Show version and build info" };
VWEAK VWORD _V0display__help;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0display__help = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "display-help" };
static struct { VBlob sym; char bytes[22]; } _V10string_D441 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "realpath `dirname ~A`" };
VWEAK VWORD _V0realbasepath;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0realbasepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "realbasepath" };
static struct { VBlob sym; char bytes[12]; } _V10string_D440 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "realpath ~A" };
VWEAK VWORD _V0realpath;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0realpath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "realpath" };
VWEAK VWORD _V0decomma;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0decomma = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "decomma" };
static struct { VBlob sym; char bytes[2]; } _V10string_D439 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "." };
VWEAK VWORD _V0basepath;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0basepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "basepath" };
VWEAK VWORD _V0basename;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0basename = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "basename" };
VWEAK VWORD _V0change__extension;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0change__extension = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "change-extension" };
VWEAK VWORD _V0extension;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0extension = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "extension" };
VWEAK VWORD _V0benchmark_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0benchmark_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "benchmark\?" };
VWEAK VWORD _V0maketargets;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0maketargets = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "maketargets" };
VWEAK VWORD _V0makefile_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0makefile_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "makefile\?" };
static struct { VBlob sym; char bytes[11]; } _V10string_D438 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "~A/include" };
VWEAK VWORD _V0paths;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0paths = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "paths" };
VWEAK VWORD _V0c__options;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0c__options = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "c-options" };
VWEAK VWORD _V0cc;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0cc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "cc" };
static struct { VBlob sym; char bytes[6]; } _V10string_D437 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "linux" };
VWEAK VWORD _V0platform;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0platform = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "platform" };
VWEAK VWORD _V0out__file;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0out__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "out-file" };
VWEAK VWORD _V0api;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0api = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "api" };
VWEAK VWORD _V0optimization;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0optimization = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "optimization" };
VWEAK VWORD _V0verbose_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0verbose_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "verbose\?" };
VWEAK VWORD _V0debug_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0debug_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "debug\?" };
VWEAK VWORD _V0object_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0object_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "object\?" };
VWEAK VWORD _V0transpile_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0transpile_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "transpile\?" };
VWEAK VWORD _V0header_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0header_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "header\?" };
VWEAK VWORD _V0keep_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0keep_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "keep\?" };
VWEAK VWORD _V0expand_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expand_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expand\?" };
VWEAK VWORD _V0shared_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0shared_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "shared\?" };
VWEAK VWORD _V0obj__files;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0obj__files = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "obj-files" };
VWEAK VWORD _V0scm__files;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0scm__files = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "scm-files" };
static struct { VBlob sym; char bytes[34]; } _V10string_D436 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[35]; } _V10string_D435 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "_V0vanity_V0compiler_V0library_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D434 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0transpile_V20" };
static struct { VBlob sym; char bytes[31]; } _V10string_D433 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0cps_V20" };
static struct { VBlob sym; char bytes[34]; } _V10string_D432 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0expand_V20" };
static struct { VBlob sym; char bytes[34]; } _V10string_D431 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0getopt_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D430 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D429 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D428 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[30]; } _V10string_D427 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D426 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D425 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V40_V10sys_Dnext;VWEAK VClosure _VW_V40_V10sys_Dnext = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNext2, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0delete__file = VEncodePointer(VLookupConstant("_V0delete__file", &_VW_V0delete__file), VPOINTER_OTHER);
  _V0num__mains = VEncodePointer(VLookupConstant("_V0num__mains", &_VW_V0num__mains), VPOINTER_OTHER);
  _V0stdout = VEncodePointer(VLookupConstant("_V0stdout", &_VW_V0stdout), VPOINTER_OTHER);
  _V0cc__command = VEncodePointer(VLookupConstant("_V0cc__command", &_VW_V0cc__command), VPOINTER_OTHER);
  _V0cc__command__flags = VEncodePointer(VLookupConstant("_V0cc__command__flags", &_VW_V0cc__command__flags), VPOINTER_OTHER);
  _V0base__cc__flags = VEncodePointer(VLookupConstant("_V0base__cc__flags", &_VW_V0base__cc__flags), VPOINTER_OTHER);
  _V0cc__obj__files = VEncodePointer(VLookupConstant("_V0cc__obj__files", &_VW_V0cc__obj__files), VPOINTER_OTHER);
  _V0cc__files = VEncodePointer(VLookupConstant("_V0cc__files", &_VW_V0cc__files), VPOINTER_OTHER);
  _V0gen__makefile = VEncodePointer(VLookupConstant("_V0gen__makefile", &_VW_V0gen__makefile), VPOINTER_OTHER);
  _V0gen__header = VEncodePointer(VLookupConstant("_V0gen__header", &_VW_V0gen__header), VPOINTER_OTHER);
  _V0count__true = VEncodePointer(VLookupConstant("_V0count__true", &_VW_V0count__true), VPOINTER_OTHER);
  _V0benchmark = VEncodePointer(VLookupConstant("_V0benchmark", &_VW_V0benchmark), VPOINTER_OTHER);
  _V0maketarget = VEncodePointer(VLookupConstant("_V0maketarget", &_VW_V0maketarget), VPOINTER_OTHER);
  _V0makefile = VEncodePointer(VLookupConstant("_V0makefile", &_VW_V0makefile), VPOINTER_OTHER);
  _V0keep__temps = VEncodePointer(VLookupConstant("_V0keep__temps", &_VW_V0keep__temps), VPOINTER_OTHER);
  _V0version = VEncodePointer(VLookupConstant("_V0version", &_VW_V0version), VPOINTER_OTHER);
  _V0help = VEncodePointer(VLookupConstant("_V0help", &_VW_V0help), VPOINTER_OTHER);
  _V0shared = VEncodePointer(VLookupConstant("_V0shared", &_VW_V0shared), VPOINTER_OTHER);
  _V0display__version = VEncodePointer(VLookupConstant("_V0display__version", &_VW_V0display__version), VPOINTER_OTHER);
  _V0display__help = VEncodePointer(VLookupConstant("_V0display__help", &_VW_V0display__help), VPOINTER_OTHER);
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
  _V0header_Q = VEncodePointer(VLookupConstant("_V0header_Q", &_VW_V0header_Q), VPOINTER_OTHER);
  _V0keep_Q = VEncodePointer(VLookupConstant("_V0keep_Q", &_VW_V0keep_Q), VPOINTER_OTHER);
  _V0expand_Q = VEncodePointer(VLookupConstant("_V0expand_Q", &_VW_V0expand_Q), VPOINTER_OTHER);
  _V0shared_Q = VEncodePointer(VLookupConstant("_V0shared_Q", &_VW_V0shared_Q), VPOINTER_OTHER);
  _V0obj__files = VEncodePointer(VLookupConstant("_V0obj__files", &_VW_V0obj__files), VPOINTER_OTHER);
  _V0scm__files = VEncodePointer(VLookupConstant("_V0scm__files", &_VW_V0scm__files), VPOINTER_OTHER);
  _V40_V10sys_Dnext = VEncodePointer(VLookupConstant("_V40_V10sys_Dnext", &_VW_V40_V10sys_Dnext), VPOINTER_CLOSURE);
}
static void global_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k1, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (##intrinsic ##sys.next) (bruijn ##x.2 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      _V40_V10sys_Dnext,
      _var0);
 }
}
static void global_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k2, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (##intrinsic ##sys.next) (bruijn ##x.3 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      _V40_V10sys_Dnext,
      _var0);
 }
}
static void global_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k3, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (##intrinsic ##sys.next) (bruijn ##x.4 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      _V40_V10sys_Dnext,
      _var0);
 }
}
static void global_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k4, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (##intrinsic ##sys.next) (bruijn ##x.5 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      _V40_V10sys_Dnext,
      _var0);
 }
}
static void global_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k5, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (##intrinsic ##sys.next) (bruijn ##x.6 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      _V40_V10sys_Dnext,
      _var0);
 }
}
static void global_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k6, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (##intrinsic ##sys.next) (bruijn ##x.7 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      _V40_V10sys_Dnext,
      _var0);
 }
}
static void global_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k7, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (##intrinsic ##sys.next) (bruijn ##x.8 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      _V40_V10sys_Dnext,
      _var0);
 }
}
static void global_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k8, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (##intrinsic ##sys.next) (bruijn ##x.9 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      _V40_V10sys_Dnext,
      _var0);
 }
}
static void global_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k9, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (##intrinsic ##sys.next) (bruijn ##x.10 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      _V40_V10sys_Dnext,
      _var0);
 }
}
static void global_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k10, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (##intrinsic ##sys.next) (bruijn ##x.11 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      _V40_V10sys_Dnext,
      _var0);
 }
}
static void global_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k11, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (##intrinsic ##sys.next) (bruijn ##x.12 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      _V40_V10sys_Dnext,
      _var0);
 }
}
static void global_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k12, runtime, upenv, 1, argc, _var0) {
  // (##vcore.multidefine (##intrinsic ##sys.next) (bruijn ##x.13 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      _V40_V10sys_Dnext,
      _var0);
 }
}
static void global_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define ##sys.next paths (bruijn ##x.14 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0paths,
      _var0
    );
 }
}
static void global_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (list (close global_k14) (bruijn ##x.15 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "list"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k14, env)}),
      _var0);
 }
}
static void _V0extension_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0extension_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_k17, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 0) (bruijn ##k.16 4 0) (bruijn ##x.18 0 0))
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0extension_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0extension_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0extension_k17) (bruijn ##x.19 0 0) 1)
V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k17, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0extension_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0extension_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-length (close _V0extension_k16) (bruijn file 2 1))
V_CALL(VLookupGlobalVarFast2(runtime, "string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k16, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0loop_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k21, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.20 4 0) (bruijn ##x.23 0 0))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0loop_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.22 0 0) (substring (bruijn ##k.20 3 0) (bruijn file 5 1) (bruijn i 3 1)) (- (close _V0loop_k21) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "substring"), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->up->up->vars[1]);
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k21, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V0loop_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V0loop_k20) #\. (bruijn ##x.24 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k20, env)}),
      VEncodeChar('.'),
      _var0);
 }
}
static void _V0loop_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.21 0 0) ((bruijn ##k.20 1 0) #f) (string-ref (close _V0loop_k19) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k19, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V0loop_k18) (bruijn i 0 1) 0)
V_CALL(VLookupGlobalVarFast2(runtime, "<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k18, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0extension_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_lambda2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0extension_k15) (bruijn loop 0 0) (close _V0loop_lambda3))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k15, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda3, env)})
    );
 }
}
static void _V0extension_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0extension_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0extension_lambda1, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_lambda1, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0extension_lambda2) #f)
V_CALL_FUNC(_V0extension_lambda2, env, runtime,
      VEncodeBool(false));
 }
}
static void _V0change__extension_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0change__extension_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_k24, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 0) (bruijn ##k.25 4 0) (bruijn ##x.27 0 0))
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0change__extension_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0change__extension_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0change__extension_k24) (bruijn ##x.28 0 0) 1)
V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k24, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0change__extension_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0change__extension_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-length (close _V0change__extension_k23) (bruijn file 2 1))
V_CALL(VLookupGlobalVarFast2(runtime, "string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k23, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0loop_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k28, runtime, upenv, 1, argc, _var0) {
  // (string-append (bruijn ##k.29 4 0) (bruijn ##x.32 0 0) (bruijn new 6 2))
V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0loop_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k29, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.29 4 0) (bruijn ##x.33 0 0))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0loop_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.31 0 0) (substring (close _V0loop_k28) (bruijn file 5 1) 0 (bruijn i 3 1)) (- (close _V0loop_k29) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "substring"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k28, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(0l),
      upenv->up->up->vars[1]);
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k29, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V0loop_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V0loop_k27) #\. (bruijn ##x.34 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k27, env)}),
      VEncodeChar('.'),
      _var0);
 }
}
static void _V0loop_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.30 0 0) (string-append (bruijn ##k.29 1 0) (bruijn file 3 1) (bruijn new 3 2)) (string-ref (close _V0loop_k26) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      upenv->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2]);
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k26, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V0loop_k25) (bruijn i 0 1) 0)
V_CALL(VLookupGlobalVarFast2(runtime, "<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k25, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0change__extension_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_lambda5" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_lambda5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0change__extension_k22) (bruijn loop 0 0) (close _V0loop_lambda6))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k22, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda6, env)})
    );
 }
}
static void _V0change__extension_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0change__extension_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0change__extension_lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0change__extension_lambda5) #f)
V_CALL_FUNC(_V0change__extension_lambda5, env, runtime,
      VEncodeBool(false));
 }
}
static void _V0basename_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basename_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basename_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_k32, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 0) (bruijn ##k.35 4 0) (bruijn ##x.37 0 0))
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0basename_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basename_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basename_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0basename_k32) (bruijn ##x.38 0 0) 1)
V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k32, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0basename_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basename_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basename_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-length (close _V0basename_k31) (bruijn file 2 1))
V_CALL(VLookupGlobalVarFast2(runtime, "string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k31, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0loop_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k36, runtime, upenv, 1, argc, _var0) {
  // (substring (bruijn ##k.39 4 0) (bruijn file 6 1) (bruijn ##x.42 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "substring"), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      _var0);
 }
}
static void _V0loop_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k37, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.39 4 0) (bruijn ##x.43 0 0))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0loop_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.41 0 0) (+ (close _V0loop_k36) (bruijn i 3 1) 1) (- (close _V0loop_k37) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "+"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k36, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k37, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V0loop_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V0loop_k35) #\/ (bruijn ##x.44 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k35, env)}),
      VEncodeChar('/'),
      _var0);
 }
}
static void _V0loop_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.40 0 0) ((bruijn ##k.39 1 0) (bruijn file 3 1)) (string-ref (close _V0loop_k34) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[1]);
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k34, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V0loop_k33) (bruijn i 0 1) 0)
V_CALL(VLookupGlobalVarFast2(runtime, "<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k33, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0basename_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basename_lambda8" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_lambda8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0basename_k30) (bruijn loop 0 0) (close _V0loop_lambda9))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k30, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda9, env)})
    );
 }
}
static void _V0basename_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0basename_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0basename_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0basename_lambda8) #f)
V_CALL_FUNC(_V0basename_lambda8, env, runtime,
      VEncodeBool(false));
 }
}
static void _V0basepath_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basepath_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basepath_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_k40, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 0) (bruijn ##k.45 4 0) (bruijn ##x.47 0 0))
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0basepath_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basepath_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basepath_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0basepath_k40) (bruijn ##x.48 0 0) 1)
V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k40, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0basepath_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basepath_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basepath_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-length (close _V0basepath_k39) (bruijn file 2 1))
V_CALL(VLookupGlobalVarFast2(runtime, "string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k39, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0loop_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k44, runtime, upenv, 1, argc, _var0) {
  // (substring (bruijn ##k.49 4 0) (bruijn file 6 1) 0 (bruijn ##x.52 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "substring"), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      VEncodeInt(0l),
      _var0);
 }
}
static void _V0loop_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k45, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.49 4 0) (bruijn ##x.53 0 0))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0loop_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.51 0 0) (+ (close _V0loop_k44) (bruijn i 3 1) 1) (- (close _V0loop_k45) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "+"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k44, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k45, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V0loop_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V0loop_k43) #\/ (bruijn ##x.54 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k43, env)}),
      VEncodeChar('/'),
      _var0);
 }
}
static void _V0loop_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.50 0 0) ((bruijn ##k.49 1 0) (##string ##string.439)) (string-ref (close _V0loop_k42) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodePointer(&_V10string_D439.sym, VPOINTER_OTHER));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k42, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V0loop_k41) (bruijn i 0 1) 0)
V_CALL(VLookupGlobalVarFast2(runtime, "<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k41, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0basepath_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basepath_lambda11" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_lambda11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0basepath_k38) (bruijn loop 0 0) (close _V0loop_lambda12))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k38, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda12, env)})
    );
 }
}
static void _V0basepath_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0basepath_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0basepath_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0basepath_lambda11) #f)
V_CALL_FUNC(_V0basepath_lambda11, env, runtime,
      VEncodeBool(false));
 }
}
static void _V0decomma_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decomma_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decomma_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_k48, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 0) (bruijn ##k.55 4 0) (bruijn ##x.57 0 0))
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0decomma_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decomma_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decomma_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0decomma_k48) (bruijn ##x.58 0 0) 1)
V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k48, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0decomma_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decomma_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decomma_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-length (close _V0decomma_k47) (bruijn str 2 1))
V_CALL(VLookupGlobalVarFast2(runtime, "string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k47, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0loop_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k53, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.59 5 0) (bruijn ##x.63 0 0))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0loop_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0loop_k53) (bruijn i 4 1) 1)
V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k53, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0loop_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k54, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.59 4 0) (bruijn ##x.64 0 0))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0loop_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.61 0 0) (string-set! (close _V0loop_k52) (bruijn str 5 1) (bruijn i 3 1) #\space) (- (close _V0loop_k54) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "string-set!"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k52, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->up->up->vars[1],
      VEncodeChar(' '));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k54, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V0loop_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V0loop_k51) #\, (bruijn ##x.65 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k51, env)}),
      VEncodeChar(','),
      _var0);
 }
}
static void _V0loop_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.60 0 0) ((bruijn ##k.59 1 0) (bruijn str 3 1)) (string-ref (close _V0loop_k50) (bruijn str 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[1]);
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k50, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (< (close _V0loop_k49) (bruijn i 0 1) 0)
V_CALL(VLookupGlobalVarFast2(runtime, "<"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k49, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0decomma_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decomma_lambda14" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_lambda14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0decomma_k46) (bruijn loop 0 0) (close _V0loop_lambda15))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k46, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda15, env)})
    );
 }
}
static void _V0decomma_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decomma_lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0decomma_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0decomma_lambda14) #f)
V_CALL_FUNC(_V0decomma_lambda14, env, runtime,
      VEncodeBool(false));
 }
}
static void _V0realpath_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realpath_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realpath_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_k58, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.66 4 0) (bruijn ret 1 0))
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]);
 }
}
static void _V0realpath_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realpath_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realpath_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (close-port (close _V0realpath_k58) (bruijn proc 1 0))
V_CALL(VLookupGlobalVarFast2(runtime, "close-port"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k58, env)}),
      upenv->vars[0]);
 }
}
static void _V0realpath_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realpath_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realpath_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (read-line (close _V0realpath_k57) (bruijn proc 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "read-line"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k57, env)}),
      _var0);
 }
}
static void _V0realpath_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realpath_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realpath_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-process (close _V0realpath_k56) (bruijn ##x.68 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "open-input-process"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k56, env)}),
      _var0);
 }
}
static void _V0realpath_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0realpath_lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0realpath_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (sprintf (close _V0realpath_k55) (##string ##string.440) (bruijn file 0 1))
V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k55, env)}),
      VEncodePointer(&_V10string_D440.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0realbasepath_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realbasepath_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realbasepath_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_k62, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.69 4 0) (bruijn ret 1 0))
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]);
 }
}
static void _V0realbasepath_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realbasepath_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realbasepath_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (close-port (close _V0realbasepath_k62) (bruijn proc 1 0))
V_CALL(VLookupGlobalVarFast2(runtime, "close-port"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k62, env)}),
      upenv->vars[0]);
 }
}
static void _V0realbasepath_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realbasepath_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realbasepath_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (read-line (close _V0realbasepath_k61) (bruijn proc 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "read-line"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k61, env)}),
      _var0);
 }
}
static void _V0realbasepath_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realbasepath_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realbasepath_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-process (close _V0realbasepath_k60) (bruijn ##x.71 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "open-input-process"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k60, env)}),
      _var0);
 }
}
static void _V0realbasepath_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0realbasepath_lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0realbasepath_lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (sprintf (close _V0realbasepath_k59) (##string ##string.441) (bruijn file 0 1))
V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k59, env)}),
      VEncodePointer(&_V10string_D441.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0display__help_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k83, runtime, upenv, 1, argc, _var0) {
  // (displayln (bruijn ##k.72 21 0) (##string ##string.442))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VGetArg(upenv, 21-1, 0),
      VEncodePointer(&_V10string_D442.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k83) (##string ##string.443))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k83, env)}),
      VEncodePointer(&_V10string_D443.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k82) (##string ##string.444))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k82, env)}),
      VEncodePointer(&_V10string_D444.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k81) (##string ##string.445))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k81, env)}),
      VEncodePointer(&_V10string_D445.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k80) (##string ##string.446))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k80, env)}),
      VEncodePointer(&_V10string_D446.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k79) (##string ##string.447))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k79, env)}),
      VEncodePointer(&_V10string_D447.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k78) (##string ##string.448))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k78, env)}),
      VEncodePointer(&_V10string_D448.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k77) (##string ##string.449))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k77, env)}),
      VEncodePointer(&_V10string_D449.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k76) (##string ##string.450))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k76, env)}),
      VEncodePointer(&_V10string_D450.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k75) (##string ##string.448))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k75, env)}),
      VEncodePointer(&_V10string_D448.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k74) (##string ##string.451))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k74, env)}),
      VEncodePointer(&_V10string_D451.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k73) (##string ##string.452))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k73, env)}),
      VEncodePointer(&_V10string_D452.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k72) (##string ##string.453))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k72, env)}),
      VEncodePointer(&_V10string_D453.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k71) (##string ##string.454))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k71, env)}),
      VEncodePointer(&_V10string_D454.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k70) (##string ##string.455))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k70, env)}),
      VEncodePointer(&_V10string_D455.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k69) (##string ##string.456))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k69, env)}),
      VEncodePointer(&_V10string_D456.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k68) (##string ##string.457))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k68, env)}),
      VEncodePointer(&_V10string_D457.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k67) (##string ##string.458))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k67, env)}),
      VEncodePointer(&_V10string_D458.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k66) (##string ##string.459))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k66, env)}),
      VEncodePointer(&_V10string_D459.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k65) (##string ##string.460))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k65, env)}),
      VEncodePointer(&_V10string_D460.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k64) (##string ##string.461))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k64, env)}),
      VEncodePointer(&_V10string_D461.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_lambda18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k63) (##string ##string.462))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k63, env)}),
      VEncodePointer(&_V10string_D462.sym, VPOINTER_OTHER));
 }
}
static void _V0display__version_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__version_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__version_k86, runtime, upenv, 1, argc, _var0) {
  // (displayln (bruijn ##k.94 3 0) (##string ##string.463))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D463.sym, VPOINTER_OTHER));
 }
}
static void _V0display__version_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__version_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__version_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (printf (close _V0display__version_k86) (##string ##string.464) (bruijn ##x.96 1 0) (bruijn ##x.97 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "printf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k86, env)}),
      VEncodePointer(&_V10string_D464.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0);
 }
}
static void _V0display__version_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__version_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__version_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cadr (close _V0display__version_k85) version)
V_CALL(VLookupGlobalVarFast2(runtime, "cadr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k85, env)}),
      VLookupGlobalVarFast2(runtime, "version"));
 }
}
static void _V0display__version_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__version_lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__version_lambda19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V0display__version_k84) version)
V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k84, env)}),
      VLookupGlobalVarFast2(runtime, "version"));
 }
}
static void global_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k89, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 0) (##intrinsic ##sys.next) (bruijn ##x.99 0 0))
V_CALL(upenv->up->up->vars[0], runtime,
      _V40_V10sys_Dnext,
      _var0);
 }
}
static void global_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (getopt (close global_k89) (##string ##string.465) (bruijn ##x.100 0 0) (##inline ##sys.qcons (##inline ##sys.qcons 'shared (##inline ##sys.qcons '#f (##inline ##sys.qcons 'shared '()))) (##inline ##sys.qcons (##inline ##sys.qcons 'help (##inline ##sys.qcons '#f (##inline ##sys.qcons 'help '()))) (##inline ##sys.qcons (##inline ##sys.qcons 'api (##inline ##sys.qcons '#t (##inline ##sys.qcons 'api '()))) (##inline ##sys.qcons (##inline ##sys.qcons 'platform (##inline ##sys.qcons '#t (##inline ##sys.qcons 'platform '()))) (##inline ##sys.qcons (##inline ##sys.qcons 'cc (##inline ##sys.qcons '#t (##inline ##sys.qcons 'cc '()))) (##inline ##sys.qcons (##inline ##sys.qcons 'version (##inline ##sys.qcons '#f (##inline ##sys.qcons 'version '()))) (##inline ##sys.qcons (##inline ##sys.qcons 'keep-temps (##inline ##sys.qcons '#f (##inline ##sys.qcons 'keep-temps '()))) (##inline ##sys.qcons (##inline ##sys.qcons 'makefile (##inline ##sys.qcons '#f (##inline ##sys.qcons 'makefile '()))) (##inline ##sys.qcons (##inline ##sys.qcons 'maketarget (##inline ##sys.qcons '#t (##inline ##sys.qcons 'maketarget '()))) (##inline ##sys.qcons (##inline ##sys.qcons 'benchmark (##inline ##sys.qcons '#f (##inline ##sys.qcons 'benchmark '()))) '())))))))))))
V_CALL(VLookupGlobalVarFast2(runtime, "getopt"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k89, env)}),
      VEncodePointer(&_V10string_D465.sym, VPOINTER_OTHER),
      _var0,
      VInlineCons(
        VInlineCons(
        _V0shared,
        VInlineCons(
        VEncodeBool(false),
        VInlineCons(
        _V0shared,
        VNULL))),
        VInlineCons(
        VInlineCons(
        _V0help,
        VInlineCons(
        VEncodeBool(false),
        VInlineCons(
        _V0help,
        VNULL))),
        VInlineCons(
        VInlineCons(
        _V0api,
        VInlineCons(
        VEncodeBool(true),
        VInlineCons(
        _V0api,
        VNULL))),
        VInlineCons(
        VInlineCons(
        _V0platform,
        VInlineCons(
        VEncodeBool(true),
        VInlineCons(
        _V0platform,
        VNULL))),
        VInlineCons(
        VInlineCons(
        _V0cc,
        VInlineCons(
        VEncodeBool(true),
        VInlineCons(
        _V0cc,
        VNULL))),
        VInlineCons(
        VInlineCons(
        _V0version,
        VInlineCons(
        VEncodeBool(false),
        VInlineCons(
        _V0version,
        VNULL))),
        VInlineCons(
        VInlineCons(
        _V0keep__temps,
        VInlineCons(
        VEncodeBool(false),
        VInlineCons(
        _V0keep__temps,
        VNULL))),
        VInlineCons(
        VInlineCons(
        _V0makefile,
        VInlineCons(
        VEncodeBool(false),
        VInlineCons(
        _V0makefile,
        VNULL))),
        VInlineCons(
        VInlineCons(
        _V0maketarget,
        VInlineCons(
        VEncodeBool(true),
        VInlineCons(
        _V0maketarget,
        VNULL))),
        VInlineCons(
        VInlineCons(
        _V0benchmark,
        VInlineCons(
        VEncodeBool(false),
        VInlineCons(
        _V0benchmark,
        VNULL))),
        VNULL)))))))))));
 }
}
static void global_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (command-line (close global_k88))
V_CALL(VLookupGlobalVarFast2(runtime, "command-line"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k88, env)}));
 }
}
static void _V0loop_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.146 5 0) obj-files (bruijn ##x.148 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 5-1, 0),
      _V0obj__files,
      _var0
    );
 }
}
static void _V0loop_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close _V0loop_k99) (bruijn ##x.149 0 0) obj-files)
V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k99, env)}),
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
 }
}
static void _V0loop_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.146 5 0) scm-files (bruijn ##x.150 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 5-1, 0),
      _V0scm__files,
      _var0
    );
 }
}
static void _V0loop_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close _V0loop_k101) (bruijn ##x.151 0 0) scm-files)
V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k101, env)}),
      _var0,
      VLookupGlobalVarFast2(runtime, "scm-files"));
 }
}
static void _V0loop_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.147 0 0) (cdar (close _V0loop_k98) (bruijn args 8 1)) (cdar (close _V0loop_k100) (bruijn args 8 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k98, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k100, env)}),
      VGetArg(upenv, 8-1, 1));
}
 }
}
static void _V0loop_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close _V0loop_k97) (bruijn ##x.152 0 0) (##string ##string.466))
V_CALL(VLookupGlobalVarFast2(runtime, "equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k97, env)}),
      _var0,
      VEncodePointer(&_V10string_D466.sym, VPOINTER_OTHER));
 }
}
static void _V0loop_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (extension (close _V0loop_k96) (bruijn ##x.153 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "extension"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k96, env)}),
      _var0);
 }
}
static void _V0loop_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.146 7 0) out-file (bruijn ##x.160 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 7-1, 0),
      _V0out__file,
      _var0
    );
 }
}
static void _V0loop_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.146 11 0) paths (bruijn ##x.162 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 11-1, 0),
      _V0paths,
      _var0
    );
 }
}
static void _V0loop_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (append (close _V0loop_k113) paths (bruijn ##x.163 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k113, env)}),
      VLookupGlobalVarFast2(runtime, "paths"),
      _var0);
 }
}
static void _V0loop_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (list (close _V0loop_k112) (bruijn ##x.164 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "list"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k112, env)}),
      _var0);
 }
}
static void _V0loop_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (realpath (close _V0loop_k111) (bruijn ##x.165 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "realpath"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k111, env)}),
      _var0);
 }
}
static void _V0loop_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k119, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.172 0 0) (<= (bruijn ##k.171 1 0) 0 optimization 3) ((bruijn ##k.171 1 0) #f))
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
static void _V0loop_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if optimization (integer? (close _V0loop_k119) optimization) ((bruijn ##k.171 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "optimization"))) {
V_CALL(VLookupGlobalVarFast2(runtime, "integer?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k119, env)}),
      VLookupGlobalVarFast2(runtime, "optimization"));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k122, runtime, upenv, 1, argc, _var0) {
  // (compiler-error (bruijn ##k.146 14 0) (##string ##string.467) (bruijn ##x.169 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      VGetArg(upenv, 14-1, 0),
      VEncodePointer(&_V10string_D467.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0loop_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.168 0 0) (cdar (close _V0loop_k122) (bruijn args 18 1)) ((bruijn ##k.146 13 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k122, env)}),
      VGetArg(upenv, 18-1, 1));
} else {
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V0loop_k121) (bruijn ##x.170 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k121, env)}),
      _var0);
 }
}
static void _V0loop_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k118) (close _V0loop_k120))
V_CALL_FUNC(_V0loop_k118, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k120, env)}));
 }
}
static void _V0loop_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0loop_k117) optimization (bruijn ##x.173 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k117, env)}),
      _V0optimization,
      _var0
    );
 }
}
static void _V0loop_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string->number (close _V0loop_k116) (bruijn ##x.174 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "string->number"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k116, env)}),
      _var0);
 }
}
static void _V0loop_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k128, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.181 0 0) (<= (bruijn ##k.180 1 0) 0 expand? 2) ((bruijn ##k.180 1 0) #f))
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
static void _V0loop_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if expand? (integer? (close _V0loop_k128) expand?) ((bruijn ##k.180 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "expand?"))) {
V_CALL(VLookupGlobalVarFast2(runtime, "integer?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k128, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k131, runtime, upenv, 1, argc, _var0) {
  // (compiler-error (bruijn ##k.146 15 0) (##string ##string.468) (bruijn ##x.178 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      VGetArg(upenv, 15-1, 0),
      VEncodePointer(&_V10string_D468.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0loop_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.177 0 0) (cdar (close _V0loop_k131) (bruijn args 19 1)) ((bruijn ##k.146 14 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k131, env)}),
      VGetArg(upenv, 19-1, 1));
} else {
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V0loop_k130) (bruijn ##x.179 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k130, env)}),
      _var0);
 }
}
static void _V0loop_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k127) (close _V0loop_k129))
V_CALL_FUNC(_V0loop_k127, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k129, env)}));
 }
}
static void _V0loop_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0loop_k126) expand? (bruijn ##x.182 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k126, env)}),
      _V0expand_Q,
      _var0
    );
 }
}
static void _V0loop_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string->number (close _V0loop_k125) (bruijn ##x.183 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "string->number"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k125, env)}),
      _var0);
 }
}
static void _V0loop_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k137, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.200 1 0) (compiler-error (bruijn ##k.201 0 0) (##string ##string.469)) ((bruijn ##k.201 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D469.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k144, runtime, upenv, 1, argc, _var0) {
  // (eq? (bruijn ##k.195 2 0) (bruijn ##x.196 0 0) #\,)
V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodeChar(','));
 }
}
static void _V0loop_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-ref (close _V0loop_k144) (bruijn ##x.197 0 0) 1)
V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k144, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0loop_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.194 1 0) (cdar (close _V0loop_k143) (bruijn args 24 1)) ((bruijn ##k.195 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k143, env)}),
      VGetArg(upenv, 24-1, 1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k147, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.191 1 0) (compiler-error (bruijn ##k.192 0 0) (##string ##string.470)) ((bruijn ##k.192 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D470.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.146 25 0) c-options (bruijn ##x.187 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 25-1, 0),
      _V0c__options,
      _var0
    );
 }
}
static void _V0loop_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close _V0loop_k152) (bruijn ##x.188 0 0) c-options)
V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k152, env)}),
      _var0,
      VLookupGlobalVarFast2(runtime, "c-options"));
 }
}
static void _V0loop_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (decomma (close _V0loop_k151) (bruijn ##x.189 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "decomma"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k151, env)}),
      _var0);
 }
}
static void _V0loop_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (substring (close _V0loop_k150) (bruijn ##x.190 0 0) 1)
V_CALL(VLookupGlobalVarFast2(runtime, "substring"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k150, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0loop_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cdar (close _V0loop_k149) (bruijn args 26 1))
V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k149, env)}),
      VGetArg(upenv, 26-1, 1));
 }
}
static void _V0loop_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k147) (close _V0loop_k148))
V_CALL_FUNC(_V0loop_k147, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k148, env)}));
 }
}
static void _V0loop_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V0loop_k146) (bruijn ##x.193 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k146, env)}),
      _var0);
 }
}
static void _V0loop_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k142) (close _V0loop_k145))
V_CALL_FUNC(_V0loop_k142, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k145, env)}));
 }
}
static void _V0loop_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (>= (close _V0loop_k141) (bruijn ##x.198 0 0) 2)
V_CALL(VLookupGlobalVarFast2(runtime, ">="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k141, env)}),
      _var0,
      VEncodeInt(2l));
 }
}
static void _V0loop_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-length (close _V0loop_k140) (bruijn ##x.199 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k140, env)}),
      _var0);
 }
}
static void _V0loop_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cdar (close _V0loop_k139) (bruijn args 20 1))
V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k139, env)}),
      VGetArg(upenv, 20-1, 1));
 }
}
static void _V0loop_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k137) (close _V0loop_k138))
V_CALL_FUNC(_V0loop_k137, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k138, env)}));
 }
}
static void _V0loop_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V0loop_k136) (bruijn ##x.202 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k136, env)}),
      _var0);
 }
}
static void _V0loop_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V0loop_k135) (bruijn ##x.203 0 0) #\c)
V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k135, env)}),
      _var0,
      VEncodeChar('c'));
 }
}
static void _V0loop_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-ref (close _V0loop_k134) (bruijn ##x.204 0 0) 0)
V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k134, env)}),
      _var0,
      VEncodeInt(0l));
 }
}
static void _V0loop_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k154, runtime, upenv, 1, argc, _var0) {
  // (exit (bruijn ##k.146 12 0) 0)
V_CALL(VLookupGlobalVarFast2(runtime, "exit"), runtime,
      VGetArg(upenv, 12-1, 0),
      VEncodeInt(0l));
 }
}
static void _V0loop_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k156, runtime, upenv, 1, argc, _var0) {
  // (exit (bruijn ##k.146 13 0) 0)
V_CALL(VLookupGlobalVarFast2(runtime, "exit"), runtime,
      VGetArg(upenv, 13-1, 0),
      VEncodeInt(0l));
 }
}
static void _V0loop_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.146 16 0) api (bruijn ##x.211 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 16-1, 0),
      _V0api,
      _var0
    );
 }
}
static void _V0loop_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string->number (close _V0loop_k160) (bruijn ##x.212 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "string->number"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k160, env)}),
      _var0);
 }
}
static void _V0loop_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.146 16 0) platform (bruijn ##x.214 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 16-1, 0),
      _V0platform,
      _var0
    );
 }
}
static void _V0loop_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.146 17 0) cc (bruijn ##x.216 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 17-1, 0),
      _V0cc,
      _var0
    );
 }
}
static void _V0loop_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.146 21 0) maketargets (bruijn ##x.220 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 21-1, 0),
      _V0maketargets,
      _var0
    );
 }
}
static void _V0loop_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close _V0loop_k169) (bruijn ##x.221 0 0) maketargets)
V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k169, env)}),
      _var0,
      VLookupGlobalVarFast2(runtime, "maketargets"));
 }
}
static void _V0loop_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k174, runtime, upenv, 1, argc, _var0) {
  // (compiler-error (bruijn ##k.146 24 0) (##string ##string.471) (bruijn ##x.225 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      VGetArg(upenv, 24-1, 0),
      VEncodePointer(&_V10string_D471.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0loop_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cdar (close _V0loop_k174) (bruijn args 28 1))
V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k174, env)}),
      VGetArg(upenv, 28-1, 1));
 }
}
static void _V0loop_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (newline (close _V0loop_k173))
V_CALL(VLookupGlobalVarFast2(runtime, "newline"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k173, env)}));
 }
}
static void _V0loop_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (write (close _V0loop_k172) (bruijn ##x.226 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "write"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k172, env)}),
      _var0);
 }
}
static void _V0loop_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.222 0 0) (set! (bruijn ##k.146 20 0) benchmark? #t) (caar (close _V0loop_k171) (bruijn args 25 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 20-1, 0),
      _V0benchmark_Q,
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "caar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k171, env)}),
      VGetArg(upenv, 25-1, 1));
}
 }
}
static void _V0loop_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.219 0 0) (cdar (close _V0loop_k168) (bruijn args 24 1)) (eqv? (close _V0loop_k170) (bruijn ##x.1 21 0) 'benchmark))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k168, env)}),
      VGetArg(upenv, 24-1, 1));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k170, env)}),
      VGetArg(upenv, 21-1, 0),
      _V0benchmark);
}
 }
}
static void _V0loop_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.218 0 0) (set! (bruijn ##k.146 18 0) makefile? #t) (eqv? (close _V0loop_k167) (bruijn ##x.1 20 0) 'maketarget))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 18-1, 0),
      _V0makefile_Q,
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k167, env)}),
      VGetArg(upenv, 20-1, 0),
      _V0maketarget);
}
 }
}
static void _V0loop_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.217 0 0) (set! (bruijn ##k.146 17 0) keep? #t) (eqv? (close _V0loop_k166) (bruijn ##x.1 19 0) 'makefile))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 17-1, 0),
      _V0keep_Q,
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k166, env)}),
      VGetArg(upenv, 19-1, 0),
      _V0makefile);
}
 }
}
static void _V0loop_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.215 0 0) (cdar (close _V0loop_k164) (bruijn args 21 1)) (eqv? (close _V0loop_k165) (bruijn ##x.1 18 0) 'keep-temps))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k164, env)}),
      VGetArg(upenv, 21-1, 1));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k165, env)}),
      VGetArg(upenv, 18-1, 0),
      _V0keep__temps);
}
 }
}
static void _V0loop_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.213 0 0) (cdar (close _V0loop_k162) (bruijn args 20 1)) (eqv? (close _V0loop_k163) (bruijn ##x.1 17 0) 'cc))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k162, env)}),
      VGetArg(upenv, 20-1, 1));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k163, env)}),
      VGetArg(upenv, 17-1, 0),
      _V0cc);
}
 }
}
static void _V0loop_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.210 0 0) (cdar (close _V0loop_k159) (bruijn args 19 1)) (eqv? (close _V0loop_k161) (bruijn ##x.1 16 0) 'platform))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k159, env)}),
      VGetArg(upenv, 19-1, 1));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k161, env)}),
      VGetArg(upenv, 16-1, 0),
      _V0platform);
}
 }
}
static void _V0loop_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.209 0 0) (set! (bruijn ##k.146 13 0) shared? #t) (eqv? (close _V0loop_k158) (bruijn ##x.1 15 0) 'api))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 13-1, 0),
      _V0shared_Q,
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k158, env)}),
      VGetArg(upenv, 15-1, 0),
      _V0api);
}
 }
}
static void _V0loop_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.207 0 0) (display-version (close _V0loop_k156)) (eqv? (close _V0loop_k157) (bruijn ##x.1 14 0) 'shared))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "display-version"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k156, env)}));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k157, env)}),
      VGetArg(upenv, 14-1, 0),
      _V0shared);
}
 }
}
static void _V0loop_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.205 0 0) (display-help (close _V0loop_k154)) (eqv? (close _V0loop_k155) (bruijn ##x.1 13 0) 'version))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "display-help"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k154, env)}));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k155, env)}),
      VGetArg(upenv, 13-1, 0),
      _V0version);
}
 }
}
static void _V0loop_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.184 0 0) (cdar (close _V0loop_k133) (bruijn args 15 1)) (eqv? (close _V0loop_k153) (bruijn ##x.1 12 0) 'help))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k133, env)}),
      VGetArg(upenv, 15-1, 1));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k153, env)}),
      VGetArg(upenv, 12-1, 0),
      _V0help);
}
 }
}
static void _V0loop_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.175 0 0) (cdar (close _V0loop_k124) (bruijn args 14 1)) (eqv? (close _V0loop_k132) (bruijn ##x.1 11 0) '#\W))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k124, env)}),
      VGetArg(upenv, 14-1, 1));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k132, env)}),
      VGetArg(upenv, 11-1, 0),
      VEncodeChar('W'));
}
 }
}
static void _V0loop_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.166 0 0) (cdar (close _V0loop_k115) (bruijn args 13 1)) (eqv? (close _V0loop_k123) (bruijn ##x.1 10 0) '#\E))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k115, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k123, env)}),
      VGetArg(upenv, 10-1, 0),
      VEncodeChar('E'));
}
 }
}
static void _V0loop_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.161 0 0) (cdar (close _V0loop_k110) (bruijn args 12 1)) (eqv? (close _V0loop_k114) (bruijn ##x.1 9 0) '#\O))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k110, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k114, env)}),
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('O'));
}
 }
}
static void _V0loop_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.159 0 0) (cdar (close _V0loop_k108) (bruijn args 11 1)) (eqv? (close _V0loop_k109) (bruijn ##x.1 8 0) '#\I))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k108, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k109, env)}),
      VGetArg(upenv, 8-1, 0),
      VEncodeChar('I'));
}
 }
}
static void _V0loop_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.158 0 0) (set! (bruijn ##k.146 5 0) object? #t) (eqv? (close _V0loop_k107) (bruijn ##x.1 7 0) '#\o))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 5-1, 0),
      _V0object_Q,
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k107, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('o'));
}
 }
}
static void _V0loop_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.157 0 0) (set! (bruijn ##k.146 4 0) transpile? #t) (eqv? (close _V0loop_k106) (bruijn ##x.1 6 0) '#\c))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->up->up->vars[0],
      _V0transpile_Q,
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k106, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('c'));
}
 }
}
static void _V0loop_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.156 0 0) (set! (bruijn ##k.146 3 0) header? #t) (eqv? (close _V0loop_k105) (bruijn ##x.1 5 0) '#\t))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->up->vars[0],
      _V0header_Q,
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k105, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('t'));
}
 }
}
static void _V0loop_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.155 0 0) (set! (bruijn ##k.146 2 0) debug? #t) (eqv? (close _V0loop_k104) (bruijn ##x.1 4 0) '#\h))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->vars[0],
      _V0debug_Q,
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k104, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('h'));
}
 }
}
static void _V0loop_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.154 0 0) (set! (bruijn ##k.146 1 0) verbose? #t) (eqv? (close _V0loop_k103) (bruijn ##x.1 3 0) '#\g))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->vars[0],
      _V0verbose_Q,
      VEncodeBool(true)
    );
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k103, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('g'));
}
 }
}
static void _V0loop_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.145 1 0) (cdar (close _V0loop_k95) (bruijn args 5 1)) (eqv? (close _V0loop_k102) (bruijn ##x.1 2 0) '#\v))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k95, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k102, env)}),
      upenv->up->vars[0],
      VEncodeChar('v'));
}
 }
}
static void _V0loop_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k176, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 0) (bruijn ##k.141 6 0) (bruijn ##x.144 0 0))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0loop_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cdr (close _V0loop_k176) (bruijn args 5 1))
V_CALL(VLookupGlobalVarFast2(runtime, "cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k176, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0loop_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k94) (close _V0loop_k175))
V_CALL_FUNC(_V0loop_k94, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k175, env)}));
 }
}
static void _V0loop_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eqv? (close _V0loop_k93) (bruijn ##x.1 0 0) '#t)
V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k93, env)}),
      _var0,
      VEncodeBool(true));
 }
}
static void _V0loop_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.142 0 0) (caar (close _V0loop_k92) (bruijn args 2 1)) ((bruijn ##k.141 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "caar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k92, env)}),
      upenv->up->vars[1]);
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V0loop_k91) (bruijn ##x.227 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k91, env)}),
      _var0);
 }
}
static void _V0loop_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda21, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (null? (close _V0loop_k90) (bruijn args 0 1))
V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k90, env)}),
      _var1);
 }
}
static void global_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda20" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)global_lambda20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k87) (bruijn loop 0 0) (close _V0loop_lambda21))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k87, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda21, env)})
    );
 }
}
static void global_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k180, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.232 0 0) ((bruijn ##k.231 1 0) (##string ##string.473)) (compiler-error (bruijn ##k.231 1 0) (##string ##string.474) platform))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodePointer(&_V10string_D473.sym, VPOINTER_OTHER));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D474.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "platform"));
}
 }
}
static void global_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.230 1 0) ((bruijn ##k.231 0 0) (##string ##string.472)) (equal? (close global_k180) platform (##string ##string.475)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D472.sym, VPOINTER_OTHER));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k180, env)}),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10string_D475.sym, VPOINTER_OTHER));
}
 }
}
static void global_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (##intrinsic ##sys.next) cc (bruijn ##x.229 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      _V40_V10sys_Dnext,
      _V0cc,
      _var0
    );
 }
}
static void global_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k179) (close global_k181))
V_CALL_FUNC(global_k179, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k181, env)}));
 }
}
static void global_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.228 0 0) (equal? (close global_k178) platform (##string ##string.437)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k178, env)}),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10string_D437.sym, VPOINTER_OTHER));
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0count__true_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0count__true_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0count__true_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0count__true_k182, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.233 2 0) (bruijn args 2 1) 0)
V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      VEncodeInt(0l));
 }
}
static void _V0loop_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k186, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.240 1 0) ((bruijn ##k.241 0 0) 1) ((bruijn ##k.241 0 0) 0))
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
static void _V0loop_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k188, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.235 5 0) (bruijn ##x.237 3 0) (bruijn ##x.238 0 0))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0loop_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (+ (close _V0loop_k188) (bruijn ct 4 2) (bruijn ##x.239 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "+"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k188, env)}),
      upenv->up->up->up->vars[2],
      _var0);
 }
}
static void _V0loop_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k186) (close _V0loop_k187))
V_CALL_FUNC(_V0loop_k186, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k187, env)}));
 }
}
static void _V0loop_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V0loop_k185) (bruijn args 2 1))
V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k185, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0loop_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.236 0 0) ((bruijn ##k.235 1 0) (bruijn ct 1 2)) (cdr (close _V0loop_k184) (bruijn args 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k184, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda24, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda24, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (null? (close _V0loop_k183) (bruijn args 0 1))
V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k183, env)}),
      _var1);
 }
}
static void _V0count__true_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0count__true_lambda23" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0count__true_lambda23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0count__true_k182) (bruijn loop 0 0) (close _V0loop_lambda24))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0count__true_k182, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda24, env)})
    );
 }
}
static void _V0count__true_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0count__true_lambda22" };
 VRecordCall2(runtime, &dbg);
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
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((close _V0count__true_lambda23) #f)
V_CALL_FUNC(_V0count__true_lambda23, env, runtime,
      VEncodeBool(false));
 }
}
static void global_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k190, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.242 0 0) (compiler-error (##intrinsic ##sys.next) (##string ##string.476)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _V40_V10sys_Dnext,
      VEncodePointer(&_V10string_D476.sym, VPOINTER_OTHER));
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (> (close global_k190) (bruijn ##x.243 0 0) 1)
V_CALL(VLookupGlobalVarFast2(runtime, ">"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k190, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void global_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k192, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.245 1 0) (null? (bruijn ##k.246 0 0) obj-files) ((bruijn ##k.246 0 0) #f))
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
static void global_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k193, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.244 0 0) (compiler-error (##intrinsic ##sys.next) (##string ##string.477)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _V40_V10sys_Dnext,
      VEncodePointer(&_V10string_D477.sym, VPOINTER_OTHER));
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k192) (close global_k193))
V_CALL_FUNC(global_k192, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k193, env)}));
 }
}
static void global_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k194, runtime, upenv, 1, argc, _var0) {
  // (if makefile? ((bruijn ##k.251 0 0) makefile?) (if header? ((bruijn ##k.251 0 0) header?) (if transpile? ((bruijn ##k.251 0 0) transpile?) (if object? ((bruijn ##k.251 0 0) object?) ((bruijn ##k.251 0 0) expand?)))))
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
static void global_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k197, runtime, upenv, 1, argc, _var0) {
  // (not (bruijn ##k.249 1 0) (bruijn ##x.250 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.248 1 0) (null? (close global_k197) obj-files) ((bruijn ##k.249 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k197, env)}),
      VLookupGlobalVarFast2(runtime, "obj-files"));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k198, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.247 0 0) (compiler-error (##intrinsic ##sys.next) (##string ##string.478)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _V40_V10sys_Dnext,
      VEncodePointer(&_V10string_D478.sym, VPOINTER_OTHER));
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k196) (close global_k198))
V_CALL_FUNC(global_k196, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k198, env)}));
 }
}
static void global_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k199, runtime, upenv, 1, argc, _var0) {
  // (if makefile? ((bruijn ##k.257 0 0) makefile?) (if header? ((bruijn ##k.257 0 0) header?) (if transpile? ((bruijn ##k.257 0 0) transpile?) (if object? ((bruijn ##k.257 0 0) object?) ((bruijn ##k.257 0 0) expand?)))))
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
static void global_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k203, runtime, upenv, 1, argc, _var0) {
  // (not (bruijn ##k.254 2 0) (bruijn ##x.255 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void global_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close global_k203) (bruijn ##x.256 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k203, env)}),
      _var0);
 }
}
static void global_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.253 1 0) (if out-file (cdr (close global_k202) scm-files) ((bruijn ##k.254 0 0) #f)) ((bruijn ##k.254 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
V_CALL(VLookupGlobalVarFast2(runtime, "cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k202, env)}),
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
static void global_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k204, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.252 0 0) (compiler-error (##intrinsic ##sys.next) (##string ##string.479)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _V40_V10sys_Dnext,
      VEncodePointer(&_V10string_D479.sym, VPOINTER_OTHER));
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k201) (close global_k204))
V_CALL_FUNC(global_k201, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k204, env)}));
 }
}
static void global_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k205, runtime, upenv, 1, argc, _var0) {
  // (if makefile? ((bruijn ##k.263 0 0) makefile?) (if header? ((bruijn ##k.263 0 0) header?) (if transpile? ((bruijn ##k.263 0 0) transpile?) (if object? ((bruijn ##k.263 0 0) object?) ((bruijn ##k.263 0 0) expand?)))))
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
static void global_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k209, runtime, upenv, 1, argc, _var0) {
  // (not (bruijn ##k.260 2 0) (bruijn ##x.261 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void global_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close global_k209) (bruijn ##x.262 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k209, env)}),
      _var0);
 }
}
static void global_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.259 1 0) (cdr (close global_k208) scm-files) ((bruijn ##k.260 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast2(runtime, "cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k208, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k210, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.258 0 0) (compiler-error (##intrinsic ##sys.next) (##string ##string.480)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _V40_V10sys_Dnext,
      VEncodePointer(&_V10string_D480.sym, VPOINTER_OTHER));
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k207) (close global_k210))
V_CALL_FUNC(global_k207, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k210, env)}));
 }
}
static void global_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k214, runtime, upenv, 1, argc, _var0) {
  // (change-extension (bruijn ##k.266 2 0) (bruijn ##x.267 0 0) (##string ##string.466))
V_CALL(VLookupGlobalVarFast2(runtime, "change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D466.sym, VPOINTER_OTHER));
 }
}
static void global_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (basename (close global_k214) (bruijn ##x.268 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k214, env)}),
      _var0);
 }
}
static void global_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k216, runtime, upenv, 1, argc, _var0) {
  // (change-extension (bruijn ##k.266 2 0) (bruijn ##x.269 0 0) (##string ##string.481))
V_CALL(VLookupGlobalVarFast2(runtime, "change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D481.sym, VPOINTER_OTHER));
 }
}
static void global_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (basename (close global_k216) (bruijn ##x.270 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k216, env)}),
      _var0);
 }
}
static void global_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k218, runtime, upenv, 1, argc, _var0) {
  // (change-extension (bruijn ##k.266 2 0) (bruijn ##x.271 0 0) (##string ##string.482))
V_CALL(VLookupGlobalVarFast2(runtime, "change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D482.sym, VPOINTER_OTHER));
 }
}
static void global_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (basename (close global_k218) (bruijn ##x.272 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k218, env)}),
      _var0);
 }
}
static void global_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k220, runtime, upenv, 1, argc, _var0) {
  // (change-extension (bruijn ##k.266 2 0) (bruijn ##x.273 0 0) (##string ##string.483))
V_CALL(VLookupGlobalVarFast2(runtime, "change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D483.sym, VPOINTER_OTHER));
 }
}
static void global_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (basename (close global_k220) (bruijn ##x.274 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k220, env)}),
      _var0);
 }
}
static void global_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if object? (car (close global_k213) scm-files) (if transpile? (car (close global_k215) scm-files) (if expand? (car (close global_k217) scm-files) (if header? (car (close global_k219) scm-files) (if makefile? ((bruijn ##k.266 0 0) out-file) ((bruijn ##k.266 0 0) #f))))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k213, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k215, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "expand?"))) {
V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k217, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k219, env)}),
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
static void global_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (##intrinsic ##sys.next) out-file (bruijn ##x.265 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      _V40_V10sys_Dnext,
      _V0out__file,
      _var0
    );
 }
}
static void global_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.264 0 0) ((close global_k212) (close global_k221)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(global_k212, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k221, env)}));
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0gen__header_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k229, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.289 1 0) (compiler-error (bruijn ##k.290 0 0) (##string ##string.484)) ((bruijn ##k.290 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D484.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0gen__header_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k232, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.287 1 0) ((bruijn ##k.288 0 0) (bruijn ##p.287 1 0)) (car (bruijn ##k.288 0 0) (bruijn headers 5 0)))
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
static void _V0gen__header_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k235, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.284 1 0) (compiler-error (bruijn ##k.285 0 0) (##string ##string.485)) ((bruijn ##k.285 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D485.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0gen__header_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k240, runtime, upenv, 1, argc, _var0) {
  // (write (bruijn ##k.281 1 0) (bruijn ##x.282 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "write"), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0gen__header_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.280 1 0) (car (close _V0gen__header_k240) (bruijn headers 11 0)) ((bruijn ##k.281 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k240, env)}),
      VGetArg(upenv, 11-1, 0));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0gen__header_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k241, runtime, upenv, 1, argc, _var0) {
  // (newline (bruijn ##k.278 3 0))
V_CALL(VLookupGlobalVarFast2(runtime, "newline"), runtime,
      upenv->up->up->vars[0]);
 }
}
static void _V0gen__header_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__header_k239) (close _V0gen__header_k241))
V_CALL_FUNC(_V0gen__header_k239, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k241, env)}));
 }
}
static void _V0gen__header_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V0gen__header_k238) (bruijn ##x.283 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k238, env)}),
      _var0);
 }
}
static void _V0gen__header_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_lambda26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close _V0gen__header_k237) (bruijn headers 8 0))
V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k237, env)}),
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0gen__header_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (with-output-to-file (bruijn ##k.275 12 0) out-file (close _V0gen__header_lambda26))
V_CALL(VLookupGlobalVarFast2(runtime, "with-output-to-file"), runtime,
      VGetArg(upenv, 12-1, 0),
      VLookupGlobalVarFast2(runtime, "out-file"),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_lambda26, env)}));
 }
}
static void _V0gen__header_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__header_k235) (close _V0gen__header_k236))
V_CALL_FUNC(_V0gen__header_k235, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k236, env)}));
 }
}
static void _V0gen__header_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V0gen__header_k234) (bruijn ##x.286 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k234, env)}),
      _var0);
 }
}
static void _V0gen__header_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__header_k232) (close _V0gen__header_k233))
V_CALL_FUNC(_V0gen__header_k232, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k233, env)}));
 }
}
static void _V0gen__header_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close _V0gen__header_k231) (bruijn headers 3 0))
V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k231, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0gen__header_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__header_k229) (close _V0gen__header_k230))
V_CALL_FUNC(_V0gen__header_k229, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k230, env)}));
 }
}
static void _V0gen__header_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (> (close _V0gen__header_k228) (bruijn ##x.291 0 0) 1)
V_CALL(VLookupGlobalVarFast2(runtime, ">"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k228, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0gen__header_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (length (close _V0gen__header_k227) (bruijn headers 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k227, env)}),
      _var0);
 }
}
static void _V0gen__header_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__header_lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0gen__header_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.292 0 0) (bruijn x 0 1))
V_CALL(_var0, runtime,
      _var1);
 }
}
static void _V0gen__header_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (filter (close _V0gen__header_k226) (close _V0gen__header_lambda27) (bruijn ##x.293 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "filter"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k226, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_lambda27, env)}),
      _var0);
 }
}
static void _V0gen__header_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (map (close _V0gen__header_k225) header-from-library (bruijn file 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k225, env)}),
      VLookupGlobalVarFast2(runtime, "header-from-library"),
      _var0);
 }
}
static void _V0gen__header_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (read-all (close _V0gen__header_k224) (bruijn ##x.294 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "read-all"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k224, env)}),
      _var0);
 }
}
static void _V0gen__header_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-file (close _V0gen__header_k223) (bruijn ##x.295 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "open-input-file"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k223, env)}),
      _var0);
 }
}
static void _V0gen__header_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_lambda25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V0gen__header_k222) scm-files)
V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k222, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
 }
}
static void global_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k242, runtime, upenv, 1, argc, _var0) {
  // (exit (##intrinsic ##sys.next))
V_CALL(VLookupGlobalVarFast2(runtime, "exit"), runtime,
      _V40_V10sys_Dnext);
 }
}
static void _V0gen__makefile_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.317 4 0) maketargets (bruijn ##x.318 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->up->up->vars[0],
      _V0maketargets,
      _var0
    );
 }
}
static void _V0gen__makefile_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (list (close _V0gen__makefile_k248) (bruijn ##x.319 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "list"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k248, env)}),
      _var0);
 }
}
static void _V0gen__makefile_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (change-extension (close _V0gen__makefile_k247) (bruijn ##x.320 0 0) (##string ##string.466))
V_CALL(VLookupGlobalVarFast2(runtime, "change-extension"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k247, env)}),
      _var0,
      VEncodePointer(&_V10string_D466.sym, VPOINTER_OTHER));
 }
}
static void _V0gen__makefile_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (basename (close _V0gen__makefile_k246) (bruijn ##x.321 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k246, env)}),
      _var0);
 }
}
static void _V0gen__makefile_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.316 1 0) (car (close _V0gen__makefile_k245) scm-files) ((bruijn ##k.317 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k245, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0gen__makefile_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k254, runtime, upenv, 1, argc, _var0) {
  // (if out-file (open-output-file (bruijn ##k.313 0 0) out-file) (current-output-port (bruijn ##k.313 0 0)))
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
static void _V0gen__makefile_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k261, runtime, upenv, 1, argc, _var0) {
  // (if out-file (close-port (bruijn ##k.297 13 0) (bruijn port 6 0)) ((bruijn ##k.297 13 0) #f))
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
static void _V0gen__makefile_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (newline (close _V0gen__makefile_k261) (bruijn port 5 0))
V_CALL(VLookupGlobalVarFast2(runtime, "newline"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k261, env)}),
      VGetArg(upenv, 5-1, 0));
 }
}
static void _V0gen__makefile_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k265, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.308 1 0) (compiler-error (bruijn ##k.309 0 0) (##string ##string.486) (bruijn dep 4 1)) ((bruijn ##k.309 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D486.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0gen__makefile_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k267, runtime, upenv, 1, argc, _var0) {
  // (format (bruijn ##k.304 5 0) (bruijn port 10 0) (##string ##string.487) (bruijn ##x.307 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "format"), runtime,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10string_D487.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0gen__makefile_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (import->path (close _V0gen__makefile_k267) (bruijn dep 4 1))
V_CALL(VLookupGlobalVarFast2(runtime, "import->path"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k267, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0gen__makefile_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__makefile_k265) (close _V0gen__makefile_k266))
V_CALL_FUNC(_V0gen__makefile_k265, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k266, env)}));
 }
}
static void _V0gen__makefile_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V0gen__makefile_k264) (bruijn ##x.310 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k264, env)}),
      _var0);
 }
}
static void _V0gen__makefile_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.305 0 0) (valid-import? (close _V0gen__makefile_k263) (bruijn dep 1 1)) ((bruijn ##k.304 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "valid-import?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k263, env)}),
      upenv->vars[1]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0gen__makefile_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__makefile_lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0gen__makefile_lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (pair? (close _V0gen__makefile_k262) (bruijn dep 0 1))
V_CALL(VLookupGlobalVarFast2(runtime, "pair?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k262, env)}),
      _var1);
 }
}
static void _V0gen__makefile_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (for-each (close _V0gen__makefile_k260) (close _V0gen__makefile_lambda29) (bruijn deps 5 0))
V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k260, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_lambda29, env)}),
      VGetArg(upenv, 5-1, 0));
 }
}
static void _V0gen__makefile_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (format (close _V0gen__makefile_k259) (bruijn port 3 0) (##string ##string.487) (bruijn ##x.311 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "format"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k259, env)}),
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D487.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0gen__makefile_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V0gen__makefile_k258) scm-files)
V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k258, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
 }
}
static void _V0gen__makefile_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (display (close _V0gen__makefile_k257) (##string ##string.488) (bruijn port 1 0))
V_CALL(VLookupGlobalVarFast2(runtime, "display"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k257, env)}),
      VEncodePointer(&_V10string_D488.sym, VPOINTER_OTHER),
      upenv->vars[0]);
 }
}
static void _V0gen__makefile_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__makefile_lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0gen__makefile_lambda30, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  // (format (bruijn ##k.312 0 0) (bruijn port 1 0) (##string ##string.489) (bruijn target 0 1))
V_CALL(VLookupGlobalVarFast2(runtime, "format"), runtime,
      _var0,
      upenv->vars[0],
      VEncodePointer(&_V10string_D489.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0gen__makefile_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (for-each (close _V0gen__makefile_k256) (close _V0gen__makefile_lambda30) maketargets)
V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k256, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_lambda30, env)}),
      VLookupGlobalVarFast2(runtime, "maketargets"));
 }
}
static void _V0gen__makefile_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__makefile_k254) (close _V0gen__makefile_k255))
V_CALL_FUNC(_V0gen__makefile_k254, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k255, env)}));
 }
}
static void _V0gen__makefile_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (gather-dependencies (close _V0gen__makefile_k253) (bruijn file 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "gather-dependencies"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k253, env)}),
      _var0);
 }
}
static void _V0gen__makefile_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (read-all (close _V0gen__makefile_k252) (bruijn ##x.314 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "read-all"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k252, env)}),
      _var0);
 }
}
static void _V0gen__makefile_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-file (close _V0gen__makefile_k251) (bruijn ##x.315 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "open-input-file"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k251, env)}),
      _var0);
 }
}
static void _V0gen__makefile_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V0gen__makefile_k250) scm-files)
V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k250, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
 }
}
static void _V0gen__makefile_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__makefile_k244) (close _V0gen__makefile_k249))
V_CALL_FUNC(_V0gen__makefile_k244, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k249, env)}));
 }
}
static void _V0gen__makefile_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_lambda28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close _V0gen__makefile_k243) maketargets)
V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k243, env)}),
      VLookupGlobalVarFast2(runtime, "maketargets"));
 }
}
static void global_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k268, runtime, upenv, 1, argc, _var0) {
  // (exit (##intrinsic ##sys.next))
V_CALL(VLookupGlobalVarFast2(runtime, "exit"), runtime,
      _V40_V10sys_Dnext);
 }
}
static void global_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k269, runtime, upenv, 1, argc, _var0) {
  // (if header? ((bruijn ##k.329 0 0) header?) (if transpile? ((bruijn ##k.329 0 0) transpile?) ((bruijn ##k.329 0 0) expand?)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "header?"));
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
static void global_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k273, runtime, upenv, 1, argc, _var0) {
  // (make-temporary-file (bruijn ##k.326 2 0) (bruijn ##x.327 0 0) (##string ##string.481))
V_CALL(VLookupGlobalVarFast2(runtime, "make-temporary-file"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D481.sym, VPOINTER_OTHER));
 }
}
static void global_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-append (close global_k273) (##string ##string.490) (bruijn ##x.328 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k273, env)}),
      VEncodePointer(&_V10string_D490.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void global_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda31, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda31, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (basename (close global_k272) (bruijn file 0 1))
V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k272, env)}),
      _var1);
 }
}
static void global_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.324 1 0) (list (bruijn ##k.325 0 0) out-file) (map (bruijn ##k.325 0 0) (close global_lambda31) scm-files))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast2(runtime, "list"), runtime,
      _var0,
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda31, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
 }
}
static void global_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define ##sys.next cc-files (bruijn ##x.323 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0cc__files,
      _var0
    );
 }
}
static void global_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k271) (close global_k274))
V_CALL_FUNC(global_k271, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k274, env)}));
 }
}
static void global_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k275, runtime, upenv, 1, argc, _var0) {
  // (if header? ((bruijn ##k.336 0 0) header?) (if transpile? ((bruijn ##k.336 0 0) transpile?) ((bruijn ##k.336 0 0) expand?)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "header?"));
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
static void global_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k279, runtime, upenv, 1, argc, _var0) {
  // (make-temporary-file (bruijn ##k.333 2 0) (bruijn ##x.334 0 0) (##string ##string.466))
V_CALL(VLookupGlobalVarFast2(runtime, "make-temporary-file"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D466.sym, VPOINTER_OTHER));
 }
}
static void global_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-append (close global_k279) (##string ##string.490) (bruijn ##x.335 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k279, env)}),
      VEncodePointer(&_V10string_D490.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void global_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda32, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (basename (close global_k278) (bruijn file 0 1))
V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k278, env)}),
      _var1);
 }
}
static void global_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.331 1 0) (list (bruijn ##k.332 0 0) #f) (if object? (list (bruijn ##k.332 0 0) out-file) (map (bruijn ##k.332 0 0) (close global_lambda32) scm-files)))
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
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda32, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
}
 }
}
static void global_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define ##sys.next cc-obj-files (bruijn ##x.330 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0cc__obj__files,
      _var0
    );
 }
}
static void global_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k276" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k277) (close global_k280))
V_CALL_FUNC(global_k277, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k280, env)}));
 }
}
static void global_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k282, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.338 1 0) ((bruijn ##k.339 0 0) (##string ##string.491)) (sprintf (bruijn ##k.339 0 0) (##string ##string.492) install-root))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D491.sym, VPOINTER_OTHER));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      _var0,
      VEncodePointer(&_V10string_D492.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
 }
}
static void global_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define ##sys.next base-cc-flags (bruijn ##x.337 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0base__cc__flags,
      _var0
    );
 }
}
static void global_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k282) (close global_k283))
V_CALL_FUNC(global_k282, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k283, env)}));
 }
}
static void global_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k285, runtime, upenv, 1, argc, _var0) {
  // (if debug? ((bruijn ##k.345 0 0) (##string ##string.493)) ((bruijn ##k.345 0 0) (##string ##string.448)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "debug?"))) {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D493.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D448.sym, VPOINTER_OTHER));
}
 }
}
static void global_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k287, runtime, upenv, 1, argc, _var0) {
  // (if shared? ((bruijn ##k.344 0 0) (##string ##string.494)) ((bruijn ##k.344 0 0) (##string ##string.448)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D494.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D448.sym, VPOINTER_OTHER));
}
 }
}
static void global_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define ##sys.next cc-command-flags (bruijn ##x.340 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0cc__command__flags,
      _var0
    );
 }
}
static void global_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-append (close global_k289) base-cc-flags (bruijn ##x.341 2 0) (bruijn ##x.342 1 0) (bruijn ##x.343 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k289, env)}),
      VLookupGlobalVarFast2(runtime, "base-cc-flags"),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void global_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k286, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k287) (close global_k288))
V_CALL_FUNC(global_k287, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k288, env)}));
 }
}
static void global_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k285) (close global_k286))
V_CALL_FUNC(global_k285, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k286, env)}));
 }
}
static void global_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k290" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (##intrinsic ##sys.next) cc-command (bruijn ##x.346 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      _V40_V10sys_Dnext,
      _V0cc__command,
      _var0
    );
 }
}
static void global_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.347 1 0) cc-command (bruijn ##x.348 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->vars[0],
      _V0cc__command,
      _var0
    );
 }
}
static void global_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda33, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (string-append (close global_k291) cc-command (bruijn option 0 1))
V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k291, env)}),
      VLookupGlobalVarFast2(runtime, "cc-command"),
      _var1);
 }
}
static void global_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define ##sys.next stdout (bruijn ##x.349 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0stdout,
      _var0
    );
 }
}
static void global_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define ##sys.next num-mains (bruijn ##x.350 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0num__mains,
      _var0
    );
 }
}
static void global_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k295, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn x 1 1) ((bruijn ##k.353 0 0) 1) ((bruijn ##k.353 0 0) 0))
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
static void global_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k296, runtime, upenv, 1, argc, _var0) {
  // (+ (bruijn ##k.351 1 0) (bruijn acc 1 2) (bruijn ##x.352 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "+"), runtime,
      upenv->vars[0],
      upenv->vars[2],
      _var0);
 }
}
static void global_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "global_lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to global_lambda34, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda34, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close global_k295) (close global_k296))
V_CALL_FUNC(global_k295, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k296, env)}));
 }
}
static void global_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (fold (close global_k294) (close global_lambda34) 0 (bruijn ##x.354 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "fold"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k294, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda34, env)}),
      VEncodeInt(0l),
      _var0);
 }
}
static void global_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k300, runtime, upenv, 1, argc, _var0) {
  // (append (bruijn ##k.369 1 0) (bruijn ##x.370 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "append"), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn fd 1 0) (read-all (close global_k300) (bruijn fd 1 0)) (compiler-error (bruijn ##k.369 0 0) (##string ##string.496) (bruijn scm-file 4 1)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast2(runtime, "read-all"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k300, env)}),
      upenv->vars[0]);
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D496.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]);
}
 }
}
static void global_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k312, runtime, upenv, 1, argc, _var0) {
  // (apply (bruijn ##k.356 13 0) printout2 (bruijn ##x.360 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "apply"), runtime,
      VGetArg(upenv, 13-1, 0),
      VLookupGlobalVarFast2(runtime, "printout2"),
      _var0);
 }
}
static void global_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close global_k312) debug? (bruijn ##x.361 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k312, env)}),
      VLookupGlobalVarFast2(runtime, "debug?"),
      _var0);
 }
}
static void global_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close global_k311) shared? (bruijn funs 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k311, env)}),
      VLookupGlobalVarFast2(runtime, "shared?"),
      _var0);
 }
}
static void global_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k309" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (to-functions (close global_k310) (bruijn bruijn 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "to-functions"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k310, env)}),
      _var0);
 }
}
static void global_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.359 0 0) (for-each (bruijn ##k.356 9 0) pretty-print (bruijn opt 1 0)) (map (close global_k309) bruijn-ify (bruijn opt 1 0)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VGetArg(upenv, 9-1, 0),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      upenv->vars[0]);
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k309, env)}),
      VLookupGlobalVarFast2(runtime, "bruijn-ify"),
      upenv->vars[0]);
}
 }
}
static void global_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close global_k308) expand? 2)
V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k308, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(2l));
 }
}
static void global_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k313" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k313, runtime, upenv, 1, argc, _var0) {
  // (deannotate-lambdas (bruijn ##k.362 1 0) (bruijn ##x.363 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "deannotate-lambdas"), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (optimize (close global_k313) (bruijn expr 0 1))
V_CALL(VLookupGlobalVarFast2(runtime, "optimize"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k313, env)}),
      _var1);
 }
}
static void global_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.358 0 0) (for-each (bruijn ##k.356 7 0) pretty-print (bruijn cps 1 0)) (map (close global_k307) (close global_lambda37) (bruijn cps 1 0)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VGetArg(upenv, 7-1, 0),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      upenv->vars[0]);
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k307, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda37, env)}),
      upenv->vars[0]);
}
 }
}
static void global_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k305" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close global_k306) expand? 1)
V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k306, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(1l));
 }
}
static void global_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k314, runtime, upenv, 1, argc, _var0) {
  // (annotate-lambdas (bruijn ##k.364 1 0) (bruijn ##x.365 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "annotate-lambdas"), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda38, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (to-cps (close global_k314) (bruijn expr 0 1))
V_CALL(VLookupGlobalVarFast2(runtime, "to-cps"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k314, env)}),
      _var1);
 }
}
static void global_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k304" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (map (close global_k305) (close global_lambda38) (bruijn ##x.366 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k305, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda38, env)}),
      _var0);
 }
}
static void global_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.357 0 0) (for-each (bruijn ##k.356 4 0) pretty-print (bruijn expanded 1 0)) (apply (close global_k304) append (bruijn expanded 1 0)))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      upenv->up->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      upenv->vars[0]);
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "apply"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k304, env)}),
      VLookupGlobalVarFast2(runtime, "append"),
      upenv->vars[0]);
}
 }
}
static void global_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close global_k303) expand? 0)
V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k303, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(0l));
 }
}
static void global_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k315, runtime, upenv, 1, argc, _var0) {
  // (expand-toplevel (bruijn ##k.367 1 0) (bruijn e 1 1) (bruijn ##x.368 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "expand-toplevel"), runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
 }
}
static void global_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (cons (close global_k315) (bruijn path 4 0) paths)
V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k315, env)}),
      upenv->up->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "paths"));
 }
}
static void global_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k301" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (map (close global_k302) (close global_lambda39) (bruijn file 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k302, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda39, env)}),
      _var0);
 }
}
static void global_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k299) (close global_k301))
V_CALL_FUNC(global_k299, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k301, env)}));
 }
}
static void global_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-file (close global_k298) (bruijn scm-file 2 1))
V_CALL(VLookupGlobalVarFast2(runtime, "open-input-file"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k298, env)}),
      upenv->up->vars[1]);
 }
}
static void global_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (with-output-to-file (bruijn ##k.355 1 0) (bruijn cc-file 1 2) (close global_lambda36))
V_CALL(VLookupGlobalVarFast2(runtime, "with-output-to-file"), runtime,
      upenv->vars[0],
      upenv->vars[2],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda36, env)}));
 }
}
static void global_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "global_lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to global_lambda35, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda35, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (realbasepath (close global_k297) (bruijn scm-file 0 1))
V_CALL(VLookupGlobalVarFast2(runtime, "realbasepath"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k297, env)}),
      _var1);
 }
}
static void global_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k319, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.379 0 0) (not (bruijn ##k.378 1 0) expand?) ((bruijn ##k.378 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      upenv->vars[0],
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.377 1 0) (not (close global_k319) transpile?) ((bruijn ##k.378 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k319, env)}),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k322, runtime, upenv, 1, argc, _var0) {
  // (displayln (bruijn ##k.375 1 0) (bruijn ##x.376 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k321" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if verbose? (sprintf (close global_k322) (##string ##string.497) cc (bruijn path 3 0) cc-command (bruijn obj-file 4 3) (bruijn cc-file 4 2)) ((bruijn ##k.375 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "verbose?"))) {
V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k322, env)}),
      VEncodePointer(&_V10string_D497.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "cc"),
      upenv->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "cc-command"),
      upenv->up->up->up->vars[3],
      upenv->up->up->up->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k324, runtime, upenv, 1, argc, _var0) {
  // (system (bruijn ##k.371 5 0) (bruijn ##x.374 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "system"), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void global_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (sprintf (close global_k324) (##string ##string.497) cc (bruijn path 3 0) cc-command (bruijn obj-file 4 3) (bruijn cc-file 4 2))
V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k324, env)}),
      VEncodePointer(&_V10string_D497.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "cc"),
      upenv->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "cc-command"),
      upenv->up->up->up->vars[3],
      upenv->up->up->up->vars[2]);
 }
}
static void global_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.372 0 0) ((close global_k321) (close global_k323)) ((bruijn ##k.371 3 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(global_k321, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k323, env)}));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k317" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k318) (close global_k320))
V_CALL_FUNC(global_k318, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k320, env)}));
 }
}
static void global_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k317) header?)
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k317, env)}),
      VLookupGlobalVarFast2(runtime, "header?"));
 }
}
static void global_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "global_lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to global_lambda40, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda40, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (realbasepath (close global_k316) (bruijn scm-file 0 1))
V_CALL(VLookupGlobalVarFast2(runtime, "realbasepath"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k316, env)}),
      _var1);
 }
}
static void global_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k325, runtime, upenv, 1, argc, _var0) {
  // (if shared? (> (bruijn ##k.381 0 0) num-mains 0) ((bruijn ##k.381 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
V_CALL(VLookupGlobalVarFast2(runtime, ">"), runtime,
      _var0,
      VLookupGlobalVarFast2(runtime, "num-mains"),
      VEncodeInt(0l));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k326, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.380 0 0) (compiler-error (##intrinsic ##sys.next) (##string ##string.498)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _V40_V10sys_Dnext,
      VEncodePointer(&_V10string_D498.sym, VPOINTER_OTHER));
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k327, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.382 0 0) (compiler-error (##intrinsic ##sys.next) (##string ##string.499)) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _V40_V10sys_Dnext,
      VEncodePointer(&_V10string_D499.sym, VPOINTER_OTHER));
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0delete__file_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0delete__file_k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0delete__file_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0delete__file_k328, runtime, upenv, 1, argc, _var0) {
  // (system (bruijn ##k.383 1 0) (bruijn ##x.384 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "system"), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0delete__file_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0delete__file_lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0delete__file_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0delete__file_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (sprintf (close _V0delete__file_k328) (##string ##string.500) (bruijn f 0 1))
V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete__file_k328, env)}),
      VEncodePointer(&_V10string_D500.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void global_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k332, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.413 0 0) (not (bruijn ##k.411 2 0) object?) ((bruijn ##k.411 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      upenv->up->vars[0],
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.412 0 0) (not (close global_k332) expand?) ((bruijn ##k.411 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k332, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.410 1 0) (not (close global_k331) transpile?) ((bruijn ##k.411 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k331, env)}),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k335" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k335, runtime, upenv, 1, argc, _var0) {
  // (if debug? ((bruijn ##k.409 0 0) (##string ##string.493)) ((bruijn ##k.409 0 0) (##string ##string.448)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "debug?"))) {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D493.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D448.sym, VPOINTER_OTHER));
}
 }
}
static void global_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k338" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k338, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.407 1 0) ((bruijn ##k.408 0 0) (##string ##string.501)) (sprintf (bruijn ##k.408 0 0) (##string ##string.502) install-root))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D501.sym, VPOINTER_OTHER));
} else {
V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      _var0,
      VEncodePointer(&_V10string_D502.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
 }
}
static void global_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k340" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k340, runtime, upenv, 1, argc, _var0) {
  // (if shared? ((bruijn ##k.406 0 0) (##string ##string.503)) ((bruijn ##k.406 0 0) (##string ##string.504)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D503.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D504.sym, VPOINTER_OTHER));
}
 }
}
static void global_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k344" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k344, runtime, upenv, 1, argc, _var0) {
  // (if out-file (sprintf (bruijn ##k.400 0 0) (##string ##string.505) cc out-file) ((bruijn ##k.400 0 0) cc))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      _var0,
      VEncodePointer(&_V10string_D505.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "cc"),
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "cc"));
}
 }
}
static void global_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k352" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k352, runtime, upenv, 1, argc, _var0) {
  // (if verbose? (displayln (bruijn ##k.392 0 0) (bruijn link-command 15 1)) ((bruijn ##k.392 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "verbose?"))) {
V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      _var0,
      VGetArg(upenv, 15-1, 1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k353" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k353, runtime, upenv, 1, argc, _var0) {
  // (system (##intrinsic ##sys.next) (bruijn link-command 15 1))
V_CALL(VLookupGlobalVarFast2(runtime, "system"), runtime,
      _V40_V10sys_Dnext,
      VGetArg(upenv, 15-1, 1));
 }
}
static void global_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k351" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k352) (close global_k353))
V_CALL_FUNC(global_k352, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k353, env)}));
 }
}
static void global_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k350" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k351) (bruijn link-command 13 1) (bruijn ##x.393 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k351, env)}),
      VEncodeInt(13l), VEncodeInt(1l),
      _var0
    );
 }
}
static void global_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k349" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-append (close global_k350) (bruijn link-command 12 1) (bruijn link-command-flags 12 0))
V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k350, env)}),
      VGetArg(upenv, 12-1, 1),
      VGetArg(upenv, 12-1, 0));
 }
}
static void global_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k354" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k354, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.394 1 0) (bruijn link-command 13 1) (bruijn ##x.395 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->vars[0],
      VEncodeInt(13l), VEncodeInt(1l),
      _var0
    );
 }
}
static void global_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda43, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda43, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (string-append (close global_k354) (bruijn link-command 12 1) (bruijn option 0 1))
V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k354, env)}),
      VGetArg(upenv, 12-1, 1),
      _var1);
 }
}
static void global_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k348" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (for-each (close global_k349) (close global_lambda43) c-options)
V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k349, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda43, env)}),
      VLookupGlobalVarFast2(runtime, "c-options"));
 }
}
static void global_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k355" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.396 1 0) (bruijn link-command 12 1) (bruijn ##x.397 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->vars[0],
      VEncodeInt(12l), VEncodeInt(1l),
      _var0
    );
 }
}
static void global_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda44, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (string-append (close global_k355) (bruijn link-command 11 1) (##string ##string.506) (bruijn file 0 1))
V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k355, env)}),
      VGetArg(upenv, 11-1, 1),
      VEncodePointer(&_V10string_D506.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void global_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k347" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k347, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (for-each (close global_k348) (close global_lambda44) (bruijn ##x.398 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k348, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda44, env)}),
      _var0);
 }
}
static void global_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k346" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (append (close global_k347) obj-files cc-obj-files)
V_CALL(VLookupGlobalVarFast2(runtime, "append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k347, env)}),
      VLookupGlobalVarFast2(runtime, "obj-files"),
      VLookupGlobalVarFast2(runtime, "cc-obj-files"));
 }
}
static void global_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k345" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k346) (bruijn link-command 8 1) (bruijn ##x.399 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k346, env)}),
      VEncodeInt(8l), VEncodeInt(1l),
      _var0
    );
 }
}
static void global_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k343" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k344) (close global_k345))
V_CALL_FUNC(global_k344, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k345, env)}));
 }
}
static void global_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k342" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k342, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k343) (bruijn link-command-flags 6 0) (bruijn ##x.401 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k343, env)}),
      VEncodeInt(6l), VEncodeInt(0l),
      _var0
    );
 }
}
static void global_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k341" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k341, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-append (close global_k342) base-cc-flags (bruijn ##x.402 4 0) (bruijn ##x.403 3 0) (bruijn ##x.404 1 0) (bruijn ##x.405 0 0))
V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k342, env)}),
      VLookupGlobalVarFast2(runtime, "base-cc-flags"),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void global_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k339" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k340) (close global_k341))
V_CALL_FUNC(global_k340, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k341, env)}));
 }
}
static void global_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k337" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k338) (close global_k339))
V_CALL_FUNC(global_k338, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k339, env)}));
 }
}
static void global_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k336" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close global_k337) platform (##string ##string.437))
V_CALL(VLookupGlobalVarFast2(runtime, "equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k337, env)}),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10string_D437.sym, VPOINTER_OTHER));
 }
}
static void global_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k334" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k334, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k335) (close global_k336))
V_CALL_FUNC(global_k335, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k336, env)}));
 }
}
static void global_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda42" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)global_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (sprintf (close global_k334) (##string ##string.495) optimization)
V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k334, env)}),
      VEncodePointer(&_V10string_D495.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "optimization"));
 }
}
static void global_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k333" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.385 0 0) ((close global_lambda42) #f #f) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(global_lambda42, env, runtime,
      VEncodeBool(false),
      VEncodeBool(false));
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k329" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k330) (close global_k333))
V_CALL_FUNC(global_k330, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k333, env)}));
 }
}
static void global_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k359" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k359, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.418 0 0) (not (bruijn ##k.416 2 0) keep?) ((bruijn ##k.416 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      upenv->up->vars[0],
      VLookupGlobalVarFast2(runtime, "keep?"));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k358" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.417 0 0) (not (close global_k359) expand?) ((bruijn ##k.416 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k359, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k357" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.415 1 0) (not (close global_k358) transpile?) ((bruijn ##k.416 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k358, env)}),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k360" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k360, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.414 0 0) (for-each (##intrinsic ##sys.next) delete-file cc-files) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      _V40_V10sys_Dnext,
      VLookupGlobalVarFast2(runtime, "delete-file"),
      VLookupGlobalVarFast2(runtime, "cc-files"));
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k356" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k357) (close global_k360))
V_CALL_FUNC(global_k357, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k360, env)}));
 }
}
static void global_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k365" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k365, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.424 0 0) (not (bruijn ##k.421 3 0) keep?) ((bruijn ##k.421 3 0) #f))
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
static void global_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k364" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.423 0 0) (not (close global_k365) object?) ((bruijn ##k.421 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k365, env)}),
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k363" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.422 0 0) (not (close global_k364) expand?) ((bruijn ##k.421 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k364, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k362" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k362, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.420 1 0) (not (close global_k363) transpile?) ((bruijn ##k.421 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k363, env)}),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k366" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k366, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.419 0 0) (for-each (##intrinsic ##sys.next) delete-file cc-obj-files) (##sys.next #f))
if(VDecodeBool(
_var0)) {
V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      _V40_V10sys_Dnext,
      VLookupGlobalVarFast2(runtime, "delete-file"),
      VLookupGlobalVarFast2(runtime, "cc-obj-files"));
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k361" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k362) (close global_k366))
V_CALL_FUNC(global_k362, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k366, env)}));
 }
}
void toplevel0(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k1, env)}),
      VEncodePointer(&_V10string_D425.sym, VPOINTER_OTHER));
}
void toplevel1(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k2, env)}),
      VEncodePointer(&_V10string_D426.sym, VPOINTER_OTHER));
}
void toplevel2(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k3, env)}),
      VEncodePointer(&_V10string_D427.sym, VPOINTER_OTHER));
}
void toplevel3(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k4, env)}),
      VEncodePointer(&_V10string_D428.sym, VPOINTER_OTHER));
}
void toplevel4(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k5, env)}),
      VEncodePointer(&_V10string_D429.sym, VPOINTER_OTHER));
}
void toplevel5(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k6, env)}),
      VEncodePointer(&_V10string_D430.sym, VPOINTER_OTHER));
}
void toplevel6(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k7, env)}),
      VEncodePointer(&_V10string_D431.sym, VPOINTER_OTHER));
}
void toplevel7(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k8, env)}),
      VEncodePointer(&_V10string_D432.sym, VPOINTER_OTHER));
}
void toplevel8(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k9, env)}),
      VEncodePointer(&_V10string_D433.sym, VPOINTER_OTHER));
}
void toplevel9(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k10, env)}),
      VEncodePointer(&_V10string_D434.sym, VPOINTER_OTHER));
}
void toplevel10(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k11, env)}),
      VEncodePointer(&_V10string_D435.sym, VPOINTER_OTHER));
}
void toplevel11(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k12, env)}),
      VEncodePointer(&_V10string_D436.sym, VPOINTER_OTHER));
}
void toplevel12(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0scm__files,
      VNULL
    );
}
void toplevel13(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0obj__files,
      VNULL
    );
}
void toplevel14(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0shared_Q,
      VEncodeBool(false)
    );
}
void toplevel15(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0expand_Q,
      VEncodeBool(false)
    );
}
void toplevel16(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0keep_Q,
      VEncodeBool(false)
    );
}
void toplevel17(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0header_Q,
      VEncodeBool(false)
    );
}
void toplevel18(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0transpile_Q,
      VEncodeBool(false)
    );
}
void toplevel19(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0object_Q,
      VEncodeBool(false)
    );
}
void toplevel20(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0debug_Q,
      VEncodeBool(false)
    );
}
void toplevel21(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0verbose_Q,
      VEncodeBool(false)
    );
}
void toplevel22(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0optimization,
      VEncodeInt(1l)
    );
}
void toplevel23(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0api,
      VEncodeInt(1l)
    );
}
void toplevel24(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0out__file,
      VEncodeBool(false)
    );
}
void toplevel25(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0platform,
      VEncodePointer(&_V10string_D437.sym, VPOINTER_OTHER)
    );
}
void toplevel26(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0cc,
      VEncodeBool(false)
    );
}
void toplevel27(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0c__options,
      VNULL
    );
}
void toplevel28(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k13, env)}),
      VEncodePointer(&_V10string_D438.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
void toplevel29(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0makefile_Q,
      VEncodeBool(false)
    );
}
void toplevel30(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0maketargets,
      VNULL
    );
}
void toplevel31(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0benchmark_Q,
      VEncodeBool(false)
    );
}
void toplevel32(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0extension,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_lambda1, env)})
    );
}
void toplevel33(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0change__extension,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_lambda4, env)})
    );
}
void toplevel34(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0basename,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_lambda7, env)})
    );
}
void toplevel35(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0basepath,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_lambda10, env)})
    );
}
void toplevel36(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0decomma,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_lambda13, env)})
    );
}
void toplevel37(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0realpath,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_lambda16, env)})
    );
}
void toplevel38(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0realbasepath,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_lambda17, env)})
    );
}
void toplevel39(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0display__help,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_lambda18, env)})
    );
}
void toplevel40(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0display__version,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_lambda19, env)})
    );
}
void toplevel41(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL_FUNC(global_lambda20, env, runtime,
      VEncodeBool(false));
}
void toplevel42(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k177, env)}),
      VLookupGlobalVarFast2(runtime, "cc"));
}
void toplevel43(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0count__true,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0count__true_lambda22, env)})
    );
}
void toplevel44(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL(VLookupGlobalVarFast2(runtime, "count-true"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k189, env)}),
      VLookupGlobalVarFast2(runtime, "makefile?"),
      VLookupGlobalVarFast2(runtime, "header?"),
      VLookupGlobalVarFast2(runtime, "transpile?"),
      VLookupGlobalVarFast2(runtime, "object?"),
      VLookupGlobalVarFast2(runtime, "expand?"));
}
void toplevel45(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k191, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
void toplevel46(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL_FUNC(global_k194, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k195, env)}));
}
void toplevel47(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL_FUNC(global_k199, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k200, env)}));
}
void toplevel48(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL_FUNC(global_k205, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k206, env)}));
}
void toplevel49(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k211, env)}),
      VLookupGlobalVarFast2(runtime, "out-file"));
}
void toplevel50(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0gen__header,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_lambda25, env)})
    );
}
void toplevel51(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
V_CALL(VLookupGlobalVarFast2(runtime, "gen-header"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k242, env)}));
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false));
}
}
void toplevel52(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0gen__makefile,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_lambda28, env)})
    );
}
void toplevel53(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
V_CALL(VLookupGlobalVarFast2(runtime, "gen-makefile"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k268, env)}));
} else {
    V_CALL_FUNC(VNext2, NULL, runtime,
      VEncodeBool(false));
}
}
void toplevel54(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL_FUNC(global_k269, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k270, env)}));
}
void toplevel55(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL_FUNC(global_k275, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k276, env)}));
}
void toplevel56(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL(VLookupGlobalVarFast2(runtime, "equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k281, env)}),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10string_D437.sym, VPOINTER_OTHER));
}
void toplevel57(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k284, env)}),
      VEncodePointer(&_V10string_D495.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "optimization"));
}
void toplevel58(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0cc__command,
      VEncodePointer(&_V10string_D448.sym, VPOINTER_OTHER)
    );
}
void toplevel59(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k290, env)}),
      VLookupGlobalVarFast2(runtime, "cc-command"),
      VLookupGlobalVarFast2(runtime, "cc-command-flags"));
}
void toplevel60(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      _V40_V10sys_Dnext,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda33, env)}),
      VLookupGlobalVarFast2(runtime, "c-options"));
}
void toplevel61(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL(VLookupGlobalVarFast2(runtime, "current-output-port"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k292, env)}));
}
void toplevel62(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k293, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda35, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"),
      VLookupGlobalVarFast2(runtime, "cc-files"),
      VLookupGlobalVarFast2(runtime, "cc-obj-files"));
}
void toplevel63(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      _V40_V10sys_Dnext,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda40, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"),
      VLookupGlobalVarFast2(runtime, "cc-files"),
      VLookupGlobalVarFast2(runtime, "cc-obj-files"));
}
void toplevel64(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL_FUNC(global_k325, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k326, env)}));
}
void toplevel65(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL(VLookupGlobalVarFast2(runtime, ">"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k327, env)}),
      VLookupGlobalVarFast2(runtime, "num-mains"),
      VEncodeInt(1l));
}
void toplevel66(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      _V0delete__file,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete__file_lambda41, env)})
    );
}
void toplevel67(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k329, env)}),
      VLookupGlobalVarFast2(runtime, "header?"));
}
void toplevel68(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k356, env)}),
      VLookupGlobalVarFast2(runtime, "header?"));
}
void toplevel69(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k361, env)}),
      VLookupGlobalVarFast2(runtime, "header?"));
}
int main(int argc, char ** argv) {
  VThunk toplevels[] = {
    toplevel0,    toplevel1,    toplevel2,    toplevel3,    toplevel4,    toplevel5,    toplevel6,    toplevel7,    toplevel8,    toplevel9,    toplevel10,    toplevel11,    toplevel12,    toplevel13,    toplevel14,    toplevel15,    toplevel16,    toplevel17,    toplevel18,    toplevel19,    toplevel20,    toplevel21,    toplevel22,    toplevel23,    toplevel24,    toplevel25,    toplevel26,    toplevel27,    toplevel28,    toplevel29,    toplevel30,    toplevel31,    toplevel32,    toplevel33,    toplevel34,    toplevel35,    toplevel36,    toplevel37,    toplevel38,    toplevel39,    toplevel40,    toplevel41,    toplevel42,    toplevel43,    toplevel44,    toplevel45,    toplevel46,    toplevel47,    toplevel48,    toplevel49,    toplevel50,    toplevel51,    toplevel52,    toplevel53,    toplevel54,    toplevel55,    toplevel56,    toplevel57,    toplevel58,    toplevel59,    toplevel60,    toplevel61,    toplevel62,    toplevel63,    toplevel64,    toplevel65,    toplevel66,    toplevel67,    toplevel68,    toplevel69,
  };
  VRuntime * runtime;
  VInitRuntime2(&runtime, argc, argv);
  return VDecodeExitCode(VStart2(runtime, sizeof toplevels / sizeof *toplevels, toplevels));
}
