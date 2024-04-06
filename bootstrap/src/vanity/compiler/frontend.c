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
static struct { VBlob sym; char bytes[2]; } _V10string_D594 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static struct { VBlob sym; char bytes[9]; } _V10string_D593 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~A -o ~A" };
static struct { VBlob sym; char bytes[20]; } _V10string_D592 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, " -Wl,--no-as-needed" };
static struct { VBlob sym; char bytes[15]; } _V10string_D591 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, " -fPIC -shared" };
static struct { VBlob sym; char bytes[40]; } _V10string_D590 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, " -L~A/x86_64-w64-mingw32/lib/ -lvscheme" };
static struct { VBlob sym; char bytes[11]; } _V10string_D589 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, " -lvscheme" };
static struct { VBlob sym; char bytes[11]; } _V10string_D588 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "/bin/rm ~A" };
VWEAK VWORD _V0delete__file;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0delete__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "delete-file" };
static struct { VBlob sym; char bytes[87]; } _V10string_D587 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 87 }, "program has toplevel expressions in multiple files, and so it generated multiple mains" };
static struct { VBlob sym; char bytes[51]; } _V10string_D586 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[23]; } _V10string_D585 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "~A -I~A ~A -c -o ~A ~A" };
static struct { VBlob sym; char bytes[20]; } _V10string_D584 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "file does not exist" };
VWEAK VWORD _V0num__mains;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0num__mains = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "num-mains" };
VWEAK VWORD _V0stdout;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "stdout" };
VWEAK VWORD _V0cc__command;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0cc__command = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "cc-command" };
static struct { VBlob sym; char bytes[6]; } _V10string_D583 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, " -O~A" };
VWEAK VWORD _V0cc__command__flags;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0cc__command__flags = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "cc-command-flags" };
static struct { VBlob sym; char bytes[7]; } _V10string_D582 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, " -fPIC" };
static struct { VBlob sym; char bytes[4]; } _V10string_D581 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " -g" };
VWEAK VWORD _V0base__cc__flags;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0base__cc__flags = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "base-cc-flags" };
static struct { VBlob sym; char bytes[108]; } _V10string_D580 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 108 }, " -Wl,--export-all-symbols -Wl,--stack,8388608 -Wmissing-braces -masm=intel -I~A/x86_64-w64-mingw32/include/" };
static struct { VBlob sym; char bytes[40]; } _V10string_D579 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, " -rdynamic -Wmissing-braces -masm=intel" };
VWEAK VWORD _V0cc__obj__files;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0cc__obj__files = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "cc-obj-files" };
VWEAK VWORD _V0cc__files;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0cc__files = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "cc-files" };
static struct { VBlob sym; char bytes[6]; } _V10string_D578 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "/tmp/" };
static struct { VBlob sym; char bytes[4]; } _V10string_D577 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "~A " };
static struct { VBlob sym; char bytes[2]; } _V10string_D576 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ":" };
static struct { VBlob sym; char bytes[4]; } _V10string_D575 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " ~A" };
static struct { VBlob sym; char bytes[15]; } _V10string_D574 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "invalid import" };
VWEAK VWORD _V0gen__makefile;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0gen__makefile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "gen-makefile" };
static struct { VBlob sym; char bytes[36]; } _V10string_D573 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "File did not produce a valid header" };
static struct { VBlob sym; char bytes[50]; } _V10string_D572 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "Only one statement permitted in header generation" };
VWEAK VWORD _V0gen__header;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0gen__header = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "gen-header" };
static struct { VBlob sym; char bytes[6]; } _V10string_D571 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".vasm" };
static struct { VBlob sym; char bytes[6]; } _V10string_D570 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".scmh" };
static struct { VBlob sym; char bytes[6]; } _V10string_D569 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".escm" };
static struct { VBlob sym; char bytes[3]; } _V10string_D568 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".c" };
static struct { VBlob sym; char bytes[56]; } _V10string_D567 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 56 }, "FIXME: -h and -c and -t and -E can only handle one file" };
static struct { VBlob sym; char bytes[89]; } _V10string_D566 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 89 }, "Cannot specify '-h' or '-c' or '-t' or '-E' or '--makefile' with '-o' and multiple files" };
static struct { VBlob sym; char bytes[75]; } _V10string_D565 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 75 }, "Cannot specify '-h' '-c' or '-t' or '-E' or '--makefile' with object files" };
static struct { VBlob sym; char bytes[23]; } _V10string_D564 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "No input file provided" };
static struct { VBlob sym; char bytes[68]; } _V10string_D563 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "Only one of '-h' or '-c' or '-t' or '-E' or '--makefile' can be set" };
VWEAK VWORD _V0count__true;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0count__true = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "count-true" };
static struct { VBlob sym; char bytes[8]; } _V10string_D562 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "windows" };
static struct { VBlob sym; char bytes[57]; } _V10string_D561 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "Unknown --platform, only 'linux' and 'windows' are valid" };
static struct { VBlob sym; char bytes[32]; } _V10string_D560 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "/usr/bin/x86_64-w64-mingw32-gcc" };
static struct { VBlob sym; char bytes[4]; } _V10string_D559 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "gcc" };
static struct { VBlob sym; char bytes[16]; } _V10string_D558 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "vghtco:I:O:E:W:" };
VWEAK VWORD _V0help;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0help = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "help" };
VWEAK VWORD _V0version;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "version" };
VWEAK VWORD _V0shared;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0shared = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "shared" };
VWEAK VWORD _V0keep__temps;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0keep__temps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "keep-temps" };
VWEAK VWORD _V0makefile;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0makefile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "makefile" };
VWEAK VWORD _V0maketarget;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0maketarget = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "maketarget" };
VWEAK VWORD _V0benchmark;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0benchmark = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "benchmark" };
VWEAK VWORD _V0bytecode;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0bytecode = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "bytecode" };
static struct { VBlob sym; char bytes[19]; } _V10string_D557 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "Unknown CLI option" };
static struct { VBlob sym; char bytes[30]; } _V10string_D556 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "Wrapper flag -W missing comma" };
static struct { VBlob sym; char bytes[67]; } _V10string_D555 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 67 }, "Wrapper flag -W can only pass args to the C compiler, eg -Wc,-Ilib" };
static struct { VBlob sym; char bytes[57]; } _V10string_D554 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "Expand flag -E expects integer between 0 and 2 inclusive" };
static struct { VBlob sym; char bytes[63]; } _V10string_D553 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "Optimization flag -O expects integer between 0 and 3 inclusive" };
static struct { VBlob sym; char bytes[3]; } _V10string_D552 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".o" };
static struct { VBlob sym; char bytes[31]; } _V10string_D551 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "Vanity Scheme Compiler ~A.~A~N" };
static struct { VBlob sym; char bytes[37]; } _V10string_D550 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "Copyright (C) 2023 Richard Van Natta" };
VWEAK VWORD _V0display__version;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0display__version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "display-version" };
static struct { VBlob sym; char bytes[29]; } _V10string_D549 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "Usage: vsc [options] file..." };
static struct { VBlob sym; char bytes[9]; } _V10string_D548 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "Options:" };
static struct { VBlob sym; char bytes[94]; } _V10string_D547 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 94 }, "  -O<num>         Compile with optimization levels 0 (slowest codegen) to 3 (fastest codegen)" };
static struct { VBlob sym; char bytes[45]; } _V10string_D546 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  -g              Compile with debug symbols" };
static struct { VBlob sym; char bytes[60]; } _V10string_D545 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "  -h              Generate header file instead of compiling" };
static struct { VBlob sym; char bytes[118]; } _V10string_D544 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 118 }, "  -E<num>         Expand only, do not compile or link. 0: macros only, 1: continuation passing style, 2: optimization" };
static struct { VBlob sym; char bytes[57]; } _V10string_D543 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "  -t              Transpile only, do not compile or link" };
static struct { VBlob sym; char bytes[68]; } _V10string_D542 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "  -c              Transpile, compile, and assemble, but do not link" };
static struct { VBlob sym; char bytes[47]; } _V10string_D541 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 47 }, "  -o<file>        Place the output into <file>" };
static struct { VBlob sym; char bytes[87]; } _V10string_D540 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 87 }, "  -I<dir>         Add the directory to the list to be searched for scheme header files" };
static struct { VBlob sym; char bytes[57]; } _V10string_D539 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "  -Wc,<option>    Pass comma seperated to the C compiler" };
static struct { VBlob sym; char bytes[45]; } _V10string_D538 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  -v              Show intermediate commands" };
static struct { VBlob sym; char bytes[86]; } _V10string_D537 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 86 }, "  --makefile      Generate makefile dependencies, similar to gcc invoked with -MM -MG" };
static struct { VBlob sym; char bytes[110]; } _V10string_D536 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 110 }, "  --maketarget    Specify the target of the make dependency, additional --maketarget's add additional targets" };
static struct { VBlob sym; char bytes[1]; } _V10string_D535 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[44]; } _V10string_D534 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "  --shared        Compile as shared library" };
static struct { VBlob sym; char bytes[76]; } _V10string_D533 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 76 }, "  --keep-temps    Keep temporary compilation files, such as C intermediates" };
static struct { VBlob sym; char bytes[81]; } _V10string_D532 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 81 }, "  --platform=<os> Which OS to make executables for. Either 'linux' or 'windows'." };
static struct { VBlob sym; char bytes[72]; } _V10string_D531 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 72 }, "  --cc=<compiler> Use the C compiler of your choice. The default is gcc" };
static struct { VBlob sym; char bytes[38]; } _V10string_D530 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "  --help          You know about this" };
static struct { VBlob sym; char bytes[46]; } _V10string_D529 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "  --version       Show version and build info" };
VWEAK VWORD _V0display__help;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0display__help = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "display-help" };
static struct { VBlob sym; char bytes[22]; } _V10string_D528 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "realpath `dirname ~A`" };
VWEAK VWORD _V0realbasepath;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0realbasepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "realbasepath" };
static struct { VBlob sym; char bytes[12]; } _V10string_D527 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "realpath ~A" };
VWEAK VWORD _V0realpath;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0realpath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "realpath" };
VWEAK VWORD _V0decomma;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0decomma = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "decomma" };
static struct { VBlob sym; char bytes[2]; } _V10string_D526 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "." };
VWEAK VWORD _V0basepath;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0basepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "basepath" };
VWEAK VWORD _V0basename;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0basename = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "basename" };
VWEAK VWORD _V0change__extension;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0change__extension = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "change-extension" };
VWEAK VWORD _V0extension;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0extension = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "extension" };
VWEAK VWORD _V0benchmark_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0benchmark_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "benchmark\?" };
VWEAK VWORD _V0maketargets;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0maketargets = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "maketargets" };
VWEAK VWORD _V0makefile_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0makefile_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "makefile\?" };
static struct { VBlob sym; char bytes[11]; } _V10string_D525 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "~A/include" };
VWEAK VWORD _V0paths;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0paths = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "paths" };
VWEAK VWORD _V0c__options;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0c__options = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "c-options" };
VWEAK VWORD _V0cc;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0cc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "cc" };
static struct { VBlob sym; char bytes[6]; } _V10string_D524 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "linux" };
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
static struct { VBlob sym; char bytes[34]; } _V10string_D523 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[35]; } _V10string_D522 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "_V0vanity_V0compiler_V0library_V20" };
static struct { VBlob sym; char bytes[36]; } _V10string_D521 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "_V0vanity_V0compiler_V0bytecode_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D520 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0transpile_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D519 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0lower_V20" };
static struct { VBlob sym; char bytes[31]; } _V10string_D518 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0cps_V20" };
static struct { VBlob sym; char bytes[34]; } _V10string_D517 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0expand_V20" };
static struct { VBlob sym; char bytes[34]; } _V10string_D516 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0getopt_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D515 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D514 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D513 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[30]; } _V10string_D512 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D511 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D510 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
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
  _V0help = VEncodePointer(VLookupConstant("_V0help", &_VW_V0help), VPOINTER_OTHER);
  _V0version = VEncodePointer(VLookupConstant("_V0version", &_VW_V0version), VPOINTER_OTHER);
  _V0shared = VEncodePointer(VLookupConstant("_V0shared", &_VW_V0shared), VPOINTER_OTHER);
  _V0keep__temps = VEncodePointer(VLookupConstant("_V0keep__temps", &_VW_V0keep__temps), VPOINTER_OTHER);
  _V0makefile = VEncodePointer(VLookupConstant("_V0makefile", &_VW_V0makefile), VPOINTER_OTHER);
  _V0maketarget = VEncodePointer(VLookupConstant("_V0maketarget", &_VW_V0maketarget), VPOINTER_OTHER);
  _V0benchmark = VEncodePointer(VLookupConstant("_V0benchmark", &_VW_V0benchmark), VPOINTER_OTHER);
  _V0bytecode = VEncodePointer(VLookupConstant("_V0bytecode", &_VW_V0bytecode), VPOINTER_OTHER);
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
  _V0bytecode_Q = VEncodePointer(VLookupConstant("_V0bytecode_Q", &_VW_V0bytecode_Q), VPOINTER_OTHER);
  _V0header_Q = VEncodePointer(VLookupConstant("_V0header_Q", &_VW_V0header_Q), VPOINTER_OTHER);
  _V0keep_Q = VEncodePointer(VLookupConstant("_V0keep_Q", &_VW_V0keep_Q), VPOINTER_OTHER);
  _V0expand_Q = VEncodePointer(VLookupConstant("_V0expand_Q", &_VW_V0expand_Q), VPOINTER_OTHER);
  _V0shared_Q = VEncodePointer(VLookupConstant("_V0shared_Q", &_VW_V0shared_Q), VPOINTER_OTHER);
  _V0obj__files = VEncodePointer(VLookupConstant("_V0obj__files", &_VW_V0obj__files), VPOINTER_OTHER);
  _V0scm__files = VEncodePointer(VLookupConstant("_V0scm__files", &_VW_V0scm__files), VPOINTER_OTHER);
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
  // (##vcore.multidefine (bruijn ##next.2 1 0) (bruijn ##x.3 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k1) (##string ##string.510))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k1, env)}),
      VEncodePointer(&_V10string_D510.sym, VPOINTER_OTHER));
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
  // (##vcore.multidefine (bruijn ##next.4 1 0) (bruijn ##x.5 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k2) (##string ##string.511))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k2, env)}),
      VEncodePointer(&_V10string_D511.sym, VPOINTER_OTHER));
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
  // (##vcore.multidefine (bruijn ##next.6 1 0) (bruijn ##x.7 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k3) (##string ##string.512))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k3, env)}),
      VEncodePointer(&_V10string_D512.sym, VPOINTER_OTHER));
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
  // (##vcore.multidefine (bruijn ##next.8 1 0) (bruijn ##x.9 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k4) (##string ##string.513))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k4, env)}),
      VEncodePointer(&_V10string_D513.sym, VPOINTER_OTHER));
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
  // (##vcore.multidefine (bruijn ##next.10 1 0) (bruijn ##x.11 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k5) (##string ##string.514))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k5, env)}),
      VEncodePointer(&_V10string_D514.sym, VPOINTER_OTHER));
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
  // (##vcore.multidefine (bruijn ##next.12 1 0) (bruijn ##x.13 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k6) (##string ##string.515))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k6, env)}),
      VEncodePointer(&_V10string_D515.sym, VPOINTER_OTHER));
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
  // (##vcore.multidefine (bruijn ##next.14 1 0) (bruijn ##x.15 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k7) (##string ##string.516))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k7, env)}),
      VEncodePointer(&_V10string_D516.sym, VPOINTER_OTHER));
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
  // (##vcore.multidefine (bruijn ##next.16 1 0) (bruijn ##x.17 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k8) (##string ##string.517))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k8, env)}),
      VEncodePointer(&_V10string_D517.sym, VPOINTER_OTHER));
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
  // (##vcore.multidefine (bruijn ##next.18 1 0) (bruijn ##x.19 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k9) (##string ##string.518))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k9, env)}),
      VEncodePointer(&_V10string_D518.sym, VPOINTER_OTHER));
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
  // (##vcore.multidefine (bruijn ##next.20 1 0) (bruijn ##x.21 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k10) (##string ##string.519))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k10, env)}),
      VEncodePointer(&_V10string_D519.sym, VPOINTER_OTHER));
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
  // (##vcore.multidefine (bruijn ##next.22 1 0) (bruijn ##x.23 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k11) (##string ##string.520))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k11, env)}),
      VEncodePointer(&_V10string_D520.sym, VPOINTER_OTHER));
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
  // (##vcore.multidefine (bruijn ##next.24 1 0) (bruijn ##x.25 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k12) (##string ##string.521))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k12, env)}),
      VEncodePointer(&_V10string_D521.sym, VPOINTER_OTHER));
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
  // (##vcore.multidefine (bruijn ##next.26 1 0) (bruijn ##x.27 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k13) (##string ##string.522))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k13, env)}),
      VEncodePointer(&_V10string_D522.sym, VPOINTER_OTHER));
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
  // (##vcore.multidefine (bruijn ##next.28 1 0) (bruijn ##x.29 0 0))
    V_CALL_FUNC(VMultiDefine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close global_k14) (##string ##string.523))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k14, env)}),
      VEncodePointer(&_V10string_D523.sym, VPOINTER_OTHER));
 }
}
static void global_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.30 0 0) scm-files '())
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0scm__files,
      VNULL
    );
 }
}
static void global_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.31 0 0) obj-files '())
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0obj__files,
      VNULL
    );
 }
}
static void global_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.32 0 0) shared? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0shared_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.33 0 0) expand? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0expand_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.34 0 0) keep? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0keep_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.35 0 0) header? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0header_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.36 0 0) bytecode? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0bytecode_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.37 0 0) transpile? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0transpile_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.38 0 0) object? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0object_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.39 0 0) debug? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0debug_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.40 0 0) verbose? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0verbose_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.41 0 0) optimization 1)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0optimization,
      VEncodeInt(1l)
    );
 }
}
static void global_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.42 0 0) api 1)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0api,
      VEncodeInt(1l)
    );
 }
}
static void global_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.43 0 0) out-file #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0out__file,
      VEncodeBool(false)
    );
 }
}
static void global_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.44 0 0) platform (##string ##string.524))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0platform,
      VEncodePointer(&_V10string_D524.sym, VPOINTER_OTHER)
    );
 }
}
static void global_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.45 0 0) cc #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0cc,
      VEncodeBool(false)
    );
 }
}
static void global_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.46 0 0) c-options '())
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0c__options,
      VNULL
    );
 }
}
static void global_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.47 2 0) paths (bruijn ##x.48 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      upenv->up->vars[0],
      _V0paths,
      _var0
    );
 }
}
static void global_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (list (close global_k16) (bruijn ##x.49 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "list"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k16, env)}),
      _var0);
 }
}
static void global_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (sprintf (close global_k15) (##string ##string.525) install-root)
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k15, env)}),
      VEncodePointer(&_V10string_D525.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
 }
}
static void global_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.50 0 0) makefile? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0makefile_Q,
      VEncodeBool(false)
    );
 }
}
static void global_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.51 0 0) maketargets '())
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0maketargets,
      VNULL
    );
 }
}
static void global_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.52 0 0) benchmark? #f)
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0benchmark_Q,
      VEncodeBool(false)
    );
 }
}
static void _V0extension_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0extension_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_k20, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.55 4 0) (bruijn ##x.58 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0extension_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0extension_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.57 0 0) (substring (bruijn ##k.55 3 0) (bruijn file 5 1) (bruijn i 3 1)) (- (close _V0extension_k20) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "substring"), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->up->up->vars[1]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k20, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V0extension_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0extension_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V0extension_k19) #\. (bruijn ##x.59 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k19, env)}),
      VEncodeChar('.'),
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.56 0 0) ((bruijn ##k.55 1 0) #f) (string-ref (close _V0extension_k18) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k18, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
 }
}
static void _V0extension_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0extension_lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0extension_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_lambda38, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V0extension_k17) (bruijn i 0 1) 0)
    V_CALL(VLookupGlobalVarFast2(runtime, "<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k17, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0extension_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0extension_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_k22, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.54 3 0) (bruijn ##x.60 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0extension_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extension_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0extension_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0extension_k22) (bruijn ##x.61 0 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k22, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0extension_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0extension_lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0extension_lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extension_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0extension_lambda38)) (string-length (close _V0extension_k21) (bruijn file 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_lambda38, env)});
    V_CALL(VLookupGlobalVarFast2(runtime, "string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_k21, env)}),
      upenv->vars[1]);
    }
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
  // (define (bruijn ##next.53 0 0) extension (close _V0extension_lambda37))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0extension,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extension_lambda37, env)})
    );
 }
}
static void _V0change__extension_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0change__extension_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_k26, runtime, upenv, 1, argc, _var0) {
  // (string-append (bruijn ##k.64 4 0) (bruijn ##x.67 0 0) (bruijn new 6 2))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0change__extension_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0change__extension_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_k27, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.64 4 0) (bruijn ##x.68 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0change__extension_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0change__extension_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.66 0 0) (substring (close _V0change__extension_k26) (bruijn file 5 1) 0 (bruijn i 3 1)) (- (close _V0change__extension_k27) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "substring"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k26, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(0l),
      upenv->up->up->vars[1]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k27, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V0change__extension_k25) #\. (bruijn ##x.69 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k25, env)}),
      VEncodeChar('.'),
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
  // (if (bruijn ##p.65 0 0) (string-append (bruijn ##k.64 1 0) (bruijn file 3 1) (bruijn new 3 2)) (string-ref (close _V0change__extension_k24) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      upenv->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k24, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
 }
}
static void _V0change__extension_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0change__extension_lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0change__extension_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V0change__extension_k23) (bruijn i 0 1) 0)
    V_CALL(VLookupGlobalVarFast2(runtime, "<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k23, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0change__extension_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0change__extension_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_k29, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.63 3 0) (bruijn ##x.70 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0change__extension_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0change__extension_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0change__extension_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0change__extension_k29) (bruijn ##x.71 0 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k29, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0change__extension_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0change__extension_lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0change__extension_lambda40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0change__extension_lambda40, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0change__extension_lambda41)) (string-length (close _V0change__extension_k28) (bruijn file 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_lambda41, env)});
    V_CALL(VLookupGlobalVarFast2(runtime, "string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_k28, env)}),
      upenv->vars[1]);
    }
 }
}
static void global_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.62 0 0) change-extension (close _V0change__extension_lambda40))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0change__extension,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0change__extension_lambda40, env)})
    );
 }
}
static void _V0basename_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basename_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basename_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_k33, runtime, upenv, 1, argc, _var0) {
  // (substring (bruijn ##k.74 4 0) (bruijn file 6 1) (bruijn ##x.77 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "substring"), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      _var0);
 }
}
static void _V0basename_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basename_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basename_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_k34, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.74 4 0) (bruijn ##x.78 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.76 0 0) (+ (close _V0basename_k33) (bruijn i 3 1) 1) (- (close _V0basename_k34) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "+"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k33, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k34, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
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
  // (eq? (close _V0basename_k32) #\/ (bruijn ##x.79 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k32, env)}),
      VEncodeChar('/'),
      _var0);
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
  // (if (bruijn ##p.75 0 0) ((bruijn ##k.74 1 0) (bruijn file 3 1)) (string-ref (close _V0basename_k31) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[1]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k31, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
 }
}
static void _V0basename_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0basename_lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0basename_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_lambda44, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V0basename_k30) (bruijn i 0 1) 0)
    V_CALL(VLookupGlobalVarFast2(runtime, "<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k30, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0basename_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basename_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basename_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_k36, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.73 3 0) (bruijn ##x.80 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0basename_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basename_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basename_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0basename_k36) (bruijn ##x.81 0 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k36, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0basename_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0basename_lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0basename_lambda43, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basename_lambda43, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0basename_lambda44)) (string-length (close _V0basename_k35) (bruijn file 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_lambda44, env)});
    V_CALL(VLookupGlobalVarFast2(runtime, "string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_k35, env)}),
      upenv->vars[1]);
    }
 }
}
static void global_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.72 0 0) basename (close _V0basename_lambda43))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0basename,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basename_lambda43, env)})
    );
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
  // (substring (bruijn ##k.84 4 0) (bruijn file 6 1) 0 (bruijn ##x.87 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "substring"), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      VEncodeInt(0l),
      _var0);
 }
}
static void _V0basepath_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basepath_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basepath_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_k41, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.84 4 0) (bruijn ##x.88 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
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
  // (if (bruijn ##p.86 0 0) (+ (close _V0basepath_k40) (bruijn i 3 1) 1) (- (close _V0basepath_k41) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "+"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k40, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k41, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
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
  // (eq? (close _V0basepath_k39) #\/ (bruijn ##x.89 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k39, env)}),
      VEncodeChar('/'),
      _var0);
 }
}
static void _V0basepath_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basepath_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basepath_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.85 0 0) ((bruijn ##k.84 1 0) (##string ##string.526)) (string-ref (close _V0basepath_k38) (bruijn file 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodePointer(&_V10string_D526.sym, VPOINTER_OTHER));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k38, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
 }
}
static void _V0basepath_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0basepath_lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0basepath_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (<= (close _V0basepath_k37) (bruijn i 0 1) 0)
    V_CALL(VLookupGlobalVarFast2(runtime, "<="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k37, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0basepath_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basepath_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basepath_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_k43, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.83 3 0) (bruijn ##x.90 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0basepath_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0basepath_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0basepath_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0basepath_k43) (bruijn ##x.91 0 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k43, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0basepath_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0basepath_lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0basepath_lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0basepath_lambda46, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0basepath_lambda47)) (string-length (close _V0basepath_k42) (bruijn file 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_lambda47, env)});
    V_CALL(VLookupGlobalVarFast2(runtime, "string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_k42, env)}),
      upenv->vars[1]);
    }
 }
}
static void global_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.82 0 0) basepath (close _V0basepath_lambda46))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0basepath,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0basepath_lambda46, env)})
    );
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
  // ((bruijn loop 6 0) (bruijn ##k.94 5 0) (bruijn ##x.98 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
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
  // (- (close _V0decomma_k48) (bruijn i 4 1) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k48, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0decomma_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decomma_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decomma_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_k49, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.94 4 0) (bruijn ##x.99 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
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
  // (if (bruijn ##p.96 0 0) (string-set! (close _V0decomma_k47) (bruijn str 5 1) (bruijn i 3 1) #\space) (- (close _V0decomma_k49) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "string-set!"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k47, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->up->up->vars[1],
      VEncodeChar(' '));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k49, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V0decomma_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decomma_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decomma_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close _V0decomma_k46) #\, (bruijn ##x.100 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k46, env)}),
      VEncodeChar(','),
      _var0);
 }
}
static void _V0decomma_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decomma_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decomma_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.95 0 0) ((bruijn ##k.94 1 0) (bruijn str 3 1)) (string-ref (close _V0decomma_k45) (bruijn str 3 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[1]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k45, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
 }
}
static void _V0decomma_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decomma_lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0decomma_lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_lambda50, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (< (close _V0decomma_k44) (bruijn i 0 1) 0)
    V_CALL(VLookupGlobalVarFast2(runtime, "<"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k44, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0decomma_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decomma_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decomma_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_k51, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.93 3 0) (bruijn ##x.101 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0decomma_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decomma_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decomma_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (- (close _V0decomma_k51) (bruijn ##x.102 0 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "-"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k51, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0decomma_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decomma_lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0decomma_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decomma_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0decomma_lambda50)) (string-length (close _V0decomma_k50) (bruijn str 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_lambda50, env)});
    V_CALL(VLookupGlobalVarFast2(runtime, "string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_k50, env)}),
      upenv->vars[1]);
    }
 }
}
static void global_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.92 0 0) decomma (close _V0decomma_lambda49))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0decomma,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decomma_lambda49, env)})
    );
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
  // ((bruijn ##k.104 4 0) (bruijn ret 1 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]);
 }
}
static void _V0realpath_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realpath_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realpath_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (close-port (close _V0realpath_k55) (bruijn proc 1 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "close-port"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k55, env)}),
      upenv->vars[0]);
 }
}
static void _V0realpath_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realpath_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realpath_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (read-line (close _V0realpath_k54) (bruijn proc 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "read-line"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k54, env)}),
      _var0);
 }
}
static void _V0realpath_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realpath_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realpath_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-process (close _V0realpath_k53) (bruijn ##x.106 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "open-input-process"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k53, env)}),
      _var0);
 }
}
static void _V0realpath_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0realpath_lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0realpath_lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realpath_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (sprintf (close _V0realpath_k52) (##string ##string.527) (bruijn file 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_k52, env)}),
      VEncodePointer(&_V10string_D527.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void global_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.103 0 0) realpath (close _V0realpath_lambda52))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0realpath,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realpath_lambda52, env)})
    );
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
  // ((bruijn ##k.108 4 0) (bruijn ret 1 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]);
 }
}
static void _V0realbasepath_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realbasepath_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realbasepath_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (close-port (close _V0realbasepath_k59) (bruijn proc 1 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "close-port"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k59, env)}),
      upenv->vars[0]);
 }
}
static void _V0realbasepath_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realbasepath_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realbasepath_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (read-line (close _V0realbasepath_k58) (bruijn proc 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "read-line"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k58, env)}),
      _var0);
 }
}
static void _V0realbasepath_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0realbasepath_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0realbasepath_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-process (close _V0realbasepath_k57) (bruijn ##x.110 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "open-input-process"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k57, env)}),
      _var0);
 }
}
static void _V0realbasepath_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0realbasepath_lambda54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0realbasepath_lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0realbasepath_lambda54, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (sprintf (close _V0realbasepath_k56) (##string ##string.528) (bruijn file 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_k56, env)}),
      VEncodePointer(&_V10string_D528.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void global_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.107 0 0) realbasepath (close _V0realbasepath_lambda54))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0realbasepath,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0realbasepath_lambda54, env)})
    );
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
  // (displayln (bruijn ##k.112 21 0) (##string ##string.529))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VGetArg(upenv, 21-1, 0),
      VEncodePointer(&_V10string_D529.sym, VPOINTER_OTHER));
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
  // (displayln (close _V0display__help_k80) (##string ##string.530))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k80, env)}),
      VEncodePointer(&_V10string_D530.sym, VPOINTER_OTHER));
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
  // (displayln (close _V0display__help_k79) (##string ##string.531))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k79, env)}),
      VEncodePointer(&_V10string_D531.sym, VPOINTER_OTHER));
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
  // (displayln (close _V0display__help_k78) (##string ##string.532))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k78, env)}),
      VEncodePointer(&_V10string_D532.sym, VPOINTER_OTHER));
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
  // (displayln (close _V0display__help_k77) (##string ##string.533))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k77, env)}),
      VEncodePointer(&_V10string_D533.sym, VPOINTER_OTHER));
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
  // (displayln (close _V0display__help_k76) (##string ##string.534))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k76, env)}),
      VEncodePointer(&_V10string_D534.sym, VPOINTER_OTHER));
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
  // (displayln (close _V0display__help_k75) (##string ##string.535))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k75, env)}),
      VEncodePointer(&_V10string_D535.sym, VPOINTER_OTHER));
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
  // (displayln (close _V0display__help_k74) (##string ##string.536))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k74, env)}),
      VEncodePointer(&_V10string_D536.sym, VPOINTER_OTHER));
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
  // (displayln (close _V0display__help_k73) (##string ##string.537))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k73, env)}),
      VEncodePointer(&_V10string_D537.sym, VPOINTER_OTHER));
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
  // (displayln (close _V0display__help_k72) (##string ##string.535))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k72, env)}),
      VEncodePointer(&_V10string_D535.sym, VPOINTER_OTHER));
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
  // (displayln (close _V0display__help_k71) (##string ##string.538))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k71, env)}),
      VEncodePointer(&_V10string_D538.sym, VPOINTER_OTHER));
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
  // (displayln (close _V0display__help_k70) (##string ##string.539))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k70, env)}),
      VEncodePointer(&_V10string_D539.sym, VPOINTER_OTHER));
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
  // (displayln (close _V0display__help_k69) (##string ##string.540))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k69, env)}),
      VEncodePointer(&_V10string_D540.sym, VPOINTER_OTHER));
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
  // (displayln (close _V0display__help_k68) (##string ##string.541))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k68, env)}),
      VEncodePointer(&_V10string_D541.sym, VPOINTER_OTHER));
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
  // (displayln (close _V0display__help_k67) (##string ##string.542))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k67, env)}),
      VEncodePointer(&_V10string_D542.sym, VPOINTER_OTHER));
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
  // (displayln (close _V0display__help_k66) (##string ##string.543))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k66, env)}),
      VEncodePointer(&_V10string_D543.sym, VPOINTER_OTHER));
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
  // (displayln (close _V0display__help_k65) (##string ##string.544))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k65, env)}),
      VEncodePointer(&_V10string_D544.sym, VPOINTER_OTHER));
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
  // (displayln (close _V0display__help_k64) (##string ##string.545))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k64, env)}),
      VEncodePointer(&_V10string_D545.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k63) (##string ##string.546))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k63, env)}),
      VEncodePointer(&_V10string_D546.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k62) (##string ##string.547))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k62, env)}),
      VEncodePointer(&_V10string_D547.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k61) (##string ##string.548))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k61, env)}),
      VEncodePointer(&_V10string_D548.sym, VPOINTER_OTHER));
 }
}
static void _V0display__help_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__help_lambda56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__help_lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__help_lambda56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (displayln (close _V0display__help_k60) (##string ##string.549))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_k60, env)}),
      VEncodePointer(&_V10string_D549.sym, VPOINTER_OTHER));
 }
}
static void global_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.111 0 0) display-help (close _V0display__help_lambda56))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0display__help,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__help_lambda56, env)})
    );
 }
}
static void _V0display__version_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__version_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__version_k83, runtime, upenv, 1, argc, _var0) {
  // (displayln (bruijn ##k.135 3 0) (##string ##string.550))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D550.sym, VPOINTER_OTHER));
 }
}
static void _V0display__version_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__version_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__version_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (printf (close _V0display__version_k83) (##string ##string.551) (bruijn ##x.137 1 0) (bruijn ##x.138 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "printf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k83, env)}),
      VEncodePointer(&_V10string_D551.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0);
 }
}
static void _V0display__version_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__version_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__version_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cadr (close _V0display__version_k82) version)
    V_CALL(VLookupGlobalVarFast2(runtime, "cadr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k82, env)}),
      VLookupGlobalVarFast2(runtime, "version"));
 }
}
static void _V0display__version_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display__version_lambda58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display__version_lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display__version_lambda58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V0display__version_k81) version)
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_k81, env)}),
      VLookupGlobalVarFast2(runtime, "version"));
 }
}
static void global_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.134 0 0) display-version (close _V0display__version_lambda58))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0display__version,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display__version_lambda58, env)})
    );
 }
}
static void global_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.145 5 0) obj-files (bruijn ##x.147 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 5-1, 0),
      _V0obj__files,
      _var0
    );
 }
}
static void global_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close global_k93) (bruijn ##x.148 0 0) obj-files)
    V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k93, env)}),
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
 }
}
static void global_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.145 5 0) scm-files (bruijn ##x.149 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 5-1, 0),
      _V0scm__files,
      _var0
    );
 }
}
static void global_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close global_k95) (bruijn ##x.150 0 0) scm-files)
    V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k95, env)}),
      _var0,
      VLookupGlobalVarFast2(runtime, "scm-files"));
 }
}
static void global_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.146 0 0) (cdar (close global_k92) (bruijn args 8 1)) (cdar (close global_k94) (bruijn args 8 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k92, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k94, env)}),
      VGetArg(upenv, 8-1, 1));
}
 }
}
static void global_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close global_k91) (bruijn ##x.151 0 0) (##string ##string.552))
    V_CALL(VLookupGlobalVarFast2(runtime, "equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k91, env)}),
      _var0,
      VEncodePointer(&_V10string_D552.sym, VPOINTER_OTHER));
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (extension (close global_k90) (bruijn ##x.152 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "extension"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k90, env)}),
      _var0);
 }
}
static void global_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.145 7 0) out-file (bruijn ##x.159 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 7-1, 0),
      _V0out__file,
      _var0
    );
 }
}
static void global_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.145 11 0) paths (bruijn ##x.161 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 11-1, 0),
      _V0paths,
      _var0
    );
 }
}
static void global_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (append (close global_k107) paths (bruijn ##x.162 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k107, env)}),
      VLookupGlobalVarFast2(runtime, "paths"),
      _var0);
 }
}
static void global_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (list (close global_k106) (bruijn ##x.163 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "list"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k106, env)}),
      _var0);
 }
}
static void global_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (realpath (close global_k105) (bruijn ##x.164 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "realpath"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k105, env)}),
      _var0);
 }
}
static void global_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k113, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.171 0 0) (<= (bruijn ##k.170 1 0) 0 optimization 3) ((bruijn ##k.170 1 0) #f))
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
static void global_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if optimization (integer? (close global_k113) optimization) ((bruijn ##k.170 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "optimization"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "integer?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k113, env)}),
      VLookupGlobalVarFast2(runtime, "optimization"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k116, runtime, upenv, 1, argc, _var0) {
  // (compiler-error (bruijn ##k.145 14 0) (##string ##string.553) (bruijn ##x.168 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      VGetArg(upenv, 14-1, 0),
      VEncodePointer(&_V10string_D553.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void global_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.167 0 0) (cdar (close global_k116) (bruijn args 18 1)) ((bruijn ##k.145 13 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k116, env)}),
      VGetArg(upenv, 18-1, 1));
} else {
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void global_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k115) (bruijn ##x.169 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k115, env)}),
      _var0);
 }
}
static void global_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k112) (close global_k114))
    V_CALL_FUNC(global_k112, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k114, env)}));
 }
}
static void global_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k111) optimization (bruijn ##x.172 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k111, env)}),
      _V0optimization,
      _var0
    );
 }
}
static void global_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string->number (close global_k110) (bruijn ##x.173 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string->number"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k110, env)}),
      _var0);
 }
}
static void global_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k122, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.180 0 0) (<= (bruijn ##k.179 1 0) 0 expand? 2) ((bruijn ##k.179 1 0) #f))
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
static void global_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if expand? (integer? (close global_k122) expand?) ((bruijn ##k.179 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "expand?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "integer?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k122, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k125, runtime, upenv, 1, argc, _var0) {
  // (compiler-error (bruijn ##k.145 15 0) (##string ##string.554) (bruijn ##x.177 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      VGetArg(upenv, 15-1, 0),
      VEncodePointer(&_V10string_D554.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void global_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.176 0 0) (cdar (close global_k125) (bruijn args 19 1)) ((bruijn ##k.145 14 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k125, env)}),
      VGetArg(upenv, 19-1, 1));
} else {
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void global_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k124) (bruijn ##x.178 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k124, env)}),
      _var0);
 }
}
static void global_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k121) (close global_k123))
    V_CALL_FUNC(global_k121, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k123, env)}));
 }
}
static void global_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close global_k120) expand? (bruijn ##x.181 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k120, env)}),
      _V0expand_Q,
      _var0
    );
 }
}
static void global_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string->number (close global_k119) (bruijn ##x.182 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string->number"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k119, env)}),
      _var0);
 }
}
static void global_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k131, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.199 1 0) (compiler-error (bruijn ##k.200 0 0) (##string ##string.555)) ((bruijn ##k.200 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D555.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k138, runtime, upenv, 1, argc, _var0) {
  // (eq? (bruijn ##k.194 2 0) (bruijn ##x.195 0 0) #\,)
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodeChar(','));
 }
}
static void global_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-ref (close global_k138) (bruijn ##x.196 0 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k138, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void global_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.193 1 0) (cdar (close global_k137) (bruijn args 24 1)) ((bruijn ##k.194 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k137, env)}),
      VGetArg(upenv, 24-1, 1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k141, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.190 1 0) (compiler-error (bruijn ##k.191 0 0) (##string ##string.556)) ((bruijn ##k.191 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D556.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.145 25 0) c-options (bruijn ##x.186 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 25-1, 0),
      _V0c__options,
      _var0
    );
 }
}
static void global_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close global_k146) (bruijn ##x.187 0 0) c-options)
    V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k146, env)}),
      _var0,
      VLookupGlobalVarFast2(runtime, "c-options"));
 }
}
static void global_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (decomma (close global_k145) (bruijn ##x.188 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "decomma"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k145, env)}),
      _var0);
 }
}
static void global_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (substring (close global_k144) (bruijn ##x.189 0 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "substring"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k144, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void global_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cdar (close global_k143) (bruijn args 26 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k143, env)}),
      VGetArg(upenv, 26-1, 1));
 }
}
static void global_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k141) (close global_k142))
    V_CALL_FUNC(global_k141, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k142, env)}));
 }
}
static void global_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k140) (bruijn ##x.192 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k140, env)}),
      _var0);
 }
}
static void global_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k136) (close global_k139))
    V_CALL_FUNC(global_k136, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k139, env)}));
 }
}
static void global_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (>= (close global_k135) (bruijn ##x.197 0 0) 2)
    V_CALL(VLookupGlobalVarFast2(runtime, ">="), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k135, env)}),
      _var0,
      VEncodeInt(2l));
 }
}
static void global_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-length (close global_k134) (bruijn ##x.198 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k134, env)}),
      _var0);
 }
}
static void global_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cdar (close global_k133) (bruijn args 20 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k133, env)}),
      VGetArg(upenv, 20-1, 1));
 }
}
static void global_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k131) (close global_k132))
    V_CALL_FUNC(global_k131, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k132, env)}));
 }
}
static void global_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k130) (bruijn ##x.201 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k130, env)}),
      _var0);
 }
}
static void global_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close global_k129) (bruijn ##x.202 0 0) #\c)
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k129, env)}),
      _var0,
      VEncodeChar('c'));
 }
}
static void global_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-ref (close global_k128) (bruijn ##x.203 0 0) 0)
    V_CALL(VLookupGlobalVarFast2(runtime, "string-ref"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k128, env)}),
      _var0,
      VEncodeInt(0l));
 }
}
static void global_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k148, runtime, upenv, 1, argc, _var0) {
  // (exit (bruijn ##k.145 12 0) 0)
    V_CALL(VLookupGlobalVarFast2(runtime, "exit"), runtime,
      VGetArg(upenv, 12-1, 0),
      VEncodeInt(0l));
 }
}
static void global_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k150, runtime, upenv, 1, argc, _var0) {
  // (exit (bruijn ##k.145 13 0) 0)
    V_CALL(VLookupGlobalVarFast2(runtime, "exit"), runtime,
      VGetArg(upenv, 13-1, 0),
      VEncodeInt(0l));
 }
}
static void global_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.145 16 0) api (bruijn ##x.210 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 16-1, 0),
      _V0api,
      _var0
    );
 }
}
static void global_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string->number (close global_k154) (bruijn ##x.211 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string->number"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k154, env)}),
      _var0);
 }
}
static void global_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.145 16 0) platform (bruijn ##x.213 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 16-1, 0),
      _V0platform,
      _var0
    );
 }
}
static void global_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.145 17 0) cc (bruijn ##x.215 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 17-1, 0),
      _V0cc,
      _var0
    );
 }
}
static void global_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.145 21 0) maketargets (bruijn ##x.219 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 21-1, 0),
      _V0maketargets,
      _var0
    );
 }
}
static void global_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cons (close global_k163) (bruijn ##x.220 0 0) maketargets)
    V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k163, env)}),
      _var0,
      VLookupGlobalVarFast2(runtime, "maketargets"));
 }
}
static void global_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k169, runtime, upenv, 1, argc, _var0) {
  // (compiler-error (bruijn ##k.145 25 0) (##string ##string.557) (bruijn ##x.225 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      VGetArg(upenv, 25-1, 0),
      VEncodePointer(&_V10string_D557.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void global_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cdar (close global_k169) (bruijn args 29 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k169, env)}),
      VGetArg(upenv, 29-1, 1));
 }
}
static void global_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (newline (close global_k168))
    V_CALL(VLookupGlobalVarFast2(runtime, "newline"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k168, env)}));
 }
}
static void global_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (write (close global_k167) (bruijn ##x.226 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "write"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k167, env)}),
      _var0);
 }
}
static void global_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.222 0 0) (set! (bruijn ##k.145 21 0) bytecode? #t) (caar (close global_k166) (bruijn args 26 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 21-1, 0),
      _V0bytecode_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "caar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k166, env)}),
      VGetArg(upenv, 26-1, 1));
}
 }
}
static void global_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.221 0 0) (set! (bruijn ##k.145 20 0) benchmark? #t) (eqv? (close global_k165) (bruijn ##x.1 22 0) 'bytecode))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 20-1, 0),
      _V0benchmark_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k165, env)}),
      VGetArg(upenv, 22-1, 0),
      _V0bytecode);
}
 }
}
static void global_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.218 0 0) (cdar (close global_k162) (bruijn args 24 1)) (eqv? (close global_k164) (bruijn ##x.1 21 0) 'benchmark))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k162, env)}),
      VGetArg(upenv, 24-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k164, env)}),
      VGetArg(upenv, 21-1, 0),
      _V0benchmark);
}
 }
}
static void global_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.217 0 0) (set! (bruijn ##k.145 18 0) makefile? #t) (eqv? (close global_k161) (bruijn ##x.1 20 0) 'maketarget))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 18-1, 0),
      _V0makefile_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k161, env)}),
      VGetArg(upenv, 20-1, 0),
      _V0maketarget);
}
 }
}
static void global_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.216 0 0) (set! (bruijn ##k.145 17 0) keep? #t) (eqv? (close global_k160) (bruijn ##x.1 19 0) 'makefile))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 17-1, 0),
      _V0keep_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k160, env)}),
      VGetArg(upenv, 19-1, 0),
      _V0makefile);
}
 }
}
static void global_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.214 0 0) (cdar (close global_k158) (bruijn args 21 1)) (eqv? (close global_k159) (bruijn ##x.1 18 0) 'keep-temps))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k158, env)}),
      VGetArg(upenv, 21-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k159, env)}),
      VGetArg(upenv, 18-1, 0),
      _V0keep__temps);
}
 }
}
static void global_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.212 0 0) (cdar (close global_k156) (bruijn args 20 1)) (eqv? (close global_k157) (bruijn ##x.1 17 0) 'cc))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k156, env)}),
      VGetArg(upenv, 20-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k157, env)}),
      VGetArg(upenv, 17-1, 0),
      _V0cc);
}
 }
}
static void global_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.209 0 0) (cdar (close global_k153) (bruijn args 19 1)) (eqv? (close global_k155) (bruijn ##x.1 16 0) 'platform))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k153, env)}),
      VGetArg(upenv, 19-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k155, env)}),
      VGetArg(upenv, 16-1, 0),
      _V0platform);
}
 }
}
static void global_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.208 0 0) (set! (bruijn ##k.145 13 0) shared? #t) (eqv? (close global_k152) (bruijn ##x.1 15 0) 'api))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 13-1, 0),
      _V0shared_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k152, env)}),
      VGetArg(upenv, 15-1, 0),
      _V0api);
}
 }
}
static void global_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.206 0 0) (display-version (close global_k150)) (eqv? (close global_k151) (bruijn ##x.1 14 0) 'shared))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "display-version"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k150, env)}));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k151, env)}),
      VGetArg(upenv, 14-1, 0),
      _V0shared);
}
 }
}
static void global_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.204 0 0) (display-help (close global_k148)) (eqv? (close global_k149) (bruijn ##x.1 13 0) 'version))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "display-help"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k148, env)}));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k149, env)}),
      VGetArg(upenv, 13-1, 0),
      _V0version);
}
 }
}
static void global_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.183 0 0) (cdar (close global_k127) (bruijn args 15 1)) (eqv? (close global_k147) (bruijn ##x.1 12 0) 'help))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k127, env)}),
      VGetArg(upenv, 15-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k147, env)}),
      VGetArg(upenv, 12-1, 0),
      _V0help);
}
 }
}
static void global_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.174 0 0) (cdar (close global_k118) (bruijn args 14 1)) (eqv? (close global_k126) (bruijn ##x.1 11 0) '#\W))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k118, env)}),
      VGetArg(upenv, 14-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k126, env)}),
      VGetArg(upenv, 11-1, 0),
      VEncodeChar('W'));
}
 }
}
static void global_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.165 0 0) (cdar (close global_k109) (bruijn args 13 1)) (eqv? (close global_k117) (bruijn ##x.1 10 0) '#\E))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k109, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k117, env)}),
      VGetArg(upenv, 10-1, 0),
      VEncodeChar('E'));
}
 }
}
static void global_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.160 0 0) (cdar (close global_k104) (bruijn args 12 1)) (eqv? (close global_k108) (bruijn ##x.1 9 0) '#\O))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k104, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k108, env)}),
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('O'));
}
 }
}
static void global_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.158 0 0) (cdar (close global_k102) (bruijn args 11 1)) (eqv? (close global_k103) (bruijn ##x.1 8 0) '#\I))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k102, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k103, env)}),
      VGetArg(upenv, 8-1, 0),
      VEncodeChar('I'));
}
 }
}
static void global_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.157 0 0) (set! (bruijn ##k.145 5 0) object? #t) (eqv? (close global_k101) (bruijn ##x.1 7 0) '#\o))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VGetArg(upenv, 5-1, 0),
      _V0object_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k101, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('o'));
}
 }
}
static void global_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.156 0 0) (set! (bruijn ##k.145 4 0) transpile? #t) (eqv? (close global_k100) (bruijn ##x.1 6 0) '#\c))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->up->up->vars[0],
      _V0transpile_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k100, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('c'));
}
 }
}
static void global_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.155 0 0) (set! (bruijn ##k.145 3 0) header? #t) (eqv? (close global_k99) (bruijn ##x.1 5 0) '#\t))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->up->vars[0],
      _V0header_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k99, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('t'));
}
 }
}
static void global_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.154 0 0) (set! (bruijn ##k.145 2 0) debug? #t) (eqv? (close global_k98) (bruijn ##x.1 4 0) '#\h))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->vars[0],
      _V0debug_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k98, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('h'));
}
 }
}
static void global_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.153 0 0) (set! (bruijn ##k.145 1 0) verbose? #t) (eqv? (close global_k97) (bruijn ##x.1 3 0) '#\g))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->vars[0],
      _V0verbose_Q,
      VEncodeBool(true)
    );
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k97, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('g'));
}
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
  // (if (bruijn ##p.144 1 0) (cdar (close global_k89) (bruijn args 5 1)) (eqv? (close global_k96) (bruijn ##x.1 2 0) '#\v))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k89, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k96, env)}),
      upenv->up->vars[0],
      VEncodeChar('v'));
}
 }
}
static void global_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k171, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 0) (bruijn ##k.140 6 0) (bruijn ##x.143 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void global_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (cdr (close global_k171) (bruijn args 5 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k171, env)}),
      VGetArg(upenv, 5-1, 1));
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
  // ((close global_k88) (close global_k170))
    V_CALL_FUNC(global_k88, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k170, env)}));
 }
}
static void global_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eqv? (close global_k87) (bruijn ##x.1 0 0) '#t)
    V_CALL(VLookupGlobalVarFast2(runtime, "eqv?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k87, env)}),
      _var0,
      VEncodeBool(true));
 }
}
static void global_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.141 0 0) (caar (close global_k86) (bruijn args 2 1)) ((bruijn ##k.140 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "caar"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k86, env)}),
      upenv->up->vars[1]);
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k85) (bruijn ##x.227 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k85, env)}),
      _var0);
 }
}
static void global_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda60, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (null? (close global_k84) (bruijn args 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k84, env)}),
      _var1);
 }
}
static void global_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k173, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##next.139 3 0) (bruijn ##x.228 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void global_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (getopt (close global_k173) (##string ##string.558) (bruijn ##x.229 0 0) (##inline ##vcore.qcons (##inline ##vcore.qcons 'shared (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'shared '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'help (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'help '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'api (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'api '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'platform (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'platform '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'cc (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'cc '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'version (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'version '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'keep-temps (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'keep-temps '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'makefile (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'makefile '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'maketarget (##inline ##vcore.qcons '#t (##inline ##vcore.qcons 'maketarget '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'bytecode (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'bytecode '()))) (##inline ##vcore.qcons (##inline ##vcore.qcons 'benchmark (##inline ##vcore.qcons '#f (##inline ##vcore.qcons 'benchmark '()))) '()))))))))))))
    V_CALL(VLookupGlobalVarFast2(runtime, "getopt"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k173, env)}),
      VEncodePointer(&_V10string_D558.sym, VPOINTER_OTHER),
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
        _V0bytecode,
        VInlineCons(
        VEncodeBool(false),
        VInlineCons(
        _V0bytecode,
        VNULL))),
        VInlineCons(
        VInlineCons(
        _V0benchmark,
        VInlineCons(
        VEncodeBool(false),
        VInlineCons(
        _V0benchmark,
        VNULL))),
        VNULL))))))))))));
 }
}
static void global_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close global_lambda60)) (command-line (close global_k172)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda60, env)});
    V_CALL(VLookupGlobalVarFast2(runtime, "command-line"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k172, env)}));
    }
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
  // (if (bruijn ##p.279 0 0) ((bruijn ##k.278 1 0) (##string ##string.560)) (compiler-error (bruijn ##k.278 1 0) (##string ##string.561) platform))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodePointer(&_V10string_D560.sym, VPOINTER_OTHER));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D561.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "platform"));
}
 }
}
static void global_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.277 1 0) ((bruijn ##k.278 0 0) (##string ##string.559)) (equal? (close global_k177) platform (##string ##string.562)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D559.sym, VPOINTER_OTHER));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k177, env)}),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10string_D562.sym, VPOINTER_OTHER));
}
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
  // (set! (bruijn ##next.274 3 0) cc (bruijn ##x.276 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->up->vars[0],
      _V0cc,
      _var0
    );
 }
}
static void global_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k176) (close global_k178))
    V_CALL_FUNC(global_k176, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k178, env)}));
 }
}
static void global_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.275 0 0) (equal? (close global_k175) platform (##string ##string.524)) ((bruijn ##next.274 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k175, env)}),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10string_D524.sym, VPOINTER_OTHER));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k174) cc)
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k174, env)}),
      VLookupGlobalVarFast2(runtime, "cc"));
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
  // (if (bruijn ##p.287 1 0) ((bruijn ##k.288 0 0) 1) ((bruijn ##k.288 0 0) 0))
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
static void _V0count__true_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0count__true_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0count__true_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0count__true_k184, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.282 5 0) (bruijn ##x.284 3 0) (bruijn ##x.285 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0count__true_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0count__true_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0count__true_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0count__true_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (+ (close _V0count__true_k184) (bruijn ct 4 2) (bruijn ##x.286 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "+"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0count__true_k184, env)}),
      upenv->up->up->up->vars[2],
      _var0);
 }
}
static void _V0count__true_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0count__true_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0count__true_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0count__true_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0count__true_k182) (close _V0count__true_k183))
    V_CALL_FUNC(_V0count__true_k182, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0count__true_k183, env)}));
 }
}
static void _V0count__true_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0count__true_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0count__true_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0count__true_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V0count__true_k181) (bruijn args 2 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0count__true_k181, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0count__true_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0count__true_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0count__true_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0count__true_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.283 0 0) ((bruijn ##k.282 1 0) (bruijn ct 1 2)) (cdr (close _V0count__true_k180) (bruijn args 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0count__true_k180, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0count__true_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0count__true_lambda64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0count__true_lambda64, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0count__true_lambda64, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (null? (close _V0count__true_k179) (bruijn args 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0count__true_k179, env)}),
      _var1);
 }
}
static void _V0count__true_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0count__true_lambda63" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0count__true_lambda63, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0count__true_lambda63, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // (letrec 1 ((close _V0count__true_lambda64)) ((bruijn loop 0 0) (bruijn ##k.281 1 0) (bruijn args 1 1) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0count__true_lambda64, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeInt(0l));
    }
 }
}
static void global_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.280 0 0) count-true (close _V0count__true_lambda63))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0count__true,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0count__true_lambda63, env)})
    );
 }
}
static void global_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k186, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.290 0 0) (compiler-error (bruijn ##next.289 2 0) (##string ##string.563)) ((bruijn ##next.289 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D563.sym, VPOINTER_OTHER));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (> (close global_k186) (bruijn ##x.291 0 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, ">"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k186, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void global_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (count-true (close global_k185) makefile? header? bytecode? transpile? object? expand?)
    V_CALL(VLookupGlobalVarFast2(runtime, "count-true"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k185, env)}),
      VLookupGlobalVarFast2(runtime, "makefile?"),
      VLookupGlobalVarFast2(runtime, "header?"),
      VLookupGlobalVarFast2(runtime, "bytecode?"),
      VLookupGlobalVarFast2(runtime, "transpile?"),
      VLookupGlobalVarFast2(runtime, "object?"),
      VLookupGlobalVarFast2(runtime, "expand?"));
 }
}
static void global_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k188, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.294 1 0) (null? (bruijn ##k.295 0 0) obj-files) ((bruijn ##k.295 0 0) #f))
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
static void global_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k189, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.293 0 0) (compiler-error (bruijn ##next.292 2 0) (##string ##string.564)) ((bruijn ##next.292 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D564.sym, VPOINTER_OTHER));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k188) (close global_k189))
    V_CALL_FUNC(global_k188, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k189, env)}));
 }
}
static void global_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close global_k187) scm-files)
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k187, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
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
  // (if makefile? ((bruijn ##k.301 0 0) makefile?) (if header? ((bruijn ##k.301 0 0) header?) (if bytecode? ((bruijn ##k.301 0 0) bytecode?) (if transpile? ((bruijn ##k.301 0 0) transpile?) (if object? ((bruijn ##k.301 0 0) object?) ((bruijn ##k.301 0 0) expand?))))))
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
static void global_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k193, runtime, upenv, 1, argc, _var0) {
  // (not (bruijn ##k.299 1 0) (bruijn ##x.300 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      upenv->vars[0],
      _var0);
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.298 1 0) (null? (close global_k193) obj-files) ((bruijn ##k.299 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k193, env)}),
      VLookupGlobalVarFast2(runtime, "obj-files"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
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
  // (if (bruijn ##p.297 0 0) (compiler-error (bruijn ##next.296 2 0) (##string ##string.565)) ((bruijn ##next.296 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D565.sym, VPOINTER_OTHER));
} else {
    V_CALL(upenv->up->vars[0], runtime,
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
  // ((close global_k192) (close global_k194))
    V_CALL_FUNC(global_k192, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k194, env)}));
 }
}
static void global_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k190) (close global_k191))
    V_CALL_FUNC(global_k190, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k191, env)}));
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
  // (if makefile? ((bruijn ##k.308 0 0) makefile?) (if header? ((bruijn ##k.308 0 0) header?) (if bytecode? ((bruijn ##k.308 0 0) bytecode?) (if transpile? ((bruijn ##k.308 0 0) transpile?) (if object? ((bruijn ##k.308 0 0) object?) ((bruijn ##k.308 0 0) expand?))))))
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
static void global_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k199, runtime, upenv, 1, argc, _var0) {
  // (not (bruijn ##k.305 2 0) (bruijn ##x.306 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      upenv->up->vars[0],
      _var0);
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close global_k199) (bruijn ##x.307 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k199, env)}),
      _var0);
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.304 1 0) (if out-file (cdr (close global_k198) scm-files) ((bruijn ##k.305 0 0) #f)) ((bruijn ##k.305 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k198, env)}),
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
static void global_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k200, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.303 0 0) (compiler-error (bruijn ##next.302 2 0) (##string ##string.566)) ((bruijn ##next.302 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D566.sym, VPOINTER_OTHER));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
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
  // ((close global_k197) (close global_k200))
    V_CALL_FUNC(global_k197, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k200, env)}));
 }
}
static void global_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k195) (close global_k196))
    V_CALL_FUNC(global_k195, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k196, env)}));
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
  // (if makefile? ((bruijn ##k.315 0 0) makefile?) (if header? ((bruijn ##k.315 0 0) header?) (if bytecode? ((bruijn ##k.315 0 0) bytecode?) (if transpile? ((bruijn ##k.315 0 0) transpile?) (if object? ((bruijn ##k.315 0 0) object?) ((bruijn ##k.315 0 0) expand?))))))
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
static void global_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k205, runtime, upenv, 1, argc, _var0) {
  // (not (bruijn ##k.312 2 0) (bruijn ##x.313 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      upenv->up->vars[0],
      _var0);
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close global_k205) (bruijn ##x.314 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k205, env)}),
      _var0);
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.311 1 0) (cdr (close global_k204) scm-files) ((bruijn ##k.312 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cdr"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k204, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
    V_CALL(_var0, runtime,
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
  // (if (bruijn ##p.310 0 0) (compiler-error (bruijn ##next.309 2 0) (##string ##string.567)) ((bruijn ##next.309 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D567.sym, VPOINTER_OTHER));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
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
  // ((close global_k203) (close global_k206))
    V_CALL_FUNC(global_k203, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k206, env)}));
 }
}
static void global_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k201) (close global_k202))
    V_CALL_FUNC(global_k201, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k202, env)}));
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
  // (change-extension (bruijn ##k.319 2 0) (bruijn ##x.320 0 0) (##string ##string.552))
    V_CALL(VLookupGlobalVarFast2(runtime, "change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D552.sym, VPOINTER_OTHER));
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (basename (close global_k210) (bruijn ##x.321 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k210, env)}),
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
  // (change-extension (bruijn ##k.319 2 0) (bruijn ##x.322 0 0) (##string ##string.568))
    V_CALL(VLookupGlobalVarFast2(runtime, "change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D568.sym, VPOINTER_OTHER));
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
  // (basename (close global_k212) (bruijn ##x.323 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k212, env)}),
      _var0);
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
  // (change-extension (bruijn ##k.319 2 0) (bruijn ##x.324 0 0) (##string ##string.569))
    V_CALL(VLookupGlobalVarFast2(runtime, "change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D569.sym, VPOINTER_OTHER));
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
  // (basename (close global_k214) (bruijn ##x.325 0 0))
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
  // (change-extension (bruijn ##k.319 2 0) (bruijn ##x.326 0 0) (##string ##string.570))
    V_CALL(VLookupGlobalVarFast2(runtime, "change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D570.sym, VPOINTER_OTHER));
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
  // (basename (close global_k216) (bruijn ##x.327 0 0))
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
  // (change-extension (bruijn ##k.319 2 0) (bruijn ##x.328 0 0) (##string ##string.571))
    V_CALL(VLookupGlobalVarFast2(runtime, "change-extension"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D571.sym, VPOINTER_OTHER));
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
  // (basename (close global_k218) (bruijn ##x.329 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k218, env)}),
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
  // (if object? (car (close global_k209) scm-files) (if transpile? (car (close global_k211) scm-files) (if expand? (car (close global_k213) scm-files) (if header? (car (close global_k215) scm-files) (if bytecode? (car (close global_k217) scm-files) (if makefile? ((bruijn ##k.319 0 0) out-file) ((bruijn ##k.319 0 0) #f)))))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k209, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k211, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "expand?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k213, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k215, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k217, env)}),
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
  // (set! (bruijn ##next.316 2 0) out-file (bruijn ##x.318 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->vars[0],
      _V0out__file,
      _var0
    );
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
  // (if (bruijn ##p.317 0 0) ((close global_k208) (close global_k219)) ((bruijn ##next.316 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(global_k208, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k219, env)}));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k207) out-file)
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k207, env)}),
      VLookupGlobalVarFast2(runtime, "out-file"));
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
  // (if (bruijn ##p.345 1 0) (compiler-error (bruijn ##k.346 0 0) (##string ##string.572)) ((bruijn ##k.346 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D572.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
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
  // (if (bruijn ##p.343 1 0) ((bruijn ##k.344 0 0) (bruijn ##p.343 1 0)) (car (bruijn ##k.344 0 0) (bruijn headers 5 0)))
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
static void _V0gen__header_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k233, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.340 1 0) (compiler-error (bruijn ##k.341 0 0) (##string ##string.573)) ((bruijn ##k.341 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D573.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
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
  // (write (bruijn ##k.337 1 0) (bruijn ##x.338 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "write"), runtime,
      upenv->vars[0],
      _var0);
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
  // (if (bruijn ##p.336 1 0) (car (close _V0gen__header_k238) (bruijn headers 11 0)) ((bruijn ##k.337 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k238, env)}),
      VGetArg(upenv, 11-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
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
  // (newline (bruijn ##k.334 3 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "newline"), runtime,
      upenv->up->up->vars[0]);
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
  // ((close _V0gen__header_k237) (close _V0gen__header_k239))
    V_CALL_FUNC(_V0gen__header_k237, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k239, env)}));
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V0gen__header_k236) (bruijn ##x.339 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k236, env)}),
      _var0);
 }
}
static void _V0gen__header_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_lambda73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_lambda73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_lambda73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close _V0gen__header_k235) (bruijn headers 8 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k235, env)}),
      VGetArg(upenv, 8-1, 0));
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
  // (with-output-to-file (bruijn ##k.331 12 0) out-file (close _V0gen__header_lambda73))
    V_CALL(VLookupGlobalVarFast2(runtime, "with-output-to-file"), runtime,
      VGetArg(upenv, 12-1, 0),
      VLookupGlobalVarFast2(runtime, "out-file"),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_lambda73, env)}));
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__header_k233) (close _V0gen__header_k234))
    V_CALL_FUNC(_V0gen__header_k233, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k234, env)}));
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
  // (not (close _V0gen__header_k232) (bruijn ##x.342 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k232, env)}),
      _var0);
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__header_k230) (close _V0gen__header_k231))
    V_CALL_FUNC(_V0gen__header_k230, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k231, env)}));
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
  // (null? (close _V0gen__header_k229) (bruijn headers 3 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k229, env)}),
      upenv->up->up->vars[0]);
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
  // ((close _V0gen__header_k227) (close _V0gen__header_k228))
    V_CALL_FUNC(_V0gen__header_k227, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k228, env)}));
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
  // (> (close _V0gen__header_k226) (bruijn ##x.347 0 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, ">"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k226, env)}),
      _var0,
      VEncodeInt(1l));
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
  // (length (close _V0gen__header_k225) (bruijn headers 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "length"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k225, env)}),
      _var0);
 }
}
static void _V0gen__header_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__header_lambda74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0gen__header_lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_lambda74, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.348 0 0) (bruijn x 0 1))
    V_CALL(_var0, runtime,
      _var1);
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
  // (filter (close _V0gen__header_k224) (close _V0gen__header_lambda74) (bruijn ##x.349 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "filter"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k224, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_lambda74, env)}),
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
  // (map (close _V0gen__header_k223) header-from-library (bruijn file 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k223, env)}),
      VLookupGlobalVarFast2(runtime, "header-from-library"),
      _var0);
 }
}
static void _V0gen__header_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (read-all (close _V0gen__header_k222) (bruijn ##x.350 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "read-all"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k222, env)}),
      _var0);
 }
}
static void _V0gen__header_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-file (close _V0gen__header_k221) (bruijn ##x.351 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "open-input-file"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k221, env)}),
      _var0);
 }
}
static void _V0gen__header_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__header_lambda72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__header_lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__header_lambda72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (car (close _V0gen__header_k220) scm-files)
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_k220, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
 }
}
static void global_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.330 0 0) gen-header (close _V0gen__header_lambda72))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0gen__header,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__header_lambda72, env)})
    );
 }
}
static void global_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k240, runtime, upenv, 1, argc, _var0) {
  // (exit (bruijn ##next.352 1 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "exit"), runtime,
      upenv->vars[0]);
 }
}
static void global_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if header? (gen-header (close global_k240)) ((bruijn ##next.352 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "gen-header"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k240, env)}));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
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
  // (set! (bruijn ##k.375 4 0) maketargets (bruijn ##x.376 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->up->up->up->vars[0],
      _V0maketargets,
      _var0
    );
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
  // (list (close _V0gen__makefile_k246) (bruijn ##x.377 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "list"), runtime,
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
  // (change-extension (close _V0gen__makefile_k245) (bruijn ##x.378 0 0) (##string ##string.552))
    V_CALL(VLookupGlobalVarFast2(runtime, "change-extension"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k245, env)}),
      _var0,
      VEncodePointer(&_V10string_D552.sym, VPOINTER_OTHER));
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
  // (basename (close _V0gen__makefile_k244) (bruijn ##x.379 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k244, env)}),
      _var0);
 }
}
static void _V0gen__makefile_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.374 1 0) (car (close _V0gen__makefile_k243) scm-files) ((bruijn ##k.375 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k243, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
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
  // (if out-file (open-output-file (bruijn ##k.371 0 0) out-file) (current-output-port (bruijn ##k.371 0 0)))
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
static void _V0gen__makefile_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k259, runtime, upenv, 1, argc, _var0) {
  // (if out-file (close-port (bruijn ##k.355 13 0) (bruijn port 6 0)) ((bruijn ##k.355 13 0) #f))
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
  // (newline (close _V0gen__makefile_k259) (bruijn port 5 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "newline"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k259, env)}),
      VGetArg(upenv, 5-1, 0));
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
  // (if (bruijn ##p.366 1 0) (compiler-error (bruijn ##k.367 0 0) (##string ##string.574) (bruijn dep 4 1)) ((bruijn ##k.367 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D574.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
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
  // (format (bruijn ##k.362 5 0) (bruijn port 10 0) (##string ##string.575) (bruijn ##x.365 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "format"), runtime,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10string_D575.sym, VPOINTER_OTHER),
      _var0);
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
  // (import->path (close _V0gen__makefile_k265) (bruijn dep 4 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "import->path"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k265, env)}),
      upenv->up->up->up->vars[1]);
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
  // ((close _V0gen__makefile_k263) (close _V0gen__makefile_k264))
    V_CALL_FUNC(_V0gen__makefile_k263, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k264, env)}));
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close _V0gen__makefile_k262) (bruijn ##x.368 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k262, env)}),
      _var0);
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
  // (if (bruijn ##p.363 0 0) (valid-import? (close _V0gen__makefile_k261) (bruijn dep 1 1)) ((bruijn ##k.362 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "valid-import?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k261, env)}),
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0gen__makefile_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__makefile_lambda78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0gen__makefile_lambda78, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_lambda78, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (pair? (close _V0gen__makefile_k260) (bruijn dep 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "pair?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k260, env)}),
      _var1);
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
  // (for-each (close _V0gen__makefile_k258) (close _V0gen__makefile_lambda78) (bruijn deps 5 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k258, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_lambda78, env)}),
      VGetArg(upenv, 5-1, 0));
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
  // (format (close _V0gen__makefile_k257) (bruijn port 3 0) (##string ##string.575) (bruijn ##x.369 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "format"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k257, env)}),
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D575.sym, VPOINTER_OTHER),
      _var0);
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
  // (car (close _V0gen__makefile_k256) scm-files)
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k256, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (display (close _V0gen__makefile_k255) (##string ##string.576) (bruijn port 1 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "display"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k255, env)}),
      VEncodePointer(&_V10string_D576.sym, VPOINTER_OTHER),
      upenv->vars[0]);
 }
}
static void _V0gen__makefile_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__makefile_lambda79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0gen__makefile_lambda79, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_lambda79, runtime, upenv, 2, argc, _var0, _var1) {
  // (format (bruijn ##k.370 0 0) (bruijn port 1 0) (##string ##string.577) (bruijn target 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "format"), runtime,
      _var0,
      upenv->vars[0],
      VEncodePointer(&_V10string_D577.sym, VPOINTER_OTHER),
      _var1);
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
  // (for-each (close _V0gen__makefile_k254) (close _V0gen__makefile_lambda79) maketargets)
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k254, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_lambda79, env)}),
      VLookupGlobalVarFast2(runtime, "maketargets"));
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
  // ((close _V0gen__makefile_k252) (close _V0gen__makefile_k253))
    V_CALL_FUNC(_V0gen__makefile_k252, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k253, env)}));
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
  // (gather-dependencies (close _V0gen__makefile_k251) (bruijn file 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "gather-dependencies"), runtime,
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
  // (read-all (close _V0gen__makefile_k250) (bruijn ##x.372 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "read-all"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k250, env)}),
      _var0);
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
  // (open-input-file (close _V0gen__makefile_k249) (bruijn ##x.373 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "open-input-file"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k249, env)}),
      _var0);
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
  // (car (close _V0gen__makefile_k248) scm-files)
    V_CALL(VLookupGlobalVarFast2(runtime, "car"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k248, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
 }
}
static void _V0gen__makefile_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0gen__makefile_k242) (close _V0gen__makefile_k247))
    V_CALL_FUNC(_V0gen__makefile_k242, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k247, env)}));
 }
}
static void _V0gen__makefile_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__makefile_lambda77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__makefile_lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__makefile_lambda77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close _V0gen__makefile_k241) maketargets)
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_k241, env)}),
      VLookupGlobalVarFast2(runtime, "maketargets"));
 }
}
static void global_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.354 0 0) gen-makefile (close _V0gen__makefile_lambda77))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0gen__makefile,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__makefile_lambda77, env)})
    );
 }
}
static void global_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k266, runtime, upenv, 1, argc, _var0) {
  // (exit (bruijn ##next.380 1 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "exit"), runtime,
      upenv->vars[0]);
 }
}
static void global_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if makefile? (gen-makefile (close global_k266)) ((bruijn ##next.380 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "gen-makefile"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k266, env)}));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k267, runtime, upenv, 1, argc, _var0) {
  // (if header? ((bruijn ##k.389 0 0) header?) (if bytecode? ((bruijn ##k.389 0 0) bytecode?) (if transpile? ((bruijn ##k.389 0 0) transpile?) ((bruijn ##k.389 0 0) expand?))))
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
static void global_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k271, runtime, upenv, 1, argc, _var0) {
  // (make-temporary-file (bruijn ##k.386 2 0) (bruijn ##x.387 0 0) (##string ##string.568))
    V_CALL(VLookupGlobalVarFast2(runtime, "make-temporary-file"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D568.sym, VPOINTER_OTHER));
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
  // (string-append (close global_k271) (##string ##string.578) (bruijn ##x.388 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k271, env)}),
      VEncodePointer(&_V10string_D578.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void global_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda82, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda82, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (basename (close global_k270) (bruijn file 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k270, env)}),
      _var1);
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.384 1 0) (list (bruijn ##k.385 0 0) out-file) (map (bruijn ##k.385 0 0) (close global_lambda82) scm-files))
if(VDecodeBool(
upenv->vars[0])) {
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
  // (define (bruijn ##next.382 2 0) cc-files (bruijn ##x.383 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      upenv->up->vars[0],
      _V0cc__files,
      _var0
    );
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k269) (close global_k272))
    V_CALL_FUNC(global_k269, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k272, env)}));
 }
}
static void global_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k267) (close global_k268))
    V_CALL_FUNC(global_k267, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k268, env)}));
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
  // (if header? ((bruijn ##k.397 0 0) header?) (if bytecode? ((bruijn ##k.397 0 0) bytecode?) (if transpile? ((bruijn ##k.397 0 0) transpile?) ((bruijn ##k.397 0 0) expand?))))
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
static void global_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k277, runtime, upenv, 1, argc, _var0) {
  // (make-temporary-file (bruijn ##k.394 2 0) (bruijn ##x.395 0 0) (##string ##string.552))
    V_CALL(VLookupGlobalVarFast2(runtime, "make-temporary-file"), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D552.sym, VPOINTER_OTHER));
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
  // (string-append (close global_k277) (##string ##string.578) (bruijn ##x.396 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k277, env)}),
      VEncodePointer(&_V10string_D578.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void global_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda84, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda84, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (basename (close global_k276) (bruijn file 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "basename"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k276, env)}),
      _var1);
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.392 1 0) (list (bruijn ##k.393 0 0) #f) (if object? (list (bruijn ##k.393 0 0) out-file) (map (bruijn ##k.393 0 0) (close global_lambda84) scm-files)))
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
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda84, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
}
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
  // (define (bruijn ##next.390 2 0) cc-obj-files (bruijn ##x.391 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      upenv->up->vars[0],
      _V0cc__obj__files,
      _var0
    );
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
  // ((close global_k275) (close global_k278))
    V_CALL_FUNC(global_k275, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k278, env)}));
 }
}
static void global_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k273) (close global_k274))
    V_CALL_FUNC(global_k273, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k274, env)}));
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
  // (if (bruijn ##p.400 1 0) ((bruijn ##k.401 0 0) (##string ##string.579)) (sprintf (bruijn ##k.401 0 0) (##string ##string.580) install-root))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D579.sym, VPOINTER_OTHER));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      _var0,
      VEncodePointer(&_V10string_D580.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
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
  // (define (bruijn ##next.398 2 0) base-cc-flags (bruijn ##x.399 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      upenv->up->vars[0],
      _V0base__cc__flags,
      _var0
    );
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k280) (close global_k281))
    V_CALL_FUNC(global_k280, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k281, env)}));
 }
}
static void global_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close global_k279) platform (##string ##string.524))
    V_CALL(VLookupGlobalVarFast2(runtime, "equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k279, env)}),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10string_D524.sym, VPOINTER_OTHER));
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
  // (if debug? ((bruijn ##k.408 0 0) (##string ##string.581)) ((bruijn ##k.408 0 0) (##string ##string.535)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "debug?"))) {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D581.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D535.sym, VPOINTER_OTHER));
}
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
  // (if shared? ((bruijn ##k.407 0 0) (##string ##string.582)) ((bruijn ##k.407 0 0) (##string ##string.535)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D582.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D535.sym, VPOINTER_OTHER));
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.402 4 0) cc-command-flags (bruijn ##x.403 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      upenv->up->up->up->vars[0],
      _V0cc__command__flags,
      _var0
    );
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
  // (string-append (close global_k287) base-cc-flags (bruijn ##x.404 2 0) (bruijn ##x.405 1 0) (bruijn ##x.406 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k287, env)}),
      VLookupGlobalVarFast2(runtime, "base-cc-flags"),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
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
static void global_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k283) (close global_k284))
    V_CALL_FUNC(global_k283, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k284, env)}));
 }
}
static void global_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (sprintf (close global_k282) (##string ##string.583) optimization)
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k282, env)}),
      VEncodePointer(&_V10string_D583.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "optimization"));
 }
}
static void global_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.409 0 0) cc-command (##string ##string.535))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0cc__command,
      VEncodePointer(&_V10string_D535.sym, VPOINTER_OTHER)
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
  // (set! (bruijn ##next.410 1 0) cc-command (bruijn ##x.411 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->vars[0],
      _V0cc__command,
      _var0
    );
 }
}
static void global_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (string-append (close global_k288) cc-command cc-command-flags)
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k288, env)}),
      VLookupGlobalVarFast2(runtime, "cc-command"),
      VLookupGlobalVarFast2(runtime, "cc-command-flags"));
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
  // (set! (bruijn ##k.413 1 0) cc-command (bruijn ##x.414 0 0))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      upenv->vars[0],
      _V0cc__command,
      _var0
    );
 }
}
static void global_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda90, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda90, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (string-append (close global_k289) cc-command (bruijn option 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k289, env)}),
      VLookupGlobalVarFast2(runtime, "cc-command"),
      _var1);
 }
}
static void global_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (for-each (bruijn ##next.412 0 0) (close global_lambda90) c-options)
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda90, env)}),
      VLookupGlobalVarFast2(runtime, "c-options"));
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
  // (define (bruijn ##next.415 1 0) stdout (bruijn ##x.416 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      upenv->vars[0],
      _V0stdout,
      _var0
    );
 }
}
static void global_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (current-output-port (close global_k290))
    V_CALL(VLookupGlobalVarFast2(runtime, "current-output-port"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k290, env)}));
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
  // (define (bruijn ##next.417 2 0) num-mains (bruijn ##x.418 0 0))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      upenv->up->vars[0],
      _V0num__mains,
      _var0
    );
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
  // (if (bruijn x 1 1) ((bruijn ##k.421 0 0) 1) ((bruijn ##k.421 0 0) 0))
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
static void global_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k294, runtime, upenv, 1, argc, _var0) {
  // (+ (bruijn ##k.419 1 0) (bruijn acc 1 2) (bruijn ##x.420 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "+"), runtime,
      upenv->vars[0],
      upenv->vars[2],
      _var0);
 }
}
static void global_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "global_lambda93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to global_lambda93, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda93, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close global_k293) (close global_k294))
    V_CALL_FUNC(global_k293, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k294, env)}));
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
  // (fold (close global_k292) (close global_lambda93) 0 (bruijn ##x.422 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "fold"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k292, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda93, env)}),
      VEncodeInt(0l),
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
  // (append (bruijn ##k.445 1 0) (bruijn ##x.446 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "append"), runtime,
      upenv->vars[0],
      _var0);
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
  // (if (bruijn fd 1 0) (read-all (close global_k298) (bruijn fd 1 0)) (compiler-error (bruijn ##k.445 0 0) (##string ##string.584) (bruijn scm-file 4 1)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "read-all"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k298, env)}),
      upenv->vars[0]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      _var0,
      VEncodePointer(&_V10string_D584.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]);
}
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
  // (not (bruijn ##k.424 18 0) (bruijn ##x.429 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VGetArg(upenv, 18-1, 0),
      _var0);
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (null? (close global_k315) (bruijn ##x.430 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "null?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k315, env)}),
      _var0);
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (take-right (close global_k314) (bruijn funs 4 0) 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "take-right"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k314, env)}),
      upenv->up->up->up->vars[0],
      VEncodeInt(1l));
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (write-bytecode (close global_k313) (bruijn ##x.431 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "write-bytecode"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k313, env)}),
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
  // (apply (close global_k312) to-bytecode (bruijn ##x.432 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "apply"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k312, env)}),
      VLookupGlobalVarFast2(runtime, "to-bytecode"),
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
  // (cons (close global_k311) debug? (bruijn ##x.433 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k311, env)}),
      VLookupGlobalVarFast2(runtime, "debug?"),
      _var0);
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
  // (apply (bruijn ##k.424 14 0) printout2 (bruijn ##x.434 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "apply"), runtime,
      VGetArg(upenv, 14-1, 0),
      VLookupGlobalVarFast2(runtime, "printout2"),
      _var0);
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
  // (cons (close global_k317) debug? (bruijn ##x.435 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k317, env)}),
      VLookupGlobalVarFast2(runtime, "debug?"),
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
  // (if bytecode? (cons (close global_k310) shared? (bruijn funs 0 0)) (cons (close global_k316) shared? (bruijn funs 0 0)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k310, env)}),
      VLookupGlobalVarFast2(runtime, "shared?"),
      _var0);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k316, env)}),
      VLookupGlobalVarFast2(runtime, "shared?"),
      _var0);
}
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
  // (to-functions (close global_k309) (bruijn bruijn 1 0) (bruijn ##x.436 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "to-functions"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k309, env)}),
      upenv->vars[0],
      _var0);
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
  // (not (close global_k308) bytecode?)
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k308, env)}),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
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
  // (if (bruijn ##p.427 0 0) (for-each (bruijn ##k.424 9 0) pretty-print (bruijn opt 1 0)) (map (close global_k307) bruijn-ify (bruijn opt 1 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VGetArg(upenv, 9-1, 0),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      upenv->vars[0]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k307, env)}),
      VLookupGlobalVarFast2(runtime, "bruijn-ify"),
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
  // (eq? (close global_k306) expand? 2)
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k306, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(2l));
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
  // (deannotate-lambdas (bruijn ##k.437 2 0) (bruijn ##x.438 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "deannotate-lambdas"), runtime,
      upenv->up->vars[0],
      _var0);
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
  // (optimize (close global_k319) (bruijn expr 1 1) (bruijn ##x.439 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "optimize"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k319, env)}),
      upenv->vars[1],
      _var0);
 }
}
static void global_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda96, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda96, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (not (close global_k318) bytecode?)
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k318, env)}),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
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
  // (if (bruijn ##p.426 0 0) (for-each (bruijn ##k.424 7 0) pretty-print (bruijn cps 1 0)) (map (close global_k305) (close global_lambda96) (bruijn cps 1 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VGetArg(upenv, 7-1, 0),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      upenv->vars[0]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k305, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda96, env)}),
      upenv->vars[0]);
}
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
  // (eq? (close global_k304) expand? 1)
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k304, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(1l));
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
  // (annotate-lambdas (bruijn ##k.440 1 0) (bruijn ##x.441 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "annotate-lambdas"), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda97, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda97, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (to-cps (close global_k320) (bruijn expr 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "to-cps"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k320, env)}),
      _var1);
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
  // (map (close global_k303) (close global_lambda97) (bruijn ##x.442 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k303, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda97, env)}),
      _var0);
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
  // (if (bruijn ##p.425 0 0) (for-each (bruijn ##k.424 4 0) pretty-print (bruijn expanded 1 0)) (apply (close global_k302) append (bruijn expanded 1 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      upenv->up->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      upenv->vars[0]);
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "apply"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k302, env)}),
      VLookupGlobalVarFast2(runtime, "append"),
      upenv->vars[0]);
}
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (eq? (close global_k301) expand? 0)
    V_CALL(VLookupGlobalVarFast2(runtime, "eq?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k301, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(0l));
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
  // (expand-toplevel (bruijn ##k.443 1 0) (bruijn e 1 1) (bruijn ##x.444 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "expand-toplevel"), runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
 }
}
static void global_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda98, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (cons (close global_k321) (bruijn path 4 0) paths)
    V_CALL(VLookupGlobalVarFast2(runtime, "cons"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k321, env)}),
      upenv->up->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "paths"));
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
  // (map (close global_k300) (close global_lambda98) (bruijn file 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k300, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda98, env)}),
      _var0);
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k297) (close global_k299))
    V_CALL_FUNC(global_k297, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k299, env)}));
 }
}
static void global_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (open-input-file (close global_k296) (bruijn scm-file 2 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "open-input-file"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k296, env)}),
      upenv->up->vars[1]);
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (with-output-to-file (bruijn ##k.423 1 0) (bruijn cc-file 1 2) (close global_lambda95))
    V_CALL(VLookupGlobalVarFast2(runtime, "with-output-to-file"), runtime,
      upenv->vars[0],
      upenv->vars[2],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda95, env)}));
 }
}
static void global_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "global_lambda94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to global_lambda94, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda94, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (realbasepath (close global_k295) (bruijn scm-file 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "realbasepath"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k295, env)}),
      _var1);
 }
}
static void global_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (map (close global_k291) (close global_lambda94) scm-files cc-files cc-obj-files)
    V_CALL(VLookupGlobalVarFast2(runtime, "map"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k291, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda94, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"),
      VLookupGlobalVarFast2(runtime, "cc-files"),
      VLookupGlobalVarFast2(runtime, "cc-obj-files"));
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
  // (if (bruijn ##p.457 0 0) (not (bruijn ##k.455 2 0) expand?) ((bruijn ##k.455 2 0) #f))
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
static void global_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.456 0 0) (not (close global_k326) transpile?) ((bruijn ##k.455 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k326, env)}),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    V_CALL(upenv->vars[0], runtime,
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.454 1 0) (not (close global_k325) bytecode?) ((bruijn ##k.455 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k325, env)}),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    V_CALL(_var0, runtime,
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
  // (displayln (bruijn ##k.452 1 0) (bruijn ##x.453 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "displayln"), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void global_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if verbose? (sprintf (close global_k329) (##string ##string.585) cc (bruijn path 3 0) cc-command (bruijn obj-file 4 3) (bruijn cc-file 4 2)) ((bruijn ##k.452 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "verbose?"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k329, env)}),
      VEncodePointer(&_V10string_D585.sym, VPOINTER_OTHER),
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
static void global_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k331, runtime, upenv, 1, argc, _var0) {
  // (system (bruijn ##k.448 5 0) (bruijn ##x.451 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "system"), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
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
  // (sprintf (close global_k331) (##string ##string.585) cc (bruijn path 3 0) cc-command (bruijn obj-file 4 3) (bruijn cc-file 4 2))
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k331, env)}),
      VEncodePointer(&_V10string_D585.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "cc"),
      upenv->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "cc-command"),
      upenv->up->up->up->vars[3],
      upenv->up->up->up->vars[2]);
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.449 0 0) ((close global_k328) (close global_k330)) ((bruijn ##k.448 3 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(global_k328, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k330, env)}));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
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
  // ((close global_k324) (close global_k327))
    V_CALL_FUNC(global_k324, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k327, env)}));
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k323) header?)
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k323, env)}),
      VLookupGlobalVarFast2(runtime, "header?"));
 }
}
static void global_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "global_lambda100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to global_lambda100, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda100, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (realbasepath (close global_k322) (bruijn scm-file 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "realbasepath"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k322, env)}),
      _var1);
 }
}
static void global_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (for-each (bruijn ##next.447 0 0) (close global_lambda100) scm-files cc-files cc-obj-files)
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda100, env)}),
      VLookupGlobalVarFast2(runtime, "scm-files"),
      VLookupGlobalVarFast2(runtime, "cc-files"),
      VLookupGlobalVarFast2(runtime, "cc-obj-files"));
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
  // (if shared? (> (bruijn ##k.460 0 0) num-mains 0) ((bruijn ##k.460 0 0) #f))
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
static void global_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k333" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k333, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.459 0 0) (compiler-error (bruijn ##next.458 1 0) (##string ##string.586)) ((bruijn ##next.458 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D586.sym, VPOINTER_OTHER));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k332) (close global_k333))
    V_CALL_FUNC(global_k332, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k333, env)}));
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
  // (if (bruijn ##p.462 0 0) (compiler-error (bruijn ##next.461 1 0) (##string ##string.587)) ((bruijn ##next.461 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "compiler-error"), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D587.sym, VPOINTER_OTHER));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (> (close global_k334) num-mains 1)
    V_CALL(VLookupGlobalVarFast2(runtime, ">"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k334, env)}),
      VLookupGlobalVarFast2(runtime, "num-mains"),
      VEncodeInt(1l));
 }
}
static void _V0delete__file_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0delete__file_k335" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0delete__file_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0delete__file_k335, runtime, upenv, 1, argc, _var0) {
  // (system (bruijn ##k.464 1 0) (bruijn ##x.465 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "system"), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0delete__file_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0delete__file_lambda104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0delete__file_lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0delete__file_lambda104, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (sprintf (close _V0delete__file_k335) (##string ##string.588) (bruijn f 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete__file_k335, env)}),
      VEncodePointer(&_V10string_D588.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void global_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (define (bruijn ##next.463 0 0) delete-file (close _V0delete__file_lambda104))
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      _var0,
      _V0delete__file,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete__file_lambda104, env)})
    );
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
  // (if (bruijn ##p.494 0 0) (not (bruijn ##k.491 3 0) object?) ((bruijn ##k.491 3 0) #f))
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
  // (if (bruijn ##p.493 0 0) (not (close global_k340) expand?) ((bruijn ##k.491 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k340, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.492 0 0) (not (close global_k339) transpile?) ((bruijn ##k.491 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k339, env)}),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
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
  // (if (bruijn ##p.490 1 0) (not (close global_k338) bytecode?) ((bruijn ##k.491 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k338, env)}),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
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
  // (if debug? ((bruijn ##k.489 0 0) (##string ##string.581)) ((bruijn ##k.489 0 0) (##string ##string.535)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "debug?"))) {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D581.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D535.sym, VPOINTER_OTHER));
}
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
  // (if (bruijn ##p.487 1 0) ((bruijn ##k.488 0 0) (##string ##string.589)) (sprintf (bruijn ##k.488 0 0) (##string ##string.590) install-root))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D589.sym, VPOINTER_OTHER));
} else {
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      _var0,
      VEncodePointer(&_V10string_D590.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
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
  // (if shared? ((bruijn ##k.486 0 0) (##string ##string.591)) ((bruijn ##k.486 0 0) (##string ##string.592)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D591.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D592.sym, VPOINTER_OTHER));
}
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
  // (if out-file (sprintf (bruijn ##k.481 0 0) (##string ##string.593) cc out-file) ((bruijn ##k.481 0 0) cc))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      _var0,
      VEncodePointer(&_V10string_D593.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "cc"),
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    V_CALL(_var0, runtime,
      VLookupGlobalVarFast2(runtime, "cc"));
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
  // (if verbose? (displayln (bruijn ##k.474 0 0) (bruijn link-command 6 1)) ((bruijn ##k.474 0 0) #f))
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
static void global_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k359" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k359, runtime, upenv, 1, argc, _var0) {
  // (system (bruijn ##next.466 16 0) (bruijn link-command 6 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "system"), runtime,
      VGetArg(upenv, 16-1, 0),
      VGetArg(upenv, 6-1, 1));
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
  // ((close global_k358) (close global_k359))
    V_CALL_FUNC(global_k358, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k359, env)}));
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
  // (set! (close global_k357) (bruijn link-command 4 1) (bruijn ##x.475 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k357, env)}),
      VEncodeInt(4l), VEncodeInt(1l),
      _var0
    );
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
  // (string-append (close global_k356) (bruijn link-command 3 1) (bruijn link-command-flags 3 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k356, env)}),
      upenv->up->up->vars[1],
      upenv->up->up->vars[0]);
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.476 1 0) (bruijn link-command 4 1) (bruijn ##x.477 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->vars[0],
      VEncodeInt(4l), VEncodeInt(1l),
      _var0
    );
 }
}
static void global_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda106, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda106, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (string-append (close global_k360) (bruijn link-command 3 1) (bruijn option 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k360, env)}),
      upenv->up->up->vars[1],
      _var1);
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
  // (for-each (close global_k355) (close global_lambda106) c-options)
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k355, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda106, env)}),
      VLookupGlobalVarFast2(runtime, "c-options"));
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
  // (set! (bruijn ##k.478 1 0) (bruijn link-command 3 1) (bruijn ##x.479 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->vars[0],
      VEncodeInt(3l), VEncodeInt(1l),
      _var0
    );
 }
}
static void global_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "global_lambda107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to global_lambda107, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda107, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (string-append (close global_k361) (bruijn link-command 2 1) (##string ##string.594) (bruijn file 0 1))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k361, env)}),
      upenv->up->vars[1],
      VEncodePointer(&_V10string_D594.sym, VPOINTER_OTHER),
      _var1);
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (for-each (close global_k354) (close global_lambda107) (bruijn ##x.480 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k354, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_lambda107, env)}),
      _var0);
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 2 ((bruijn ##x.468 2 0) (bruijn ##x.469 1 0)) (append (close global_k353) obj-files cc-obj-files))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = upenv->up->vars[0];
    env->vars[1] = upenv->vars[0];
    V_CALL(VLookupGlobalVarFast2(runtime, "append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k353, env)}),
      VLookupGlobalVarFast2(runtime, "obj-files"),
      VLookupGlobalVarFast2(runtime, "cc-obj-files"));
    }
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
  // ((close global_k351) (close global_k352))
    V_CALL_FUNC(global_k351, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k352, env)}));
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
  // (string-append (close global_k350) base-cc-flags (bruijn ##x.482 4 0) (bruijn ##x.483 3 0) (bruijn ##x.484 1 0) (bruijn ##x.485 0 0))
    V_CALL(VLookupGlobalVarFast2(runtime, "string-append"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k350, env)}),
      VLookupGlobalVarFast2(runtime, "base-cc-flags"),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
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
  // ((close global_k348) (close global_k349))
    V_CALL_FUNC(global_k348, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k349, env)}));
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
  // ((close global_k346) (close global_k347))
    V_CALL_FUNC(global_k346, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k347, env)}));
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (equal? (close global_k345) platform (##string ##string.524))
    V_CALL(VLookupGlobalVarFast2(runtime, "equal?"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k345, env)}),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10string_D524.sym, VPOINTER_OTHER));
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
  // ((close global_k343) (close global_k344))
    V_CALL_FUNC(global_k343, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k344, env)}));
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
  // (if (bruijn ##p.467 0 0) (sprintf (close global_k342) (##string ##string.583) optimization) ((bruijn ##next.466 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "sprintf"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k342, env)}),
      VEncodePointer(&_V10string_D583.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "optimization"));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
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
  // ((close global_k337) (close global_k341))
    V_CALL_FUNC(global_k337, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k341, env)}));
 }
}
static void global_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k336) header?)
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k336, env)}),
      VLookupGlobalVarFast2(runtime, "header?"));
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
  // (if (bruijn ##p.501 0 0) (not (bruijn ##k.498 3 0) keep?) ((bruijn ##k.498 3 0) #f))
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
static void global_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k365" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k365, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.500 0 0) (not (close global_k366) expand?) ((bruijn ##k.498 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k366, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    V_CALL(upenv->up->vars[0], runtime,
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
  // (if (bruijn ##p.499 0 0) (not (close global_k365) transpile?) ((bruijn ##k.498 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k365, env)}),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    V_CALL(upenv->vars[0], runtime,
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
  // (if (bruijn ##p.497 1 0) (not (close global_k364) bytecode?) ((bruijn ##k.498 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k364, env)}),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k367" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k367, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.496 0 0) (for-each (bruijn ##next.495 2 0) delete-file cc-files) ((bruijn ##next.495 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      upenv->up->vars[0],
      VLookupGlobalVarFast2(runtime, "delete-file"),
      VLookupGlobalVarFast2(runtime, "cc-files"));
} else {
    V_CALL(upenv->up->vars[0], runtime,
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
  // ((close global_k363) (close global_k367))
    V_CALL_FUNC(global_k363, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k367, env)}));
 }
}
static void global_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k362) header?)
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k362, env)}),
      VLookupGlobalVarFast2(runtime, "header?"));
 }
}
static void global_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k373" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k373, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.509 0 0) (not (bruijn ##k.505 4 0) keep?) ((bruijn ##k.505 4 0) #f))
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
static void global_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k372" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.508 0 0) (not (close global_k373) object?) ((bruijn ##k.505 3 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k373, env)}),
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k371" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.507 0 0) (not (close global_k372) expand?) ((bruijn ##k.505 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k372, env)}),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k370" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k370, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.506 0 0) (not (close global_k371) transpile?) ((bruijn ##k.505 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k371, env)}),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k369" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k369, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.504 1 0) (not (close global_k370) bytecode?) ((bruijn ##k.505 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k370, env)}),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void global_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k374" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k374, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.503 0 0) (for-each (bruijn ##next.502 2 0) delete-file cc-obj-files) ((bruijn ##next.502 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VLookupGlobalVarFast2(runtime, "for-each"), runtime,
      upenv->up->vars[0],
      VLookupGlobalVarFast2(runtime, "delete-file"),
      VLookupGlobalVarFast2(runtime, "cc-obj-files"));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void global_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_k368" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k368, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close global_k369) (close global_k374))
    V_CALL_FUNC(global_k369, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k374, env)}));
 }
}
static void global_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "global_lambda109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to global_lambda109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_lambda109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (not (close global_k368) header?)
    V_CALL(VLookupGlobalVarFast2(runtime, "not"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k368, env)}),
      VLookupGlobalVarFast2(runtime, "header?"));
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
    V_CALL_FUNC(global_lambda39, env, runtime,
      _k);
}
void toplevel37(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda42, env, runtime,
      _k);
}
void toplevel38(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda45, env, runtime,
      _k);
}
void toplevel39(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda48, env, runtime,
      _k);
}
void toplevel40(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda51, env, runtime,
      _k);
}
void toplevel41(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda53, env, runtime,
      _k);
}
void toplevel42(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda55, env, runtime,
      _k);
}
void toplevel43(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda57, env, runtime,
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
    V_CALL_FUNC(global_lambda62, env, runtime,
      _k);
}
void toplevel47(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda65, env, runtime,
      _k);
}
void toplevel48(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda66, env, runtime,
      _k);
}
void toplevel49(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda67, env, runtime,
      _k);
}
void toplevel50(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda68, env, runtime,
      _k);
}
void toplevel51(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda69, env, runtime,
      _k);
}
void toplevel52(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda70, env, runtime,
      _k);
}
void toplevel53(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda71, env, runtime,
      _k);
}
void toplevel54(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda75, env, runtime,
      _k);
}
void toplevel55(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda76, env, runtime,
      _k);
}
void toplevel56(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda80, env, runtime,
      _k);
}
void toplevel57(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda81, env, runtime,
      _k);
}
void toplevel58(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda83, env, runtime,
      _k);
}
void toplevel59(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda85, env, runtime,
      _k);
}
void toplevel60(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda86, env, runtime,
      _k);
}
void toplevel61(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda87, env, runtime,
      _k);
}
void toplevel62(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda88, env, runtime,
      _k);
}
void toplevel63(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda89, env, runtime,
      _k);
}
void toplevel64(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda91, env, runtime,
      _k);
}
void toplevel65(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda92, env, runtime,
      _k);
}
void toplevel66(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda99, env, runtime,
      _k);
}
void toplevel67(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda101, env, runtime,
      _k);
}
void toplevel68(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda102, env, runtime,
      _k);
}
void toplevel69(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda103, env, runtime,
      _k);
}
void toplevel70(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda105, env, runtime,
      _k);
}
void toplevel71(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda108, env, runtime,
      _k);
}
void toplevel72(V_CORE_ARGS, VWORD _k) {
    VEnv * env = NULL;
    V_CALL_FUNC(global_lambda109, env, runtime,
      _k);
}
int main(int argc, char ** argv) {
  VThunk toplevels[] = {
    toplevel0,    toplevel1,    toplevel2,    toplevel3,    toplevel4,    toplevel5,    toplevel6,    toplevel7,    toplevel8,    toplevel9,    toplevel10,    toplevel11,    toplevel12,    toplevel13,    toplevel14,    toplevel15,    toplevel16,    toplevel17,    toplevel18,    toplevel19,    toplevel20,    toplevel21,    toplevel22,    toplevel23,    toplevel24,    toplevel25,    toplevel26,    toplevel27,    toplevel28,    toplevel29,    toplevel30,    toplevel31,    toplevel32,    toplevel33,    toplevel34,    toplevel35,    toplevel36,    toplevel37,    toplevel38,    toplevel39,    toplevel40,    toplevel41,    toplevel42,    toplevel43,    toplevel44,    toplevel45,    toplevel46,    toplevel47,    toplevel48,    toplevel49,    toplevel50,    toplevel51,    toplevel52,    toplevel53,    toplevel54,    toplevel55,    toplevel56,    toplevel57,    toplevel58,    toplevel59,    toplevel60,    toplevel61,    toplevel62,    toplevel63,    toplevel64,    toplevel65,    toplevel66,    toplevel67,    toplevel68,    toplevel69,    toplevel70,    toplevel71,    toplevel72,
  };
  VRuntime * runtime;
  VInitRuntime2(&runtime, argc, argv);
  return VDecodeExitCode(VStart2(runtime, sizeof toplevels / sizeof *toplevels, toplevels));
}
