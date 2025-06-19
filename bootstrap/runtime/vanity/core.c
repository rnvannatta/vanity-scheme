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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D3020 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0seed_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D3019 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0printf;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0printf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "printf" };
VWEAK VWORD _V0format;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0format = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "format" };
VWEAK VWORD _V0writeln;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0writeln = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "writeln" };
VWEAK VWORD _V0displayln;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0displayln = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "displayln" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V40_V10vcore_Dawait;VWEAK VClosure _VW_V40_V10vcore_Dawait = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAwait, NULL };
VWEAK VWORD _V0await;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0await = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "await" };
VWEAK VWORD _V40_V10vcore_Dasync;VWEAK VClosure _VW_V40_V10vcore_Dasync = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAsync, NULL };
VWEAK VWORD _V0async;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0async = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "async" };
VWEAK VWORD _V0fiber__map;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0fiber__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "fiber-map" };
VWEAK VWORD _V40_V10vcore_Dfiber__fork__list;VWEAK VClosure _VW_V40_V10vcore_Dfiber__fork__list = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VFiberForkList, NULL };
VWEAK VWORD _V0fiber__fork__list;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0fiber__fork__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "fiber-fork-list" };
VWEAK VWORD _V0fiber__fork;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0fiber__fork = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "fiber-fork" };
VWEAK VWORD _V40_V10vcore_Dbit__count;VWEAK VClosure _VW_V40_V10vcore_Dbit__count = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitCount, NULL };
VWEAK VWORD _V0bit__count;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0bit__count = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "bit-count" };
VWEAK VWORD _V40_V10vcore_Darithmetic__shift;VWEAK VClosure _VW_V40_V10vcore_Darithmetic__shift = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VArithmeticShift, NULL };
VWEAK VWORD _V0arithmetic__shift;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0arithmetic__shift = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "arithmetic-shift" };
VWEAK VWORD _V40_V10vcore_Dbitwise__orc2;VWEAK VClosure _VW_V40_V10vcore_Dbitwise__orc2 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseOrC2, NULL };
VWEAK VWORD _V0bitwise__orc2;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0bitwise__orc2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "bitwise-orc2" };
VWEAK VWORD _V40_V10vcore_Dbitwise__orc1;VWEAK VClosure _VW_V40_V10vcore_Dbitwise__orc1 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseOrC1, NULL };
VWEAK VWORD _V0bitwise__orc1;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0bitwise__orc1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "bitwise-orc1" };
VWEAK VWORD _V40_V10vcore_Dbitwise__andc2;VWEAK VClosure _VW_V40_V10vcore_Dbitwise__andc2 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseAndC2, NULL };
VWEAK VWORD _V0bitwise__andc2;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0bitwise__andc2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "bitwise-andc2" };
VWEAK VWORD _V40_V10vcore_Dbitwise__andc1;VWEAK VClosure _VW_V40_V10vcore_Dbitwise__andc1 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseAndC1, NULL };
VWEAK VWORD _V0bitwise__andc1;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0bitwise__andc1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "bitwise-andc1" };
VWEAK VWORD _V40_V10vcore_Dbitwise__nor;VWEAK VClosure _VW_V40_V10vcore_Dbitwise__nor = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseNor, NULL };
VWEAK VWORD _V0bitwise__nor;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0bitwise__nor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "bitwise-nor" };
VWEAK VWORD _V40_V10vcore_Dbitwise__nand;VWEAK VClosure _VW_V40_V10vcore_Dbitwise__nand = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseNand, NULL };
VWEAK VWORD _V0bitwise__nand;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0bitwise__nand = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "bitwise-nand" };
VWEAK VWORD _V0bitwise__eqv;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0bitwise__eqv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "bitwise-eqv" };
VWEAK VWORD _V0bitwise__xnor;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0bitwise__xnor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "bitwise-xnor" };
VWEAK VWORD _V0bitwise__xor;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0bitwise__xor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "bitwise-xor" };
VWEAK VWORD _V0bitwise__ior;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0bitwise__ior = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "bitwise-ior" };
VWEAK VWORD _V0bitwise__or;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0bitwise__or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "bitwise-or" };
VWEAK VWORD _V0bitwise__and;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0bitwise__and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "bitwise-and" };
VWEAK VWORD _V40_V10vcore_Dbitwise__not;VWEAK VClosure _VW_V40_V10vcore_Dbitwise__not = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseNot, NULL };
VWEAK VWORD _V0bitwise__not;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0bitwise__not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "bitwise-not" };
VWEAK VWORD _V40_V10vcore_Djiffies__per__second;VWEAK VClosure _VW_V40_V10vcore_Djiffies__per__second = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VJiffiesPerSecond, NULL };
VWEAK VWORD _V0jiffies__per__second;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0jiffies__per__second = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "jiffies-per-second" };
VWEAK VWORD _V40_V10vcore_Dcurrent__jiffy;VWEAK VClosure _VW_V40_V10vcore_Dcurrent__jiffy = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCurrentJiffy, NULL };
VWEAK VWORD _V0current__jiffy;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0current__jiffy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "current-jiffy" };
VWEAK VWORD _V40_V10vcore_Dexit;VWEAK VClosure _VW_V40_V10vcore_Dexit = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VExit2, NULL };
VWEAK VWORD _V0exit;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0exit = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "exit" };
VWEAK VWORD _V0file__exists_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0file__exists_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "file-exists\?" };
VWEAK VWORD _V40_V10vcore_Dmake__temporary__file;VWEAK VClosure _VW_V40_V10vcore_Dmake__temporary__file = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeTemporaryFile2, NULL };
VWEAK VWORD _V0make__temporary__file;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0make__temporary__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "make-temporary-file" };
VWEAK VWORD _V40_V10vcore_Dopen__output__process;VWEAK VClosure _VW_V40_V10vcore_Dopen__output__process = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputProcess2, NULL };
VWEAK VWORD _V0open__output__process;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0open__output__process = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "open-output-process" };
VWEAK VWORD _V40_V10vcore_Dopen__input__process;VWEAK VClosure _VW_V40_V10vcore_Dopen__input__process = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenInputProcess2, NULL };
VWEAK VWORD _V0open__input__process;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__input__process = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-input-process" };
VWEAK VWORD _V40_V10vcore_Dsystem;VWEAK VClosure _VW_V40_V10vcore_Dsystem = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSystem2, NULL };
VWEAK VWORD _V0system;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0system = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "system" };
VWEAK VWORD _V40_V10vcore_Dcommand__line;VWEAK VClosure _VW_V40_V10vcore_Dcommand__line = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCommandLine2, NULL };
VWEAK VWORD _V0command__line;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0command__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "command-line" };
VWEAK VWORD _V0with__exception__handler;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0with__exception__handler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "with-exception-handler" };
VWEAK VWORD _V0raise__continuable;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0raise__continuable = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "raise-continuable" };
VWEAK VWORD _V40_V10vcore_Draise;VWEAK VClosure _VW_V40_V10vcore_Draise = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRaise, NULL };
VWEAK VWORD _V0raise;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0raise = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "raise" };
VWEAK VWORD _V0make__parameter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0make__parameter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "make-parameter" };
VWEAK VWORD _V10vcore_Dmutator;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dmutator = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.mutator" };
VWEAK VWORD _V10vcore_Dsetter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dsetter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.setter" };
VWEAK VWORD _V0mutator;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0mutator = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "mutator" };
VWEAK VWORD _V0setter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0setter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "setter" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V40_V10vcore_Dapply;VWEAK VClosure _VW_V40_V10vcore_Dapply = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VApply2, NULL };
VWEAK VWORD _V0apply;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0apply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "apply" };
VWEAK VWORD _V40_V10vcore_Dcall__with__values;VWEAK VClosure _VW_V40_V10vcore_Dcall__with__values = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCallValues2, NULL };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
VWEAK VWORD _V0call__with__current__continuation;VWEAK struct { VBlob sym; char bytes[31]; } _VW_V0call__with__current__continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 31 }, "call-with-current-continuation" };
VWEAK VWORD _V40_V10vcore_Dcall_Wcc;VWEAK VClosure _VW_V40_V10vcore_Dcall_Wcc = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCallCC2, NULL };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V0write;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0write = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "write" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0newline;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0newline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "newline" };
VWEAK VWORD _V0read;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0read = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "read" };
VWEAK VWORD _V0read__line;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0read__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "read-line" };
VWEAK VWORD _V0read__char;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0read__char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "read-char" };
VWEAK VWORD _V0call__with__output__file;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0call__with__output__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "call-with-output-file" };
VWEAK VWORD _V0call__with__input__file;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0call__with__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "call-with-input-file" };
VWEAK VWORD _V0call__with__port;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0call__with__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "call-with-port" };
VWEAK VWORD _V0with__input__from__file;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0with__input__from__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "with-input-from-file" };
VWEAK VWORD _V0with__output__to__file;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0with__output__to__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "with-output-to-file" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-output-string" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-output-string" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0open__output__file;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0open__output__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "open-output-file" };
VWEAK VWORD _V0open__input__file;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "open-input-file" };
VWEAK VWORD _V0current__input__port;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0current__input__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "current-input-port" };
VWEAK VWORD _V0current__error__port;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0current__error__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "current-error-port" };
VWEAK VWORD _V0current__output__port;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0current__output__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "current-output-port" };
VWEAK VWORD _V0char__alphabetic_Q;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0char__alphabetic_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "char-alphabetic\?" };
VWEAK VWORD _V0char__numeric_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0char__numeric_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "char-numeric\?" };
VWEAK VWORD _V0number___Gstring;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0number___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "number->string" };
VWEAK VWORD _V40_V10vcore_Dinteger___Gchar;VWEAK VClosure _VW_V40_V10vcore_Dinteger___Gchar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VIntChar, NULL };
VWEAK VWORD _V0integer___Gchar;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0integer___Gchar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "integer->char" };
VWEAK VWORD _V40_V10vcore_Dchar__integer;VWEAK VClosure _VW_V40_V10vcore_Dchar__integer = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCharInt2, NULL };
VWEAK VWORD _V0char___Ginteger;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0char___Ginteger = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "char->integer" };
VWEAK VWORD _V0hash__table___Galist;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0hash__table___Galist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "hash-table->alist" };
VWEAK VWORD _V40_V10vcore_Dhash__table__delete_B;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__delete_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableDelete, NULL };
VWEAK VWORD _V0hash__table__delete_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0hash__table__delete_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "hash-table-delete!" };
VWEAK VWORD _V0hash__table__set_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-set!" };
VWEAK VWORD _V0hash__table__ref;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0hash__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "hash-table-ref" };
VWEAK VWORD _V0make__hash__table;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0make__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "make-hash-table" };
VWEAK VWORD _V40_V10vcore_Drecord__length;VWEAK VClosure _VW_V40_V10vcore_Drecord__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordLength2, NULL };
VWEAK VWORD _V0record__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0record__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "record-length" };
VWEAK VWORD _V40_V10vcore_Drecord__set_B;VWEAK VClosure _VW_V40_V10vcore_Drecord__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordSet2, NULL };
VWEAK VWORD _V0record__set_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0record__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "record-set!" };
VWEAK VWORD _V40_V10vcore_Drecord__ref;VWEAK VClosure _VW_V40_V10vcore_Drecord__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordRef2, NULL };
VWEAK VWORD _V0record__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0record__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "record-ref" };
VWEAK VWORD _V40_V10vcore_Drecord;VWEAK VClosure _VW_V40_V10vcore_Drecord = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCreateRecord2, NULL };
VWEAK VWORD _V0record;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0record = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "record" };
VWEAK VWORD _V0typevector_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0typevector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "typevector\?" };
VWEAK VWORD _V0read__bytevector;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0read__bytevector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "read-bytevector" };
VWEAK VWORD _V0read__u8vector;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0read__u8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "read-u8vector" };
VWEAK VWORD _V0bytevector__length;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0bytevector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "bytevector-length" };
VWEAK VWORD _V0bytevector__u8__set_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0bytevector__u8__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "bytevector-u8-set!" };
VWEAK VWORD _V0bytevector__u8__ref;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0bytevector__u8__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "bytevector-u8-ref" };
VWEAK VWORD _V0bytevector;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0bytevector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "bytevector" };
VWEAK VWORD _V0make__bytevector;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0make__bytevector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "make-bytevector" };
VWEAK VWORD _V0bytevector___Glist;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0bytevector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "bytevector->list" };
VWEAK VWORD _V0list___Gbytevector;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0list___Gbytevector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "list->bytevector" };
VWEAK VWORD _V0bytevector_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0bytevector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "bytevector\?" };
VWEAK VWORD _V40_V10vcore_Ds8vector__length;VWEAK VClosure _VW_V40_V10vcore_Ds8vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS8VectorLength, NULL };
VWEAK VWORD _V0s8vector__length;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0s8vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "s8vector-length" };
VWEAK VWORD _V40_V10vcore_Ds8vector__set_B;VWEAK VClosure _VW_V40_V10vcore_Ds8vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS8VectorSet, NULL };
VWEAK VWORD _V0s8vector__set_B;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0s8vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "s8vector-set!" };
VWEAK VWORD _V40_V10vcore_Ds8vector__ref;VWEAK VClosure _VW_V40_V10vcore_Ds8vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS8VectorRef, NULL };
VWEAK VWORD _V0s8vector__ref;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0s8vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "s8vector-ref" };
VWEAK VWORD _V0s8vector;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0s8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "s8vector" };
VWEAK VWORD _V0make__s8vector;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0make__s8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "make-s8vector" };
VWEAK VWORD _V0s8vector___Glist;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0s8vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "s8vector->list" };
VWEAK VWORD _V40_V10vcore_Dlist___Gs8vector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gs8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListS8Vector, NULL };
VWEAK VWORD _V0list___Gs8vector;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0list___Gs8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "list->s8vector" };
VWEAK VWORD _V40_V10vcore_Ds8vector_Q;VWEAK VClosure _VW_V40_V10vcore_Ds8vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS8VectorP, NULL };
VWEAK VWORD _V0s8vector_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0s8vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "s8vector\?" };
VWEAK VWORD _V40_V10vcore_Du8vector__length;VWEAK VClosure _VW_V40_V10vcore_Du8vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorLength, NULL };
VWEAK VWORD _V0u8vector__length;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0u8vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "u8vector-length" };
VWEAK VWORD _V40_V10vcore_Du8vector__set_B;VWEAK VClosure _VW_V40_V10vcore_Du8vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorSet, NULL };
VWEAK VWORD _V0u8vector__set_B;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0u8vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "u8vector-set!" };
VWEAK VWORD _V40_V10vcore_Du8vector__ref;VWEAK VClosure _VW_V40_V10vcore_Du8vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorRef, NULL };
VWEAK VWORD _V0u8vector__ref;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0u8vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "u8vector-ref" };
VWEAK VWORD _V0u8vector;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0u8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "u8vector" };
VWEAK VWORD _V0make__u8vector;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0make__u8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "make-u8vector" };
VWEAK VWORD _V0u8vector___Glist;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0u8vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "u8vector->list" };
VWEAK VWORD _V40_V10vcore_Dlist___Gu8vector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gu8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListU8Vector, NULL };
VWEAK VWORD _V0list___Gu8vector;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0list___Gu8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "list->u8vector" };
VWEAK VWORD _V40_V10vcore_Du8vector_Q;VWEAK VClosure _VW_V40_V10vcore_Du8vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorP, NULL };
VWEAK VWORD _V0u8vector_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0u8vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "u8vector\?" };
VWEAK VWORD _V40_V10vcore_Ds16vector__length;VWEAK VClosure _VW_V40_V10vcore_Ds16vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16VectorLength, NULL };
VWEAK VWORD _V0s16vector__length;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0s16vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "s16vector-length" };
VWEAK VWORD _V40_V10vcore_Ds16vector__set_B;VWEAK VClosure _VW_V40_V10vcore_Ds16vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16VectorSet, NULL };
VWEAK VWORD _V0s16vector__set_B;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0s16vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "s16vector-set!" };
VWEAK VWORD _V40_V10vcore_Ds16vector__ref;VWEAK VClosure _VW_V40_V10vcore_Ds16vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16VectorRef, NULL };
VWEAK VWORD _V0s16vector__ref;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0s16vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "s16vector-ref" };
VWEAK VWORD _V0s16vector;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0s16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "s16vector" };
VWEAK VWORD _V0make__s16vector;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0make__s16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "make-s16vector" };
VWEAK VWORD _V0s16vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0s16vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "s16vector->list" };
VWEAK VWORD _V40_V10vcore_Dlist___Gs16vector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gs16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListS16Vector, NULL };
VWEAK VWORD _V0list___Gs16vector;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0list___Gs16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "list->s16vector" };
VWEAK VWORD _V40_V10vcore_Ds16vector_Q;VWEAK VClosure _VW_V40_V10vcore_Ds16vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16VectorP, NULL };
VWEAK VWORD _V0s16vector_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0s16vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "s16vector\?" };
VWEAK VWORD _V40_V10vcore_Du16vector__length;VWEAK VClosure _VW_V40_V10vcore_Du16vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16VectorLength, NULL };
VWEAK VWORD _V0u16vector__length;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0u16vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "u16vector-length" };
VWEAK VWORD _V40_V10vcore_Du16vector__set_B;VWEAK VClosure _VW_V40_V10vcore_Du16vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16VectorSet, NULL };
VWEAK VWORD _V0u16vector__set_B;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0u16vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "u16vector-set!" };
VWEAK VWORD _V40_V10vcore_Du16vector__ref;VWEAK VClosure _VW_V40_V10vcore_Du16vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16VectorRef, NULL };
VWEAK VWORD _V0u16vector__ref;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0u16vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "u16vector-ref" };
VWEAK VWORD _V0u16vector;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0u16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "u16vector" };
VWEAK VWORD _V0make__u16vector;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0make__u16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "make-u16vector" };
VWEAK VWORD _V0u16vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0u16vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "u16vector->list" };
VWEAK VWORD _V40_V10vcore_Dlist___Gu16vector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gu16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListU16Vector, NULL };
VWEAK VWORD _V0list___Gu16vector;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0list___Gu16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "list->u16vector" };
VWEAK VWORD _V40_V10vcore_Du16vector_Q;VWEAK VClosure _VW_V40_V10vcore_Du16vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16VectorP, NULL };
VWEAK VWORD _V0u16vector_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0u16vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "u16vector\?" };
VWEAK VWORD _V40_V10vcore_Ds32vector__length;VWEAK VClosure _VW_V40_V10vcore_Ds32vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32VectorLength, NULL };
VWEAK VWORD _V0s32vector__length;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0s32vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "s32vector-length" };
VWEAK VWORD _V40_V10vcore_Ds32vector__set_B;VWEAK VClosure _VW_V40_V10vcore_Ds32vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32VectorSet, NULL };
VWEAK VWORD _V0s32vector__set_B;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0s32vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "s32vector-set!" };
VWEAK VWORD _V40_V10vcore_Ds32vector__ref;VWEAK VClosure _VW_V40_V10vcore_Ds32vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32VectorRef, NULL };
VWEAK VWORD _V0s32vector__ref;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0s32vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "s32vector-ref" };
VWEAK VWORD _V0s32vector;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0s32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "s32vector" };
VWEAK VWORD _V0make__s32vector;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0make__s32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "make-s32vector" };
VWEAK VWORD _V0s32vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0s32vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "s32vector->list" };
VWEAK VWORD _V40_V10vcore_Dlist___Gs32vector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gs32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListS32Vector, NULL };
VWEAK VWORD _V0list___Gs32vector;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0list___Gs32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "list->s32vector" };
VWEAK VWORD _V40_V10vcore_Ds32vector_Q;VWEAK VClosure _VW_V40_V10vcore_Ds32vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32VectorP, NULL };
VWEAK VWORD _V0s32vector_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0s32vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "s32vector\?" };
VWEAK VWORD _V40_V10vcore_Df32vector__length;VWEAK VClosure _VW_V40_V10vcore_Df32vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32VectorLength, NULL };
VWEAK VWORD _V0f32vector__length;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0f32vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "f32vector-length" };
VWEAK VWORD _V40_V10vcore_Df32vector__set_B;VWEAK VClosure _VW_V40_V10vcore_Df32vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32VectorSet, NULL };
VWEAK VWORD _V0f32vector__set_B;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0f32vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "f32vector-set!" };
VWEAK VWORD _V40_V10vcore_Df32vector__ref;VWEAK VClosure _VW_V40_V10vcore_Df32vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32VectorRef, NULL };
VWEAK VWORD _V0f32vector__ref;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0f32vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "f32vector-ref" };
VWEAK VWORD _V0f32vector;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0f32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "f32vector" };
VWEAK VWORD _V0make__f32vector;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0make__f32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "make-f32vector" };
VWEAK VWORD _V0f32vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0f32vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "f32vector->list" };
VWEAK VWORD _V40_V10vcore_Dlist___Gf32vector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gf32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListF32Vector, NULL };
VWEAK VWORD _V0list___Gf32vector;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0list___Gf32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "list->f32vector" };
VWEAK VWORD _V40_V10vcore_Df32vector_Q;VWEAK VClosure _VW_V40_V10vcore_Df32vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32VectorP, NULL };
VWEAK VWORD _V0f32vector_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0f32vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "f32vector\?" };
VWEAK VWORD _V40_V10vcore_Df64vector__length;VWEAK VClosure _VW_V40_V10vcore_Df64vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64VectorLength, NULL };
VWEAK VWORD _V0f64vector__length;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0f64vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "f64vector-length" };
VWEAK VWORD _V40_V10vcore_Df64vector__set_B;VWEAK VClosure _VW_V40_V10vcore_Df64vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64VectorSet, NULL };
VWEAK VWORD _V0f64vector__set_B;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0f64vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "f64vector-set!" };
VWEAK VWORD _V40_V10vcore_Df64vector__ref;VWEAK VClosure _VW_V40_V10vcore_Df64vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64VectorRef, NULL };
VWEAK VWORD _V0f64vector__ref;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0f64vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "f64vector-ref" };
VWEAK VWORD _V0f64vector;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0f64vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "f64vector" };
VWEAK VWORD _V0make__f64vector;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0make__f64vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "make-f64vector" };
VWEAK VWORD _V0f64vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0f64vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "f64vector->list" };
VWEAK VWORD _V40_V10vcore_Dlist___Gf64vector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gf64vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListF64Vector, NULL };
VWEAK VWORD _V0list___Gf64vector;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0list___Gf64vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "list->f64vector" };
VWEAK VWORD _V40_V10vcore_Df64vector_Q;VWEAK VClosure _VW_V40_V10vcore_Df64vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64VectorP, NULL };
VWEAK VWORD _V0f64vector_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0f64vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "f64vector\?" };
VWEAK VWORD _V0vector__fill_B;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0vector__fill_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "vector-fill!" };
VWEAK VWORD _V0vector__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0vector__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "vector-append" };
VWEAK VWORD _V0vector__for__each;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0vector__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "vector-for-each" };
VWEAK VWORD _V0vector__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0vector__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "vector-map" };
VWEAK VWORD _V0vector__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "vector-length" };
VWEAK VWORD _V40_V10vcore_Dvector__set_B;VWEAK VClosure _VW_V40_V10vcore_Dvector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorSet2, NULL };
VWEAK VWORD _V0vector__set_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "vector-set!" };
VWEAK VWORD _V40_V10vcore_Dvector__ref;VWEAK VClosure _VW_V40_V10vcore_Dvector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorRef2, NULL };
VWEAK VWORD _V0vector__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "vector-ref" };
VWEAK VWORD _V0vector;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vector" };
VWEAK VWORD _V0vector__copy_B;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0vector__copy_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "vector-copy!" };
VWEAK VWORD _V0vector__copy;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0vector__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "vector-copy" };
VWEAK VWORD _V0make__vector;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "make-vector" };
VWEAK VWORD _V0vector___Glist;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "vector->list" };
VWEAK VWORD _V40_V10vcore_Dlist___Gvector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gvector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListVector2, NULL };
VWEAK VWORD _V0list___Gvector;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0list___Gvector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "list->vector" };
VWEAK VWORD _V40_V10vcore_Dsymbol___Gstring;VWEAK VClosure _VW_V40_V10vcore_Dsymbol___Gstring = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolString2, NULL };
VWEAK VWORD _V0symbol___Gstring;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0symbol___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "symbol->string" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V40_V10vcore_Dstring___Gnumber;VWEAK VClosure _VW_V40_V10vcore_Dstring___Gnumber = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringNumber2, NULL };
VWEAK VWORD _V0string___Gnumber;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0string___Gnumber = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "string->number" };
VWEAK VWORD _V40_V10vcore_Dstring___Gsymbol;VWEAK VClosure _VW_V40_V10vcore_Dstring___Gsymbol = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringSymbol2, NULL };
VWEAK VWORD _V0string___Gsymbol;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0string___Gsymbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "string->symbol" };
VWEAK VWORD _V40_V10vcore_Dstring__length;VWEAK VClosure _VW_V40_V10vcore_Dstring__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringLength2, NULL };
VWEAK VWORD _V0string__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-length" };
VWEAK VWORD _V40_V10vcore_Dstring__set_B;VWEAK VClosure _VW_V40_V10vcore_Dstring__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringSet2, NULL };
VWEAK VWORD _V0string__set_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0string__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "string-set!" };
VWEAK VWORD _V40_V10vcore_Dstring__ref;VWEAK VClosure _VW_V40_V10vcore_Dstring__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringRef2, NULL };
VWEAK VWORD _V0string__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0string__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "string-ref" };
VWEAK VWORD _V40_V10vcore_Dstring__copy_B;VWEAK VClosure _VW_V40_V10vcore_Dstring__copy_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringCopy2, NULL };
VWEAK VWORD _V0string__copy_B;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0string__copy_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "string-copy!" };
VWEAK VWORD _V0string__copy;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0string__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "string-copy" };
VWEAK VWORD _V40_V10vcore_Dsubstring;VWEAK VClosure _VW_V40_V10vcore_Dsubstring = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSubstring2, NULL };
VWEAK VWORD _V0substring;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0substring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "substring" };
VWEAK VWORD _V40_V10vcore_Dmake__string;VWEAK VClosure _VW_V40_V10vcore_Dmake__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeString2, NULL };
VWEAK VWORD _V0make__string;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "make-string" };
VWEAK VWORD _V0list___Gstring;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0list___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "list->string" };
VWEAK VWORD _V0string___Glist;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0string___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "string->list" };
VWEAK VWORD _V0split__at__right;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0split__at__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "split-at-right" };
VWEAK VWORD _V0num__pairs;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0num__pairs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "num-pairs" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0assq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assq" };
VWEAK VWORD _V0member;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0member = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "member" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0memq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memq" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0make__list;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0make__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "make-list" };
VWEAK VWORD _V0list__copy;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0list__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "list-copy" };
VWEAK VWORD _V0list__set_B;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0list__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "list-set!" };
VWEAK VWORD _V0list__ref;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0list__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "list-ref" };
VWEAK VWORD _V0list__tail;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0list__tail = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "list-tail" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0list_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0list_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "list\?" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0cddddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cddddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cddddr" };
VWEAK VWORD _V0cdddar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdddar" };
VWEAK VWORD _V0cddadr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cddadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cddadr" };
VWEAK VWORD _V0cddaar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cddaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cddaar" };
VWEAK VWORD _V0cdaddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdaddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdaddr" };
VWEAK VWORD _V0cdadar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdadar" };
VWEAK VWORD _V0cdaadr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdaadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdaadr" };
VWEAK VWORD _V0cdaaar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdaaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdaaar" };
VWEAK VWORD _V0cadddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadddr" };
VWEAK VWORD _V0caddar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caddar" };
VWEAK VWORD _V0cadadr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadadr" };
VWEAK VWORD _V0cadaar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadaar" };
VWEAK VWORD _V0caaddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caaddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caaddr" };
VWEAK VWORD _V0caadar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caadar" };
VWEAK VWORD _V0caaadr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caaadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caaadr" };
VWEAK VWORD _V0caaaar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caaaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caaaar" };
VWEAK VWORD _V0cdddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdddr" };
VWEAK VWORD _V0cddar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cddar" };
VWEAK VWORD _V0cdadr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdadr" };
VWEAK VWORD _V0cdaar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdaar" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0caadr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caadr" };
VWEAK VWORD _V0caaar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caaar" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V40_V10vcore_Dset__cdr_B;VWEAK VClosure _VW_V40_V10vcore_Dset__cdr_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCdr2, NULL };
VWEAK VWORD _V0set__cdr_B;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0set__cdr_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "set-cdr!" };
VWEAK VWORD _V40_V10vcore_Dset__car_B;VWEAK VClosure _VW_V40_V10vcore_Dset__car_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCar2, NULL };
VWEAK VWORD _V0set__car_B;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0set__car_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "set-car!" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V40_V10vcore_Dcons;VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0pow;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0pow = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "pow" };
VWEAK VWORD _V0expt;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0expt = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "expt" };
VWEAK VWORD _V0log;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0log = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "log" };
VWEAK VWORD _V0exp;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0exp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "exp" };
VWEAK VWORD _V0atan;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0atan = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "atan" };
VWEAK VWORD _V0acos;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0acos = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "acos" };
VWEAK VWORD _V0asin;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0asin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "asin" };
VWEAK VWORD _V0tan;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0tan = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "tan" };
VWEAK VWORD _V0cos;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cos = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cos" };
VWEAK VWORD _V0sin;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0sin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "sin" };
VWEAK VWORD _V0round;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0round = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "round" };
VWEAK VWORD _V0floor;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0floor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "floor" };
VWEAK VWORD _V0ceiling;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0ceiling = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "ceiling" };
VWEAK VWORD _V0sqrt;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0sqrt = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "sqrt" };
VWEAK VWORD _V0square;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0square = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "square" };
VWEAK VWORD _V0abs;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0abs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "abs" };
VWEAK VWORD _V0min;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0min = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "min" };
VWEAK VWORD _V0max;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0max = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "max" };
VWEAK VWORD _V40_V10vcore_Dremainder;VWEAK VClosure _VW_V40_V10vcore_Dremainder = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRem2, NULL };
VWEAK VWORD _V0remainder;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0remainder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "remainder" };
VWEAK VWORD _V40_V10vcore_Dquotient;VWEAK VClosure _VW_V40_V10vcore_Dquotient = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VQuot2, NULL };
VWEAK VWORD _V0quotient;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0quotient = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "quotient" };
VWEAK VWORD _V40_V10vcore_D_W;VWEAK VClosure _VW_V40_V10vcore_D_W = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDiv2, NULL };
VWEAK VWORD _V0_W;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_W = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "/" };
VWEAK VWORD _V40_V10vcore_D_S;VWEAK VClosure _VW_V40_V10vcore_D_S = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMul2, NULL };
VWEAK VWORD _V0_S;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "*" };
VWEAK VWORD _V40_V10vcore_D__;VWEAK VClosure _VW_V40_V10vcore_D__ = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSub2, NULL };
VWEAK VWORD _V0__;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "-" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0zero_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0zero_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "zero\?" };
VWEAK VWORD _V0negative_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0negative_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "negative\?" };
VWEAK VWORD _V0positive_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0positive_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "positive\?" };
VWEAK VWORD _V0rational_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0rational_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "rational\?" };
VWEAK VWORD _V0complex_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0complex_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "complex\?" };
VWEAK VWORD _V0number_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0number_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "number\?" };
VWEAK VWORD _V0exact___Ginexact;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0exact___Ginexact = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "exact->inexact" };
VWEAK VWORD _V40_V10vcore_Dinexact;VWEAK VClosure _VW_V40_V10vcore_Dinexact = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VInexact, NULL };
VWEAK VWORD _V0inexact;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0inexact = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "inexact" };
VWEAK VWORD _V0inexact___Gexact;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0inexact___Gexact = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "inexact->exact" };
VWEAK VWORD _V40_V10vcore_Dexact;VWEAK VClosure _VW_V40_V10vcore_Dexact = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VExact, NULL };
VWEAK VWORD _V0exact;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0exact = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "exact" };
VWEAK VWORD _V40_V10vcore_D_G_E;VWEAK VClosure _VW_V40_V10vcore_D_G_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpGe, NULL };
VWEAK VWORD _V0_G_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_G_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, ">=" };
VWEAK VWORD _V40_V10vcore_D_L_E;VWEAK VClosure _VW_V40_V10vcore_D_L_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpLe, NULL };
VWEAK VWORD _V0_L_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "<=" };
VWEAK VWORD _V40_V10vcore_D_G;VWEAK VClosure _VW_V40_V10vcore_D_G = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpGt, NULL };
VWEAK VWORD _V0_G;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, ">" };
VWEAK VWORD _V40_V10vcore_D_E;VWEAK VClosure _VW_V40_V10vcore_D_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpEq, NULL };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
VWEAK VWORD _V40_V10vcore_D_L;VWEAK VClosure _VW_V40_V10vcore_D_L = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpLt, NULL };
VWEAK VWORD _V0_L;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_L = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "<" };
VWEAK VWORD _V40_V10vcore_Dnot;VWEAK VClosure _VW_V40_V10vcore_Dnot = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNot2, NULL };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V40_V10vcore_Dblob_E_Q;VWEAK VClosure _VW_V40_V10vcore_Dblob_E_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBlobEqv2, NULL };
VWEAK VWORD _V0string_E_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0string_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "string=\?" };
VWEAK VWORD _V0symbol_E_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0symbol_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "symbol=\?" };
VWEAK VWORD _V0char_E_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0char_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "char=\?" };
VWEAK VWORD _V0boolean_E_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0boolean_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "boolean=\?" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V40_V10vcore_Dforeign__pointer_Q;VWEAK VClosure _VW_V40_V10vcore_Dforeign__pointer_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VForeignPointerP2, NULL };
VWEAK VWORD _V0foreign__pointer_Q;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0foreign__pointer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "foreign-pointer\?" };
VWEAK VWORD _V40_V10vcore_Dnullptr_Q;VWEAK VClosure _VW_V40_V10vcore_Dnullptr_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNullptrP2, NULL };
VWEAK VWORD _V0nullptr_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0nullptr_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "nullptr\?" };
VWEAK VWORD _V40_V10vcore_Dchar_Q;VWEAK VClosure _VW_V40_V10vcore_Dchar_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCharP2, NULL };
VWEAK VWORD _V0char_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0char_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "char\?" };
VWEAK VWORD _V0integer_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0integer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "integer\?" };
VWEAK VWORD _V0real_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0real_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "real\?" };
VWEAK VWORD _V40_V10vcore_Ddouble_Q;VWEAK VClosure _VW_V40_V10vcore_Ddouble_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDoubleP2, NULL };
VWEAK VWORD _V0inexact_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0inexact_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "inexact\?" };
VWEAK VWORD _V0exact__integer_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0exact__integer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "exact-integer\?" };
VWEAK VWORD _V0exact_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0exact_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "exact\?" };
VWEAK VWORD _V40_V10vcore_Dstring_Q;VWEAK VClosure _VW_V40_V10vcore_Dstring_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringP2, NULL };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "string\?" };
VWEAK VWORD _V40_V10vcore_Dsymbol_Q;VWEAK VClosure _VW_V40_V10vcore_Dsymbol_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolP2, NULL };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V40_V10vcore_Dprocedure_Q;VWEAK VClosure _VW_V40_V10vcore_Dprocedure_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VProcedureP2, NULL };
VWEAK VWORD _V0procedure_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0procedure_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "procedure\?" };
VWEAK VWORD _V40_V10vcore_Drecord_Q;VWEAK VClosure _VW_V40_V10vcore_Drecord_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordP2, NULL };
VWEAK VWORD _V0record_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0record_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "record\?" };
VWEAK VWORD _V40_V10vcore_Dhash__table_Q;VWEAK VClosure _VW_V40_V10vcore_Dhash__table_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableP, NULL };
VWEAK VWORD _V0hash__table_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0hash__table_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "hash-table\?" };
VWEAK VWORD _V40_V10vcore_Dvector_Q;VWEAK VClosure _VW_V40_V10vcore_Dvector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorP2, NULL };
VWEAK VWORD _V0vector_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "vector\?" };
VWEAK VWORD _V40_V10vcore_Dpair_Q;VWEAK VClosure _VW_V40_V10vcore_Dpair_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPairP2, NULL };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0boolean_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0boolean_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "boolean\?" };
VWEAK VWORD _V40_V10vcore_Deof__object_Q;VWEAK VClosure _VW_V40_V10vcore_Deof__object_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEofP2, NULL };
VWEAK VWORD _V0eof__object_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0eof__object_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "eof-object\?" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D3018 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "printf: unknown format" };
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D3017 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "printf: not enough args for format string" };
static struct { VBlob sym; char bytes[41]; } _V10_Dstring_D3016 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "printf: format string has trailing tilde" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D3015 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "parameter object expects zero arguments" };
VWEAK VWORD _V0parameter;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0parameter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "parameter" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D3014 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "#hash" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D3013 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "#hasheqv" };
VWEAK VWORD _V40_V10vcore_Deqv_Q;VWEAK VClosure _VW_V40_V10vcore_Deqv_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEqv, NULL };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D3012 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "#hasheq" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D3011 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "#(" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D3010 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ",@" };
VWEAK VWORD _V0unquote__splicing;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0unquote__splicing = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "unquote-splicing" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D3009 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "," };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D3008 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "`" };
VWEAK VWORD _V0quasiquote;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quasiquote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D3007 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "'" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D3006 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D3005 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " . " };
VWEAK VWORD _V0ok;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0ok = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "ok" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D3004 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D3003 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "(" };
VWEAK VWORD _V10vcore_Dpush__value;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dpush__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.push-value" };
VWEAK VWORD _V10vcore_Dpop__value;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dpop__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.pop-value" };
VWEAK VWORD _V40_V10vcore_Dget__output__string;VWEAK VClosure _VW_V40_V10vcore_Dget__output__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetOutputString2, NULL };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D3002 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "open-output-string: failed" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D3001 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "open-output-file: failed" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D3000 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "open-input-file: failed" };
VWEAK VWORD _V40_V10vcore_Dclose__stream;VWEAK VClosure _VW_V40_V10vcore_Dclose__stream = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCloseStream2, NULL };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D2999 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "~A" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D2998 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "No such key in hash table" };
VWEAK VWORD _V40_V10vcore_Deq_Q;VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V40_V10vcore_D_P;VWEAK VClosure _VW_V40_V10vcore_D_P = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAdd2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__length;VWEAK VClosure _VW_V40_V10vcore_Dvector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorLength2, NULL };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D2997 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
VWEAK VWORD _V40_V10vcore_Dnull_Q;VWEAK VClosure _VW_V40_V10vcore_Dnull_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNullP2, NULL };
VWEAK VWORD _V40_V10vcore_Dcar;VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
VWEAK VWORD _V40_V10vcore_Dcdr;VWEAK VClosure _VW_V40_V10vcore_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
VWEAK VWORD _V40_V10vcore_Dint_Q;VWEAK VClosure _VW_V40_V10vcore_Dint_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VIntP2, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0sprintf = VEncodePointer(VLookupConstant("_V0sprintf", &_VW_V0sprintf), VPOINTER_OTHER);
  _V0printf = VEncodePointer(VLookupConstant("_V0printf", &_VW_V0printf), VPOINTER_OTHER);
  _V0format = VEncodePointer(VLookupConstant("_V0format", &_VW_V0format), VPOINTER_OTHER);
  _V0writeln = VEncodePointer(VLookupConstant("_V0writeln", &_VW_V0writeln), VPOINTER_OTHER);
  _V0displayln = VEncodePointer(VLookupConstant("_V0displayln", &_VW_V0displayln), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VLookupConstant("_V0atom_Q", &_VW_V0atom_Q), VPOINTER_OTHER);
  _V40_V10vcore_Dawait = VEncodePointer(VLookupConstant("_V40_V10vcore_Dawait", &_VW_V40_V10vcore_Dawait), VPOINTER_CLOSURE);
  _V0await = VEncodePointer(VLookupConstant("_V0await", &_VW_V0await), VPOINTER_OTHER);
  _V40_V10vcore_Dasync = VEncodePointer(VLookupConstant("_V40_V10vcore_Dasync", &_VW_V40_V10vcore_Dasync), VPOINTER_CLOSURE);
  _V0async = VEncodePointer(VLookupConstant("_V0async", &_VW_V0async), VPOINTER_OTHER);
  _V0fiber__map = VEncodePointer(VLookupConstant("_V0fiber__map", &_VW_V0fiber__map), VPOINTER_OTHER);
  _V40_V10vcore_Dfiber__fork__list = VEncodePointer(VLookupConstant("_V40_V10vcore_Dfiber__fork__list", &_VW_V40_V10vcore_Dfiber__fork__list), VPOINTER_CLOSURE);
  _V0fiber__fork__list = VEncodePointer(VLookupConstant("_V0fiber__fork__list", &_VW_V0fiber__fork__list), VPOINTER_OTHER);
  _V0fiber__fork = VEncodePointer(VLookupConstant("_V0fiber__fork", &_VW_V0fiber__fork), VPOINTER_OTHER);
  _V40_V10vcore_Dbit__count = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbit__count", &_VW_V40_V10vcore_Dbit__count), VPOINTER_CLOSURE);
  _V0bit__count = VEncodePointer(VLookupConstant("_V0bit__count", &_VW_V0bit__count), VPOINTER_OTHER);
  _V40_V10vcore_Darithmetic__shift = VEncodePointer(VLookupConstant("_V40_V10vcore_Darithmetic__shift", &_VW_V40_V10vcore_Darithmetic__shift), VPOINTER_CLOSURE);
  _V0arithmetic__shift = VEncodePointer(VLookupConstant("_V0arithmetic__shift", &_VW_V0arithmetic__shift), VPOINTER_OTHER);
  _V40_V10vcore_Dbitwise__orc2 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__orc2", &_VW_V40_V10vcore_Dbitwise__orc2), VPOINTER_CLOSURE);
  _V0bitwise__orc2 = VEncodePointer(VLookupConstant("_V0bitwise__orc2", &_VW_V0bitwise__orc2), VPOINTER_OTHER);
  _V40_V10vcore_Dbitwise__orc1 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__orc1", &_VW_V40_V10vcore_Dbitwise__orc1), VPOINTER_CLOSURE);
  _V0bitwise__orc1 = VEncodePointer(VLookupConstant("_V0bitwise__orc1", &_VW_V0bitwise__orc1), VPOINTER_OTHER);
  _V40_V10vcore_Dbitwise__andc2 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__andc2", &_VW_V40_V10vcore_Dbitwise__andc2), VPOINTER_CLOSURE);
  _V0bitwise__andc2 = VEncodePointer(VLookupConstant("_V0bitwise__andc2", &_VW_V0bitwise__andc2), VPOINTER_OTHER);
  _V40_V10vcore_Dbitwise__andc1 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__andc1", &_VW_V40_V10vcore_Dbitwise__andc1), VPOINTER_CLOSURE);
  _V0bitwise__andc1 = VEncodePointer(VLookupConstant("_V0bitwise__andc1", &_VW_V0bitwise__andc1), VPOINTER_OTHER);
  _V40_V10vcore_Dbitwise__nor = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__nor", &_VW_V40_V10vcore_Dbitwise__nor), VPOINTER_CLOSURE);
  _V0bitwise__nor = VEncodePointer(VLookupConstant("_V0bitwise__nor", &_VW_V0bitwise__nor), VPOINTER_OTHER);
  _V40_V10vcore_Dbitwise__nand = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__nand", &_VW_V40_V10vcore_Dbitwise__nand), VPOINTER_CLOSURE);
  _V0bitwise__nand = VEncodePointer(VLookupConstant("_V0bitwise__nand", &_VW_V0bitwise__nand), VPOINTER_OTHER);
  _V0bitwise__eqv = VEncodePointer(VLookupConstant("_V0bitwise__eqv", &_VW_V0bitwise__eqv), VPOINTER_OTHER);
  _V0bitwise__xnor = VEncodePointer(VLookupConstant("_V0bitwise__xnor", &_VW_V0bitwise__xnor), VPOINTER_OTHER);
  _V0bitwise__xor = VEncodePointer(VLookupConstant("_V0bitwise__xor", &_VW_V0bitwise__xor), VPOINTER_OTHER);
  _V0bitwise__ior = VEncodePointer(VLookupConstant("_V0bitwise__ior", &_VW_V0bitwise__ior), VPOINTER_OTHER);
  _V0bitwise__or = VEncodePointer(VLookupConstant("_V0bitwise__or", &_VW_V0bitwise__or), VPOINTER_OTHER);
  _V0bitwise__and = VEncodePointer(VLookupConstant("_V0bitwise__and", &_VW_V0bitwise__and), VPOINTER_OTHER);
  _V40_V10vcore_Dbitwise__not = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__not", &_VW_V40_V10vcore_Dbitwise__not), VPOINTER_CLOSURE);
  _V0bitwise__not = VEncodePointer(VLookupConstant("_V0bitwise__not", &_VW_V0bitwise__not), VPOINTER_OTHER);
  _V40_V10vcore_Djiffies__per__second = VEncodePointer(VLookupConstant("_V40_V10vcore_Djiffies__per__second", &_VW_V40_V10vcore_Djiffies__per__second), VPOINTER_CLOSURE);
  _V0jiffies__per__second = VEncodePointer(VLookupConstant("_V0jiffies__per__second", &_VW_V0jiffies__per__second), VPOINTER_OTHER);
  _V40_V10vcore_Dcurrent__jiffy = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcurrent__jiffy", &_VW_V40_V10vcore_Dcurrent__jiffy), VPOINTER_CLOSURE);
  _V0current__jiffy = VEncodePointer(VLookupConstant("_V0current__jiffy", &_VW_V0current__jiffy), VPOINTER_OTHER);
  _V40_V10vcore_Dexit = VEncodePointer(VLookupConstant("_V40_V10vcore_Dexit", &_VW_V40_V10vcore_Dexit), VPOINTER_CLOSURE);
  _V0exit = VEncodePointer(VLookupConstant("_V0exit", &_VW_V0exit), VPOINTER_OTHER);
  _V0file__exists_Q = VEncodePointer(VLookupConstant("_V0file__exists_Q", &_VW_V0file__exists_Q), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__temporary__file = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__temporary__file", &_VW_V40_V10vcore_Dmake__temporary__file), VPOINTER_CLOSURE);
  _V0make__temporary__file = VEncodePointer(VLookupConstant("_V0make__temporary__file", &_VW_V0make__temporary__file), VPOINTER_OTHER);
  _V40_V10vcore_Dopen__output__process = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__output__process", &_VW_V40_V10vcore_Dopen__output__process), VPOINTER_CLOSURE);
  _V0open__output__process = VEncodePointer(VLookupConstant("_V0open__output__process", &_VW_V0open__output__process), VPOINTER_OTHER);
  _V40_V10vcore_Dopen__input__process = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__input__process", &_VW_V40_V10vcore_Dopen__input__process), VPOINTER_CLOSURE);
  _V0open__input__process = VEncodePointer(VLookupConstant("_V0open__input__process", &_VW_V0open__input__process), VPOINTER_OTHER);
  _V40_V10vcore_Dsystem = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsystem", &_VW_V40_V10vcore_Dsystem), VPOINTER_CLOSURE);
  _V0system = VEncodePointer(VLookupConstant("_V0system", &_VW_V0system), VPOINTER_OTHER);
  _V40_V10vcore_Dcommand__line = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcommand__line", &_VW_V40_V10vcore_Dcommand__line), VPOINTER_CLOSURE);
  _V0command__line = VEncodePointer(VLookupConstant("_V0command__line", &_VW_V0command__line), VPOINTER_OTHER);
  _V0with__exception__handler = VEncodePointer(VLookupConstant("_V0with__exception__handler", &_VW_V0with__exception__handler), VPOINTER_OTHER);
  _V0raise__continuable = VEncodePointer(VLookupConstant("_V0raise__continuable", &_VW_V0raise__continuable), VPOINTER_OTHER);
  _V40_V10vcore_Draise = VEncodePointer(VLookupConstant("_V40_V10vcore_Draise", &_VW_V40_V10vcore_Draise), VPOINTER_CLOSURE);
  _V0raise = VEncodePointer(VLookupConstant("_V0raise", &_VW_V0raise), VPOINTER_OTHER);
  _V0make__parameter = VEncodePointer(VLookupConstant("_V0make__parameter", &_VW_V0make__parameter), VPOINTER_OTHER);
  _V10vcore_Dmutator = VEncodePointer(VLookupConstant("_V10vcore_Dmutator", &_VW_V10vcore_Dmutator), VPOINTER_OTHER);
  _V10vcore_Dsetter = VEncodePointer(VLookupConstant("_V10vcore_Dsetter", &_VW_V10vcore_Dsetter), VPOINTER_OTHER);
  _V0mutator = VEncodePointer(VLookupConstant("_V0mutator", &_VW_V0mutator), VPOINTER_OTHER);
  _V0setter = VEncodePointer(VLookupConstant("_V0setter", &_VW_V0setter), VPOINTER_OTHER);
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V40_V10vcore_Dapply = VEncodePointer(VLookupConstant("_V40_V10vcore_Dapply", &_VW_V40_V10vcore_Dapply), VPOINTER_CLOSURE);
  _V0apply = VEncodePointer(VLookupConstant("_V0apply", &_VW_V0apply), VPOINTER_OTHER);
  _V40_V10vcore_Dcall__with__values = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcall__with__values", &_VW_V40_V10vcore_Dcall__with__values), VPOINTER_CLOSURE);
  _V0call__with__values = VEncodePointer(VLookupConstant("_V0call__with__values", &_VW_V0call__with__values), VPOINTER_OTHER);
  _V0call__with__current__continuation = VEncodePointer(VLookupConstant("_V0call__with__current__continuation", &_VW_V0call__with__current__continuation), VPOINTER_OTHER);
  _V40_V10vcore_Dcall_Wcc = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcall_Wcc", &_VW_V40_V10vcore_Dcall_Wcc), VPOINTER_CLOSURE);
  _V0call_Wcc = VEncodePointer(VLookupConstant("_V0call_Wcc", &_VW_V0call_Wcc), VPOINTER_OTHER);
  _V0write = VEncodePointer(VLookupConstant("_V0write", &_VW_V0write), VPOINTER_OTHER);
  _V0display = VEncodePointer(VLookupConstant("_V0display", &_VW_V0display), VPOINTER_OTHER);
  _V0newline = VEncodePointer(VLookupConstant("_V0newline", &_VW_V0newline), VPOINTER_OTHER);
  _V0read = VEncodePointer(VLookupConstant("_V0read", &_VW_V0read), VPOINTER_OTHER);
  _V0read__line = VEncodePointer(VLookupConstant("_V0read__line", &_VW_V0read__line), VPOINTER_OTHER);
  _V0read__char = VEncodePointer(VLookupConstant("_V0read__char", &_VW_V0read__char), VPOINTER_OTHER);
  _V0call__with__output__file = VEncodePointer(VLookupConstant("_V0call__with__output__file", &_VW_V0call__with__output__file), VPOINTER_OTHER);
  _V0call__with__input__file = VEncodePointer(VLookupConstant("_V0call__with__input__file", &_VW_V0call__with__input__file), VPOINTER_OTHER);
  _V0call__with__port = VEncodePointer(VLookupConstant("_V0call__with__port", &_VW_V0call__with__port), VPOINTER_OTHER);
  _V0with__input__from__file = VEncodePointer(VLookupConstant("_V0with__input__from__file", &_VW_V0with__input__from__file), VPOINTER_OTHER);
  _V0with__output__to__file = VEncodePointer(VLookupConstant("_V0with__output__to__file", &_VW_V0with__output__to__file), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VLookupConstant("_V0get__output__string", &_VW_V0get__output__string), VPOINTER_OTHER);
  _V0open__output__string = VEncodePointer(VLookupConstant("_V0open__output__string", &_VW_V0open__output__string), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VLookupConstant("_V0close__port", &_VW_V0close__port), VPOINTER_OTHER);
  _V0open__output__file = VEncodePointer(VLookupConstant("_V0open__output__file", &_VW_V0open__output__file), VPOINTER_OTHER);
  _V0open__input__file = VEncodePointer(VLookupConstant("_V0open__input__file", &_VW_V0open__input__file), VPOINTER_OTHER);
  _V0current__input__port = VEncodePointer(VLookupConstant("_V0current__input__port", &_VW_V0current__input__port), VPOINTER_OTHER);
  _V0current__error__port = VEncodePointer(VLookupConstant("_V0current__error__port", &_VW_V0current__error__port), VPOINTER_OTHER);
  _V0current__output__port = VEncodePointer(VLookupConstant("_V0current__output__port", &_VW_V0current__output__port), VPOINTER_OTHER);
  _V0char__alphabetic_Q = VEncodePointer(VLookupConstant("_V0char__alphabetic_Q", &_VW_V0char__alphabetic_Q), VPOINTER_OTHER);
  _V0char__numeric_Q = VEncodePointer(VLookupConstant("_V0char__numeric_Q", &_VW_V0char__numeric_Q), VPOINTER_OTHER);
  _V0number___Gstring = VEncodePointer(VLookupConstant("_V0number___Gstring", &_VW_V0number___Gstring), VPOINTER_OTHER);
  _V40_V10vcore_Dinteger___Gchar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dinteger___Gchar", &_VW_V40_V10vcore_Dinteger___Gchar), VPOINTER_CLOSURE);
  _V0integer___Gchar = VEncodePointer(VLookupConstant("_V0integer___Gchar", &_VW_V0integer___Gchar), VPOINTER_OTHER);
  _V40_V10vcore_Dchar__integer = VEncodePointer(VLookupConstant("_V40_V10vcore_Dchar__integer", &_VW_V40_V10vcore_Dchar__integer), VPOINTER_CLOSURE);
  _V0char___Ginteger = VEncodePointer(VLookupConstant("_V0char___Ginteger", &_VW_V0char___Ginteger), VPOINTER_OTHER);
  _V0hash__table___Galist = VEncodePointer(VLookupConstant("_V0hash__table___Galist", &_VW_V0hash__table___Galist), VPOINTER_OTHER);
  _V40_V10vcore_Dhash__table__delete_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__delete_B", &_VW_V40_V10vcore_Dhash__table__delete_B), VPOINTER_CLOSURE);
  _V0hash__table__delete_B = VEncodePointer(VLookupConstant("_V0hash__table__delete_B", &_VW_V0hash__table__delete_B), VPOINTER_OTHER);
  _V0hash__table__set_B = VEncodePointer(VLookupConstant("_V0hash__table__set_B", &_VW_V0hash__table__set_B), VPOINTER_OTHER);
  _V0hash__table__ref = VEncodePointer(VLookupConstant("_V0hash__table__ref", &_VW_V0hash__table__ref), VPOINTER_OTHER);
  _V0make__hash__table = VEncodePointer(VLookupConstant("_V0make__hash__table", &_VW_V0make__hash__table), VPOINTER_OTHER);
  _V40_V10vcore_Drecord__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord__length", &_VW_V40_V10vcore_Drecord__length), VPOINTER_CLOSURE);
  _V0record__length = VEncodePointer(VLookupConstant("_V0record__length", &_VW_V0record__length), VPOINTER_OTHER);
  _V40_V10vcore_Drecord__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord__set_B", &_VW_V40_V10vcore_Drecord__set_B), VPOINTER_CLOSURE);
  _V0record__set_B = VEncodePointer(VLookupConstant("_V0record__set_B", &_VW_V0record__set_B), VPOINTER_OTHER);
  _V40_V10vcore_Drecord__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord__ref", &_VW_V40_V10vcore_Drecord__ref), VPOINTER_CLOSURE);
  _V0record__ref = VEncodePointer(VLookupConstant("_V0record__ref", &_VW_V0record__ref), VPOINTER_OTHER);
  _V40_V10vcore_Drecord = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord", &_VW_V40_V10vcore_Drecord), VPOINTER_CLOSURE);
  _V0record = VEncodePointer(VLookupConstant("_V0record", &_VW_V0record), VPOINTER_OTHER);
  _V0typevector_Q = VEncodePointer(VLookupConstant("_V0typevector_Q", &_VW_V0typevector_Q), VPOINTER_OTHER);
  _V0read__bytevector = VEncodePointer(VLookupConstant("_V0read__bytevector", &_VW_V0read__bytevector), VPOINTER_OTHER);
  _V0read__u8vector = VEncodePointer(VLookupConstant("_V0read__u8vector", &_VW_V0read__u8vector), VPOINTER_OTHER);
  _V0bytevector__length = VEncodePointer(VLookupConstant("_V0bytevector__length", &_VW_V0bytevector__length), VPOINTER_OTHER);
  _V0bytevector__u8__set_B = VEncodePointer(VLookupConstant("_V0bytevector__u8__set_B", &_VW_V0bytevector__u8__set_B), VPOINTER_OTHER);
  _V0bytevector__u8__ref = VEncodePointer(VLookupConstant("_V0bytevector__u8__ref", &_VW_V0bytevector__u8__ref), VPOINTER_OTHER);
  _V0bytevector = VEncodePointer(VLookupConstant("_V0bytevector", &_VW_V0bytevector), VPOINTER_OTHER);
  _V0make__bytevector = VEncodePointer(VLookupConstant("_V0make__bytevector", &_VW_V0make__bytevector), VPOINTER_OTHER);
  _V0bytevector___Glist = VEncodePointer(VLookupConstant("_V0bytevector___Glist", &_VW_V0bytevector___Glist), VPOINTER_OTHER);
  _V0list___Gbytevector = VEncodePointer(VLookupConstant("_V0list___Gbytevector", &_VW_V0list___Gbytevector), VPOINTER_OTHER);
  _V0bytevector_Q = VEncodePointer(VLookupConstant("_V0bytevector_Q", &_VW_V0bytevector_Q), VPOINTER_OTHER);
  _V40_V10vcore_Ds8vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds8vector__length", &_VW_V40_V10vcore_Ds8vector__length), VPOINTER_CLOSURE);
  _V0s8vector__length = VEncodePointer(VLookupConstant("_V0s8vector__length", &_VW_V0s8vector__length), VPOINTER_OTHER);
  _V40_V10vcore_Ds8vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds8vector__set_B", &_VW_V40_V10vcore_Ds8vector__set_B), VPOINTER_CLOSURE);
  _V0s8vector__set_B = VEncodePointer(VLookupConstant("_V0s8vector__set_B", &_VW_V0s8vector__set_B), VPOINTER_OTHER);
  _V40_V10vcore_Ds8vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds8vector__ref", &_VW_V40_V10vcore_Ds8vector__ref), VPOINTER_CLOSURE);
  _V0s8vector__ref = VEncodePointer(VLookupConstant("_V0s8vector__ref", &_VW_V0s8vector__ref), VPOINTER_OTHER);
  _V0s8vector = VEncodePointer(VLookupConstant("_V0s8vector", &_VW_V0s8vector), VPOINTER_OTHER);
  _V0make__s8vector = VEncodePointer(VLookupConstant("_V0make__s8vector", &_VW_V0make__s8vector), VPOINTER_OTHER);
  _V0s8vector___Glist = VEncodePointer(VLookupConstant("_V0s8vector___Glist", &_VW_V0s8vector___Glist), VPOINTER_OTHER);
  _V40_V10vcore_Dlist___Gs8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gs8vector", &_VW_V40_V10vcore_Dlist___Gs8vector), VPOINTER_CLOSURE);
  _V0list___Gs8vector = VEncodePointer(VLookupConstant("_V0list___Gs8vector", &_VW_V0list___Gs8vector), VPOINTER_OTHER);
  _V40_V10vcore_Ds8vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds8vector_Q", &_VW_V40_V10vcore_Ds8vector_Q), VPOINTER_CLOSURE);
  _V0s8vector_Q = VEncodePointer(VLookupConstant("_V0s8vector_Q", &_VW_V0s8vector_Q), VPOINTER_OTHER);
  _V40_V10vcore_Du8vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector__length", &_VW_V40_V10vcore_Du8vector__length), VPOINTER_CLOSURE);
  _V0u8vector__length = VEncodePointer(VLookupConstant("_V0u8vector__length", &_VW_V0u8vector__length), VPOINTER_OTHER);
  _V40_V10vcore_Du8vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector__set_B", &_VW_V40_V10vcore_Du8vector__set_B), VPOINTER_CLOSURE);
  _V0u8vector__set_B = VEncodePointer(VLookupConstant("_V0u8vector__set_B", &_VW_V0u8vector__set_B), VPOINTER_OTHER);
  _V40_V10vcore_Du8vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector__ref", &_VW_V40_V10vcore_Du8vector__ref), VPOINTER_CLOSURE);
  _V0u8vector__ref = VEncodePointer(VLookupConstant("_V0u8vector__ref", &_VW_V0u8vector__ref), VPOINTER_OTHER);
  _V0u8vector = VEncodePointer(VLookupConstant("_V0u8vector", &_VW_V0u8vector), VPOINTER_OTHER);
  _V0make__u8vector = VEncodePointer(VLookupConstant("_V0make__u8vector", &_VW_V0make__u8vector), VPOINTER_OTHER);
  _V0u8vector___Glist = VEncodePointer(VLookupConstant("_V0u8vector___Glist", &_VW_V0u8vector___Glist), VPOINTER_OTHER);
  _V40_V10vcore_Dlist___Gu8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gu8vector", &_VW_V40_V10vcore_Dlist___Gu8vector), VPOINTER_CLOSURE);
  _V0list___Gu8vector = VEncodePointer(VLookupConstant("_V0list___Gu8vector", &_VW_V0list___Gu8vector), VPOINTER_OTHER);
  _V40_V10vcore_Du8vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector_Q", &_VW_V40_V10vcore_Du8vector_Q), VPOINTER_CLOSURE);
  _V0u8vector_Q = VEncodePointer(VLookupConstant("_V0u8vector_Q", &_VW_V0u8vector_Q), VPOINTER_OTHER);
  _V40_V10vcore_Ds16vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector__length", &_VW_V40_V10vcore_Ds16vector__length), VPOINTER_CLOSURE);
  _V0s16vector__length = VEncodePointer(VLookupConstant("_V0s16vector__length", &_VW_V0s16vector__length), VPOINTER_OTHER);
  _V40_V10vcore_Ds16vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector__set_B", &_VW_V40_V10vcore_Ds16vector__set_B), VPOINTER_CLOSURE);
  _V0s16vector__set_B = VEncodePointer(VLookupConstant("_V0s16vector__set_B", &_VW_V0s16vector__set_B), VPOINTER_OTHER);
  _V40_V10vcore_Ds16vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector__ref", &_VW_V40_V10vcore_Ds16vector__ref), VPOINTER_CLOSURE);
  _V0s16vector__ref = VEncodePointer(VLookupConstant("_V0s16vector__ref", &_VW_V0s16vector__ref), VPOINTER_OTHER);
  _V0s16vector = VEncodePointer(VLookupConstant("_V0s16vector", &_VW_V0s16vector), VPOINTER_OTHER);
  _V0make__s16vector = VEncodePointer(VLookupConstant("_V0make__s16vector", &_VW_V0make__s16vector), VPOINTER_OTHER);
  _V0s16vector___Glist = VEncodePointer(VLookupConstant("_V0s16vector___Glist", &_VW_V0s16vector___Glist), VPOINTER_OTHER);
  _V40_V10vcore_Dlist___Gs16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gs16vector", &_VW_V40_V10vcore_Dlist___Gs16vector), VPOINTER_CLOSURE);
  _V0list___Gs16vector = VEncodePointer(VLookupConstant("_V0list___Gs16vector", &_VW_V0list___Gs16vector), VPOINTER_OTHER);
  _V40_V10vcore_Ds16vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector_Q", &_VW_V40_V10vcore_Ds16vector_Q), VPOINTER_CLOSURE);
  _V0s16vector_Q = VEncodePointer(VLookupConstant("_V0s16vector_Q", &_VW_V0s16vector_Q), VPOINTER_OTHER);
  _V40_V10vcore_Du16vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector__length", &_VW_V40_V10vcore_Du16vector__length), VPOINTER_CLOSURE);
  _V0u16vector__length = VEncodePointer(VLookupConstant("_V0u16vector__length", &_VW_V0u16vector__length), VPOINTER_OTHER);
  _V40_V10vcore_Du16vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector__set_B", &_VW_V40_V10vcore_Du16vector__set_B), VPOINTER_CLOSURE);
  _V0u16vector__set_B = VEncodePointer(VLookupConstant("_V0u16vector__set_B", &_VW_V0u16vector__set_B), VPOINTER_OTHER);
  _V40_V10vcore_Du16vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector__ref", &_VW_V40_V10vcore_Du16vector__ref), VPOINTER_CLOSURE);
  _V0u16vector__ref = VEncodePointer(VLookupConstant("_V0u16vector__ref", &_VW_V0u16vector__ref), VPOINTER_OTHER);
  _V0u16vector = VEncodePointer(VLookupConstant("_V0u16vector", &_VW_V0u16vector), VPOINTER_OTHER);
  _V0make__u16vector = VEncodePointer(VLookupConstant("_V0make__u16vector", &_VW_V0make__u16vector), VPOINTER_OTHER);
  _V0u16vector___Glist = VEncodePointer(VLookupConstant("_V0u16vector___Glist", &_VW_V0u16vector___Glist), VPOINTER_OTHER);
  _V40_V10vcore_Dlist___Gu16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gu16vector", &_VW_V40_V10vcore_Dlist___Gu16vector), VPOINTER_CLOSURE);
  _V0list___Gu16vector = VEncodePointer(VLookupConstant("_V0list___Gu16vector", &_VW_V0list___Gu16vector), VPOINTER_OTHER);
  _V40_V10vcore_Du16vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector_Q", &_VW_V40_V10vcore_Du16vector_Q), VPOINTER_CLOSURE);
  _V0u16vector_Q = VEncodePointer(VLookupConstant("_V0u16vector_Q", &_VW_V0u16vector_Q), VPOINTER_OTHER);
  _V40_V10vcore_Ds32vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector__length", &_VW_V40_V10vcore_Ds32vector__length), VPOINTER_CLOSURE);
  _V0s32vector__length = VEncodePointer(VLookupConstant("_V0s32vector__length", &_VW_V0s32vector__length), VPOINTER_OTHER);
  _V40_V10vcore_Ds32vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector__set_B", &_VW_V40_V10vcore_Ds32vector__set_B), VPOINTER_CLOSURE);
  _V0s32vector__set_B = VEncodePointer(VLookupConstant("_V0s32vector__set_B", &_VW_V0s32vector__set_B), VPOINTER_OTHER);
  _V40_V10vcore_Ds32vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector__ref", &_VW_V40_V10vcore_Ds32vector__ref), VPOINTER_CLOSURE);
  _V0s32vector__ref = VEncodePointer(VLookupConstant("_V0s32vector__ref", &_VW_V0s32vector__ref), VPOINTER_OTHER);
  _V0s32vector = VEncodePointer(VLookupConstant("_V0s32vector", &_VW_V0s32vector), VPOINTER_OTHER);
  _V0make__s32vector = VEncodePointer(VLookupConstant("_V0make__s32vector", &_VW_V0make__s32vector), VPOINTER_OTHER);
  _V0s32vector___Glist = VEncodePointer(VLookupConstant("_V0s32vector___Glist", &_VW_V0s32vector___Glist), VPOINTER_OTHER);
  _V40_V10vcore_Dlist___Gs32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gs32vector", &_VW_V40_V10vcore_Dlist___Gs32vector), VPOINTER_CLOSURE);
  _V0list___Gs32vector = VEncodePointer(VLookupConstant("_V0list___Gs32vector", &_VW_V0list___Gs32vector), VPOINTER_OTHER);
  _V40_V10vcore_Ds32vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector_Q", &_VW_V40_V10vcore_Ds32vector_Q), VPOINTER_CLOSURE);
  _V0s32vector_Q = VEncodePointer(VLookupConstant("_V0s32vector_Q", &_VW_V0s32vector_Q), VPOINTER_OTHER);
  _V40_V10vcore_Df32vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector__length", &_VW_V40_V10vcore_Df32vector__length), VPOINTER_CLOSURE);
  _V0f32vector__length = VEncodePointer(VLookupConstant("_V0f32vector__length", &_VW_V0f32vector__length), VPOINTER_OTHER);
  _V40_V10vcore_Df32vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector__set_B", &_VW_V40_V10vcore_Df32vector__set_B), VPOINTER_CLOSURE);
  _V0f32vector__set_B = VEncodePointer(VLookupConstant("_V0f32vector__set_B", &_VW_V0f32vector__set_B), VPOINTER_OTHER);
  _V40_V10vcore_Df32vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector__ref", &_VW_V40_V10vcore_Df32vector__ref), VPOINTER_CLOSURE);
  _V0f32vector__ref = VEncodePointer(VLookupConstant("_V0f32vector__ref", &_VW_V0f32vector__ref), VPOINTER_OTHER);
  _V0f32vector = VEncodePointer(VLookupConstant("_V0f32vector", &_VW_V0f32vector), VPOINTER_OTHER);
  _V0make__f32vector = VEncodePointer(VLookupConstant("_V0make__f32vector", &_VW_V0make__f32vector), VPOINTER_OTHER);
  _V0f32vector___Glist = VEncodePointer(VLookupConstant("_V0f32vector___Glist", &_VW_V0f32vector___Glist), VPOINTER_OTHER);
  _V40_V10vcore_Dlist___Gf32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gf32vector", &_VW_V40_V10vcore_Dlist___Gf32vector), VPOINTER_CLOSURE);
  _V0list___Gf32vector = VEncodePointer(VLookupConstant("_V0list___Gf32vector", &_VW_V0list___Gf32vector), VPOINTER_OTHER);
  _V40_V10vcore_Df32vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector_Q", &_VW_V40_V10vcore_Df32vector_Q), VPOINTER_CLOSURE);
  _V0f32vector_Q = VEncodePointer(VLookupConstant("_V0f32vector_Q", &_VW_V0f32vector_Q), VPOINTER_OTHER);
  _V40_V10vcore_Df64vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector__length", &_VW_V40_V10vcore_Df64vector__length), VPOINTER_CLOSURE);
  _V0f64vector__length = VEncodePointer(VLookupConstant("_V0f64vector__length", &_VW_V0f64vector__length), VPOINTER_OTHER);
  _V40_V10vcore_Df64vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector__set_B", &_VW_V40_V10vcore_Df64vector__set_B), VPOINTER_CLOSURE);
  _V0f64vector__set_B = VEncodePointer(VLookupConstant("_V0f64vector__set_B", &_VW_V0f64vector__set_B), VPOINTER_OTHER);
  _V40_V10vcore_Df64vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector__ref", &_VW_V40_V10vcore_Df64vector__ref), VPOINTER_CLOSURE);
  _V0f64vector__ref = VEncodePointer(VLookupConstant("_V0f64vector__ref", &_VW_V0f64vector__ref), VPOINTER_OTHER);
  _V0f64vector = VEncodePointer(VLookupConstant("_V0f64vector", &_VW_V0f64vector), VPOINTER_OTHER);
  _V0make__f64vector = VEncodePointer(VLookupConstant("_V0make__f64vector", &_VW_V0make__f64vector), VPOINTER_OTHER);
  _V0f64vector___Glist = VEncodePointer(VLookupConstant("_V0f64vector___Glist", &_VW_V0f64vector___Glist), VPOINTER_OTHER);
  _V40_V10vcore_Dlist___Gf64vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gf64vector", &_VW_V40_V10vcore_Dlist___Gf64vector), VPOINTER_CLOSURE);
  _V0list___Gf64vector = VEncodePointer(VLookupConstant("_V0list___Gf64vector", &_VW_V0list___Gf64vector), VPOINTER_OTHER);
  _V40_V10vcore_Df64vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector_Q", &_VW_V40_V10vcore_Df64vector_Q), VPOINTER_CLOSURE);
  _V0f64vector_Q = VEncodePointer(VLookupConstant("_V0f64vector_Q", &_VW_V0f64vector_Q), VPOINTER_OTHER);
  _V0vector__fill_B = VEncodePointer(VLookupConstant("_V0vector__fill_B", &_VW_V0vector__fill_B), VPOINTER_OTHER);
  _V0vector__append = VEncodePointer(VLookupConstant("_V0vector__append", &_VW_V0vector__append), VPOINTER_OTHER);
  _V0vector__for__each = VEncodePointer(VLookupConstant("_V0vector__for__each", &_VW_V0vector__for__each), VPOINTER_OTHER);
  _V0vector__map = VEncodePointer(VLookupConstant("_V0vector__map", &_VW_V0vector__map), VPOINTER_OTHER);
  _V0vector__length = VEncodePointer(VLookupConstant("_V0vector__length", &_VW_V0vector__length), VPOINTER_OTHER);
  _V40_V10vcore_Dvector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__set_B", &_VW_V40_V10vcore_Dvector__set_B), VPOINTER_CLOSURE);
  _V0vector__set_B = VEncodePointer(VLookupConstant("_V0vector__set_B", &_VW_V0vector__set_B), VPOINTER_OTHER);
  _V40_V10vcore_Dvector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__ref", &_VW_V40_V10vcore_Dvector__ref), VPOINTER_CLOSURE);
  _V0vector__ref = VEncodePointer(VLookupConstant("_V0vector__ref", &_VW_V0vector__ref), VPOINTER_OTHER);
  _V0vector = VEncodePointer(VLookupConstant("_V0vector", &_VW_V0vector), VPOINTER_OTHER);
  _V0vector__copy_B = VEncodePointer(VLookupConstant("_V0vector__copy_B", &_VW_V0vector__copy_B), VPOINTER_OTHER);
  _V0vector__copy = VEncodePointer(VLookupConstant("_V0vector__copy", &_VW_V0vector__copy), VPOINTER_OTHER);
  _V0make__vector = VEncodePointer(VLookupConstant("_V0make__vector", &_VW_V0make__vector), VPOINTER_OTHER);
  _V0vector___Glist = VEncodePointer(VLookupConstant("_V0vector___Glist", &_VW_V0vector___Glist), VPOINTER_OTHER);
  _V40_V10vcore_Dlist___Gvector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gvector", &_VW_V40_V10vcore_Dlist___Gvector), VPOINTER_CLOSURE);
  _V0list___Gvector = VEncodePointer(VLookupConstant("_V0list___Gvector", &_VW_V0list___Gvector), VPOINTER_OTHER);
  _V40_V10vcore_Dsymbol___Gstring = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol___Gstring", &_VW_V40_V10vcore_Dsymbol___Gstring), VPOINTER_CLOSURE);
  _V0symbol___Gstring = VEncodePointer(VLookupConstant("_V0symbol___Gstring", &_VW_V0symbol___Gstring), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VLookupConstant("_V0string__append", &_VW_V0string__append), VPOINTER_OTHER);
  _V40_V10vcore_Dstring___Gnumber = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring___Gnumber", &_VW_V40_V10vcore_Dstring___Gnumber), VPOINTER_CLOSURE);
  _V0string___Gnumber = VEncodePointer(VLookupConstant("_V0string___Gnumber", &_VW_V0string___Gnumber), VPOINTER_OTHER);
  _V40_V10vcore_Dstring___Gsymbol = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring___Gsymbol", &_VW_V40_V10vcore_Dstring___Gsymbol), VPOINTER_CLOSURE);
  _V0string___Gsymbol = VEncodePointer(VLookupConstant("_V0string___Gsymbol", &_VW_V0string___Gsymbol), VPOINTER_OTHER);
  _V40_V10vcore_Dstring__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__length", &_VW_V40_V10vcore_Dstring__length), VPOINTER_CLOSURE);
  _V0string__length = VEncodePointer(VLookupConstant("_V0string__length", &_VW_V0string__length), VPOINTER_OTHER);
  _V40_V10vcore_Dstring__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__set_B", &_VW_V40_V10vcore_Dstring__set_B), VPOINTER_CLOSURE);
  _V0string__set_B = VEncodePointer(VLookupConstant("_V0string__set_B", &_VW_V0string__set_B), VPOINTER_OTHER);
  _V40_V10vcore_Dstring__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__ref", &_VW_V40_V10vcore_Dstring__ref), VPOINTER_CLOSURE);
  _V0string__ref = VEncodePointer(VLookupConstant("_V0string__ref", &_VW_V0string__ref), VPOINTER_OTHER);
  _V40_V10vcore_Dstring__copy_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__copy_B", &_VW_V40_V10vcore_Dstring__copy_B), VPOINTER_CLOSURE);
  _V0string__copy_B = VEncodePointer(VLookupConstant("_V0string__copy_B", &_VW_V0string__copy_B), VPOINTER_OTHER);
  _V0string__copy = VEncodePointer(VLookupConstant("_V0string__copy", &_VW_V0string__copy), VPOINTER_OTHER);
  _V40_V10vcore_Dsubstring = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsubstring", &_VW_V40_V10vcore_Dsubstring), VPOINTER_CLOSURE);
  _V0substring = VEncodePointer(VLookupConstant("_V0substring", &_VW_V0substring), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__string", &_VW_V40_V10vcore_Dmake__string), VPOINTER_CLOSURE);
  _V0make__string = VEncodePointer(VLookupConstant("_V0make__string", &_VW_V0make__string), VPOINTER_OTHER);
  _V0list___Gstring = VEncodePointer(VLookupConstant("_V0list___Gstring", &_VW_V0list___Gstring), VPOINTER_OTHER);
  _V0string___Glist = VEncodePointer(VLookupConstant("_V0string___Glist", &_VW_V0string___Glist), VPOINTER_OTHER);
  _V0split__at__right = VEncodePointer(VLookupConstant("_V0split__at__right", &_VW_V0split__at__right), VPOINTER_OTHER);
  _V0num__pairs = VEncodePointer(VLookupConstant("_V0num__pairs", &_VW_V0num__pairs), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VLookupConstant("_V0assoc", &_VW_V0assoc), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0assq = VEncodePointer(VLookupConstant("_V0assq", &_VW_V0assq), VPOINTER_OTHER);
  _V0member = VEncodePointer(VLookupConstant("_V0member", &_VW_V0member), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0memq = VEncodePointer(VLookupConstant("_V0memq", &_VW_V0memq), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0append = VEncodePointer(VLookupConstant("_V0append", &_VW_V0append), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VLookupConstant("_V0for__each", &_VW_V0for__each), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0make__list = VEncodePointer(VLookupConstant("_V0make__list", &_VW_V0make__list), VPOINTER_OTHER);
  _V0list__copy = VEncodePointer(VLookupConstant("_V0list__copy", &_VW_V0list__copy), VPOINTER_OTHER);
  _V0list__set_B = VEncodePointer(VLookupConstant("_V0list__set_B", &_VW_V0list__set_B), VPOINTER_OTHER);
  _V0list__ref = VEncodePointer(VLookupConstant("_V0list__ref", &_VW_V0list__ref), VPOINTER_OTHER);
  _V0list__tail = VEncodePointer(VLookupConstant("_V0list__tail", &_VW_V0list__tail), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0list_Q = VEncodePointer(VLookupConstant("_V0list_Q", &_VW_V0list_Q), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0cddddr = VEncodePointer(VLookupConstant("_V0cddddr", &_VW_V0cddddr), VPOINTER_OTHER);
  _V0cdddar = VEncodePointer(VLookupConstant("_V0cdddar", &_VW_V0cdddar), VPOINTER_OTHER);
  _V0cddadr = VEncodePointer(VLookupConstant("_V0cddadr", &_VW_V0cddadr), VPOINTER_OTHER);
  _V0cddaar = VEncodePointer(VLookupConstant("_V0cddaar", &_VW_V0cddaar), VPOINTER_OTHER);
  _V0cdaddr = VEncodePointer(VLookupConstant("_V0cdaddr", &_VW_V0cdaddr), VPOINTER_OTHER);
  _V0cdadar = VEncodePointer(VLookupConstant("_V0cdadar", &_VW_V0cdadar), VPOINTER_OTHER);
  _V0cdaadr = VEncodePointer(VLookupConstant("_V0cdaadr", &_VW_V0cdaadr), VPOINTER_OTHER);
  _V0cdaaar = VEncodePointer(VLookupConstant("_V0cdaaar", &_VW_V0cdaaar), VPOINTER_OTHER);
  _V0cadddr = VEncodePointer(VLookupConstant("_V0cadddr", &_VW_V0cadddr), VPOINTER_OTHER);
  _V0caddar = VEncodePointer(VLookupConstant("_V0caddar", &_VW_V0caddar), VPOINTER_OTHER);
  _V0cadadr = VEncodePointer(VLookupConstant("_V0cadadr", &_VW_V0cadadr), VPOINTER_OTHER);
  _V0cadaar = VEncodePointer(VLookupConstant("_V0cadaar", &_VW_V0cadaar), VPOINTER_OTHER);
  _V0caaddr = VEncodePointer(VLookupConstant("_V0caaddr", &_VW_V0caaddr), VPOINTER_OTHER);
  _V0caadar = VEncodePointer(VLookupConstant("_V0caadar", &_VW_V0caadar), VPOINTER_OTHER);
  _V0caaadr = VEncodePointer(VLookupConstant("_V0caaadr", &_VW_V0caaadr), VPOINTER_OTHER);
  _V0caaaar = VEncodePointer(VLookupConstant("_V0caaaar", &_VW_V0caaaar), VPOINTER_OTHER);
  _V0cdddr = VEncodePointer(VLookupConstant("_V0cdddr", &_VW_V0cdddr), VPOINTER_OTHER);
  _V0cddar = VEncodePointer(VLookupConstant("_V0cddar", &_VW_V0cddar), VPOINTER_OTHER);
  _V0cdadr = VEncodePointer(VLookupConstant("_V0cdadr", &_VW_V0cdadr), VPOINTER_OTHER);
  _V0cdaar = VEncodePointer(VLookupConstant("_V0cdaar", &_VW_V0cdaar), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VLookupConstant("_V0caddr", &_VW_V0caddr), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VLookupConstant("_V0cadar", &_VW_V0cadar), VPOINTER_OTHER);
  _V0caadr = VEncodePointer(VLookupConstant("_V0caadr", &_VW_V0caadr), VPOINTER_OTHER);
  _V0caaar = VEncodePointer(VLookupConstant("_V0caaar", &_VW_V0caaar), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VLookupConstant("_V0cddr", &_VW_V0cddr), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VLookupConstant("_V0cdar", &_VW_V0cdar), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V40_V10vcore_Dset__cdr_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__cdr_B", &_VW_V40_V10vcore_Dset__cdr_B), VPOINTER_CLOSURE);
  _V0set__cdr_B = VEncodePointer(VLookupConstant("_V0set__cdr_B", &_VW_V0set__cdr_B), VPOINTER_OTHER);
  _V40_V10vcore_Dset__car_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__car_B", &_VW_V40_V10vcore_Dset__car_B), VPOINTER_CLOSURE);
  _V0set__car_B = VEncodePointer(VLookupConstant("_V0set__car_B", &_VW_V0set__car_B), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0pow = VEncodePointer(VLookupConstant("_V0pow", &_VW_V0pow), VPOINTER_OTHER);
  _V0expt = VEncodePointer(VLookupConstant("_V0expt", &_VW_V0expt), VPOINTER_OTHER);
  _V0log = VEncodePointer(VLookupConstant("_V0log", &_VW_V0log), VPOINTER_OTHER);
  _V0exp = VEncodePointer(VLookupConstant("_V0exp", &_VW_V0exp), VPOINTER_OTHER);
  _V0atan = VEncodePointer(VLookupConstant("_V0atan", &_VW_V0atan), VPOINTER_OTHER);
  _V0acos = VEncodePointer(VLookupConstant("_V0acos", &_VW_V0acos), VPOINTER_OTHER);
  _V0asin = VEncodePointer(VLookupConstant("_V0asin", &_VW_V0asin), VPOINTER_OTHER);
  _V0tan = VEncodePointer(VLookupConstant("_V0tan", &_VW_V0tan), VPOINTER_OTHER);
  _V0cos = VEncodePointer(VLookupConstant("_V0cos", &_VW_V0cos), VPOINTER_OTHER);
  _V0sin = VEncodePointer(VLookupConstant("_V0sin", &_VW_V0sin), VPOINTER_OTHER);
  _V0round = VEncodePointer(VLookupConstant("_V0round", &_VW_V0round), VPOINTER_OTHER);
  _V0floor = VEncodePointer(VLookupConstant("_V0floor", &_VW_V0floor), VPOINTER_OTHER);
  _V0ceiling = VEncodePointer(VLookupConstant("_V0ceiling", &_VW_V0ceiling), VPOINTER_OTHER);
  _V0sqrt = VEncodePointer(VLookupConstant("_V0sqrt", &_VW_V0sqrt), VPOINTER_OTHER);
  _V0square = VEncodePointer(VLookupConstant("_V0square", &_VW_V0square), VPOINTER_OTHER);
  _V0abs = VEncodePointer(VLookupConstant("_V0abs", &_VW_V0abs), VPOINTER_OTHER);
  _V0min = VEncodePointer(VLookupConstant("_V0min", &_VW_V0min), VPOINTER_OTHER);
  _V0max = VEncodePointer(VLookupConstant("_V0max", &_VW_V0max), VPOINTER_OTHER);
  _V40_V10vcore_Dremainder = VEncodePointer(VLookupConstant("_V40_V10vcore_Dremainder", &_VW_V40_V10vcore_Dremainder), VPOINTER_CLOSURE);
  _V0remainder = VEncodePointer(VLookupConstant("_V0remainder", &_VW_V0remainder), VPOINTER_OTHER);
  _V40_V10vcore_Dquotient = VEncodePointer(VLookupConstant("_V40_V10vcore_Dquotient", &_VW_V40_V10vcore_Dquotient), VPOINTER_CLOSURE);
  _V0quotient = VEncodePointer(VLookupConstant("_V0quotient", &_VW_V0quotient), VPOINTER_OTHER);
  _V40_V10vcore_D_W = VEncodePointer(VLookupConstant("_V40_V10vcore_D_W", &_VW_V40_V10vcore_D_W), VPOINTER_CLOSURE);
  _V0_W = VEncodePointer(VLookupConstant("_V0_W", &_VW_V0_W), VPOINTER_OTHER);
  _V40_V10vcore_D_S = VEncodePointer(VLookupConstant("_V40_V10vcore_D_S", &_VW_V40_V10vcore_D_S), VPOINTER_CLOSURE);
  _V0_S = VEncodePointer(VLookupConstant("_V0_S", &_VW_V0_S), VPOINTER_OTHER);
  _V40_V10vcore_D__ = VEncodePointer(VLookupConstant("_V40_V10vcore_D__", &_VW_V40_V10vcore_D__), VPOINTER_CLOSURE);
  _V0__ = VEncodePointer(VLookupConstant("_V0__", &_VW_V0__), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0zero_Q = VEncodePointer(VLookupConstant("_V0zero_Q", &_VW_V0zero_Q), VPOINTER_OTHER);
  _V0negative_Q = VEncodePointer(VLookupConstant("_V0negative_Q", &_VW_V0negative_Q), VPOINTER_OTHER);
  _V0positive_Q = VEncodePointer(VLookupConstant("_V0positive_Q", &_VW_V0positive_Q), VPOINTER_OTHER);
  _V0rational_Q = VEncodePointer(VLookupConstant("_V0rational_Q", &_VW_V0rational_Q), VPOINTER_OTHER);
  _V0complex_Q = VEncodePointer(VLookupConstant("_V0complex_Q", &_VW_V0complex_Q), VPOINTER_OTHER);
  _V0number_Q = VEncodePointer(VLookupConstant("_V0number_Q", &_VW_V0number_Q), VPOINTER_OTHER);
  _V0exact___Ginexact = VEncodePointer(VLookupConstant("_V0exact___Ginexact", &_VW_V0exact___Ginexact), VPOINTER_OTHER);
  _V40_V10vcore_Dinexact = VEncodePointer(VLookupConstant("_V40_V10vcore_Dinexact", &_VW_V40_V10vcore_Dinexact), VPOINTER_CLOSURE);
  _V0inexact = VEncodePointer(VLookupConstant("_V0inexact", &_VW_V0inexact), VPOINTER_OTHER);
  _V0inexact___Gexact = VEncodePointer(VLookupConstant("_V0inexact___Gexact", &_VW_V0inexact___Gexact), VPOINTER_OTHER);
  _V40_V10vcore_Dexact = VEncodePointer(VLookupConstant("_V40_V10vcore_Dexact", &_VW_V40_V10vcore_Dexact), VPOINTER_CLOSURE);
  _V0exact = VEncodePointer(VLookupConstant("_V0exact", &_VW_V0exact), VPOINTER_OTHER);
  _V40_V10vcore_D_G_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_G_E", &_VW_V40_V10vcore_D_G_E), VPOINTER_CLOSURE);
  _V0_G_E = VEncodePointer(VLookupConstant("_V0_G_E", &_VW_V0_G_E), VPOINTER_OTHER);
  _V40_V10vcore_D_L_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_L_E", &_VW_V40_V10vcore_D_L_E), VPOINTER_CLOSURE);
  _V0_L_E = VEncodePointer(VLookupConstant("_V0_L_E", &_VW_V0_L_E), VPOINTER_OTHER);
  _V40_V10vcore_D_G = VEncodePointer(VLookupConstant("_V40_V10vcore_D_G", &_VW_V40_V10vcore_D_G), VPOINTER_CLOSURE);
  _V0_G = VEncodePointer(VLookupConstant("_V0_G", &_VW_V0_G), VPOINTER_OTHER);
  _V40_V10vcore_D_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_E", &_VW_V40_V10vcore_D_E), VPOINTER_CLOSURE);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V40_V10vcore_D_L = VEncodePointer(VLookupConstant("_V40_V10vcore_D_L", &_VW_V40_V10vcore_D_L), VPOINTER_CLOSURE);
  _V0_L = VEncodePointer(VLookupConstant("_V0_L", &_VW_V0_L), VPOINTER_OTHER);
  _V40_V10vcore_Dnot = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnot", &_VW_V40_V10vcore_Dnot), VPOINTER_CLOSURE);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V40_V10vcore_Dblob_E_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dblob_E_Q", &_VW_V40_V10vcore_Dblob_E_Q), VPOINTER_CLOSURE);
  _V0string_E_Q = VEncodePointer(VLookupConstant("_V0string_E_Q", &_VW_V0string_E_Q), VPOINTER_OTHER);
  _V0symbol_E_Q = VEncodePointer(VLookupConstant("_V0symbol_E_Q", &_VW_V0symbol_E_Q), VPOINTER_OTHER);
  _V0char_E_Q = VEncodePointer(VLookupConstant("_V0char_E_Q", &_VW_V0char_E_Q), VPOINTER_OTHER);
  _V0boolean_E_Q = VEncodePointer(VLookupConstant("_V0boolean_E_Q", &_VW_V0boolean_E_Q), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0eq_Q = VEncodePointer(VLookupConstant("_V0eq_Q", &_VW_V0eq_Q), VPOINTER_OTHER);
  _V40_V10vcore_Dforeign__pointer_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dforeign__pointer_Q", &_VW_V40_V10vcore_Dforeign__pointer_Q), VPOINTER_CLOSURE);
  _V0foreign__pointer_Q = VEncodePointer(VLookupConstant("_V0foreign__pointer_Q", &_VW_V0foreign__pointer_Q), VPOINTER_OTHER);
  _V40_V10vcore_Dnullptr_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnullptr_Q", &_VW_V40_V10vcore_Dnullptr_Q), VPOINTER_CLOSURE);
  _V0nullptr_Q = VEncodePointer(VLookupConstant("_V0nullptr_Q", &_VW_V0nullptr_Q), VPOINTER_OTHER);
  _V40_V10vcore_Dchar_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dchar_Q", &_VW_V40_V10vcore_Dchar_Q), VPOINTER_CLOSURE);
  _V0char_Q = VEncodePointer(VLookupConstant("_V0char_Q", &_VW_V0char_Q), VPOINTER_OTHER);
  _V0integer_Q = VEncodePointer(VLookupConstant("_V0integer_Q", &_VW_V0integer_Q), VPOINTER_OTHER);
  _V0real_Q = VEncodePointer(VLookupConstant("_V0real_Q", &_VW_V0real_Q), VPOINTER_OTHER);
  _V40_V10vcore_Ddouble_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddouble_Q", &_VW_V40_V10vcore_Ddouble_Q), VPOINTER_CLOSURE);
  _V0inexact_Q = VEncodePointer(VLookupConstant("_V0inexact_Q", &_VW_V0inexact_Q), VPOINTER_OTHER);
  _V0exact__integer_Q = VEncodePointer(VLookupConstant("_V0exact__integer_Q", &_VW_V0exact__integer_Q), VPOINTER_OTHER);
  _V0exact_Q = VEncodePointer(VLookupConstant("_V0exact_Q", &_VW_V0exact_Q), VPOINTER_OTHER);
  _V40_V10vcore_Dstring_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring_Q", &_VW_V40_V10vcore_Dstring_Q), VPOINTER_CLOSURE);
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V40_V10vcore_Dsymbol_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol_Q", &_VW_V40_V10vcore_Dsymbol_Q), VPOINTER_CLOSURE);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V40_V10vcore_Dprocedure_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dprocedure_Q", &_VW_V40_V10vcore_Dprocedure_Q), VPOINTER_CLOSURE);
  _V0procedure_Q = VEncodePointer(VLookupConstant("_V0procedure_Q", &_VW_V0procedure_Q), VPOINTER_OTHER);
  _V40_V10vcore_Drecord_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord_Q", &_VW_V40_V10vcore_Drecord_Q), VPOINTER_CLOSURE);
  _V0record_Q = VEncodePointer(VLookupConstant("_V0record_Q", &_VW_V0record_Q), VPOINTER_OTHER);
  _V40_V10vcore_Dhash__table_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table_Q", &_VW_V40_V10vcore_Dhash__table_Q), VPOINTER_CLOSURE);
  _V0hash__table_Q = VEncodePointer(VLookupConstant("_V0hash__table_Q", &_VW_V0hash__table_Q), VPOINTER_OTHER);
  _V40_V10vcore_Dvector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector_Q", &_VW_V40_V10vcore_Dvector_Q), VPOINTER_CLOSURE);
  _V0vector_Q = VEncodePointer(VLookupConstant("_V0vector_Q", &_VW_V0vector_Q), VPOINTER_OTHER);
  _V40_V10vcore_Dpair_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpair_Q", &_VW_V40_V10vcore_Dpair_Q), VPOINTER_CLOSURE);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0boolean_Q = VEncodePointer(VLookupConstant("_V0boolean_Q", &_VW_V0boolean_Q), VPOINTER_OTHER);
  _V40_V10vcore_Deof__object_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deof__object_Q", &_VW_V40_V10vcore_Deof__object_Q), VPOINTER_CLOSURE);
  _V0eof__object_Q = VEncodePointer(VLookupConstant("_V0eof__object_Q", &_VW_V0eof__object_Q), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0parameter = VEncodePointer(VLookupConstant("_V0parameter", &_VW_V0parameter), VPOINTER_OTHER);
  _V40_V10vcore_Deqv_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deqv_Q", &_VW_V40_V10vcore_Deqv_Q), VPOINTER_CLOSURE);
  _V0unquote__splicing = VEncodePointer(VLookupConstant("_V0unquote__splicing", &_VW_V0unquote__splicing), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VLookupConstant("_V0unquote", &_VW_V0unquote), VPOINTER_OTHER);
  _V0quasiquote = VEncodePointer(VLookupConstant("_V0quasiquote", &_VW_V0quasiquote), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
  _V0ok = VEncodePointer(VLookupConstant("_V0ok", &_VW_V0ok), VPOINTER_OTHER);
  _V10vcore_Dpush__value = VEncodePointer(VLookupConstant("_V10vcore_Dpush__value", &_VW_V10vcore_Dpush__value), VPOINTER_OTHER);
  _V10vcore_Dpop__value = VEncodePointer(VLookupConstant("_V10vcore_Dpop__value", &_VW_V10vcore_Dpop__value), VPOINTER_OTHER);
  _V40_V10vcore_Dget__output__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dget__output__string", &_VW_V40_V10vcore_Dget__output__string), VPOINTER_CLOSURE);
  _V40_V10vcore_Dclose__stream = VEncodePointer(VLookupConstant("_V40_V10vcore_Dclose__stream", &_VW_V40_V10vcore_Dclose__stream), VPOINTER_CLOSURE);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_D_P = VEncodePointer(VLookupConstant("_V40_V10vcore_D_P", &_VW_V40_V10vcore_D_P), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__length", &_VW_V40_V10vcore_Dvector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnull_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnull_Q", &_VW_V40_V10vcore_Dnull_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V40_V10vcore_Dint_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dint_Q", &_VW_V40_V10vcore_Dint_Q), VPOINTER_CLOSURE);
}
double pow(double, double);;
static void _V30pow_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0, VWORD _arg1) {
  V_ARG_CHECK3(runtime, "_V30pow_shim", 3, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30pow_shim, runtime, statics, 3, 3, _k, _arg0, _arg1) {
    VWORD _ret = VEncodeDouble(pow(VCheckedDecodeNumber2(runtime, _arg0, "pow"), VCheckedDecodeNumber2(runtime, _arg1, "pow")));
  V_CALL(_k, runtime, _ret);
  }
}
double log(double);;
static void _V30log_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30log_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30log_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(log(VCheckedDecodeNumber2(runtime, _arg0, "log")));
  V_CALL(_k, runtime, _ret);
  }
}
double exp(double);;
static void _V30exp_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30exp_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30exp_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(exp(VCheckedDecodeNumber2(runtime, _arg0, "exp")));
  V_CALL(_k, runtime, _ret);
  }
}
double atan2(double, double);;
static void _V30atan2_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0, VWORD _arg1) {
  V_ARG_CHECK3(runtime, "_V30atan2_shim", 3, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30atan2_shim, runtime, statics, 3, 3, _k, _arg0, _arg1) {
    VWORD _ret = VEncodeDouble(atan2(VCheckedDecodeNumber2(runtime, _arg0, "atan2"), VCheckedDecodeNumber2(runtime, _arg1, "atan2")));
  V_CALL(_k, runtime, _ret);
  }
}
double atan(double);;
static void _V30atan_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30atan_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30atan_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(atan(VCheckedDecodeNumber2(runtime, _arg0, "atan")));
  V_CALL(_k, runtime, _ret);
  }
}
double acos(double);;
static void _V30acos_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30acos_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30acos_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(acos(VCheckedDecodeNumber2(runtime, _arg0, "acos")));
  V_CALL(_k, runtime, _ret);
  }
}
double asin(double);;
static void _V30asin_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30asin_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30asin_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(asin(VCheckedDecodeNumber2(runtime, _arg0, "asin")));
  V_CALL(_k, runtime, _ret);
  }
}
double tan(double);;
static void _V30tan_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30tan_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30tan_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(tan(VCheckedDecodeNumber2(runtime, _arg0, "tan")));
  V_CALL(_k, runtime, _ret);
  }
}
double cos(double);;
static void _V30cos_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30cos_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30cos_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(cos(VCheckedDecodeNumber2(runtime, _arg0, "cos")));
  V_CALL(_k, runtime, _ret);
  }
}
double sin(double);;
static void _V30sin_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30sin_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30sin_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(sin(VCheckedDecodeNumber2(runtime, _arg0, "sin")));
  V_CALL(_k, runtime, _ret);
  }
}
double sqrt(double);;
static void _V30sqrt_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30sqrt_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30sqrt_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(sqrt(VCheckedDecodeNumber2(runtime, _arg0, "sqrt")));
  V_CALL(_k, runtime, _ret);
  }
}
double round(double);;
static void _V30round_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30round_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30round_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(round(VCheckedDecodeNumber2(runtime, _arg0, "round")));
  V_CALL(_k, runtime, _ret);
  }
}
double floor(double);;
static void _V30floor_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30floor_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30floor_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(floor(VCheckedDecodeNumber2(runtime, _arg0, "floor")));
  V_CALL(_k, runtime, _ret);
  }
}
double ceil(double);;
static void _V30ceil_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30ceil_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30ceil_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(ceil(VCheckedDecodeNumber2(runtime, _arg0, "ceil")));
  V_CALL(_k, runtime, _ret);
  }
}
static void _V10_Dboolean_Q_D145_k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dboolean_Q_D145_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1012 0 0) ((bruijn ##.k.1011 1 0) (bruijn ##.p.1012 0 0)) ((bruijn ##.k.1011 1 0) (##inline ##vcore.eq? (bruijn ##.x.329 1 1) #f)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineEq2(runtime,
        statics->vars[1],
        VEncodeBool(false)));
}
}
static void _V10_Dboolean_Q_D145_lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dboolean_Q_D145_lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dboolean_Q_D145_k5) (##inline ##vcore.eq? (bruijn ##.x.329 0 1) #t))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dboolean_Q_D145_k5, .env = self }, }, 1,
      VInlineEq2(runtime,
        _var1,
        VEncodeBool(true)));
}
static void _V10_Dsymbol_E_Q_D146_k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsymbol_E_Q_D146_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1015 0 0) (##vcore.symbol=? (bruijn ##.k.1014 1 0) (bruijn ##.y.333 1 2) (bruijn ##.z.334 1 3)) ((bruijn ##.k.1014 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSymbolEqv2, 3,
      statics->vars[0],
      statics->vars[2],
      statics->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dsymbol_E_Q_D146_k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsymbol_E_Q_D146_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1018 0 0) (##vcore.symbol=? (bruijn ##.k.1016 2 0) (bruijn ##.z.337 2 3) (bruijn ##.w.338 2 4)) ((bruijn ##.k.1016 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSymbolEqv2, 3,
      statics->up->vars[0],
      statics->up->vars[3],
      statics->up->vars[4]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dsymbol_E_Q_D146_k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsymbol_E_Q_D146_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1017 0 0) (##vcore.symbol=? (close _V10_Dsymbol_E_Q_D146_k8) (bruijn ##.y.336 1 2) (bruijn ##.z.337 1 3)) ((bruijn ##.k.1016 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSymbolEqv2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsymbol_E_Q_D146_k8, self)})),
      statics->vars[2],
      statics->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D342_k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D342_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.1024 0 0)) ((bruijn ##.k.1020 1 0) #f) ((bruijn ##.loop.342 2 0) (bruijn ##.k.1020 1 0) (##inline ##vcore.cdr (bruijn ##.xs.343 1 1))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]));
}
}
static void _V10_Dloop_D342_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D342_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.xs.343 0 1)) ((bruijn ##.k.1020 0 0) #t) (##vcore.symbol=? (close _V10_Dloop_D342_k9) (bruijn ##.x.339 2 1) (##inline ##vcore.car (bruijn ##.xs.343 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VSymbolEqv2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D342_k9, self)})),
      statics->up->vars[1],
      VInlineCar2(runtime,
        _var1));
}
}
__attribute__((used)) static void _V20CaseError__V10_Dsymbol_E_Q_D146_lambda3(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dsymbol_E_Q_D146_lambda3 #t (3 (##vcore.symbol=? (bruijn ##.k.1013 0 0) (bruijn ##.x.330 0 1) (bruijn ##.y.331 0 2))) (4 (##vcore.symbol=? (close _V10_Dsymbol_E_Q_D146_k6) (bruijn ##.x.332 0 1) (bruijn ##.y.333 0 2))) (5 (##vcore.symbol=? (close _V10_Dsymbol_E_Q_D146_k7) (bruijn ##.x.335 0 1) (bruijn ##.y.336 0 2))) (3 + (letrec 1 ((close _V10_Dloop_D342_lambda4)) ((bruijn ##.loop.342 0 0) (bruijn ##.k.1019 1 0) (##inline ##vcore.cons (bruijn ##.y.340 1 2) (bruijn ##.xs.341 1 3))))))
 VErrorC(runtime, "Not enough arguments to _V10_Dsymbol_E_Q_D146_lambda3, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dsymbol_E_Q_D146_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.symbol=? (bruijn ##.k.1013 0 0) (bruijn ##.x.330 0 1) (bruijn ##.y.331 0 2))
    VCallFuncWithGC(runtime, (VFunc)VSymbolEqv2, 3,
      _var0,
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case1__V10_Dsymbol_E_Q_D146_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##vcore.symbol=? (close _V10_Dsymbol_E_Q_D146_k6) (bruijn ##.x.332 0 1) (bruijn ##.y.333 0 2))
    VCallFuncWithGC(runtime, (VFunc)VSymbolEqv2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsymbol_E_Q_D146_k6, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case2__V10_Dsymbol_E_Q_D146_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##vcore.symbol=? (close _V10_Dsymbol_E_Q_D146_k7) (bruijn ##.x.335 0 1) (bruijn ##.y.336 0 2))
    VCallFuncWithGC(runtime, (VFunc)VSymbolEqv2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsymbol_E_Q_D146_k7, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V10_Dsymbol_E_Q_D146_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D342_lambda4)) ((bruijn ##.loop.342 0 0) (bruijn ##.k.1019 1 0) (##inline ##vcore.cons (bruijn ##.y.340 1 2) (bruijn ##.xs.341 1 3))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D342_lambda4, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      VInlineCons2(runtime,
        statics->vars[2],
        statics->vars[3]));
    }
}
void _V10_Dsymbol_E_Q_D146_lambda3(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dsymbol_E_Q_D146_lambda3, @function\n"
#endif
"_V10_Dsymbol_E_Q_D146_lambda3:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dsymbol_E_Q_D146_lambda3\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dsymbol_E_Q_D146_lambda3\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dsymbol_E_Q_D146_lambda3\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case3__V10_Dsymbol_E_Q_D146_lambda3\n"
"    jmp _V20CaseError__V10_Dsymbol_E_Q_D146_lambda3\n"
);
static void _V10_Dloop_D346_k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D346_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1031 0 0) (basic-block 1 1 (##.reg.2721) ((##vcore.+ (bruijn ##.i.347 4 1) 1)) ((bruijn ##.loop.346 5 0) (bruijn ##.k.1029 4 0) (bruijn ##.reg.2721 0 0) (bruijn ##.len.348 4 2))) ((bruijn ##.k.1029 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      statics->up->up->up->vars[0],
      self->vars[0],
      statics->up->up->up->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D346_k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D346_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1030 0 0) ((bruijn ##.k.1029 1 0) #t) (basic-block 2 2 (##.reg.2719 ##.reg.2720) ((##vcore.vector-ref (bruijn ##.x.344 6 1) (bruijn ##.i.347 2 1)) (##vcore.vector-ref (bruijn ##.y.345 6 2) (bruijn ##.i.347 2 1))) ((bruijn ##.equal?.156 7 11) (close _V10_Dloop_D346_k12) (bruijn ##.reg.2719 0 0) (bruijn ##.reg.2720 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D346_k12, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
}
static void _V10_Dloop_D346_lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D346_lambda6, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.= (close _V10_Dloop_D346_k11) (bruijn ##.i.347 0 1) (bruijn ##.len.348 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D346_k11, self)})),
      _var1,
      _var2);
}
static void _V10_Dvector_E_Q_D147_k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector_E_Q_D147_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1036 0 0)) ((bruijn ##.k.1027 2 0) #f) (letrec 1 ((close _V10_Dloop_D346_lambda6)) (basic-block 1 1 (##.reg.2722) ((##vcore.vector-length (bruijn ##.x.344 4 1))) ((bruijn ##.loop.346 1 0) (bruijn ##.k.1027 4 0) 0 (bruijn ##.reg.2722 0 0)))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D346_lambda6, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->up->vars[0],
      VEncodeInt(0l),
      self->vars[0]);
    }
    }
}
}
static void _V10_Dvector_E_Q_D147_lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector_E_Q_D147_lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.2717 ##.reg.2718) ((##vcore.vector-length (bruijn ##.x.344 1 1)) (##vcore.vector-length (bruijn ##.y.345 1 2))) (##vcore.= (close _V10_Dvector_E_Q_D147_k10) (bruijn ##.reg.2717 0 0) (bruijn ##.reg.2718 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[2]);
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector_E_Q_D147_k10, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Dloop_D351_k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1042 0 0) ((bruijn ##.k.1041 1 0) #t) (basic-block 2 2 (##.reg.2725 ##.reg.2726) ((##vcore.f32vector-ref (bruijn ##.x.349 6 1) (bruijn ##.i.352 2 1)) (##vcore.f32vector-ref (bruijn ##.y.350 6 2) (bruijn ##.i.352 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2725 0 0) (bruijn ##.reg.2726 0 1)) (basic-block 1 1 (##.reg.2727) ((##vcore.+ (bruijn ##.i.352 3 1) 1)) ((bruijn ##.loop.351 4 0) (bruijn ##.k.1041 3 0) (bruijn ##.reg.2727 0 0) (bruijn ##.len.353 3 2))) ((bruijn ##.k.1041 2 0) #f))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VF32VectorRef(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VF32VectorRef(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->up->vars[1]);
if(VDecodeBool(
VInlineEq2(runtime,
        self->vars[0],
        self->vars[1]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      self->vars[0],
      statics->up->up->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
}
static void _V10_Dloop_D351_lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.= (close _V10_Dloop_D351_k14) (bruijn ##.i.352 0 1) (bruijn ##.len.353 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_k14, self)})),
      _var1,
      _var2);
}
static void _V10_Df32vector_E_Q_D148_k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Df32vector_E_Q_D148_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1048 0 0)) ((bruijn ##.k.1039 2 0) #f) (letrec 1 ((close _V10_Dloop_D351_lambda8)) (basic-block 1 1 (##.reg.2728) ((##vcore.f32vector-length (bruijn ##.x.349 4 1))) ((bruijn ##.loop.351 1 0) (bruijn ##.k.1039 4 0) 0 (bruijn ##.reg.2728 0 0)))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_lambda8, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorLength(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->up->vars[0],
      VEncodeInt(0l),
      self->vars[0]);
    }
    }
}
}
static void _V10_Df32vector_E_Q_D148_lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Df32vector_E_Q_D148_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.2723 ##.reg.2724) ((##vcore.f32vector-length (bruijn ##.x.349 1 1)) (##vcore.f32vector-length (bruijn ##.y.350 1 2))) (##vcore.= (close _V10_Df32vector_E_Q_D148_k13) (bruijn ##.reg.2723 0 0) (bruijn ##.reg.2724 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VF32VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VF32VectorLength(runtime, NULL,
      statics->vars[2]);
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Df32vector_E_Q_D148_k13, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Dloop_D356_k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D356_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1054 0 0) ((bruijn ##.k.1053 1 0) #t) (basic-block 2 2 (##.reg.2731 ##.reg.2732) ((##vcore.f64vector-ref (bruijn ##.x.354 6 1) (bruijn ##.i.357 2 1)) (##vcore.f64vector-ref (bruijn ##.y.355 6 2) (bruijn ##.i.357 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2731 0 0) (bruijn ##.reg.2732 0 1)) (basic-block 1 1 (##.reg.2733) ((##vcore.+ (bruijn ##.i.357 3 1) 1)) ((bruijn ##.loop.356 4 0) (bruijn ##.k.1053 3 0) (bruijn ##.reg.2733 0 0) (bruijn ##.len.358 3 2))) ((bruijn ##.k.1053 2 0) #f))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VF64VectorRef(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VF64VectorRef(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->up->vars[1]);
if(VDecodeBool(
VInlineEq2(runtime,
        self->vars[0],
        self->vars[1]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      self->vars[0],
      statics->up->up->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
}
static void _V10_Dloop_D356_lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D356_lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.= (close _V10_Dloop_D356_k16) (bruijn ##.i.357 0 1) (bruijn ##.len.358 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D356_k16, self)})),
      _var1,
      _var2);
}
static void _V10_Df64vector_E_Q_D149_k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Df64vector_E_Q_D149_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1060 0 0)) ((bruijn ##.k.1051 2 0) #f) (letrec 1 ((close _V10_Dloop_D356_lambda10)) (basic-block 1 1 (##.reg.2734) ((##vcore.f64vector-length (bruijn ##.x.354 4 1))) ((bruijn ##.loop.356 1 0) (bruijn ##.k.1051 4 0) 0 (bruijn ##.reg.2734 0 0)))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D356_lambda10, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorLength(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->up->vars[0],
      VEncodeInt(0l),
      self->vars[0]);
    }
    }
}
}
static void _V10_Df64vector_E_Q_D149_lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Df64vector_E_Q_D149_lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.2729 ##.reg.2730) ((##vcore.f64vector-length (bruijn ##.x.354 1 1)) (##vcore.f64vector-length (bruijn ##.y.355 1 2))) (##vcore.= (close _V10_Df64vector_E_Q_D149_k15) (bruijn ##.reg.2729 0 0) (bruijn ##.reg.2730 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VF64VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VF64VectorLength(runtime, NULL,
      statics->vars[2]);
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Df64vector_E_Q_D149_k15, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Dloop_D361_k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D361_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1066 0 0) ((bruijn ##.k.1065 1 0) #t) (basic-block 2 2 (##.reg.2737 ##.reg.2738) ((##vcore.s32vector-ref (bruijn ##.x.359 6 1) (bruijn ##.i.362 2 1)) (##vcore.s32vector-ref (bruijn ##.y.360 6 2) (bruijn ##.i.362 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2737 0 0) (bruijn ##.reg.2738 0 1)) (basic-block 1 1 (##.reg.2739) ((##vcore.+ (bruijn ##.i.362 3 1) 1)) ((bruijn ##.loop.361 4 0) (bruijn ##.k.1065 3 0) (bruijn ##.reg.2739 0 0) (bruijn ##.len.363 3 2))) ((bruijn ##.k.1065 2 0) #f))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VS32VectorRef(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VS32VectorRef(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->up->vars[1]);
if(VDecodeBool(
VInlineEq2(runtime,
        self->vars[0],
        self->vars[1]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      self->vars[0],
      statics->up->up->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
}
static void _V10_Dloop_D361_lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D361_lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.= (close _V10_Dloop_D361_k18) (bruijn ##.i.362 0 1) (bruijn ##.len.363 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D361_k18, self)})),
      _var1,
      _var2);
}
static void _V10_Ds32vector_E_Q_D150_k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds32vector_E_Q_D150_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1072 0 0)) ((bruijn ##.k.1063 2 0) #f) (letrec 1 ((close _V10_Dloop_D361_lambda12)) (basic-block 1 1 (##.reg.2740) ((##vcore.s32vector-length (bruijn ##.x.359 4 1))) ((bruijn ##.loop.361 1 0) (bruijn ##.k.1063 4 0) 0 (bruijn ##.reg.2740 0 0)))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D361_lambda12, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorLength(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->up->vars[0],
      VEncodeInt(0l),
      self->vars[0]);
    }
    }
}
}
static void _V10_Ds32vector_E_Q_D150_lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds32vector_E_Q_D150_lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.2735 ##.reg.2736) ((##vcore.s32vector-length (bruijn ##.x.359 1 1)) (##vcore.s32vector-length (bruijn ##.y.360 1 2))) (##vcore.= (close _V10_Ds32vector_E_Q_D150_k17) (bruijn ##.reg.2735 0 0) (bruijn ##.reg.2736 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VS32VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VS32VectorLength(runtime, NULL,
      statics->vars[2]);
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds32vector_E_Q_D150_k17, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Dloop_D366_k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D366_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1078 0 0) ((bruijn ##.k.1077 1 0) #t) (basic-block 2 2 (##.reg.2743 ##.reg.2744) ((##vcore.u16vector-ref (bruijn ##.x.364 6 1) (bruijn ##.i.367 2 1)) (##vcore.u16vector-ref (bruijn ##.y.365 6 2) (bruijn ##.i.367 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2743 0 0) (bruijn ##.reg.2744 0 1)) (basic-block 1 1 (##.reg.2745) ((##vcore.+ (bruijn ##.i.367 3 1) 1)) ((bruijn ##.loop.366 4 0) (bruijn ##.k.1077 3 0) (bruijn ##.reg.2745 0 0) (bruijn ##.len.368 3 2))) ((bruijn ##.k.1077 2 0) #f))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VU16VectorRef(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VU16VectorRef(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->up->vars[1]);
if(VDecodeBool(
VInlineEq2(runtime,
        self->vars[0],
        self->vars[1]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      self->vars[0],
      statics->up->up->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
}
static void _V10_Dloop_D366_lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D366_lambda14, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.= (close _V10_Dloop_D366_k20) (bruijn ##.i.367 0 1) (bruijn ##.len.368 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D366_k20, self)})),
      _var1,
      _var2);
}
static void _V10_Du16vector_E_Q_D151_k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du16vector_E_Q_D151_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1084 0 0)) ((bruijn ##.k.1075 2 0) #f) (letrec 1 ((close _V10_Dloop_D366_lambda14)) (basic-block 1 1 (##.reg.2746) ((##vcore.u16vector-length (bruijn ##.x.364 4 1))) ((bruijn ##.loop.366 1 0) (bruijn ##.k.1075 4 0) 0 (bruijn ##.reg.2746 0 0)))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D366_lambda14, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorLength(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->up->vars[0],
      VEncodeInt(0l),
      self->vars[0]);
    }
    }
}
}
static void _V10_Du16vector_E_Q_D151_lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Du16vector_E_Q_D151_lambda13, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.2741 ##.reg.2742) ((##vcore.u16vector-length (bruijn ##.x.364 1 1)) (##vcore.u16vector-length (bruijn ##.y.365 1 2))) (##vcore.= (close _V10_Du16vector_E_Q_D151_k19) (bruijn ##.reg.2741 0 0) (bruijn ##.reg.2742 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VU16VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VU16VectorLength(runtime, NULL,
      statics->vars[2]);
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Du16vector_E_Q_D151_k19, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Dloop_D371_k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D371_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1090 0 0) ((bruijn ##.k.1089 1 0) #t) (basic-block 2 2 (##.reg.2749 ##.reg.2750) ((##vcore.s16vector-ref (bruijn ##.x.369 6 1) (bruijn ##.i.372 2 1)) (##vcore.s16vector-ref (bruijn ##.y.370 6 2) (bruijn ##.i.372 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2749 0 0) (bruijn ##.reg.2750 0 1)) (basic-block 1 1 (##.reg.2751) ((##vcore.+ (bruijn ##.i.372 3 1) 1)) ((bruijn ##.loop.371 4 0) (bruijn ##.k.1089 3 0) (bruijn ##.reg.2751 0 0) (bruijn ##.len.373 3 2))) ((bruijn ##.k.1089 2 0) #f))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VS16VectorRef(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VS16VectorRef(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->up->vars[1]);
if(VDecodeBool(
VInlineEq2(runtime,
        self->vars[0],
        self->vars[1]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      self->vars[0],
      statics->up->up->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
}
static void _V10_Dloop_D371_lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D371_lambda16, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.= (close _V10_Dloop_D371_k22) (bruijn ##.i.372 0 1) (bruijn ##.len.373 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D371_k22, self)})),
      _var1,
      _var2);
}
static void _V10_Ds16vector_E_Q_D152_k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds16vector_E_Q_D152_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1096 0 0)) ((bruijn ##.k.1087 2 0) #f) (letrec 1 ((close _V10_Dloop_D371_lambda16)) (basic-block 1 1 (##.reg.2752) ((##vcore.s16vector-length (bruijn ##.x.369 4 1))) ((bruijn ##.loop.371 1 0) (bruijn ##.k.1087 4 0) 0 (bruijn ##.reg.2752 0 0)))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D371_lambda16, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorLength(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->up->vars[0],
      VEncodeInt(0l),
      self->vars[0]);
    }
    }
}
}
static void _V10_Ds16vector_E_Q_D152_lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds16vector_E_Q_D152_lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.2747 ##.reg.2748) ((##vcore.s16vector-length (bruijn ##.x.369 1 1)) (##vcore.s16vector-length (bruijn ##.y.370 1 2))) (##vcore.= (close _V10_Ds16vector_E_Q_D152_k21) (bruijn ##.reg.2747 0 0) (bruijn ##.reg.2748 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VS16VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VS16VectorLength(runtime, NULL,
      statics->vars[2]);
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds16vector_E_Q_D152_k21, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Dloop_D376_k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D376_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1102 0 0) ((bruijn ##.k.1101 1 0) #t) (basic-block 2 2 (##.reg.2755 ##.reg.2756) ((##vcore.u8vector-ref (bruijn ##.x.374 6 1) (bruijn ##.i.377 2 1)) (##vcore.u8vector-ref (bruijn ##.y.375 6 2) (bruijn ##.i.377 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2755 0 0) (bruijn ##.reg.2756 0 1)) (basic-block 1 1 (##.reg.2757) ((##vcore.+ (bruijn ##.i.377 3 1) 1)) ((bruijn ##.loop.376 4 0) (bruijn ##.k.1101 3 0) (bruijn ##.reg.2757 0 0) (bruijn ##.len.378 3 2))) ((bruijn ##.k.1101 2 0) #f))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VU8VectorRef(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VU8VectorRef(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->up->vars[1]);
if(VDecodeBool(
VInlineEq2(runtime,
        self->vars[0],
        self->vars[1]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      self->vars[0],
      statics->up->up->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
}
static void _V10_Dloop_D376_lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D376_lambda18, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.= (close _V10_Dloop_D376_k24) (bruijn ##.i.377 0 1) (bruijn ##.len.378 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D376_k24, self)})),
      _var1,
      _var2);
}
static void _V10_Du8vector_E_Q_D153_k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector_E_Q_D153_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1108 0 0)) ((bruijn ##.k.1099 2 0) #f) (letrec 1 ((close _V10_Dloop_D376_lambda18)) (basic-block 1 1 (##.reg.2758) ((##vcore.u8vector-length (bruijn ##.x.374 4 1))) ((bruijn ##.loop.376 1 0) (bruijn ##.k.1099 4 0) 0 (bruijn ##.reg.2758 0 0)))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D376_lambda18, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorLength(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->up->vars[0],
      VEncodeInt(0l),
      self->vars[0]);
    }
    }
}
}
static void _V10_Du8vector_E_Q_D153_lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector_E_Q_D153_lambda17, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.2753 ##.reg.2754) ((##vcore.u8vector-length (bruijn ##.x.374 1 1)) (##vcore.u8vector-length (bruijn ##.y.375 1 2))) (##vcore.= (close _V10_Du8vector_E_Q_D153_k23) (bruijn ##.reg.2753 0 0) (bruijn ##.reg.2754 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VU8VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VU8VectorLength(runtime, NULL,
      statics->vars[2]);
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Du8vector_E_Q_D153_k23, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Dloop_D381_k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D381_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1114 0 0) ((bruijn ##.k.1113 1 0) #t) (basic-block 2 2 (##.reg.2761 ##.reg.2762) ((##vcore.s8vector-ref (bruijn ##.x.379 6 1) (bruijn ##.i.382 2 1)) (##vcore.s8vector-ref (bruijn ##.y.380 6 2) (bruijn ##.i.382 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2761 0 0) (bruijn ##.reg.2762 0 1)) (basic-block 1 1 (##.reg.2763) ((##vcore.+ (bruijn ##.i.382 3 1) 1)) ((bruijn ##.loop.381 4 0) (bruijn ##.k.1113 3 0) (bruijn ##.reg.2763 0 0) (bruijn ##.len.383 3 2))) ((bruijn ##.k.1113 2 0) #f))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VS8VectorRef(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VS8VectorRef(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->up->vars[1]);
if(VDecodeBool(
VInlineEq2(runtime,
        self->vars[0],
        self->vars[1]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      self->vars[0],
      statics->up->up->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
}
static void _V10_Dloop_D381_lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D381_lambda20, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.= (close _V10_Dloop_D381_k26) (bruijn ##.i.382 0 1) (bruijn ##.len.383 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D381_k26, self)})),
      _var1,
      _var2);
}
static void _V10_Ds8vector_E_Q_D154_k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds8vector_E_Q_D154_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1120 0 0)) ((bruijn ##.k.1111 2 0) #f) (letrec 1 ((close _V10_Dloop_D381_lambda20)) (basic-block 1 1 (##.reg.2764) ((##vcore.s8vector-length (bruijn ##.x.379 4 1))) ((bruijn ##.loop.381 1 0) (bruijn ##.k.1111 4 0) 0 (bruijn ##.reg.2764 0 0)))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D381_lambda20, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorLength(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->up->vars[0],
      VEncodeInt(0l),
      self->vars[0]);
    }
    }
}
}
static void _V10_Ds8vector_E_Q_D154_lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds8vector_E_Q_D154_lambda19, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.2759 ##.reg.2760) ((##vcore.s8vector-length (bruijn ##.x.379 1 1)) (##vcore.s8vector-length (bruijn ##.y.380 1 2))) (##vcore.= (close _V10_Ds8vector_E_Q_D154_k25) (bruijn ##.reg.2759 0 0) (bruijn ##.reg.2760 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VS8VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VS8VectorLength(runtime, NULL,
      statics->vars[2]);
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds8vector_E_Q_D154_k25, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Drecord_E_Q_D155_k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecord_E_Q_D155_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1133 1 0) (basic-block 2 2 (##.reg.2771 ##.reg.2772) ((##vcore.record-ref (bruijn ##.x.384 4 1) 0) (##vcore.record-ref (bruijn ##.y.385 4 2) 0)) (##vcore.eqv? (bruijn ##.k.1134 1 0) (bruijn ##.reg.2771 0 0) (bruijn ##.reg.2772 0 1))) ((bruijn ##.k.1134 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(0l));
    self->vars[1] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->up->up->vars[2],
      VEncodeInt(0l));
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      statics->vars[0],
      self->vars[0],
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D386_k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D386_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1127 0 0) (basic-block 1 1 (##.reg.2769) ((##vcore.+ (bruijn ##.i.387 4 1) 1)) ((bruijn ##.loop.386 5 0) (bruijn ##.k.1125 4 0) (bruijn ##.reg.2769 0 0) (bruijn ##.len.388 4 2))) ((bruijn ##.k.1125 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      statics->up->up->up->vars[0],
      self->vars[0],
      statics->up->up->up->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D386_k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D386_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1126 0 0) ((bruijn ##.k.1125 1 0) #t) (basic-block 2 2 (##.reg.2767 ##.reg.2768) ((##vcore.record-ref (bruijn ##.x.384 7 1) (bruijn ##.i.387 2 1)) (##vcore.record-ref (bruijn ##.y.385 7 2) (bruijn ##.i.387 2 1))) ((bruijn ##.equal?.156 8 11) (close _V10_Dloop_D386_k31) (bruijn ##.reg.2767 0 0) (bruijn ##.reg.2768 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VRecordRef2(runtime, NULL,
      VGetArg(statics, 7-1, 2),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D386_k31, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
}
static void _V10_Dloop_D386_lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D386_lambda22, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.= (close _V10_Dloop_D386_k30) (bruijn ##.i.387 0 1) (bruijn ##.len.388 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D386_k30, self)})),
      _var1,
      _var2);
}
static void _V10_Drecord_E_Q_D155_k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecord_E_Q_D155_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1132 0 0)) ((bruijn ##.k.1123 3 0) #f) (letrec 1 ((close _V10_Dloop_D386_lambda22)) (basic-block 1 1 (##.reg.2770) ((##vcore.record-length (bruijn ##.x.384 5 1))) ((bruijn ##.loop.386 1 0) (bruijn ##.k.1123 5 0) 1 (bruijn ##.reg.2770 0 0)))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D386_lambda22, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordLength2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      VGetArg(statics, 5-1, 0),
      VEncodeInt(1l),
      self->vars[0]);
    }
    }
}
}
static void _V10_Drecord_E_Q_D155_k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecord_E_Q_D155_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Drecord_E_Q_D155_k28) (close _V10_Drecord_E_Q_D155_k29))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Drecord_E_Q_D155_k28, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Drecord_E_Q_D155_k29, self)})));
}
static void _V10_Drecord_E_Q_D155_lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecord_E_Q_D155_lambda21, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.2765 ##.reg.2766) ((##vcore.record-length (bruijn ##.x.384 1 1)) (##vcore.record-length (bruijn ##.y.385 1 2))) (##vcore.= (close _V10_Drecord_E_Q_D155_k27) (bruijn ##.reg.2765 0 0) (bruijn ##.reg.2766 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VRecordLength2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VRecordLength2(runtime, NULL,
      statics->vars[2]);
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Drecord_E_Q_D155_k27, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Dequal_Q_D156_k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2773 1 0) (basic-block 1 1 (##.reg.2792) ((##vcore.blob? (bruijn ##.y.390 4 2))) (if (bruijn ##.reg.2792 0 0) (##vcore.blob=? (bruijn ##.k.1186 1 0) (bruijn ##.x.389 4 1) (bruijn ##.y.390 4 2)) ((bruijn ##.k.1186 1 0) #f))) ((bruijn ##.k.1186 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VBlobP2(runtime, NULL,
      statics->up->up->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      statics->vars[0],
      statics->up->up->up->vars[1],
      statics->up->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dequal_Q_D156_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1180 0 0) ((bruijn ##.equal?.156 6 11) (bruijn ##.k.1178 1 0) (##inline ##vcore.cdr (bruijn ##.x.389 5 1)) (##inline ##vcore.cdr (bruijn ##.y.390 5 2))) ((bruijn ##.k.1178 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 11)), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)),
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dequal_Q_D156_k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.389 4 1)) (if (##inline ##vcore.pair? (bruijn ##.y.390 4 2)) ((bruijn ##.equal?.156 5 11) (close _V10_Dequal_Q_D156_k36) (##inline ##vcore.car (bruijn ##.x.389 4 1)) (##inline ##vcore.car (bruijn ##.y.390 4 2))) ((bruijn ##.k.1178 0 0) #f)) ((bruijn ##.k.1178 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D156_k36, self)})),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dequal_Q_D156_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2774 1 0) (basic-block 1 1 (##.reg.2791) ((##vcore.vector? (bruijn ##.y.390 7 2))) (if (bruijn ##.reg.2791 0 0) ((bruijn ##.vector=?.147 8 2) (bruijn ##.k.1175 1 0) (bruijn ##.x.389 7 1) (bruijn ##.y.390 7 2)) ((bruijn ##.k.1175 1 0) #f))) ((bruijn ##.k.1175 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      statics->vars[0],
      VGetArg(statics, 7-1, 1),
      VGetArg(statics, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dequal_Q_D156_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2775 1 0) (basic-block 1 1 (##.reg.2790) ((##vcore.f32vector? (bruijn ##.y.390 9 2))) (if (bruijn ##.reg.2790 0 0) ((bruijn ##.f32vector=?.148 10 3) (bruijn ##.k.1172 1 0) (bruijn ##.x.389 9 1) (bruijn ##.y.390 9 2)) ((bruijn ##.k.1172 1 0) #f))) ((bruijn ##.k.1172 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorP(runtime, NULL,
      VGetArg(statics, 9-1, 2));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 3)), 3,
      statics->vars[0],
      VGetArg(statics, 9-1, 1),
      VGetArg(statics, 9-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dequal_Q_D156_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2776 1 0) (basic-block 1 1 (##.reg.2789) ((##vcore.f64vector? (bruijn ##.y.390 11 2))) (if (bruijn ##.reg.2789 0 0) ((bruijn ##.f64vector=?.149 12 4) (bruijn ##.k.1169 1 0) (bruijn ##.x.389 11 1) (bruijn ##.y.390 11 2)) ((bruijn ##.k.1169 1 0) #f))) ((bruijn ##.k.1169 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorP(runtime, NULL,
      VGetArg(statics, 11-1, 2));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 4)), 3,
      statics->vars[0],
      VGetArg(statics, 11-1, 1),
      VGetArg(statics, 11-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dequal_Q_D156_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2777 1 0) (basic-block 1 1 (##.reg.2788) ((##vcore.s32vector? (bruijn ##.y.390 13 2))) (if (bruijn ##.reg.2788 0 0) ((bruijn ##.s32vector=?.150 14 5) (bruijn ##.k.1166 1 0) (bruijn ##.x.389 13 1) (bruijn ##.y.390 13 2)) ((bruijn ##.k.1166 1 0) #f))) ((bruijn ##.k.1166 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorP(runtime, NULL,
      VGetArg(statics, 13-1, 2));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 5)), 3,
      statics->vars[0],
      VGetArg(statics, 13-1, 1),
      VGetArg(statics, 13-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dequal_Q_D156_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2778 1 0) (basic-block 1 1 (##.reg.2787) ((##vcore.u16vector? (bruijn ##.y.390 15 2))) (if (bruijn ##.reg.2787 0 0) ((bruijn ##.u16vector=?.151 16 6) (bruijn ##.k.1163 1 0) (bruijn ##.x.389 15 1) (bruijn ##.y.390 15 2)) ((bruijn ##.k.1163 1 0) #f))) ((bruijn ##.k.1163 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorP(runtime, NULL,
      VGetArg(statics, 15-1, 2));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 6)), 3,
      statics->vars[0],
      VGetArg(statics, 15-1, 1),
      VGetArg(statics, 15-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dequal_Q_D156_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2779 1 0) (basic-block 1 1 (##.reg.2786) ((##vcore.s16vector? (bruijn ##.y.390 17 2))) (if (bruijn ##.reg.2786 0 0) ((bruijn ##.s16vector=?.152 18 7) (bruijn ##.k.1160 1 0) (bruijn ##.x.389 17 1) (bruijn ##.y.390 17 2)) ((bruijn ##.k.1160 1 0) #f))) ((bruijn ##.k.1160 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorP(runtime, NULL,
      VGetArg(statics, 17-1, 2));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 7)), 3,
      statics->vars[0],
      VGetArg(statics, 17-1, 1),
      VGetArg(statics, 17-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dequal_Q_D156_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2780 1 0) (basic-block 1 1 (##.reg.2785) ((##vcore.u8vector? (bruijn ##.y.390 19 2))) (if (bruijn ##.reg.2785 0 0) ((bruijn ##.u8vector=?.153 20 8) (bruijn ##.k.1157 1 0) (bruijn ##.x.389 19 1) (bruijn ##.y.390 19 2)) ((bruijn ##.k.1157 1 0) #f))) ((bruijn ##.k.1157 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      VGetArg(statics, 19-1, 2));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 8)), 3,
      statics->vars[0],
      VGetArg(statics, 19-1, 1),
      VGetArg(statics, 19-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dequal_Q_D156_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2781 1 0) (basic-block 1 1 (##.reg.2784) ((##vcore.s8vector? (bruijn ##.y.390 21 2))) (if (bruijn ##.reg.2784 0 0) ((bruijn ##.s8vector=?.154 22 9) (bruijn ##.k.1154 1 0) (bruijn ##.x.389 21 1) (bruijn ##.y.390 21 2)) ((bruijn ##.k.1154 1 0) #f))) ((bruijn ##.k.1154 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorP(runtime, NULL,
      VGetArg(statics, 21-1, 2));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 9)), 3,
      statics->vars[0],
      VGetArg(statics, 21-1, 1),
      VGetArg(statics, 21-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dequal_Q_D156_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1150 0 0) ((bruijn ##.k.1139 20 0) (bruijn ##.p.1150 0 0)) (basic-block 1 1 (##.reg.2782) ((##vcore.record? (bruijn ##.x.389 21 1))) (if (bruijn ##.reg.2782 0 0) (basic-block 1 1 (##.reg.2783) ((##vcore.record? (bruijn ##.y.390 22 2))) (if (bruijn ##.reg.2783 0 0) ((bruijn ##.record=?.155 23 10) (bruijn ##.k.1139 22 0) (bruijn ##.x.389 22 1) (bruijn ##.y.390 22 2)) ((bruijn ##.k.1139 22 0) #f))) ((bruijn ##.k.1139 21 0) #f))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordP2(runtime, NULL,
      VGetArg(statics, 21-1, 1));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordP2(runtime, NULL,
      VGetArg(statics, 22-1, 2));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 10)), 3,
      VGetArg(statics, 22-1, 0),
      VGetArg(statics, 22-1, 1),
      VGetArg(statics, 22-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
}
static void _V10_Dequal_Q_D156_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1149 0 0) ((bruijn ##.k.1139 18 0) (bruijn ##.p.1149 0 0)) (basic-block 1 1 (##.reg.2781) ((##vcore.s8vector? (bruijn ##.x.389 19 1))) ((close _V10_Dequal_Q_D156_k52) (close _V10_Dequal_Q_D156_k53))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorP(runtime, NULL,
      VGetArg(statics, 19-1, 1));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D156_k52, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D156_k53, self)})));
    }
}
}
static void _V10_Dequal_Q_D156_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1148 0 0) ((bruijn ##.k.1139 16 0) (bruijn ##.p.1148 0 0)) (basic-block 1 1 (##.reg.2780) ((##vcore.u8vector? (bruijn ##.x.389 17 1))) ((close _V10_Dequal_Q_D156_k50) (close _V10_Dequal_Q_D156_k51))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      VGetArg(statics, 17-1, 1));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D156_k50, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D156_k51, self)})));
    }
}
}
static void _V10_Dequal_Q_D156_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1147 0 0) ((bruijn ##.k.1139 14 0) (bruijn ##.p.1147 0 0)) (basic-block 1 1 (##.reg.2779) ((##vcore.s16vector? (bruijn ##.x.389 15 1))) ((close _V10_Dequal_Q_D156_k48) (close _V10_Dequal_Q_D156_k49))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorP(runtime, NULL,
      VGetArg(statics, 15-1, 1));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D156_k48, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D156_k49, self)})));
    }
}
}
static void _V10_Dequal_Q_D156_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1146 0 0) ((bruijn ##.k.1139 12 0) (bruijn ##.p.1146 0 0)) (basic-block 1 1 (##.reg.2778) ((##vcore.u16vector? (bruijn ##.x.389 13 1))) ((close _V10_Dequal_Q_D156_k46) (close _V10_Dequal_Q_D156_k47))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorP(runtime, NULL,
      VGetArg(statics, 13-1, 1));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D156_k46, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D156_k47, self)})));
    }
}
}
static void _V10_Dequal_Q_D156_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1145 0 0) ((bruijn ##.k.1139 10 0) (bruijn ##.p.1145 0 0)) (basic-block 1 1 (##.reg.2777) ((##vcore.s32vector? (bruijn ##.x.389 11 1))) ((close _V10_Dequal_Q_D156_k44) (close _V10_Dequal_Q_D156_k45))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorP(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D156_k44, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D156_k45, self)})));
    }
}
}
static void _V10_Dequal_Q_D156_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1144 0 0) ((bruijn ##.k.1139 8 0) (bruijn ##.p.1144 0 0)) (basic-block 1 1 (##.reg.2776) ((##vcore.f64vector? (bruijn ##.x.389 9 1))) ((close _V10_Dequal_Q_D156_k42) (close _V10_Dequal_Q_D156_k43))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorP(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D156_k42, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D156_k43, self)})));
    }
}
}
static void _V10_Dequal_Q_D156_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1143 0 0) ((bruijn ##.k.1139 6 0) (bruijn ##.p.1143 0 0)) (basic-block 1 1 (##.reg.2775) ((##vcore.f32vector? (bruijn ##.x.389 7 1))) ((close _V10_Dequal_Q_D156_k40) (close _V10_Dequal_Q_D156_k41))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorP(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D156_k40, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D156_k41, self)})));
    }
}
}
static void _V10_Dequal_Q_D156_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1142 0 0) ((bruijn ##.k.1139 4 0) (bruijn ##.p.1142 0 0)) (basic-block 1 1 (##.reg.2774) ((##vcore.vector? (bruijn ##.x.389 5 1))) ((close _V10_Dequal_Q_D156_k38) (close _V10_Dequal_Q_D156_k39))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D156_k38, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D156_k39, self)})));
    }
}
}
static void _V10_Dequal_Q_D156_k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1141 0 0) ((bruijn ##.k.1139 3 0) (bruijn ##.p.1141 0 0)) ((close _V10_Dequal_Q_D156_k35) (close _V10_Dequal_Q_D156_k37)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D156_k35, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D156_k37, self)})));
}
}
static void _V10_Dequal_Q_D156_k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1140 0 0) ((bruijn ##.k.1139 1 0) (bruijn ##.p.1140 0 0)) (basic-block 1 1 (##.reg.2773) ((##vcore.blob? (bruijn ##.x.389 2 1))) ((close _V10_Dequal_Q_D156_k33) (close _V10_Dequal_Q_D156_k34))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VBlobP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D156_k33, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D156_k34, self)})));
    }
}
}
static void _V10_Dequal_Q_D156_lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D156_lambda23, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dequal_Q_D156_k32) (##inline ##vcore.eq? (bruijn ##.x.389 0 1) (bruijn ##.y.390 0 2)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D156_k32, .env = self }, }, 1,
      VInlineEq2(runtime,
        _var1,
        _var2));
}
static void _V10_Dnumber_Q_D157_lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dnumber_Q_D157_lambda24, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2793) ((##vcore.double? (bruijn ##.x.391 1 1))) (if (bruijn ##.reg.2793 0 0) ((bruijn ##.k.1188 1 0) (bruijn ##.reg.2793 0 0)) (basic-block 1 1 (##.reg.2794) ((##vcore.int? (bruijn ##.x.391 2 1))) ((bruijn ##.k.1188 2 0) (bruijn ##.reg.2794 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDoubleP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
    }
}
static void _V10_Dpositive_Q_D160_lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpositive_Q_D160_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##vcore.> (bruijn ##.k.1190 0 0) (bruijn ##.x.392 0 1) 0)
    VCallFuncWithGC(runtime, (VFunc)VCmpGt, 3,
      _var0,
      _var1,
      VEncodeInt(0l));
}
static void _V10_Dzero_Q_D161_lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dzero_Q_D161_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##vcore.= (bruijn ##.k.1191 0 0) (bruijn ##.x.393 0 1) 0)
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      _var0,
      _var1,
      VEncodeInt(0l));
}
static void _V10_Dnegative_Q_D162_lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dnegative_Q_D162_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##vcore.< (bruijn ##.k.1192 0 0) (bruijn ##.x.394 0 1) 0)
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      _var0,
      _var1,
      VEncodeInt(0l));
}
static void _V10_Dabs_D163_k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dabs_D163_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1194 0 0) (basic-block 1 1 (##.reg.2795) ((##vcore.- (bruijn ##.x.395 2 1))) ((bruijn ##.k.1193 2 0) (bruijn ##.reg.2795 0 0))) ((bruijn ##.k.1193 1 0) (bruijn ##.x.395 1 1)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
}
static void _V10_Dabs_D163_lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dabs_D163_lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.< (close _V10_Dabs_D163_k54) (bruijn ##.x.395 0 1) 0)
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dabs_D163_k54, self)})),
      _var1,
      VEncodeInt(0l));
}
static void _V10_Dsquare_D167_lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsquare_D167_lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2796) ((##vcore.* (bruijn ##.x.396 1 1) (bruijn ##.x.396 1 1))) ((bruijn ##.k.1195 1 0) (bruijn ##.reg.2796 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VMul2(runtime, NULL,
      statics->vars[1],
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
__attribute__((used)) static void _V20CaseError__V10_Datan_D176_lambda30(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Datan_D176_lambda30 #t (2 ((bruijn ##.atan-impl.174 1 29) (bruijn ##.k.1196 0 0) (bruijn ##.x.397 0 1))) (3 ((bruijn ##.atan2-impl.175 1 30) (bruijn ##.k.1197 0 0) (bruijn ##.y.398 0 1) (bruijn ##.x.399 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Datan_D176_lambda30, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Datan_D176_lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.atan-impl.174 1 29) (bruijn ##.k.1196 0 0) (bruijn ##.x.397 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[29]), 2,
      _var0,
      _var1);
}
__attribute__((used)) static void _V20Case1__V10_Datan_D176_lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // ((bruijn ##.atan2-impl.175 1 30) (bruijn ##.k.1197 0 0) (bruijn ##.y.398 0 1) (bruijn ##.x.399 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[30]), 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Datan_D176_lambda30(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Datan_D176_lambda30, @function\n"
#endif
"_V10_Datan_D176_lambda30:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Datan_D176_lambda30\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Datan_D176_lambda30\n"
"    jmp _V20CaseError__V10_Datan_D176_lambda30\n"
);
static void _V10_Dlog_D179_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlog_D179_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2797) ((##vcore./ (bruijn ##.x.1200 2 0) (bruijn ##.x.1201 1 0))) ((bruijn ##.k.1199 3 0) (bruijn ##.reg.2797 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDiv2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
static void _V10_Dlog_D179_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlog_D179_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.log-impl.178 2 33) (close _V10_Dlog_D179_k56) (bruijn ##.base.402 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[33]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlog_D179_k56, self)})),
      statics->vars[2]);
}
__attribute__((used)) static void _V20CaseError__V10_Dlog_D179_lambda31(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dlog_D179_lambda31 #t (2 ((bruijn ##.log-impl.178 1 33) (bruijn ##.k.1198 0 0) (bruijn ##.x.400 0 1))) (3 ((bruijn ##.log-impl.178 1 33) (close _V10_Dlog_D179_k55) (bruijn ##.x.401 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dlog_D179_lambda31, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dlog_D179_lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.log-impl.178 1 33) (bruijn ##.k.1198 0 0) (bruijn ##.x.400 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[33]), 2,
      _var0,
      _var1);
}
__attribute__((used)) static void _V20Case1__V10_Dlog_D179_lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.log-impl.178 1 33) (close _V10_Dlog_D179_k55) (bruijn ##.x.401 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[33]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlog_D179_k55, self)})),
      _var1);
}
void _V10_Dlog_D179_lambda31(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dlog_D179_lambda31, @function\n"
#endif
"_V10_Dlog_D179_lambda31:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dlog_D179_lambda31\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dlog_D179_lambda31\n"
"    jmp _V20CaseError__V10_Dlog_D179_lambda31\n"
);
static void _V10_Dmax_D182_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmax_D182_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1204 0 0) ((bruijn ##.k.1203 1 0) (bruijn ##.a.404 1 1)) ((bruijn ##.k.1203 1 0) (bruijn ##.b.405 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
}
}
static void _V10_Dmax_D182_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmax_D182_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.max.182 2 37) (bruijn ##.k.1205 1 0) (bruijn ##.x.1206 0 0) (bruijn ##.c.408 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[37]), 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
static void _V10_Dmax_D182_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmax_D182_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.max.182 3 37) (bruijn ##.k.1207 2 0) (bruijn ##.x.1208 0 0) (bruijn ##.d.412 2 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[37]), 3,
      statics->up->vars[0],
      _var0,
      statics->up->vars[4]);
}
static void _V10_Dmax_D182_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmax_D182_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.max.182 2 37) (close _V10_Dmax_D182_k60) (bruijn ##.x.1209 0 0) (bruijn ##.c.411 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[37]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmax_D182_k60, self)})),
      _var0,
      statics->vars[3]);
}
static void _V10_Dloop_D415_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D415_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.415 2 0) (bruijn ##.k.1211 1 0) (bruijn ##.x.1213 0 0) (##inline ##vcore.cdr (bruijn ##.bs.414 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      _var0,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D415_lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D415_lambda33, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.bs.414 2 2)) ((bruijn ##.k.1211 0 0) (bruijn ##.ret.416 0 1)) ((bruijn ##.max.182 3 37) (close _V10_Dloop_D415_k61) (bruijn ##.a.413 2 1) (##inline ##vcore.car (bruijn ##.bs.414 2 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[37]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D415_k61, self)})),
      statics->up->vars[1],
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
__attribute__((used)) static void _V20CaseError__V10_Dmax_D182_lambda32(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmax_D182_lambda32 #t (2 ((bruijn ##.k.1202 0 0) (bruijn ##.a.403 0 1))) (3 (##vcore.> (close _V10_Dmax_D182_k57) (bruijn ##.a.404 0 1) (bruijn ##.b.405 0 2))) (4 ((bruijn ##.max.182 1 37) (close _V10_Dmax_D182_k58) (bruijn ##.a.406 0 1) (bruijn ##.b.407 0 2))) (5 ((bruijn ##.max.182 1 37) (close _V10_Dmax_D182_k59) (bruijn ##.a.409 0 1) (bruijn ##.b.410 0 2))) (2 + (letrec 1 ((close _V10_Dloop_D415_lambda33)) ((bruijn ##.loop.415 0 0) (bruijn ##.k.1210 1 0) (bruijn ##.a.413 1 1) (bruijn ##.bs.414 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmax_D182_lambda32, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmax_D182_lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1202 0 0) (bruijn ##.a.403 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case1__V10_Dmax_D182_lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.> (close _V10_Dmax_D182_k57) (bruijn ##.a.404 0 1) (bruijn ##.b.405 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCmpGt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmax_D182_k57, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case2__V10_Dmax_D182_lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((bruijn ##.max.182 1 37) (close _V10_Dmax_D182_k58) (bruijn ##.a.406 0 1) (bruijn ##.b.407 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[37]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmax_D182_k58, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V10_Dmax_D182_lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // ((bruijn ##.max.182 1 37) (close _V10_Dmax_D182_k59) (bruijn ##.a.409 0 1) (bruijn ##.b.410 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[37]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmax_D182_k59, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case4__V10_Dmax_D182_lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D415_lambda33)) ((bruijn ##.loop.415 0 0) (bruijn ##.k.1210 1 0) (bruijn ##.a.413 1 1) (bruijn ##.bs.414 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D415_lambda33, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
    }
}
void _V10_Dmax_D182_lambda32(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmax_D182_lambda32, @function\n"
#endif
"_V10_Dmax_D182_lambda32:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmax_D182_lambda32\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmax_D182_lambda32\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V10_Dmax_D182_lambda32\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case3__V10_Dmax_D182_lambda32\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case4__V10_Dmax_D182_lambda32\n"
"    jmp _V20CaseError__V10_Dmax_D182_lambda32\n"
);
static void _V10_Dmin_D183_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmin_D183_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1218 0 0) ((bruijn ##.k.1217 1 0) (bruijn ##.a.419 1 1)) ((bruijn ##.k.1217 1 0) (bruijn ##.b.420 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
}
}
static void _V10_Dmin_D183_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmin_D183_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.min.183 2 38) (bruijn ##.k.1219 1 0) (bruijn ##.x.1220 0 0) (bruijn ##.c.423 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[38]), 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
static void _V10_Dmin_D183_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmin_D183_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.min.183 3 38) (bruijn ##.k.1221 2 0) (bruijn ##.x.1222 0 0) (bruijn ##.d.427 2 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[38]), 3,
      statics->up->vars[0],
      _var0,
      statics->up->vars[4]);
}
static void _V10_Dmin_D183_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmin_D183_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.min.183 2 38) (close _V10_Dmin_D183_k65) (bruijn ##.x.1223 0 0) (bruijn ##.c.426 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[38]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmin_D183_k65, self)})),
      _var0,
      statics->vars[3]);
}
static void _V10_Dloop_D430_k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D430_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.430 2 0) (bruijn ##.k.1225 1 0) (bruijn ##.x.1227 0 0) (##inline ##vcore.cdr (bruijn ##.bs.429 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      _var0,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D430_lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D430_lambda35, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.bs.429 2 2)) ((bruijn ##.k.1225 0 0) (bruijn ##.ret.431 0 1)) ((bruijn ##.min.183 3 38) (close _V10_Dloop_D430_k66) (bruijn ##.a.428 2 1) (##inline ##vcore.car (bruijn ##.bs.429 2 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[38]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D430_k66, self)})),
      statics->up->vars[1],
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
__attribute__((used)) static void _V20CaseError__V10_Dmin_D183_lambda34(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmin_D183_lambda34 #t (2 ((bruijn ##.k.1216 0 0) (bruijn ##.a.418 0 1))) (3 (##vcore.< (close _V10_Dmin_D183_k62) (bruijn ##.a.419 0 1) (bruijn ##.b.420 0 2))) (4 ((bruijn ##.min.183 1 38) (close _V10_Dmin_D183_k63) (bruijn ##.a.421 0 1) (bruijn ##.b.422 0 2))) (5 ((bruijn ##.min.183 1 38) (close _V10_Dmin_D183_k64) (bruijn ##.a.424 0 1) (bruijn ##.b.425 0 2))) (2 + (letrec 1 ((close _V10_Dloop_D430_lambda35)) ((bruijn ##.loop.430 0 0) (bruijn ##.k.1224 1 0) (bruijn ##.a.428 1 1) (bruijn ##.bs.429 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmin_D183_lambda34, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmin_D183_lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1216 0 0) (bruijn ##.a.418 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case1__V10_Dmin_D183_lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.< (close _V10_Dmin_D183_k62) (bruijn ##.a.419 0 1) (bruijn ##.b.420 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmin_D183_k62, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case2__V10_Dmin_D183_lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((bruijn ##.min.183 1 38) (close _V10_Dmin_D183_k63) (bruijn ##.a.421 0 1) (bruijn ##.b.422 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[38]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmin_D183_k63, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V10_Dmin_D183_lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // ((bruijn ##.min.183 1 38) (close _V10_Dmin_D183_k64) (bruijn ##.a.424 0 1) (bruijn ##.b.425 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[38]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmin_D183_k64, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case4__V10_Dmin_D183_lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D430_lambda35)) ((bruijn ##.loop.430 0 0) (bruijn ##.k.1224 1 0) (bruijn ##.a.428 1 1) (bruijn ##.bs.429 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D430_lambda35, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
    }
}
void _V10_Dmin_D183_lambda34(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmin_D183_lambda34, @function\n"
#endif
"_V10_Dmin_D183_lambda34:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmin_D183_lambda34\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmin_D183_lambda34\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V10_Dmin_D183_lambda34\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case3__V10_Dmin_D183_lambda34\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case4__V10_Dmin_D183_lambda34\n"
"    jmp _V20CaseError__V10_Dmin_D183_lambda34\n"
);
static void _V10_Dcaar_D184_lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaar_D184_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1230 0 0) (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.433 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)));
}
static void _V10_Dcadr_D185_lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcadr_D185_lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1232 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.434 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)));
}
static void _V10_Dcdar_D186_lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdar_D186_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1234 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.435 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)));
}
static void _V10_Dcddr_D187_lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcddr_D187_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1236 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.436 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)));
}
static void _V10_Dcaaar_D188_lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaaar_D188_lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1238 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.437 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1))));
}
static void _V10_Dcaadr_D189_lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaadr_D189_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1241 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.438 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1))));
}
static void _V10_Dcadar_D190_lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcadar_D190_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1244 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.439 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1))));
}
static void _V10_Dcaddr_D191_lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaddr_D191_lambda43, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1247 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.440 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1))));
}
static void _V10_Dcdaar_D192_lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdaar_D192_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1250 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.441 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1))));
}
static void _V10_Dcdadr_D193_lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdadr_D193_lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1253 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.442 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1))));
}
static void _V10_Dcddar_D194_lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcddar_D194_lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1256 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.443 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1))));
}
static void _V10_Dcdddr_D195_lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdddr_D195_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1259 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.444 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1))));
}
static void _V10_Dcaaaar_D196_lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaaaar_D196_lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1262 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.445 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
static void _V10_Dcaaadr_D197_lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaaadr_D197_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1266 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.446 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
static void _V10_Dcaadar_D198_lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaadar_D198_lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1270 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.447 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
static void _V10_Dcaaddr_D199_lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaaddr_D199_lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1274 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.448 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
static void _V10_Dcadaar_D200_lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcadaar_D200_lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1278 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.449 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
static void _V10_Dcadadr_D201_lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcadadr_D201_lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1282 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.450 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
static void _V10_Dcaddar_D202_lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaddar_D202_lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1286 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.451 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
static void _V10_Dcadddr_D203_lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcadddr_D203_lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1290 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.452 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
static void _V10_Dcdaaar_D204_lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdaaar_D204_lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1294 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.453 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
static void _V10_Dcdaadr_D205_lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdaadr_D205_lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1298 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.454 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
static void _V10_Dcdadar_D206_lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdadar_D206_lambda58, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1302 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.455 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
static void _V10_Dcdaddr_D207_lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdaddr_D207_lambda59, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1306 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.456 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
static void _V10_Dcddaar_D208_lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcddaar_D208_lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1310 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.457 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
static void _V10_Dcddadr_D209_lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcddadr_D209_lambda61, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1314 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.458 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
static void _V10_Dcdddar_D210_lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdddar_D210_lambda62, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1318 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.459 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
static void _V10_Dcddddr_D211_lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcddddr_D211_lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1322 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.460 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
static void _V10_Dlist_D212_lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist_D212_lambda64, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // ((bruijn ##.k.1326 0 0) (bruijn ##.args.461 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _varargs);
}
static void _V10_Dlist_Q_D213_k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist_Q_D213_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1328 0 0) ((bruijn ##.k.1327 1 0) (bruijn ##.p.1328 0 0)) (if (##inline ##vcore.pair? (bruijn ##.lst.462 1 1)) ((bruijn ##.list?.213 2 68) (bruijn ##.k.1327 1 0) (##inline ##vcore.cdr (bruijn ##.lst.462 1 1))) ((bruijn ##.k.1327 1 0) #f)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[68]), 2,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
}
static void _V10_Dlist_Q_D213_lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist_Q_D213_lambda65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dlist_Q_D213_k67) (##inline ##vcore.null? (bruijn ##.lst.462 0 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dlist_Q_D213_k67, .env = self }, }, 1,
      VInlineNullP2(runtime,
        _var1));
}
static void _V10_Dloop_D464_lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D464_lambda67, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.lst.465 0 1)) ((bruijn ##.k.1332 0 0) (bruijn ##.i.466 0 2)) (basic-block 1 1 (##.reg.2798) ((##vcore.+ (bruijn ##.i.466 1 2) 1)) ((bruijn ##.loop.464 2 0) (bruijn ##.k.1332 1 0) (##inline ##vcore.cdr (bruijn ##.lst.465 1 1)) (bruijn ##.reg.2798 0 0))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      self->vars[0]);
    }
}
}
static void _V10_Dlength_D214_lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlength_D214_lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D464_lambda67)) ((bruijn ##.loop.464 0 0) (bruijn ##.k.1331 1 0) (bruijn ##.lst.463 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D464_lambda67, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(0l));
    }
}
static void _V10_Dlist__tail_D215_lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__tail_D215_lambda68, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.x.468 0 2) 0) ((bruijn ##.k.1336 0 0) (bruijn ##.lst.467 0 1)) (basic-block 1 1 (##.reg.2799) ((##vcore.- (bruijn ##.x.468 1 2) 1)) ((bruijn ##.list-tail.215 2 70) (bruijn ##.k.1336 1 0) (##inline ##vcore.cdr (bruijn ##.lst.467 1 1)) (bruijn ##.reg.2799 0 0))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var2,
        VEncodeInt(0l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[70]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      self->vars[0]);
    }
}
}
static void _V10_Dlist__ref_D216_lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__ref_D216_lambda69, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.x.470 0 2) 0) ((bruijn ##.k.1340 0 0) (##inline ##vcore.car (bruijn ##.lst.469 0 1))) (basic-block 1 1 (##.reg.2800) ((##vcore.- (bruijn ##.x.470 1 2) 1)) ((bruijn ##.list-ref.216 2 71) (bruijn ##.k.1340 1 0) (##inline ##vcore.cdr (bruijn ##.lst.469 1 1)) (bruijn ##.reg.2800 0 0))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var2,
        VEncodeInt(0l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        _var1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[71]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      self->vars[0]);
    }
}
}
static void _V10_Dlist__set_B_D217_k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__set_B_D217_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-car! (bruijn ##.k.1344 1 0) (bruijn ##.x.1345 0 0) (bruijn ##.val.473 1 3))
    VCallFuncWithGC(runtime, (VFunc)VSetCar2, 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
static void _V10_Dlist__set_B_D217_lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__set_B_D217_lambda70, got ~D~N"
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
  // ((bruijn ##.list-tail.215 1 70) (close _V10_Dlist__set_B_D217_k68) (bruijn ##.lst.471 0 1) (bruijn ##.i.472 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[70]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__set_B_D217_k68, self)})),
      _var1,
      _var2);
}
static void _V10_Dlist__copy_D218_k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__copy_D218_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1346 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.474 1 1)) (bruijn ##.x.1349 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
static void _V10_Dlist__copy_D218_lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__copy_D218_lambda71, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.lst.474 0 1)) ((bruijn ##.k.1346 0 0) '()) ((bruijn ##.list-copy.218 1 73) (close _V10_Dlist__copy_D218_k69) (##inline ##vcore.cdr (bruijn ##.lst.474 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[73]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__copy_D218_k69, self)})),
      VInlineCdr2(runtime,
        _var1));
}
}
static void _V10_Dloop_D478_lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D478_lambda73, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.k.479 0 1) 0) ((bruijn ##.k.1353 0 0) (bruijn ##.ret.480 0 2)) (basic-block 1 1 (##.reg.2801) ((##vcore.- (bruijn ##.k.479 1 1) 1)) ((bruijn ##.loop.478 2 0) (bruijn ##.k.1353 1 0) (bruijn ##.reg.2801 0 0) (##inline ##vcore.cons (bruijn ##.val.477 3 2) (bruijn ##.ret.480 1 2)))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        VEncodeInt(0l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      self->vars[0],
      VInlineCons2(runtime,
        statics->up->up->vars[2],
        statics->vars[2]));
    }
}
}
__attribute__((used)) static void _V20CaseError__V10_Dmake__list_D219_lambda72(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__list_D219_lambda72 #t (2 ((bruijn ##.make-list.219 1 74) (bruijn ##.k.1351 0 0) (bruijn ##.k.475 0 1) #f)) (3 (letrec 1 ((close _V10_Dloop_D478_lambda73)) ((bruijn ##.loop.478 0 0) (bruijn ##.k.1352 1 0) (bruijn ##.k.476 1 1) '()))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__list_D219_lambda72, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__list_D219_lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.make-list.219 1 74) (bruijn ##.k.1351 0 0) (bruijn ##.k.475 0 1) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[74]), 3,
      _var0,
      _var1,
      VEncodeBool(false));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__list_D219_lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D478_lambda73)) ((bruijn ##.loop.478 0 0) (bruijn ##.k.1352 1 0) (bruijn ##.k.476 1 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D478_lambda73, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      VNULL);
    }
}
void _V10_Dmake__list_D219_lambda72(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__list_D219_lambda72, @function\n"
#endif
"_V10_Dmake__list_D219_lambda72:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__list_D219_lambda72\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__list_D219_lambda72\n"
"    jmp _V20CaseError__V10_Dmake__list_D219_lambda72\n"
);
static void _V10_Dloop_D483_k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D483_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1358 2 0) (##inline ##vcore.cons (bruijn ##.x.1360 1 0) (bruijn ##.x.1361 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Dloop_D483_k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D483_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.483 2 0) (close _V10_Dloop_D483_k71) (##inline ##vcore.cdr (bruijn ##.xs.484 1 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D483_k71, self)})),
      VInlineCdr2(runtime,
        statics->vars[1]));
}
static void _V10_Dloop_D483_lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D483_lambda75, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.xs.484 0 1)) ((bruijn ##.k.1358 0 0) '()) ((bruijn ##.f.481 2 1) (close _V10_Dloop_D483_k70) (##inline ##vcore.car (bruijn ##.xs.484 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D483_k70, self)})),
      VInlineCar2(runtime,
        _var1));
}
}
static void _V10_Dloop_D488_k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D488_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1373 1 0) ((bruijn ##.k.1374 0 0) (bruijn ##.p.1373 1 0)) ((bruijn ##.k.1374 0 0) (##inline ##vcore.null? (bruijn ##.ys.490 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineNullP2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dloop_D488_k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D488_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1365 4 0) (##inline ##vcore.cons (bruijn ##.x.1367 1 0) (bruijn ##.x.1368 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Dloop_D488_k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D488_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.488 4 0) (close _V10_Dloop_D488_k76) (##inline ##vcore.cdr (bruijn ##.xs.489 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.490 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D488_k76, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D488_k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D488_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1366 0 0) ((bruijn ##.k.1365 2 0) '()) ((bruijn ##.f.485 4 1) (close _V10_Dloop_D488_k75) (##inline ##vcore.car (bruijn ##.xs.489 2 1)) (##inline ##vcore.car (bruijn ##.ys.490 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D488_k75, self)})),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dloop_D488_k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D488_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D488_k73) (close _V10_Dloop_D488_k74))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D488_k73, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D488_k74, self)})));
}
static void _V10_Dloop_D488_lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D488_lambda76, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D488_k72) (##inline ##vcore.null? (bruijn ##.xs.489 0 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D488_k72, .env = self }, }, 1,
      VInlineNullP2(runtime,
        _var1));
}
static void _V10_Dloop_D495_k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D495_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1388 0 0) ((bruijn ##.k.1387 1 0) (bruijn ##.p.1388 0 0)) ((bruijn ##.k.1387 1 0) (##inline ##vcore.null? (bruijn ##.zs.498 3 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNullP2(runtime,
        statics->up->up->vars[3]));
}
}
static void _V10_Dloop_D495_k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D495_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1386 1 0) ((bruijn ##.k.1387 0 0) (bruijn ##.p.1386 1 0)) ((close _V10_Dloop_D495_k79) (##inline ##vcore.null? (bruijn ##.ys.497 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D495_k79, .env = self }, }, 1,
      VInlineNullP2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dloop_D495_k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D495_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1376 4 0) (##inline ##vcore.cons (bruijn ##.x.1378 1 0) (bruijn ##.x.1379 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Dloop_D495_k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D495_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.495 4 0) (close _V10_Dloop_D495_k82) (##inline ##vcore.cdr (bruijn ##.xs.496 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.497 3 2)) (##inline ##vcore.cdr (bruijn ##.zs.498 3 3)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D495_k82, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->up->vars[2]),
      VInlineCdr2(runtime,
        statics->up->up->vars[3]));
}
static void _V10_Dloop_D495_k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D495_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1377 0 0) ((bruijn ##.k.1376 2 0) '()) ((bruijn ##.f.491 4 1) (close _V10_Dloop_D495_k81) (##inline ##vcore.car (bruijn ##.xs.496 2 1)) (##inline ##vcore.car (bruijn ##.ys.497 2 2)) (##inline ##vcore.car (bruijn ##.zs.498 2 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D495_k81, self)})),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]),
      VInlineCar2(runtime,
        statics->up->vars[3]));
}
}
static void _V10_Dloop_D495_k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D495_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D495_k78) (close _V10_Dloop_D495_k80))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D495_k78, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D495_k80, self)})));
}
static void _V10_Dloop_D495_lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D495_lambda77, got ~D~N"
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
  // ((close _V10_Dloop_D495_k77) (##inline ##vcore.null? (bruijn ##.xs.496 0 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D495_k77, .env = self }, }, 1,
      VInlineNullP2(runtime,
        _var1));
}
static void _V10_Dloop_D501_k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D501_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1390 6 0) (##inline ##vcore.cons (bruijn ##.x.1392 2 0) (bruijn ##.x.1393 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
static void _V10_Dloop_D501_k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D501_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.501 6 0) (close _V10_Dloop_D501_k88) (bruijn ##.x.1394 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D501_k88, self)})),
      _var0);
}
static void _V10_Dloop_D501_k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D501_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.220 7 75) (close _V10_Dloop_D501_k87) (##intrinsic ##vcore.cdr) (bruijn ##.lsts.502 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 75)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D501_k87, self)})),
      _V40_V10vcore_Dcdr,
      statics->up->up->up->vars[1]);
}
static void _V10_Dloop_D501_k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D501_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dloop_D501_k86) (bruijn ##.f.499 5 1) (bruijn ##.x.1395 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D501_k86, self)})),
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D501_k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D501_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1391 0 0) ((bruijn ##.k.1390 2 0) '()) ((bruijn ##.map.220 5 75) (close _V10_Dloop_D501_k85) (##intrinsic ##vcore.car) (bruijn ##.lsts.502 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 75)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D501_k85, self)})),
      _V40_V10vcore_Dcar,
      statics->up->vars[1]);
}
}
static void _V10_Dloop_D501_k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D501_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.memq.225 4 80) (close _V10_Dloop_D501_k84) #t (bruijn ##.x.1396 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[80]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D501_k84, self)})),
      VEncodeBool(true),
      _var0);
}
static void _V10_Dloop_D501_lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D501_lambda78, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.map.220 3 75) (close _V10_Dloop_D501_k83) (##intrinsic ##vcore.null?) (bruijn ##.lsts.502 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[75]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D501_k83, self)})),
      _V40_V10vcore_Dnull_Q,
      _var1);
}
__attribute__((used)) static void _V20CaseError__V10_Dmap_D220_lambda74(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmap_D220_lambda74 #t (3 (letrec 1 ((close _V10_Dloop_D483_lambda75)) ((bruijn ##.loop.483 0 0) (bruijn ##.k.1357 1 0) (bruijn ##.xs.482 1 2)))) (4 (letrec 1 ((close _V10_Dloop_D488_lambda76)) ((bruijn ##.loop.488 0 0) (bruijn ##.k.1364 1 0) (bruijn ##.xs.486 1 2) (bruijn ##.ys.487 1 3)))) (5 (letrec 1 ((close _V10_Dloop_D495_lambda77)) ((bruijn ##.loop.495 0 0) (bruijn ##.k.1375 1 0) (bruijn ##.xs.492 1 2) (bruijn ##.ys.493 1 3) (bruijn ##.zs.494 1 4)))) (2 + (letrec 1 ((close _V10_Dloop_D501_lambda78)) ((bruijn ##.loop.501 0 0) (bruijn ##.k.1389 1 0) (bruijn ##.lsts.500 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmap_D220_lambda74, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmap_D220_lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D483_lambda75)) ((bruijn ##.loop.483 0 0) (bruijn ##.k.1357 1 0) (bruijn ##.xs.482 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D483_lambda75, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
__attribute__((used)) static void _V20Case1__V10_Dmap_D220_lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (letrec 1 ((close _V10_Dloop_D488_lambda76)) ((bruijn ##.loop.488 0 0) (bruijn ##.k.1364 1 0) (bruijn ##.xs.486 1 2) (bruijn ##.ys.487 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D488_lambda76, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[2],
      statics->vars[3]);
    }
}
__attribute__((used)) static void _V20Case2__V10_Dmap_D220_lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (letrec 1 ((close _V10_Dloop_D495_lambda77)) ((bruijn ##.loop.495 0 0) (bruijn ##.k.1375 1 0) (bruijn ##.xs.492 1 2) (bruijn ##.ys.493 1 3) (bruijn ##.zs.494 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D495_lambda77, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      statics->vars[2],
      statics->vars[3],
      statics->vars[4]);
    }
}
__attribute__((used)) static void _V20Case3__V10_Dmap_D220_lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D501_lambda78)) ((bruijn ##.loop.501 0 0) (bruijn ##.k.1389 1 0) (bruijn ##.lsts.500 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D501_lambda78, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
void _V10_Dmap_D220_lambda74(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmap_D220_lambda74, @function\n"
#endif
"_V10_Dmap_D220_lambda74:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dmap_D220_lambda74\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dmap_D220_lambda74\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dmap_D220_lambda74\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V10_Dmap_D220_lambda74\n"
"    jmp _V20CaseError__V10_Dmap_D220_lambda74\n"
);
static void _V10_Dloop_D505_k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D505_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.505 2 0) (bruijn ##.k.1398 1 0) (##inline ##vcore.cdr (bruijn ##.xs.506 1 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]));
}
static void _V10_Dloop_D505_lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D505_lambda80, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.xs.506 0 1))) ((bruijn ##.f.503 2 1) (close _V10_Dloop_D505_k89) (##inline ##vcore.car (bruijn ##.xs.506 0 1))) ((bruijn ##.k.1398 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineNullP2(runtime,
        _var1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D505_k89, self)})),
      VInlineCar2(runtime,
        _var1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D510_k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D510_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1413 1 0) ((bruijn ##.k.1414 0 0) (bruijn ##.p.1413 1 0)) ((bruijn ##.k.1414 0 0) (##inline ##vcore.null? (bruijn ##.ys.512 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineNullP2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dloop_D510_k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D510_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.510 4 0) (bruijn ##.k.1405 3 0) (##inline ##vcore.cdr (bruijn ##.xs.511 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.512 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D510_k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D510_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1412 0 0)) ((bruijn ##.f.507 4 1) (close _V10_Dloop_D510_k93) (##inline ##vcore.car (bruijn ##.xs.511 2 1)) (##inline ##vcore.car (bruijn ##.ys.512 2 2))) ((bruijn ##.k.1405 2 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D510_k93, self)})),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D510_k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D510_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D510_k91) (close _V10_Dloop_D510_k92))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D510_k91, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D510_k92, self)})));
}
static void _V10_Dloop_D510_lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D510_lambda81, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D510_k90) (##inline ##vcore.null? (bruijn ##.xs.511 0 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D510_k90, .env = self }, }, 1,
      VInlineNullP2(runtime,
        _var1));
}
static void _V10_Dloop_D517_k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D517_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1428 0 0) ((bruijn ##.k.1427 1 0) (bruijn ##.p.1428 0 0)) ((bruijn ##.k.1427 1 0) (##inline ##vcore.null? (bruijn ##.zs.520 3 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNullP2(runtime,
        statics->up->up->vars[3]));
}
}
static void _V10_Dloop_D517_k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D517_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1426 1 0) ((bruijn ##.k.1427 0 0) (bruijn ##.p.1426 1 0)) ((close _V10_Dloop_D517_k96) (##inline ##vcore.null? (bruijn ##.ys.519 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D517_k96, .env = self }, }, 1,
      VInlineNullP2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dloop_D517_k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D517_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.517 4 0) (bruijn ##.k.1416 3 0) (##inline ##vcore.cdr (bruijn ##.xs.518 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.519 3 2)) (##inline ##vcore.cdr (bruijn ##.zs.520 3 3)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 4,
      statics->up->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->up->vars[2]),
      VInlineCdr2(runtime,
        statics->up->up->vars[3]));
}
static void _V10_Dloop_D517_k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D517_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1425 0 0)) ((bruijn ##.f.513 4 1) (close _V10_Dloop_D517_k98) (##inline ##vcore.car (bruijn ##.xs.518 2 1)) (##inline ##vcore.car (bruijn ##.ys.519 2 2)) (##inline ##vcore.car (bruijn ##.zs.520 2 3))) ((bruijn ##.k.1416 2 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D517_k98, self)})),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]),
      VInlineCar2(runtime,
        statics->up->vars[3]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D517_k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D517_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D517_k95) (close _V10_Dloop_D517_k97))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D517_k95, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D517_k97, self)})));
}
static void _V10_Dloop_D517_lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D517_lambda82, got ~D~N"
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
  // ((close _V10_Dloop_D517_k94) (##inline ##vcore.null? (bruijn ##.xs.518 0 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D517_k94, .env = self }, }, 1,
      VInlineNullP2(runtime,
        _var1));
}
static void _V10_Dloop_D523_k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D523_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.523 6 0) (bruijn ##.k.1430 5 0) (bruijn ##.x.1433 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      _var0);
}
static void _V10_Dloop_D523_k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D523_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.220 7 75) (close _V10_Dloop_D523_k103) (##intrinsic ##vcore.cdr) (bruijn ##.lsts.524 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 75)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D523_k103, self)})),
      _V40_V10vcore_Dcdr,
      statics->up->up->up->vars[1]);
}
static void _V10_Dloop_D523_k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D523_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dloop_D523_k102) (bruijn ##.f.521 5 1) (bruijn ##.x.1434 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D523_k102, self)})),
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D523_k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D523_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1435 0 0)) ((bruijn ##.map.220 5 75) (close _V10_Dloop_D523_k101) (##intrinsic ##vcore.car) (bruijn ##.lsts.524 2 1)) ((bruijn ##.k.1430 2 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 75)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D523_k101, self)})),
      _V40_V10vcore_Dcar,
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D523_k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D523_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.memq.225 4 80) (close _V10_Dloop_D523_k100) #t (bruijn ##.x.1436 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[80]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D523_k100, self)})),
      VEncodeBool(true),
      _var0);
}
static void _V10_Dloop_D523_lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D523_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.map.220 3 75) (close _V10_Dloop_D523_k99) (##intrinsic ##vcore.null?) (bruijn ##.lsts.524 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[75]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D523_k99, self)})),
      _V40_V10vcore_Dnull_Q,
      _var1);
}
__attribute__((used)) static void _V20CaseError__V10_Dfor__each_D221_lambda79(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dfor__each_D221_lambda79 #t (3 (letrec 1 ((close _V10_Dloop_D505_lambda80)) ((bruijn ##.loop.505 0 0) (bruijn ##.k.1397 1 0) (bruijn ##.xs.504 1 2)))) (4 (letrec 1 ((close _V10_Dloop_D510_lambda81)) ((bruijn ##.loop.510 0 0) (bruijn ##.k.1404 1 0) (bruijn ##.xs.508 1 2) (bruijn ##.ys.509 1 3)))) (5 (letrec 1 ((close _V10_Dloop_D517_lambda82)) ((bruijn ##.loop.517 0 0) (bruijn ##.k.1415 1 0) (bruijn ##.xs.514 1 2) (bruijn ##.ys.515 1 3) (bruijn ##.zs.516 1 4)))) (2 + (letrec 1 ((close _V10_Dloop_D523_lambda83)) ((bruijn ##.loop.523 0 0) (bruijn ##.k.1429 1 0) (bruijn ##.lsts.522 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dfor__each_D221_lambda79, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dfor__each_D221_lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D505_lambda80)) ((bruijn ##.loop.505 0 0) (bruijn ##.k.1397 1 0) (bruijn ##.xs.504 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D505_lambda80, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
__attribute__((used)) static void _V20Case1__V10_Dfor__each_D221_lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (letrec 1 ((close _V10_Dloop_D510_lambda81)) ((bruijn ##.loop.510 0 0) (bruijn ##.k.1404 1 0) (bruijn ##.xs.508 1 2) (bruijn ##.ys.509 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D510_lambda81, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[2],
      statics->vars[3]);
    }
}
__attribute__((used)) static void _V20Case2__V10_Dfor__each_D221_lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (letrec 1 ((close _V10_Dloop_D517_lambda82)) ((bruijn ##.loop.517 0 0) (bruijn ##.k.1415 1 0) (bruijn ##.xs.514 1 2) (bruijn ##.ys.515 1 3) (bruijn ##.zs.516 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D517_lambda82, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      statics->vars[2],
      statics->vars[3],
      statics->vars[4]);
    }
}
__attribute__((used)) static void _V20Case3__V10_Dfor__each_D221_lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D523_lambda83)) ((bruijn ##.loop.523 0 0) (bruijn ##.k.1429 1 0) (bruijn ##.lsts.522 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D523_lambda83, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
void _V10_Dfor__each_D221_lambda79(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dfor__each_D221_lambda79, @function\n"
#endif
"_V10_Dfor__each_D221_lambda79:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dfor__each_D221_lambda79\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dfor__each_D221_lambda79\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dfor__each_D221_lambda79\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V10_Dfor__each_D221_lambda79\n"
"    jmp _V20CaseError__V10_Dfor__each_D221_lambda79\n"
);
static void _V10_Dloop_D528_k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D528_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kons.525 3 1) (bruijn ##.k.1438 1 0) (##inline ##vcore.car (bruijn ##.ks.529 1 1)) (bruijn ##.x.1441 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
static void _V10_Dloop_D528_lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D528_lambda85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.ks.529 0 1)) ((bruijn ##.k.1438 0 0) (bruijn ##.knil.526 2 2)) ((bruijn ##.loop.528 1 0) (close _V10_Dloop_D528_k104) (##inline ##vcore.cdr (bruijn ##.ks.529 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D528_k104, self)})),
      VInlineCdr2(runtime,
        _var1));
}
}
static void _V10_Dfold__right_D222_lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold__right_D222_lambda84, got ~D~N"
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
  // (letrec 1 ((close _V10_Dloop_D528_lambda85)) ((bruijn ##.loop.528 0 0) (bruijn ##.k.1437 1 0) (bruijn ##.ks.527 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D528_lambda85, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[3]);
    }
}
static void _V10_Dloop_D533_k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D533_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1446 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.a.534 1 1)) (bruijn ##.x.1449 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
static void _V10_Dloop_D533_lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D533_lambda87, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.a.534 0 1)) ((bruijn ##.k.1446 0 0) (bruijn ##.b.532 2 2)) ((bruijn ##.loop.533 1 0) (close _V10_Dloop_D533_k105) (##inline ##vcore.cdr (bruijn ##.a.534 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D533_k105, self)})),
      VInlineCdr2(runtime,
        _var1));
}
}
static void _V10_Dappend_D223_k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_D223_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.223 2 78) (bruijn ##.k.1451 1 0) (bruijn ##.a.535 1 1) (bruijn ##.x.1452 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[78]), 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
static void _V10_Dappend_D223_k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_D223_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.223 3 78) (bruijn ##.k.1453 2 0) (bruijn ##.a.538 2 1) (bruijn ##.x.1454 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[78]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dappend_D223_k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_D223_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.223 2 78) (close _V10_Dappend_D223_k108) (bruijn ##.b.539 1 2) (bruijn ##.x.1455 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[78]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dappend_D223_k108, self)})),
      statics->vars[2],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dappend_D223_lambda86(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dappend_D223_lambda86 #t (1 ((bruijn ##.k.1443 0 0) '())) (2 ((bruijn ##.k.1444 0 0) (bruijn ##.a.530 0 1))) (3 (letrec 1 ((close _V10_Dloop_D533_lambda87)) ((bruijn ##.loop.533 0 0) (bruijn ##.k.1445 1 0) (bruijn ##.a.531 1 1)))) (4 ((bruijn ##.append.223 1 78) (close _V10_Dappend_D223_k106) (bruijn ##.b.536 0 2) (bruijn ##.c.537 0 3))) (5 ((bruijn ##.append.223 1 78) (close _V10_Dappend_D223_k107) (bruijn ##.c.540 0 3) (bruijn ##.d.541 0 4))) (1 + ((bruijn ##.fold-right.222 1 77) (bruijn ##.k.1456 0 0) (bruijn ##.append.223 1 78) '() (bruijn ##.lsts.542 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dappend_D223_lambda86, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dappend_D223_lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // ((bruijn ##.k.1443 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
__attribute__((used)) static void _V20Case1__V10_Dappend_D223_lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1444 0 0) (bruijn ##.a.530 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V10_Dappend_D223_lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D533_lambda87)) ((bruijn ##.loop.533 0 0) (bruijn ##.k.1445 1 0) (bruijn ##.a.531 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D533_lambda87, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[1]);
    }
}
__attribute__((used)) static void _V20Case3__V10_Dappend_D223_lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((bruijn ##.append.223 1 78) (close _V10_Dappend_D223_k106) (bruijn ##.b.536 0 2) (bruijn ##.c.537 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[78]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dappend_D223_k106, self)})),
      _var2,
      _var3);
}
__attribute__((used)) static void _V20Case4__V10_Dappend_D223_lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // ((bruijn ##.append.223 1 78) (close _V10_Dappend_D223_k107) (bruijn ##.c.540 0 3) (bruijn ##.d.541 0 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[78]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dappend_D223_k107, self)})),
      _var3,
      _var4);
}
__attribute__((used)) static void _V20Case5__V10_Dappend_D223_lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // ((bruijn ##.fold-right.222 1 77) (bruijn ##.k.1456 0 0) (bruijn ##.append.223 1 78) '() (bruijn ##.lsts.542 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[77]), 4,
      _var0,
      statics->vars[78],
      VNULL,
      _varargs);
}
void _V10_Dappend_D223_lambda86(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dappend_D223_lambda86, @function\n"
#endif
"_V10_Dappend_D223_lambda86:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dappend_D223_lambda86\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dappend_D223_lambda86\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dappend_D223_lambda86\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dappend_D223_lambda86\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V10_Dappend_D223_lambda86\n"
"    cmp " ARGC_REG ", 1\n"
"    jge _V20Case5__V10_Dappend_D223_lambda86\n"
"    jmp _V20CaseError__V10_Dappend_D223_lambda86\n"
);
static void _V10_Diter_D544_lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D544_lambda89, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (##inline ##vcore.null? (bruijn ##.rest.546 0 2)) ((bruijn ##.k.1458 0 0) (bruijn ##.acc.545 0 1)) ((bruijn ##.iter.544 1 0) (bruijn ##.k.1458 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.rest.546 0 2)) (bruijn ##.acc.545 0 1)) (##inline ##vcore.cdr (bruijn ##.rest.546 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      _var0,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var2),
        _var1),
      VInlineCdr2(runtime,
        _var2));
}
}
static void _V10_Dreverse_D224_lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreverse_D224_lambda88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Diter_D544_lambda89)) ((bruijn ##.iter.544 0 0) (bruijn ##.k.1457 1 0) '() (bruijn ##.lst.543 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D544_lambda89, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VNULL,
      statics->vars[1]);
    }
}
static void _V10_Dmemq_D225_lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemq_D225_lambda90, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (##inline ##vcore.null? (bruijn ##.lst.548 0 2)) ((bruijn ##.k.1463 0 0) #f) (if (##inline ##vcore.eq? (bruijn ##.x.547 0 1) (##inline ##vcore.car (bruijn ##.lst.548 0 2))) ((bruijn ##.k.1463 0 0) (bruijn ##.lst.548 0 2)) ((bruijn ##.memq.225 1 80) (bruijn ##.k.1463 0 0) (bruijn ##.x.547 0 1) (##inline ##vcore.cdr (bruijn ##.lst.548 0 2)))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        VInlineCar2(runtime,
        _var2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 3,
      _var0,
      _var1,
      VInlineCdr2(runtime,
        _var2));
}
}
}
static void _V10_Dmemv_D226_k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemv_D226_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1470 0 0) ((bruijn ##.k.1468 1 0) (bruijn ##.lst.550 1 2)) ((bruijn ##.memv.226 2 81) (bruijn ##.k.1468 1 0) (bruijn ##.x.549 1 1) (##inline ##vcore.cdr (bruijn ##.lst.550 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[81]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dmemv_D226_lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemv_D226_lambda91, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.lst.550 0 2)) ((bruijn ##.k.1468 0 0) #f) (##vcore.eqv? (close _V10_Dmemv_D226_k109) (bruijn ##.x.549 0 1) (##inline ##vcore.car (bruijn ##.lst.550 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemv_D226_k109, self)})),
      _var1,
      VInlineCar2(runtime,
        _var2));
}
}
static void _V10_Dmember_D227_k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmember_D227_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1476 0 0) ((bruijn ##.k.1474 1 0) (bruijn ##.lst.554 1 2)) ((bruijn ##.member.227 2 82) (bruijn ##.k.1474 1 0) (bruijn ##.x.553 1 1) (##inline ##vcore.cdr (bruijn ##.lst.554 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[82]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
}
__attribute__((used)) static void _V20CaseError__V10_Dmember_D227_lambda92(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmember_D227_lambda92 #t (3 ((bruijn ##.member.227 1 82) (bruijn ##.k.1473 0 0) (bruijn ##.x.551 0 1) (bruijn ##.lst.552 0 2) (bruijn ##.equal?.156 1 11))) (4 (if (##inline ##vcore.null? (bruijn ##.lst.554 0 2)) ((bruijn ##.k.1474 0 0) #f) ((bruijn ##.=.555 0 3) (close _V10_Dmember_D227_k110) (bruijn ##.x.553 0 1) (##inline ##vcore.car (bruijn ##.lst.554 0 2))))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmember_D227_lambda92, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmember_D227_lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // ((bruijn ##.member.227 1 82) (bruijn ##.k.1473 0 0) (bruijn ##.x.551 0 1) (bruijn ##.lst.552 0 2) (bruijn ##.equal?.156 1 11))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[82]), 4,
      _var0,
      _var1,
      _var2,
      statics->vars[11]);
}
__attribute__((used)) static void _V20Case1__V10_Dmember_D227_lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.lst.554 0 2)) ((bruijn ##.k.1474 0 0) #f) ((bruijn ##.=.555 0 3) (close _V10_Dmember_D227_k110) (bruijn ##.x.553 0 1) (##inline ##vcore.car (bruijn ##.lst.554 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var3), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmember_D227_k110, self)})),
      _var1,
      VInlineCar2(runtime,
        _var2));
}
}
void _V10_Dmember_D227_lambda92(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmember_D227_lambda92, @function\n"
#endif
"_V10_Dmember_D227_lambda92:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dmember_D227_lambda92\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dmember_D227_lambda92\n"
"    jmp _V20CaseError__V10_Dmember_D227_lambda92\n"
);
static void _V10_Dassq_D228_k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq_D228_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (bruijn ##.x.556 1 1) (bruijn ##.x.1483 0 0)) ((bruijn ##.k.1479 1 0) (##inline ##vcore.car (bruijn ##.alst.557 1 2))) ((bruijn ##.assq.228 2 83) (bruijn ##.k.1479 1 0) (bruijn ##.x.556 1 1) (##inline ##vcore.cdr (bruijn ##.alst.557 1 2))))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[1],
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCar2(runtime,
        statics->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[83]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dassq_D228_lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq_D228_lambda93, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.alst.557 0 2)) ((bruijn ##.k.1479 0 0) #f) ((bruijn ##.caar.184 1 39) (close _V10_Dassq_D228_k111) (bruijn ##.alst.557 0 2)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[39]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq_D228_k111, self)})),
      _var2);
}
}
static void _V10_Dassv_D229_k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv_D229_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1486 0 0) ((bruijn ##.k.1484 2 0) (##inline ##vcore.car (bruijn ##.alst.559 2 2))) ((bruijn ##.assv.229 3 84) (bruijn ##.k.1484 2 0) (bruijn ##.x.558 2 1) (##inline ##vcore.cdr (bruijn ##.alst.559 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[84]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dassv_D229_k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv_D229_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V10_Dassv_D229_k113) (bruijn ##.x.558 1 1) (bruijn ##.x.1488 0 0))
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv_D229_k113, self)})),
      statics->vars[1],
      _var0);
}
static void _V10_Dassv_D229_lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv_D229_lambda94, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.alst.559 0 2)) ((bruijn ##.k.1484 0 0) #f) ((bruijn ##.caar.184 1 39) (close _V10_Dassv_D229_k112) (bruijn ##.alst.559 0 2)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[39]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv_D229_k112, self)})),
      _var2);
}
}
static void _V10_Dassoc_D230_k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc_D230_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1492 0 0) ((bruijn ##.k.1490 2 0) (##inline ##vcore.car (bruijn ##.alst.563 2 2))) ((bruijn ##.assoc.230 3 85) (bruijn ##.k.1490 2 0) (bruijn ##.x.562 2 1) (##inline ##vcore.cdr (bruijn ##.alst.563 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[85]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dassoc_D230_k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc_D230_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.=.564 1 3) (close _V10_Dassoc_D230_k115) (bruijn ##.x.562 1 1) (bruijn ##.x.1494 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[3]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc_D230_k115, self)})),
      statics->vars[1],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dassoc_D230_lambda95(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dassoc_D230_lambda95 #t (3 ((bruijn ##.assoc.230 1 85) (bruijn ##.k.1489 0 0) (bruijn ##.x.560 0 1) (bruijn ##.alst.561 0 2) (bruijn ##.equal?.156 1 11))) (4 (if (##inline ##vcore.null? (bruijn ##.alst.563 0 2)) ((bruijn ##.k.1490 0 0) #f) ((bruijn ##.caar.184 1 39) (close _V10_Dassoc_D230_k114) (bruijn ##.alst.563 0 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dassoc_D230_lambda95, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dassoc_D230_lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // ((bruijn ##.assoc.230 1 85) (bruijn ##.k.1489 0 0) (bruijn ##.x.560 0 1) (bruijn ##.alst.561 0 2) (bruijn ##.equal?.156 1 11))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[85]), 4,
      _var0,
      _var1,
      _var2,
      statics->vars[11]);
}
__attribute__((used)) static void _V20Case1__V10_Dassoc_D230_lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.alst.563 0 2)) ((bruijn ##.k.1490 0 0) #f) ((bruijn ##.caar.184 1 39) (close _V10_Dassoc_D230_k114) (bruijn ##.alst.563 0 2)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[39]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc_D230_k114, self)})),
      _var2);
}
}
void _V10_Dassoc_D230_lambda95(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dassoc_D230_lambda95, @function\n"
#endif
"_V10_Dassoc_D230_lambda95:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dassoc_D230_lambda95\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dassoc_D230_lambda95\n"
"    jmp _V20CaseError__V10_Dassoc_D230_lambda95\n"
);
static void _V10_Dloop_D566_lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D566_lambda97, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.lst.568 0 2)) (basic-block 1 1 (##.reg.2802) ((##vcore.+ (bruijn ##.n.567 1 1) 1)) ((bruijn ##.loop.566 2 0) (bruijn ##.k.1496 1 0) (bruijn ##.reg.2802 0 0) (##inline ##vcore.cdr (bruijn ##.lst.568 1 2)))) ((bruijn ##.k.1496 0 0) (bruijn ##.n.567 0 1)))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var2))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      self->vars[0],
      VInlineCdr2(runtime,
        statics->vars[2]));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
}
static void _V10_Dnum__pairs_D231_lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dnum__pairs_D231_lambda96, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D566_lambda97)) ((bruijn ##.loop.566 0 0) (bruijn ##.k.1495 1 0) 0 (bruijn ##.lst.565 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D566_lambda97, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VEncodeInt(0l),
      statics->vars[1]);
    }
}
static void _V10_Dloop_D571_lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D571_lambda100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2803) ((##vcore.- (bruijn ##.len.573 2 2) 1)) ((bruijn ##.loop.571 3 0) (bruijn ##.k.1503 1 0) (##inline ##vcore.cdr (bruijn ##.lst.572 2 1)) (bruijn ##.reg.2803 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      self->vars[0]);
    }
}
static void _V10_Dloop_D571_lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D571_lambda101, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.values.305 4 160) (bruijn ##.k.1506 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.572 1 1)) (bruijn ##.d.574 0 1)) (bruijn ##.t.575 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[160]), 3,
      _var0,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var1),
      _var2);
}
static void _V10_Dloop_D571_lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D571_lambda99, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.len.573 0 2) (bruijn ##.n.570 2 2)) ((bruijn ##.values.305 3 160) (bruijn ##.k.1501 0 0) '() (bruijn ##.lst.572 0 1)) (##vcore.call-with-values (bruijn ##.k.1501 0 0) (close _V10_Dloop_D571_lambda100) (close _V10_Dloop_D571_lambda101)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var2,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[160]), 3,
      _var0,
      VNULL,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D571_lambda100, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D571_lambda101, self)})));
}
}
static void _V10_Dsplit__at__right_D232_k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at__right_D232_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.571 1 0) (bruijn ##.k.1500 2 0) (bruijn ##.lst.569 2 1) (bruijn ##.x.1509 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dsplit__at__right_D232_lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at__right_D232_lambda98, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D571_lambda99)) ((bruijn ##.num-pairs.231 2 86) (close _V10_Dsplit__at__right_D232_k116) (bruijn ##.lst.569 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D571_lambda99, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[86]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at__right_D232_k116, self)})),
      statics->vars[1]);
    }
}
static void _V10_Dloop_D578_lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D578_lambda103, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.lst.579 0 1)) ((bruijn ##.k.1511 0 0) (bruijn ##.str.577 2 0)) (basic-block 2 2 (##.reg.2804 ##.reg.2805) ((##vcore.string-set! (bruijn ##.str.577 3 0) (bruijn ##.i.580 1 2) (##inline ##vcore.car (bruijn ##.lst.579 1 1))) (##vcore.+ (bruijn ##.i.580 1 2) 1)) ((bruijn ##.loop.578 2 0) (bruijn ##.k.1511 1 0) (##inline ##vcore.cdr (bruijn ##.lst.579 1 1)) (bruijn ##.reg.2805 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringSet2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[2],
      VInlineCar2(runtime,
        statics->vars[1]));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      self->vars[1]);
    }
}
}
static void _V10_Dlist___Gstring_D233_k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist___Gstring_D233_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D578_lambda103)) ((bruijn ##.loop.578 0 0) (bruijn ##.k.1510 3 0) (bruijn ##.lst.576 3 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D578_lambda103, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      VEncodeInt(0l));
    }
}
static void _V10_Dlist___Gstring_D233_k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist___Gstring_D233_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-string (close _V10_Dlist___Gstring_D233_k118) (bruijn ##.x.1517 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeString2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist___Gstring_D233_k118, self)})),
      _var0);
}
static void _V10_Dlist___Gstring_D233_lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist___Gstring_D233_lambda102, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.length.214 1 69) (close _V10_Dlist___Gstring_D233_k117) (bruijn ##.lst.576 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[69]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist___Gstring_D233_k117, self)})),
      _var1);
}
static void _V10_Dloop_D582_lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D582_lambda105, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.i.583 0 1) -1) ((bruijn ##.k.1519 0 0) (bruijn ##.acc.584 0 2)) (basic-block 2 2 (##.reg.2806 ##.reg.2807) ((##vcore.- (bruijn ##.i.583 1 1) 1) (##vcore.string-ref (bruijn ##.str.581 3 1) (bruijn ##.i.583 1 1))) ((bruijn ##.loop.582 2 0) (bruijn ##.k.1519 1 0) (bruijn ##.reg.2806 0 0) (##inline ##vcore.cons (bruijn ##.reg.2807 0 1) (bruijn ##.acc.584 1 2)))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        VEncodeInt(-1l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VStringRef2(runtime, NULL,
      statics->up->up->vars[1],
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      self->vars[0],
      VInlineCons2(runtime,
        self->vars[1],
        statics->vars[2]));
    }
}
}
static void _V10_Dstring___Glist_D234_lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring___Glist_D234_lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D582_lambda105)) (basic-block 2 2 (##.reg.2808 ##.reg.2809) ((##vcore.string-length (bruijn ##.str.581 2 1)) (##vcore.- (bruijn ##.reg.2808 0 0) 1)) ((bruijn ##.loop.582 1 0) (bruijn ##.k.1518 2 0) (bruijn ##.reg.2809 0 1) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D582_lambda105, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      self->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->vars[0],
      self->vars[1],
      VNULL);
    }
    }
}
static void _V10_Dstring__append_D235_k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D235_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1528 5 0) (bruijn ##.str.589 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dstring__append_D235_k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D235_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2813) ((##vcore.string-length (bruijn ##.a.586 4 1))) (##vcore.string-copy! (close _V10_Dstring__append_D235_k121) (bruijn ##.str.589 2 0) (bruijn ##.reg.2813 0 0) (bruijn ##.b.587 4 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D235_k121, self)})),
      statics->up->vars[0],
      self->vars[0],
      statics->up->up->up->vars[2]);
    }
}
static void _V10_Dstring__append_D235_k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D235_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string-copy! (close _V10_Dstring__append_D235_k120) (bruijn ##.str.589 0 0) 0 (bruijn ##.a.586 2 1))
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D235_k120, self)})),
      _var0,
      VEncodeInt(0l),
      statics->up->vars[1]);
}
static void _V10_Dstring__append_D235_k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D235_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1534 7 0) (bruijn ##.str.594 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dstring__append_D235_k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D235_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.reg.2819 ##.reg.2820 ##.reg.2821) ((##vcore.string-length (bruijn ##.a.590 6 1)) (##vcore.string-length (bruijn ##.b.591 6 2)) (##vcore.+ (bruijn ##.reg.2819 0 0) (bruijn ##.reg.2820 0 1))) (##vcore.string-copy! (close _V10_Dstring__append_D235_k125) (bruijn ##.str.594 4 0) (bruijn ##.reg.2821 0 2) (bruijn ##.c.592 6 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VStringLength2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    self->vars[2] = _VBasic_VAdd2(runtime, NULL,
      self->vars[0],
      self->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D235_k125, self)})),
      statics->up->up->up->vars[0],
      self->vars[2],
      VGetArg(statics, 6-1, 3));
    }
}
static void _V10_Dstring__append_D235_k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D235_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2818) ((##vcore.string-length (bruijn ##.a.590 4 1))) (##vcore.string-copy! (close _V10_Dstring__append_D235_k124) (bruijn ##.str.594 2 0) (bruijn ##.reg.2818 0 0) (bruijn ##.b.591 4 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D235_k124, self)})),
      statics->up->vars[0],
      self->vars[0],
      statics->up->up->up->vars[2]);
    }
}
static void _V10_Dstring__append_D235_k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D235_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string-copy! (close _V10_Dstring__append_D235_k123) (bruijn ##.str.594 0 0) 0 (bruijn ##.a.590 2 1))
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D235_k123, self)})),
      _var0,
      VEncodeInt(0l),
      statics->up->vars[1]);
}
static void _V10_Dstring__append_D235_k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D235_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1545 9 0) (bruijn ##.str.600 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dstring__append_D235_k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D235_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.reg.2831 ##.reg.2832 ##.reg.2833 ##.reg.2834) ((##vcore.string-length (bruijn ##.a.595 8 1)) (##vcore.string-length (bruijn ##.b.596 8 2)) (##vcore.string-length (bruijn ##.c.597 8 3)) (##vcore.+ (bruijn ##.reg.2831 0 0) (bruijn ##.reg.2832 0 1) (bruijn ##.reg.2833 0 2))) (##vcore.string-copy! (close _V10_Dstring__append_D235_k130) (bruijn ##.str.600 6 0) (bruijn ##.reg.2834 0 3) (bruijn ##.d.598 8 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VStringLength2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    self->vars[2] = _VBasic_VStringLength2(runtime, NULL,
      VGetArg(statics, 8-1, 3));
    self->vars[3] = _VBasic_VAdd2(runtime, NULL,
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D235_k130, self)})),
      VGetArg(statics, 6-1, 0),
      self->vars[3],
      VGetArg(statics, 8-1, 4));
    }
}
static void _V10_Dstring__append_D235_k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D235_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.reg.2828 ##.reg.2829 ##.reg.2830) ((##vcore.string-length (bruijn ##.a.595 6 1)) (##vcore.string-length (bruijn ##.b.596 6 2)) (##vcore.+ (bruijn ##.reg.2828 0 0) (bruijn ##.reg.2829 0 1))) (##vcore.string-copy! (close _V10_Dstring__append_D235_k129) (bruijn ##.str.600 4 0) (bruijn ##.reg.2830 0 2) (bruijn ##.c.597 6 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VStringLength2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    self->vars[2] = _VBasic_VAdd2(runtime, NULL,
      self->vars[0],
      self->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D235_k129, self)})),
      statics->up->up->up->vars[0],
      self->vars[2],
      VGetArg(statics, 6-1, 3));
    }
}
static void _V10_Dstring__append_D235_k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D235_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2827) ((##vcore.string-length (bruijn ##.a.595 4 1))) (##vcore.string-copy! (close _V10_Dstring__append_D235_k128) (bruijn ##.str.600 2 0) (bruijn ##.reg.2827 0 0) (bruijn ##.b.596 4 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D235_k128, self)})),
      statics->up->vars[0],
      self->vars[0],
      statics->up->up->up->vars[2]);
    }
}
static void _V10_Dstring__append_D235_k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D235_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string-copy! (close _V10_Dstring__append_D235_k127) (bruijn ##.str.600 0 0) 0 (bruijn ##.a.595 2 1))
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D235_k127, self)})),
      _var0,
      VEncodeInt(0l),
      statics->up->vars[1]);
}
__attribute__((used)) static void _V20CaseError__V10_Dstring__append_D235_lambda106(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dstring__append_D235_lambda106 #t (1 (##vcore.substring (bruijn ##.k.1526 0 0) (##string ##.string.2997))) (2 (##vcore.substring (bruijn ##.k.1527 0 0) (bruijn ##.a.585 0 1))) (3 (basic-block 3 3 (##.reg.2810 ##.reg.2811 ##.reg.2812) ((##vcore.string-length (bruijn ##.a.586 1 1)) (##vcore.string-length (bruijn ##.b.587 1 2)) (##vcore.+ (bruijn ##.reg.2810 0 0) (bruijn ##.reg.2811 0 1))) (##vcore.make-string (close _V10_Dstring__append_D235_k119) (bruijn ##.reg.2812 0 2)))) (4 (basic-block 4 4 (##.reg.2814 ##.reg.2815 ##.reg.2816 ##.reg.2817) ((##vcore.string-length (bruijn ##.a.590 1 1)) (##vcore.string-length (bruijn ##.b.591 1 2)) (##vcore.string-length (bruijn ##.c.592 1 3)) (##vcore.+ (bruijn ##.reg.2814 0 0) (bruijn ##.reg.2815 0 1) (bruijn ##.reg.2816 0 2))) (##vcore.make-string (close _V10_Dstring__append_D235_k122) (bruijn ##.reg.2817 0 3)))) (5 (basic-block 5 5 (##.reg.2822 ##.reg.2823 ##.reg.2824 ##.reg.2825 ##.reg.2826) ((##vcore.string-length (bruijn ##.a.595 1 1)) (##vcore.string-length (bruijn ##.b.596 1 2)) (##vcore.string-length (bruijn ##.c.597 1 3)) (##vcore.string-length (bruijn ##.d.598 1 4)) (##vcore.+ (bruijn ##.reg.2822 0 0) (bruijn ##.reg.2823 0 1) (bruijn ##.reg.2824 0 2) (bruijn ##.reg.2825 0 3))) (##vcore.make-string (close _V10_Dstring__append_D235_k126) (bruijn ##.reg.2826 0 4)))) (1 + ((bruijn ##.fold-right.222 1 77) (bruijn ##.k.1562 0 0) (bruijn ##.string-append.235 1 90) (##string ##.string.2997) (bruijn ##.strs.601 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D235_lambda106, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dstring__append_D235_lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // (##vcore.substring (bruijn ##.k.1526 0 0) (##string ##.string.2997))
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2997.sym, VPOINTER_OTHER));
}
__attribute__((used)) static void _V20Case1__V10_Dstring__append_D235_lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.substring (bruijn ##.k.1527 0 0) (bruijn ##.a.585 0 1))
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 2,
      _var0,
      _var1);
}
__attribute__((used)) static void _V20Case2__V10_Dstring__append_D235_lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.reg.2810 ##.reg.2811 ##.reg.2812) ((##vcore.string-length (bruijn ##.a.586 1 1)) (##vcore.string-length (bruijn ##.b.587 1 2)) (##vcore.+ (bruijn ##.reg.2810 0 0) (bruijn ##.reg.2811 0 1))) (##vcore.make-string (close _V10_Dstring__append_D235_k119) (bruijn ##.reg.2812 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[2]);
    self->vars[2] = _VBasic_VAdd2(runtime, NULL,
      self->vars[0],
      self->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VMakeString2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D235_k119, self)})),
      self->vars[2]);
    }
}
__attribute__((used)) static void _V20Case3__V10_Dstring__append_D235_lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 4 4 (##.reg.2814 ##.reg.2815 ##.reg.2816 ##.reg.2817) ((##vcore.string-length (bruijn ##.a.590 1 1)) (##vcore.string-length (bruijn ##.b.591 1 2)) (##vcore.string-length (bruijn ##.c.592 1 3)) (##vcore.+ (bruijn ##.reg.2814 0 0) (bruijn ##.reg.2815 0 1) (bruijn ##.reg.2816 0 2))) (##vcore.make-string (close _V10_Dstring__append_D235_k122) (bruijn ##.reg.2817 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[2]);
    self->vars[2] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[3]);
    self->vars[3] = _VBasic_VAdd2(runtime, NULL,
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    VCallFuncWithGC(runtime, (VFunc)VMakeString2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D235_k122, self)})),
      self->vars[3]);
    }
}
__attribute__((used)) static void _V20Case4__V10_Dstring__append_D235_lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 5 5 (##.reg.2822 ##.reg.2823 ##.reg.2824 ##.reg.2825 ##.reg.2826) ((##vcore.string-length (bruijn ##.a.595 1 1)) (##vcore.string-length (bruijn ##.b.596 1 2)) (##vcore.string-length (bruijn ##.c.597 1 3)) (##vcore.string-length (bruijn ##.d.598 1 4)) (##vcore.+ (bruijn ##.reg.2822 0 0) (bruijn ##.reg.2823 0 1) (bruijn ##.reg.2824 0 2) (bruijn ##.reg.2825 0 3))) (##vcore.make-string (close _V10_Dstring__append_D235_k126) (bruijn ##.reg.2826 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[2]);
    self->vars[2] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[3]);
    self->vars[3] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[4]);
    self->vars[4] = _VBasic_VAdd2(runtime, NULL,
      self->vars[0],
      self->vars[1],
      self->vars[2],
      self->vars[3]);
    VCallFuncWithGC(runtime, (VFunc)VMakeString2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D235_k126, self)})),
      self->vars[4]);
    }
}
__attribute__((used)) static void _V20Case5__V10_Dstring__append_D235_lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // ((bruijn ##.fold-right.222 1 77) (bruijn ##.k.1562 0 0) (bruijn ##.string-append.235 1 90) (##string ##.string.2997) (bruijn ##.strs.601 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[77]), 4,
      _var0,
      statics->vars[90],
      VEncodePointer(&_V10_Dstring_D2997.sym, VPOINTER_OTHER),
      _varargs);
}
void _V10_Dstring__append_D235_lambda106(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dstring__append_D235_lambda106, @function\n"
#endif
"_V10_Dstring__append_D235_lambda106:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dstring__append_D235_lambda106\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dstring__append_D235_lambda106\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dstring__append_D235_lambda106\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dstring__append_D235_lambda106\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V10_Dstring__append_D235_lambda106\n"
"    cmp " ARGC_REG ", 1\n"
"    jge _V20Case5__V10_Dstring__append_D235_lambda106\n"
"    jmp _V20CaseError__V10_Dstring__append_D235_lambda106\n"
);
static void _V10_Dvector_D236_lambda107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector_D236_lambda107, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.list->vector (bruijn ##.k.1563 0 0) (bruijn ##.args.602 0 1))
    VCallFuncWithGC(runtime, (VFunc)VListVector2, 2,
      _var0,
      _varargs);
}
__attribute__((used)) static void _V20CaseError__V10_Dmake__f32vector_D237_lambda108(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__f32vector_D237_lambda108 #t (2 (##vcore.make-f32vector (bruijn ##.k.1564 0 0) (bruijn ##.len.603 0 1) #f)) (3 (##vcore.make-f32vector (bruijn ##.k.1565 0 0) (bruijn ##.len.604 0 1) (bruijn ##.fill.605 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__f32vector_D237_lambda108, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__f32vector_D237_lambda108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.make-f32vector (bruijn ##.k.1564 0 0) (bruijn ##.len.603 0 1) #f)
    VCallFuncWithGC(runtime, (VFunc)VMakeF32Vector, 3,
      _var0,
      _var1,
      VEncodeBool(false));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__f32vector_D237_lambda108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.make-f32vector (bruijn ##.k.1565 0 0) (bruijn ##.len.604 0 1) (bruijn ##.fill.605 0 2))
    VCallFuncWithGC(runtime, (VFunc)VMakeF32Vector, 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Dmake__f32vector_D237_lambda108(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__f32vector_D237_lambda108, @function\n"
#endif
"_V10_Dmake__f32vector_D237_lambda108:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__f32vector_D237_lambda108\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__f32vector_D237_lambda108\n"
"    jmp _V20CaseError__V10_Dmake__f32vector_D237_lambda108\n"
);
static void _V10_Df32vector_D238_lambda109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Df32vector_D238_lambda109, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.list->f32vector (bruijn ##.k.1566 0 0) (bruijn ##.args.606 0 1))
    VCallFuncWithGC(runtime, (VFunc)VListF32Vector, 2,
      _var0,
      _varargs);
}
static void _V10_Dloop_D609_k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D609_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1569 0 0) ((bruijn ##.k.1568 1 0) (bruijn ##.acc.610 1 1)) (basic-block 2 2 (##.reg.2836 ##.reg.2837) ((##vcore.f32vector-ref (bruijn ##.vec.607 5 1) (bruijn ##.i.611 2 2)) (##vcore.- (bruijn ##.i.611 2 2) 1)) ((bruijn ##.loop.609 3 0) (bruijn ##.k.1568 2 0) (##inline ##vcore.cons (bruijn ##.reg.2836 0 0) (bruijn ##.acc.610 2 1)) (bruijn ##.reg.2837 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VF32VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      VInlineCons2(runtime,
        self->vars[0],
        statics->up->vars[1]),
      self->vars[1]);
    }
}
}
static void _V10_Dloop_D609_lambda111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D609_lambda111, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.< (close _V10_Dloop_D609_k131) (bruijn ##.i.611 0 2) 0)
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D609_k131, self)})),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Df32vector___Glist_D239_lambda110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Df32vector___Glist_D239_lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2835) ((##vcore.f32vector-length (bruijn ##.vec.607 1 1))) (letrec 1 ((close _V10_Dloop_D609_lambda111)) (basic-block 1 1 (##.reg.2838) ((##vcore.- (bruijn ##.reg.2835 2 0) 1)) ((bruijn ##.loop.609 1 0) (bruijn ##.k.1567 3 0) '() (bruijn ##.reg.2838 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorLength(runtime, NULL,
      statics->vars[1]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D609_lambda111, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->vars[0],
      VNULL,
      self->vars[0]);
    }
    }
    }
}
__attribute__((used)) static void _V20CaseError__V10_Dmake__f64vector_D240_lambda112(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__f64vector_D240_lambda112 #t (2 (##vcore.make-f64vector (bruijn ##.k.1574 0 0) (bruijn ##.len.612 0 1) #f)) (3 (##vcore.make-f64vector (bruijn ##.k.1575 0 0) (bruijn ##.len.613 0 1) (bruijn ##.fill.614 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__f64vector_D240_lambda112, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__f64vector_D240_lambda112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.make-f64vector (bruijn ##.k.1574 0 0) (bruijn ##.len.612 0 1) #f)
    VCallFuncWithGC(runtime, (VFunc)VMakeF64Vector, 3,
      _var0,
      _var1,
      VEncodeBool(false));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__f64vector_D240_lambda112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.make-f64vector (bruijn ##.k.1575 0 0) (bruijn ##.len.613 0 1) (bruijn ##.fill.614 0 2))
    VCallFuncWithGC(runtime, (VFunc)VMakeF64Vector, 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Dmake__f64vector_D240_lambda112(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__f64vector_D240_lambda112, @function\n"
#endif
"_V10_Dmake__f64vector_D240_lambda112:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__f64vector_D240_lambda112\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__f64vector_D240_lambda112\n"
"    jmp _V20CaseError__V10_Dmake__f64vector_D240_lambda112\n"
);
static void _V10_Df64vector_D241_lambda113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Df64vector_D241_lambda113, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.list->f64vector (bruijn ##.k.1576 0 0) (bruijn ##.args.615 0 1))
    VCallFuncWithGC(runtime, (VFunc)VListF64Vector, 2,
      _var0,
      _varargs);
}
static void _V10_Dloop_D618_k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D618_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1579 0 0) ((bruijn ##.k.1578 1 0) (bruijn ##.acc.619 1 1)) (basic-block 2 2 (##.reg.2840 ##.reg.2841) ((##vcore.f64vector-ref (bruijn ##.vec.616 5 1) (bruijn ##.i.620 2 2)) (##vcore.- (bruijn ##.i.620 2 2) 1)) ((bruijn ##.loop.618 3 0) (bruijn ##.k.1578 2 0) (##inline ##vcore.cons (bruijn ##.reg.2840 0 0) (bruijn ##.acc.619 2 1)) (bruijn ##.reg.2841 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VF64VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      VInlineCons2(runtime,
        self->vars[0],
        statics->up->vars[1]),
      self->vars[1]);
    }
}
}
static void _V10_Dloop_D618_lambda115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D618_lambda115, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.< (close _V10_Dloop_D618_k132) (bruijn ##.i.620 0 2) 0)
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D618_k132, self)})),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Df64vector___Glist_D242_lambda114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Df64vector___Glist_D242_lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2839) ((##vcore.f64vector-length (bruijn ##.vec.616 1 1))) (letrec 1 ((close _V10_Dloop_D618_lambda115)) (basic-block 1 1 (##.reg.2842) ((##vcore.- (bruijn ##.reg.2839 2 0) 1)) ((bruijn ##.loop.618 1 0) (bruijn ##.k.1577 3 0) '() (bruijn ##.reg.2842 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorLength(runtime, NULL,
      statics->vars[1]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D618_lambda115, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->vars[0],
      VNULL,
      self->vars[0]);
    }
    }
    }
}
__attribute__((used)) static void _V20CaseError__V10_Dmake__s32vector_D243_lambda116(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__s32vector_D243_lambda116 #t (2 (##vcore.make-s32vector (bruijn ##.k.1584 0 0) (bruijn ##.len.621 0 1) #f)) (3 (##vcore.make-s32vector (bruijn ##.k.1585 0 0) (bruijn ##.len.622 0 1) (bruijn ##.fill.623 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__s32vector_D243_lambda116, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__s32vector_D243_lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.make-s32vector (bruijn ##.k.1584 0 0) (bruijn ##.len.621 0 1) #f)
    VCallFuncWithGC(runtime, (VFunc)VMakeS32Vector, 3,
      _var0,
      _var1,
      VEncodeBool(false));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__s32vector_D243_lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.make-s32vector (bruijn ##.k.1585 0 0) (bruijn ##.len.622 0 1) (bruijn ##.fill.623 0 2))
    VCallFuncWithGC(runtime, (VFunc)VMakeS32Vector, 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Dmake__s32vector_D243_lambda116(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__s32vector_D243_lambda116, @function\n"
#endif
"_V10_Dmake__s32vector_D243_lambda116:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__s32vector_D243_lambda116\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__s32vector_D243_lambda116\n"
"    jmp _V20CaseError__V10_Dmake__s32vector_D243_lambda116\n"
);
static void _V10_Ds32vector_D244_lambda117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds32vector_D244_lambda117, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.list->s32vector (bruijn ##.k.1586 0 0) (bruijn ##.args.624 0 1))
    VCallFuncWithGC(runtime, (VFunc)VListS32Vector, 2,
      _var0,
      _varargs);
}
static void _V10_Dloop_D627_k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D627_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1589 0 0) ((bruijn ##.k.1588 1 0) (bruijn ##.acc.628 1 1)) (basic-block 2 2 (##.reg.2844 ##.reg.2845) ((##vcore.s32vector-ref (bruijn ##.vec.625 5 1) (bruijn ##.i.629 2 2)) (##vcore.- (bruijn ##.i.629 2 2) 1)) ((bruijn ##.loop.627 3 0) (bruijn ##.k.1588 2 0) (##inline ##vcore.cons (bruijn ##.reg.2844 0 0) (bruijn ##.acc.628 2 1)) (bruijn ##.reg.2845 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VS32VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      VInlineCons2(runtime,
        self->vars[0],
        statics->up->vars[1]),
      self->vars[1]);
    }
}
}
static void _V10_Dloop_D627_lambda119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D627_lambda119, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.< (close _V10_Dloop_D627_k133) (bruijn ##.i.629 0 2) 0)
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D627_k133, self)})),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Ds32vector___Glist_D245_lambda118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds32vector___Glist_D245_lambda118, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2843) ((##vcore.s32vector-length (bruijn ##.vec.625 1 1))) (letrec 1 ((close _V10_Dloop_D627_lambda119)) (basic-block 1 1 (##.reg.2846) ((##vcore.- (bruijn ##.reg.2843 2 0) 1)) ((bruijn ##.loop.627 1 0) (bruijn ##.k.1587 3 0) '() (bruijn ##.reg.2846 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorLength(runtime, NULL,
      statics->vars[1]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D627_lambda119, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->vars[0],
      VNULL,
      self->vars[0]);
    }
    }
    }
}
__attribute__((used)) static void _V20CaseError__V10_Dmake__u16vector_D246_lambda120(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__u16vector_D246_lambda120 #t (2 (##vcore.make-u16vector (bruijn ##.k.1594 0 0) (bruijn ##.len.630 0 1) #f)) (3 (##vcore.make-u16vector (bruijn ##.k.1595 0 0) (bruijn ##.len.631 0 1) (bruijn ##.fill.632 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__u16vector_D246_lambda120, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__u16vector_D246_lambda120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.make-u16vector (bruijn ##.k.1594 0 0) (bruijn ##.len.630 0 1) #f)
    VCallFuncWithGC(runtime, (VFunc)VMakeU16Vector, 3,
      _var0,
      _var1,
      VEncodeBool(false));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__u16vector_D246_lambda120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.make-u16vector (bruijn ##.k.1595 0 0) (bruijn ##.len.631 0 1) (bruijn ##.fill.632 0 2))
    VCallFuncWithGC(runtime, (VFunc)VMakeU16Vector, 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Dmake__u16vector_D246_lambda120(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__u16vector_D246_lambda120, @function\n"
#endif
"_V10_Dmake__u16vector_D246_lambda120:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__u16vector_D246_lambda120\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__u16vector_D246_lambda120\n"
"    jmp _V20CaseError__V10_Dmake__u16vector_D246_lambda120\n"
);
static void _V10_Du16vector_D247_lambda121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du16vector_D247_lambda121, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.list->u16vector (bruijn ##.k.1596 0 0) (bruijn ##.args.633 0 1))
    VCallFuncWithGC(runtime, (VFunc)VListU16Vector, 2,
      _var0,
      _varargs);
}
static void _V10_Dloop_D636_k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D636_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1599 0 0) ((bruijn ##.k.1598 1 0) (bruijn ##.acc.637 1 1)) (basic-block 2 2 (##.reg.2848 ##.reg.2849) ((##vcore.u16vector-ref (bruijn ##.vec.634 5 1) (bruijn ##.i.638 2 2)) (##vcore.- (bruijn ##.i.638 2 2) 1)) ((bruijn ##.loop.636 3 0) (bruijn ##.k.1598 2 0) (##inline ##vcore.cons (bruijn ##.reg.2848 0 0) (bruijn ##.acc.637 2 1)) (bruijn ##.reg.2849 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VU16VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      VInlineCons2(runtime,
        self->vars[0],
        statics->up->vars[1]),
      self->vars[1]);
    }
}
}
static void _V10_Dloop_D636_lambda123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D636_lambda123, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.< (close _V10_Dloop_D636_k134) (bruijn ##.i.638 0 2) 0)
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D636_k134, self)})),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Du16vector___Glist_D248_lambda122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Du16vector___Glist_D248_lambda122, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2847) ((##vcore.u16vector-length (bruijn ##.vec.634 1 1))) (letrec 1 ((close _V10_Dloop_D636_lambda123)) (basic-block 1 1 (##.reg.2850) ((##vcore.- (bruijn ##.reg.2847 2 0) 1)) ((bruijn ##.loop.636 1 0) (bruijn ##.k.1597 3 0) '() (bruijn ##.reg.2850 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorLength(runtime, NULL,
      statics->vars[1]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D636_lambda123, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->vars[0],
      VNULL,
      self->vars[0]);
    }
    }
    }
}
__attribute__((used)) static void _V20CaseError__V10_Dmake__s16vector_D249_lambda124(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__s16vector_D249_lambda124 #t (2 (##vcore.make-s16vector (bruijn ##.k.1604 0 0) (bruijn ##.len.639 0 1) #f)) (3 (##vcore.make-s16vector (bruijn ##.k.1605 0 0) (bruijn ##.len.640 0 1) (bruijn ##.fill.641 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__s16vector_D249_lambda124, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__s16vector_D249_lambda124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.make-s16vector (bruijn ##.k.1604 0 0) (bruijn ##.len.639 0 1) #f)
    VCallFuncWithGC(runtime, (VFunc)VMakeS16Vector, 3,
      _var0,
      _var1,
      VEncodeBool(false));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__s16vector_D249_lambda124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.make-s16vector (bruijn ##.k.1605 0 0) (bruijn ##.len.640 0 1) (bruijn ##.fill.641 0 2))
    VCallFuncWithGC(runtime, (VFunc)VMakeS16Vector, 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Dmake__s16vector_D249_lambda124(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__s16vector_D249_lambda124, @function\n"
#endif
"_V10_Dmake__s16vector_D249_lambda124:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__s16vector_D249_lambda124\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__s16vector_D249_lambda124\n"
"    jmp _V20CaseError__V10_Dmake__s16vector_D249_lambda124\n"
);
static void _V10_Ds16vector_D250_lambda125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds16vector_D250_lambda125, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.list->s16vector (bruijn ##.k.1606 0 0) (bruijn ##.args.642 0 1))
    VCallFuncWithGC(runtime, (VFunc)VListS16Vector, 2,
      _var0,
      _varargs);
}
static void _V10_Dloop_D645_k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D645_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1609 0 0) ((bruijn ##.k.1608 1 0) (bruijn ##.acc.646 1 1)) (basic-block 2 2 (##.reg.2852 ##.reg.2853) ((##vcore.s16vector-ref (bruijn ##.vec.643 5 1) (bruijn ##.i.647 2 2)) (##vcore.- (bruijn ##.i.647 2 2) 1)) ((bruijn ##.loop.645 3 0) (bruijn ##.k.1608 2 0) (##inline ##vcore.cons (bruijn ##.reg.2852 0 0) (bruijn ##.acc.646 2 1)) (bruijn ##.reg.2853 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VS16VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      VInlineCons2(runtime,
        self->vars[0],
        statics->up->vars[1]),
      self->vars[1]);
    }
}
}
static void _V10_Dloop_D645_lambda127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D645_lambda127, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.< (close _V10_Dloop_D645_k135) (bruijn ##.i.647 0 2) 0)
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D645_k135, self)})),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Ds16vector___Glist_D251_lambda126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds16vector___Glist_D251_lambda126, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2851) ((##vcore.s16vector-length (bruijn ##.vec.643 1 1))) (letrec 1 ((close _V10_Dloop_D645_lambda127)) (basic-block 1 1 (##.reg.2854) ((##vcore.- (bruijn ##.reg.2851 2 0) 1)) ((bruijn ##.loop.645 1 0) (bruijn ##.k.1607 3 0) '() (bruijn ##.reg.2854 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorLength(runtime, NULL,
      statics->vars[1]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D645_lambda127, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->vars[0],
      VNULL,
      self->vars[0]);
    }
    }
    }
}
__attribute__((used)) static void _V20CaseError__V10_Dmake__u8vector_D252_lambda128(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__u8vector_D252_lambda128 #t (2 (##vcore.make-u8vector (bruijn ##.k.1614 0 0) (bruijn ##.len.648 0 1) #f)) (3 (##vcore.make-u8vector (bruijn ##.k.1615 0 0) (bruijn ##.len.649 0 1) (bruijn ##.fill.650 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__u8vector_D252_lambda128, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__u8vector_D252_lambda128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.make-u8vector (bruijn ##.k.1614 0 0) (bruijn ##.len.648 0 1) #f)
    VCallFuncWithGC(runtime, (VFunc)VMakeU8Vector, 3,
      _var0,
      _var1,
      VEncodeBool(false));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__u8vector_D252_lambda128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.make-u8vector (bruijn ##.k.1615 0 0) (bruijn ##.len.649 0 1) (bruijn ##.fill.650 0 2))
    VCallFuncWithGC(runtime, (VFunc)VMakeU8Vector, 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Dmake__u8vector_D252_lambda128(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__u8vector_D252_lambda128, @function\n"
#endif
"_V10_Dmake__u8vector_D252_lambda128:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__u8vector_D252_lambda128\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__u8vector_D252_lambda128\n"
"    jmp _V20CaseError__V10_Dmake__u8vector_D252_lambda128\n"
);
static void _V10_Du8vector_D253_lambda129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector_D253_lambda129, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.list->u8vector (bruijn ##.k.1616 0 0) (bruijn ##.args.651 0 1))
    VCallFuncWithGC(runtime, (VFunc)VListU8Vector, 2,
      _var0,
      _varargs);
}
static void _V10_Dloop_D654_k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D654_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1619 0 0) ((bruijn ##.k.1618 1 0) (bruijn ##.acc.655 1 1)) (basic-block 2 2 (##.reg.2856 ##.reg.2857) ((##vcore.u8vector-ref (bruijn ##.vec.652 5 1) (bruijn ##.i.656 2 2)) (##vcore.- (bruijn ##.i.656 2 2) 1)) ((bruijn ##.loop.654 3 0) (bruijn ##.k.1618 2 0) (##inline ##vcore.cons (bruijn ##.reg.2856 0 0) (bruijn ##.acc.655 2 1)) (bruijn ##.reg.2857 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VU8VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      VInlineCons2(runtime,
        self->vars[0],
        statics->up->vars[1]),
      self->vars[1]);
    }
}
}
static void _V10_Dloop_D654_lambda131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D654_lambda131, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.< (close _V10_Dloop_D654_k136) (bruijn ##.i.656 0 2) 0)
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D654_k136, self)})),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Du8vector___Glist_D254_lambda130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector___Glist_D254_lambda130, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2855) ((##vcore.u8vector-length (bruijn ##.vec.652 1 1))) (letrec 1 ((close _V10_Dloop_D654_lambda131)) (basic-block 1 1 (##.reg.2858) ((##vcore.- (bruijn ##.reg.2855 2 0) 1)) ((bruijn ##.loop.654 1 0) (bruijn ##.k.1617 3 0) '() (bruijn ##.reg.2858 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorLength(runtime, NULL,
      statics->vars[1]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D654_lambda131, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->vars[0],
      VNULL,
      self->vars[0]);
    }
    }
    }
}
static void _V10_Dread__u8vector_D258_k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__u8vector_D258_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.read-u8vector (bruijn ##.k.1624 1 0) (bruijn ##.n.657 1 1) (bruijn ##.x.1625 0 0))
    VCallFuncWithGC(runtime, (VFunc)VReadU8Vector, 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dread__u8vector_D258_lambda132(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dread__u8vector_D258_lambda132 #t (2 ((bruijn ##.current-input-port.281 1 136) (close _V10_Dread__u8vector_D258_k137))) (3 (##vcore.read-u8vector (bruijn ##.k.1626 0 0) (bruijn ##.n.658 0 1) (bruijn ##.port.659 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dread__u8vector_D258_lambda132, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dread__u8vector_D258_lambda132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-input-port.281 1 136) (close _V10_Dread__u8vector_D258_k137))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[136]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__u8vector_D258_k137, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dread__u8vector_D258_lambda132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.read-u8vector (bruijn ##.k.1626 0 0) (bruijn ##.n.658 0 1) (bruijn ##.port.659 0 2))
    VCallFuncWithGC(runtime, (VFunc)VReadU8Vector, 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Dread__u8vector_D258_lambda132(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dread__u8vector_D258_lambda132, @function\n"
#endif
"_V10_Dread__u8vector_D258_lambda132:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dread__u8vector_D258_lambda132\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dread__u8vector_D258_lambda132\n"
"    jmp _V20CaseError__V10_Dread__u8vector_D258_lambda132\n"
);
__attribute__((used)) static void _V20CaseError__V10_Dmake__s8vector_D260_lambda133(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__s8vector_D260_lambda133 #t (2 (##vcore.make-s8vector (bruijn ##.k.1627 0 0) (bruijn ##.len.660 0 1) #f)) (3 (##vcore.make-s8vector (bruijn ##.k.1628 0 0) (bruijn ##.len.661 0 1) (bruijn ##.fill.662 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__s8vector_D260_lambda133, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__s8vector_D260_lambda133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.make-s8vector (bruijn ##.k.1627 0 0) (bruijn ##.len.660 0 1) #f)
    VCallFuncWithGC(runtime, (VFunc)VMakeS8Vector, 3,
      _var0,
      _var1,
      VEncodeBool(false));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__s8vector_D260_lambda133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.make-s8vector (bruijn ##.k.1628 0 0) (bruijn ##.len.661 0 1) (bruijn ##.fill.662 0 2))
    VCallFuncWithGC(runtime, (VFunc)VMakeS8Vector, 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Dmake__s8vector_D260_lambda133(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__s8vector_D260_lambda133, @function\n"
#endif
"_V10_Dmake__s8vector_D260_lambda133:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__s8vector_D260_lambda133\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__s8vector_D260_lambda133\n"
"    jmp _V20CaseError__V10_Dmake__s8vector_D260_lambda133\n"
);
static void _V10_Ds8vector_D261_lambda134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds8vector_D261_lambda134, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.list->s8vector (bruijn ##.k.1629 0 0) (bruijn ##.args.663 0 1))
    VCallFuncWithGC(runtime, (VFunc)VListS8Vector, 2,
      _var0,
      _varargs);
}
static void _V10_Dloop_D666_k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D666_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1632 0 0) ((bruijn ##.k.1631 1 0) (bruijn ##.acc.667 1 1)) (basic-block 2 2 (##.reg.2860 ##.reg.2861) ((##vcore.s8vector-ref (bruijn ##.vec.664 5 1) (bruijn ##.i.668 2 2)) (##vcore.- (bruijn ##.i.668 2 2) 1)) ((bruijn ##.loop.666 3 0) (bruijn ##.k.1631 2 0) (##inline ##vcore.cons (bruijn ##.reg.2860 0 0) (bruijn ##.acc.667 2 1)) (bruijn ##.reg.2861 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VS8VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      VInlineCons2(runtime,
        self->vars[0],
        statics->up->vars[1]),
      self->vars[1]);
    }
}
}
static void _V10_Dloop_D666_lambda136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D666_lambda136, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.< (close _V10_Dloop_D666_k138) (bruijn ##.i.668 0 2) 0)
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D666_k138, self)})),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Ds8vector___Glist_D262_lambda135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds8vector___Glist_D262_lambda135, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2859) ((##vcore.s8vector-length (bruijn ##.vec.664 1 1))) (letrec 1 ((close _V10_Dloop_D666_lambda136)) (basic-block 1 1 (##.reg.2862) ((##vcore.- (bruijn ##.reg.2859 2 0) 1)) ((bruijn ##.loop.666 1 0) (bruijn ##.k.1630 3 0) '() (bruijn ##.reg.2862 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorLength(runtime, NULL,
      statics->vars[1]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D666_lambda136, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->vars[0],
      VNULL,
      self->vars[0]);
    }
    }
    }
}
static void _V10_Dtypevector_Q_D263_lambda137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtypevector_Q_D263_lambda137, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2863) ((##vcore.s8vector? (bruijn ##.x.669 1 1))) (if (bruijn ##.reg.2863 0 0) ((bruijn ##.k.1637 1 0) (bruijn ##.reg.2863 0 0)) (basic-block 1 1 (##.reg.2864) ((##vcore.u8vector? (bruijn ##.x.669 2 1))) (if (bruijn ##.reg.2864 0 0) ((bruijn ##.k.1637 2 0) (bruijn ##.reg.2864 0 0)) (basic-block 1 1 (##.reg.2865) ((##vcore.s16vector? (bruijn ##.x.669 3 1))) (if (bruijn ##.reg.2865 0 0) ((bruijn ##.k.1637 3 0) (bruijn ##.reg.2865 0 0)) (basic-block 1 1 (##.reg.2866) ((##vcore.u16vector? (bruijn ##.x.669 4 1))) (if (bruijn ##.reg.2866 0 0) ((bruijn ##.k.1637 4 0) (bruijn ##.reg.2866 0 0)) (basic-block 1 1 (##.reg.2867) ((##vcore.s32vector? (bruijn ##.x.669 5 1))) (if (bruijn ##.reg.2867 0 0) ((bruijn ##.k.1637 5 0) (bruijn ##.reg.2867 0 0)) (basic-block 1 1 (##.reg.2868) ((##vcore.f32vector? (bruijn ##.x.669 6 1))) (if (bruijn ##.reg.2868 0 0) ((bruijn ##.k.1637 6 0) (bruijn ##.reg.2868 0 0)) (basic-block 1 1 (##.reg.2869) ((##vcore.f64vector? (bruijn ##.x.669 7 1))) ((bruijn ##.k.1637 7 0) (bruijn ##.reg.2869 0 0)))))))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorP(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorP(runtime, NULL,
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorP(runtime, NULL,
      statics->up->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorP(runtime, NULL,
      VGetArg(statics, 5-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorP(runtime, NULL,
      VGetArg(statics, 6-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorP(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[0]);
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
static void _V10_Dloop_D672_k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D672_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1646 0 0) ((bruijn ##.k.1645 1 0) (bruijn ##.acc.673 1 1)) (basic-block 2 2 (##.reg.2871 ##.reg.2872) ((##vcore.vector-ref (bruijn ##.vec.670 5 1) (bruijn ##.i.674 2 2)) (##vcore.- (bruijn ##.i.674 2 2) 1)) ((bruijn ##.loop.672 3 0) (bruijn ##.k.1645 2 0) (##inline ##vcore.cons (bruijn ##.reg.2871 0 0) (bruijn ##.acc.673 2 1)) (bruijn ##.reg.2872 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      VInlineCons2(runtime,
        self->vars[0],
        statics->up->vars[1]),
      self->vars[1]);
    }
}
}
static void _V10_Dloop_D672_lambda139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D672_lambda139, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.< (close _V10_Dloop_D672_k139) (bruijn ##.i.674 0 2) 0)
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D672_k139, self)})),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Dvector___Glist_D264_lambda138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector___Glist_D264_lambda138, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2870) ((##vcore.vector-length (bruijn ##.vec.670 1 1))) (letrec 1 ((close _V10_Dloop_D672_lambda139)) (basic-block 1 1 (##.reg.2873) ((##vcore.- (bruijn ##.reg.2870 2 0) 1)) ((bruijn ##.loop.672 1 0) (bruijn ##.k.1644 3 0) '() (bruijn ##.reg.2873 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D672_lambda139, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->vars[0],
      VNULL,
      self->vars[0]);
    }
    }
    }
}
static void _V10_Dmake__vector_D265_k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__vector_D265_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.list->vector (bruijn ##.k.1651 1 0) (bruijn ##.x.1652 0 0))
    VCallFuncWithGC(runtime, (VFunc)VListVector2, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dmake__vector_D265_k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__vector_D265_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.list->vector (bruijn ##.k.1653 1 0) (bruijn ##.x.1654 0 0))
    VCallFuncWithGC(runtime, (VFunc)VListVector2, 2,
      statics->vars[0],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dmake__vector_D265_lambda140(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__vector_D265_lambda140 #t (2 ((bruijn ##.make-list.219 1 74) (close _V10_Dmake__vector_D265_k140) (bruijn ##.n.675 0 1))) (3 ((bruijn ##.make-list.219 1 74) (close _V10_Dmake__vector_D265_k141) (bruijn ##.n.676 0 1) (bruijn ##.fill.677 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__vector_D265_lambda140, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__vector_D265_lambda140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.make-list.219 1 74) (close _V10_Dmake__vector_D265_k140) (bruijn ##.n.675 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[74]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__vector_D265_k140, self)})),
      _var1);
}
__attribute__((used)) static void _V20Case1__V10_Dmake__vector_D265_lambda140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.make-list.219 1 74) (close _V10_Dmake__vector_D265_k141) (bruijn ##.n.676 0 1) (bruijn ##.fill.677 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[74]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__vector_D265_k141, self)})),
      _var1,
      _var2);
}
void _V10_Dmake__vector_D265_lambda140(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__vector_D265_lambda140, @function\n"
#endif
"_V10_Dmake__vector_D265_lambda140:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__vector_D265_lambda140\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__vector_D265_lambda140\n"
"    jmp _V20CaseError__V10_Dmake__vector_D265_lambda140\n"
);
static void _V10_Dloop_D681_k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D681_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2876) ((##vcore.+ (bruijn ##.i.682 4 1) 1)) ((bruijn ##.loop.681 5 0) (bruijn ##.k.1656 4 0) (bruijn ##.reg.2876 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      statics->up->up->up->vars[0],
      self->vars[0]);
    }
}
static void _V10_Dloop_D681_k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D681_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1657 0 0) (basic-block 1 1 (##.reg.2875) ((##vcore.vector-ref (bruijn ##.xs.679 5 2) (bruijn ##.i.682 2 1))) ((bruijn ##.f.678 5 1) (close _V10_Dloop_D681_k143) (bruijn ##.reg.2875 0 0))) ((bruijn ##.k.1656 1 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D681_k143, self)})),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D681_lambda142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D681_lambda142, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.< (close _V10_Dloop_D681_k142) (bruijn ##.i.682 0 1) (bruijn ##.reg.2874 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D681_k142, self)})),
      _var1,
      statics->up->vars[0]);
}
static void _V10_Dloop_D687_k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D687_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2881) ((##vcore.+ (bruijn ##.i.688 4 1) 1)) ((bruijn ##.loop.687 5 0) (bruijn ##.k.1662 4 0) (bruijn ##.reg.2881 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      statics->up->up->up->vars[0],
      self->vars[0]);
    }
}
static void _V10_Dloop_D687_k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D687_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1663 0 0) (basic-block 2 2 (##.reg.2879 ##.reg.2880) ((##vcore.vector-ref (bruijn ##.xs.684 6 2) (bruijn ##.i.688 2 1)) (##vcore.vector-ref (bruijn ##.ys.685 6 3) (bruijn ##.i.688 2 1))) ((bruijn ##.f.683 6 1) (close _V10_Dloop_D687_k146) (bruijn ##.reg.2879 0 0) (bruijn ##.reg.2880 0 1))) ((bruijn ##.k.1662 1 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 3),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D687_k146, self)})),
      self->vars[0],
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D687_lambda143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D687_lambda143, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.< (close _V10_Dloop_D687_k145) (bruijn ##.i.688 0 1) (bruijn ##.len.686 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D687_k145, self)})),
      _var1,
      statics->up->vars[0]);
}
static void _V10_Dvector__for__each_D266_k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D266_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D687_lambda143)) ((bruijn ##.loop.687 0 0) (bruijn ##.k.1661 3 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D687_lambda143, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dloop_D694_k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D694_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2888) ((##vcore.+ (bruijn ##.i.695 4 1) 1)) ((bruijn ##.loop.694 5 0) (bruijn ##.k.1671 4 0) (bruijn ##.reg.2888 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      statics->up->up->up->vars[0],
      self->vars[0]);
    }
}
static void _V10_Dloop_D694_k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D694_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1672 0 0) (basic-block 3 3 (##.reg.2885 ##.reg.2886 ##.reg.2887) ((##vcore.vector-ref (bruijn ##.xs.690 6 2) (bruijn ##.i.695 2 1)) (##vcore.vector-ref (bruijn ##.ys.691 6 3) (bruijn ##.i.695 2 1)) (##vcore.vector-ref (bruijn ##.zs.692 6 4) (bruijn ##.i.695 2 1))) ((bruijn ##.f.689 6 1) (close _V10_Dloop_D694_k149) (bruijn ##.reg.2885 0 0) (bruijn ##.reg.2886 0 1) (bruijn ##.reg.2887 0 2))) ((bruijn ##.k.1671 1 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 3),
      statics->up->vars[1]);
    self->vars[2] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 4),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D694_k149, self)})),
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D694_lambda144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D694_lambda144, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.< (close _V10_Dloop_D694_k148) (bruijn ##.i.695 0 1) (bruijn ##.len.693 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D694_k148, self)})),
      _var1,
      statics->up->vars[0]);
}
static void _V10_Dvector__for__each_D266_k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D266_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D694_lambda144)) ((bruijn ##.loop.694 0 0) (bruijn ##.k.1670 3 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D694_lambda144, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dloop_D699_k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D699_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2889) ((##vcore.+ (bruijn ##.i.700 4 1) 1)) ((bruijn ##.loop.699 5 0) (bruijn ##.k.1682 4 0) (bruijn ##.reg.2889 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      statics->up->up->up->vars[0],
      self->vars[0]);
    }
}
static void _V10_Dloop_D699_k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D699_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dloop_D699_k154) (bruijn ##.f.696 6 1) (bruijn ##.x.1686 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D699_k154, self)})),
      VGetArg(statics, 6-1, 1),
      _var0);
}
static void _V10_Dloop_D699_lambda146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D699_lambda146, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2890) ((##vcore.vector-ref (bruijn ##.vec.701 1 1) (bruijn ##.i.700 3 1))) ((bruijn ##.k.1687 1 0) (bruijn ##.reg.2890 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
static void _V10_Dloop_D699_k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D699_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1683 0 0) ((bruijn ##.map.220 6 75) (close _V10_Dloop_D699_k153) (close _V10_Dloop_D699_lambda146) (bruijn ##.vecs.697 5 2)) ((bruijn ##.k.1682 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 75)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D699_k153, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D699_lambda146, self)})),
      VGetArg(statics, 5-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D699_lambda145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D699_lambda145, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.< (close _V10_Dloop_D699_k152) (bruijn ##.i.700 0 1) (bruijn ##.len.698 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D699_k152, self)})),
      _var1,
      statics->up->vars[0]);
}
static void _V10_Dvector__for__each_D266_k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D266_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D699_lambda145)) ((bruijn ##.loop.699 0 0) (bruijn ##.k.1681 3 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D699_lambda145, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dvector__for__each_D266_k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D266_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dvector__for__each_D266_k151) (bruijn ##.min.183 2 38) (bruijn ##.x.1688 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__for__each_D266_k151, self)})),
      statics->up->vars[38],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dvector__for__each_D266_lambda141(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dvector__for__each_D266_lambda141 #t (3 (basic-block 1 1 (##.reg.2874) ((##vcore.vector-length (bruijn ##.xs.679 1 2))) (letrec 1 ((close _V10_Dloop_D681_lambda142)) ((bruijn ##.loop.681 0 0) (bruijn ##.k.1655 2 0) 0)))) (4 (basic-block 2 2 (##.reg.2877 ##.reg.2878) ((##vcore.vector-length (bruijn ##.xs.684 1 2)) (##vcore.vector-length (bruijn ##.ys.685 1 3))) ((bruijn ##.min.183 2 38) (close _V10_Dvector__for__each_D266_k144) (bruijn ##.reg.2877 0 0) (bruijn ##.reg.2878 0 1)))) (5 (basic-block 3 3 (##.reg.2882 ##.reg.2883 ##.reg.2884) ((##vcore.vector-length (bruijn ##.xs.690 1 2)) (##vcore.vector-length (bruijn ##.ys.691 1 3)) (##vcore.vector-length (bruijn ##.zs.692 1 4))) ((bruijn ##.min.183 2 38) (close _V10_Dvector__for__each_D266_k147) (bruijn ##.reg.2882 0 0) (bruijn ##.reg.2883 0 1) (bruijn ##.reg.2884 0 2)))) (2 + ((bruijn ##.map.220 1 75) (close _V10_Dvector__for__each_D266_k150) (##intrinsic ##vcore.vector-length) (bruijn ##.vecs.697 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D266_lambda141, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dvector__for__each_D266_lambda141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2874) ((##vcore.vector-length (bruijn ##.xs.679 1 2))) (letrec 1 ((close _V10_Dloop_D681_lambda142)) ((bruijn ##.loop.681 0 0) (bruijn ##.k.1655 2 0) 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[2]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D681_lambda142, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->vars[0],
      VEncodeInt(0l));
    }
    }
}
__attribute__((used)) static void _V20Case1__V10_Dvector__for__each_D266_lambda141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 2 2 (##.reg.2877 ##.reg.2878) ((##vcore.vector-length (bruijn ##.xs.684 1 2)) (##vcore.vector-length (bruijn ##.ys.685 1 3))) ((bruijn ##.min.183 2 38) (close _V10_Dvector__for__each_D266_k144) (bruijn ##.reg.2877 0 0) (bruijn ##.reg.2878 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[2]);
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[38]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__for__each_D266_k144, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
__attribute__((used)) static void _V20Case2__V10_Dvector__for__each_D266_lambda141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 3 3 (##.reg.2882 ##.reg.2883 ##.reg.2884) ((##vcore.vector-length (bruijn ##.xs.690 1 2)) (##vcore.vector-length (bruijn ##.ys.691 1 3)) (##vcore.vector-length (bruijn ##.zs.692 1 4))) ((bruijn ##.min.183 2 38) (close _V10_Dvector__for__each_D266_k147) (bruijn ##.reg.2882 0 0) (bruijn ##.reg.2883 0 1) (bruijn ##.reg.2884 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[2]);
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[3]);
    self->vars[2] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[38]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__for__each_D266_k147, self)})),
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
}
__attribute__((used)) static void _V20Case3__V10_Dvector__for__each_D266_lambda141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // ((bruijn ##.map.220 1 75) (close _V10_Dvector__for__each_D266_k150) (##intrinsic ##vcore.vector-length) (bruijn ##.vecs.697 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[75]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__for__each_D266_k150, self)})),
      _V40_V10vcore_Dvector__length,
      _varargs);
}
void _V10_Dvector__for__each_D266_lambda141(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dvector__for__each_D266_lambda141, @function\n"
#endif
"_V10_Dvector__for__each_D266_lambda141:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dvector__for__each_D266_lambda141\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dvector__for__each_D266_lambda141\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dvector__for__each_D266_lambda141\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V10_Dvector__for__each_D266_lambda141\n"
"    jmp _V20CaseError__V10_Dvector__for__each_D266_lambda141\n"
);
static void _V10_Dloop_D706_k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D706_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2893) ((##vcore.+ (bruijn ##.i.707 5 1) 1)) ((bruijn ##.loop.706 6 0) (bruijn ##.k.1690 5 0) (bruijn ##.reg.2893 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      self->vars[0]);
    }
}
static void _V10_Dloop_D706_k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D706_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector-set! (close _V10_Dloop_D706_k158) (bruijn ##.vec.705 5 0) (bruijn ##.i.707 3 1) (bruijn ##.x.1694 0 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D706_k158, self)})),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D706_k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D706_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1691 0 0) (basic-block 1 1 (##.reg.2892) ((##vcore.vector-ref (bruijn ##.xs.703 6 2) (bruijn ##.i.707 2 1))) ((bruijn ##.f.702 6 1) (close _V10_Dloop_D706_k157) (bruijn ##.reg.2892 0 0))) ((bruijn ##.k.1690 1 0) (bruijn ##.vec.705 3 0)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D706_k157, self)})),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[0]);
}
}
static void _V10_Dloop_D706_lambda148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D706_lambda148, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.< (close _V10_Dloop_D706_k156) (bruijn ##.i.707 0 1) (bruijn ##.reg.2891 3 0))
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D706_k156, self)})),
      _var1,
      statics->up->up->vars[0]);
}
static void _V10_Dvector__map_D267_k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D267_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D706_lambda148)) ((bruijn ##.loop.706 0 0) (bruijn ##.k.1689 3 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D706_lambda148, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dloop_D713_k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D713_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2898) ((##vcore.+ (bruijn ##.i.714 5 1) 1)) ((bruijn ##.loop.713 6 0) (bruijn ##.k.1697 5 0) (bruijn ##.reg.2898 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      self->vars[0]);
    }
}
static void _V10_Dloop_D713_k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D713_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector-set! (close _V10_Dloop_D713_k163) (bruijn ##.vec.712 5 0) (bruijn ##.i.714 3 1) (bruijn ##.x.1701 0 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D713_k163, self)})),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D713_k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D713_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1698 0 0) (basic-block 2 2 (##.reg.2896 ##.reg.2897) ((##vcore.vector-ref (bruijn ##.xs.709 7 2) (bruijn ##.i.714 2 1)) (##vcore.vector-ref (bruijn ##.ys.710 7 3) (bruijn ##.i.714 2 1))) ((bruijn ##.f.708 7 1) (close _V10_Dloop_D713_k162) (bruijn ##.reg.2896 0 0) (bruijn ##.reg.2897 0 1))) ((bruijn ##.k.1697 1 0) (bruijn ##.vec.712 3 0)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 7-1, 2),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 7-1, 3),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D713_k162, self)})),
      self->vars[0],
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[0]);
}
}
static void _V10_Dloop_D713_lambda149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D713_lambda149, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.< (close _V10_Dloop_D713_k161) (bruijn ##.i.714 0 1) (bruijn ##.len.711 3 0))
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D713_k161, self)})),
      _var1,
      statics->up->up->vars[0]);
}
static void _V10_Dvector__map_D267_k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D267_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D713_lambda149)) ((bruijn ##.loop.713 0 0) (bruijn ##.k.1696 4 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D713_lambda149, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->up->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dvector__map_D267_k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D267_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-vector.265 3 120) (close _V10_Dvector__map_D267_k160) (bruijn ##.len.711 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[120]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__map_D267_k160, self)})),
      _var0);
}
static void _V10_Dloop_D721_k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D721_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2905) ((##vcore.+ (bruijn ##.i.722 5 1) 1)) ((bruijn ##.loop.721 6 0) (bruijn ##.k.1707 5 0) (bruijn ##.reg.2905 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      self->vars[0]);
    }
}
static void _V10_Dloop_D721_k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D721_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector-set! (close _V10_Dloop_D721_k168) (bruijn ##.vec.720 5 0) (bruijn ##.i.722 3 1) (bruijn ##.x.1711 0 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D721_k168, self)})),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D721_k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D721_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1708 0 0) (basic-block 3 3 (##.reg.2902 ##.reg.2903 ##.reg.2904) ((##vcore.vector-ref (bruijn ##.xs.716 7 2) (bruijn ##.i.722 2 1)) (##vcore.vector-ref (bruijn ##.ys.717 7 3) (bruijn ##.i.722 2 1)) (##vcore.vector-ref (bruijn ##.zs.718 7 4) (bruijn ##.i.722 2 1))) ((bruijn ##.f.715 7 1) (close _V10_Dloop_D721_k167) (bruijn ##.reg.2902 0 0) (bruijn ##.reg.2903 0 1) (bruijn ##.reg.2904 0 2))) ((bruijn ##.k.1707 1 0) (bruijn ##.vec.720 3 0)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 7-1, 2),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 7-1, 3),
      statics->up->vars[1]);
    self->vars[2] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 7-1, 4),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D721_k167, self)})),
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[0]);
}
}
static void _V10_Dloop_D721_lambda150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D721_lambda150, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.< (close _V10_Dloop_D721_k166) (bruijn ##.i.722 0 1) (bruijn ##.len.719 3 0))
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D721_k166, self)})),
      _var1,
      statics->up->up->vars[0]);
}
static void _V10_Dvector__map_D267_k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D267_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D721_lambda150)) ((bruijn ##.loop.721 0 0) (bruijn ##.k.1706 4 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D721_lambda150, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->up->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dvector__map_D267_k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D267_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-vector.265 3 120) (close _V10_Dvector__map_D267_k165) (bruijn ##.len.719 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[120]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__map_D267_k165, self)})),
      _var0);
}
static void _V10_Dloop_D727_k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D727_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2906) ((##vcore.+ (bruijn ##.i.728 5 1) 1)) ((bruijn ##.loop.727 6 0) (bruijn ##.k.1719 5 0) (bruijn ##.reg.2906 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      self->vars[0]);
    }
}
static void _V10_Dloop_D727_k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D727_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector-set! (close _V10_Dloop_D727_k175) (bruijn ##.vec.726 5 0) (bruijn ##.i.728 3 1) (bruijn ##.x.1723 0 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D727_k175, self)})),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D727_k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D727_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dloop_D727_k174) (bruijn ##.f.723 7 1) (bruijn ##.x.1724 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D727_k174, self)})),
      VGetArg(statics, 7-1, 1),
      _var0);
}
static void _V10_Dloop_D727_lambda152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D727_lambda152, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2907) ((##vcore.vector-ref (bruijn ##.vec.729 1 1) (bruijn ##.i.728 3 1))) ((bruijn ##.k.1725 1 0) (bruijn ##.reg.2907 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
static void _V10_Dloop_D727_k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D727_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1720 0 0) ((bruijn ##.map.220 7 75) (close _V10_Dloop_D727_k173) (close _V10_Dloop_D727_lambda152) (bruijn ##.vecs.724 6 2)) ((bruijn ##.k.1719 1 0) (bruijn ##.vec.726 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 75)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D727_k173, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D727_lambda152, self)})),
      VGetArg(statics, 6-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[0]);
}
}
static void _V10_Dloop_D727_lambda151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D727_lambda151, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.< (close _V10_Dloop_D727_k172) (bruijn ##.i.728 0 1) (bruijn ##.len.725 3 0))
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D727_k172, self)})),
      _var1,
      statics->up->up->vars[0]);
}
static void _V10_Dvector__map_D267_k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D267_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D727_lambda151)) ((bruijn ##.loop.727 0 0) (bruijn ##.k.1718 4 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D727_lambda151, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->up->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dvector__map_D267_k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D267_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-vector.265 3 120) (close _V10_Dvector__map_D267_k171) (bruijn ##.len.725 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[120]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__map_D267_k171, self)})),
      _var0);
}
static void _V10_Dvector__map_D267_k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D267_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dvector__map_D267_k170) (bruijn ##.min.183 2 38) (bruijn ##.x.1726 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__map_D267_k170, self)})),
      statics->up->vars[38],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dvector__map_D267_lambda147(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dvector__map_D267_lambda147 #t (3 (basic-block 1 1 (##.reg.2891) ((##vcore.vector-length (bruijn ##.xs.703 1 2))) ((bruijn ##.make-vector.265 2 120) (close _V10_Dvector__map_D267_k155) (bruijn ##.reg.2891 0 0)))) (4 (basic-block 2 2 (##.reg.2894 ##.reg.2895) ((##vcore.vector-length (bruijn ##.xs.709 1 2)) (##vcore.vector-length (bruijn ##.ys.710 1 3))) ((bruijn ##.min.183 2 38) (close _V10_Dvector__map_D267_k159) (bruijn ##.reg.2894 0 0) (bruijn ##.reg.2895 0 1)))) (5 (basic-block 3 3 (##.reg.2899 ##.reg.2900 ##.reg.2901) ((##vcore.vector-length (bruijn ##.xs.716 1 2)) (##vcore.vector-length (bruijn ##.ys.717 1 3)) (##vcore.vector-length (bruijn ##.zs.718 1 4))) ((bruijn ##.min.183 2 38) (close _V10_Dvector__map_D267_k164) (bruijn ##.reg.2899 0 0) (bruijn ##.reg.2900 0 1) (bruijn ##.reg.2901 0 2)))) (2 + ((bruijn ##.map.220 1 75) (close _V10_Dvector__map_D267_k169) (##intrinsic ##vcore.vector-length) (bruijn ##.vecs.724 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D267_lambda147, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dvector__map_D267_lambda147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2891) ((##vcore.vector-length (bruijn ##.xs.703 1 2))) ((bruijn ##.make-vector.265 2 120) (close _V10_Dvector__map_D267_k155) (bruijn ##.reg.2891 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[120]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__map_D267_k155, self)})),
      self->vars[0]);
    }
}
__attribute__((used)) static void _V20Case1__V10_Dvector__map_D267_lambda147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 2 2 (##.reg.2894 ##.reg.2895) ((##vcore.vector-length (bruijn ##.xs.709 1 2)) (##vcore.vector-length (bruijn ##.ys.710 1 3))) ((bruijn ##.min.183 2 38) (close _V10_Dvector__map_D267_k159) (bruijn ##.reg.2894 0 0) (bruijn ##.reg.2895 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[2]);
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[38]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__map_D267_k159, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
__attribute__((used)) static void _V20Case2__V10_Dvector__map_D267_lambda147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 3 3 (##.reg.2899 ##.reg.2900 ##.reg.2901) ((##vcore.vector-length (bruijn ##.xs.716 1 2)) (##vcore.vector-length (bruijn ##.ys.717 1 3)) (##vcore.vector-length (bruijn ##.zs.718 1 4))) ((bruijn ##.min.183 2 38) (close _V10_Dvector__map_D267_k164) (bruijn ##.reg.2899 0 0) (bruijn ##.reg.2900 0 1) (bruijn ##.reg.2901 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[2]);
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[3]);
    self->vars[2] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[38]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__map_D267_k164, self)})),
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
}
__attribute__((used)) static void _V20Case3__V10_Dvector__map_D267_lambda147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // ((bruijn ##.map.220 1 75) (close _V10_Dvector__map_D267_k169) (##intrinsic ##vcore.vector-length) (bruijn ##.vecs.724 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[75]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__map_D267_k169, self)})),
      _V40_V10vcore_Dvector__length,
      _varargs);
}
void _V10_Dvector__map_D267_lambda147(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dvector__map_D267_lambda147, @function\n"
#endif
"_V10_Dvector__map_D267_lambda147:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dvector__map_D267_lambda147\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dvector__map_D267_lambda147\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dvector__map_D267_lambda147\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V10_Dvector__map_D267_lambda147\n"
"    jmp _V20CaseError__V10_Dvector__map_D267_lambda147\n"
);
static void _V10_Dvector__copy_D268_k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__copy_D268_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.vector-copy!.269 3 124) (bruijn ##.k.1731 2 0) (bruijn ##.x.1732 0 0) 0 (bruijn ##.v.733 2 1) (bruijn ##.start.734 2 2) (bruijn ##.end.735 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[124]), 6,
      statics->up->vars[0],
      _var0,
      VEncodeInt(0l),
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3]);
}
__attribute__((used)) static void _V20CaseError__V10_Dvector__copy_D268_lambda153(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dvector__copy_D268_lambda153 #t (2 (basic-block 1 1 (##.reg.2908) ((##vcore.vector-length (bruijn ##.v.730 1 1))) ((bruijn ##.vector-copy.268 2 123) (bruijn ##.k.1727 1 0) (bruijn ##.v.730 1 1) 0 (bruijn ##.reg.2908 0 0)))) (3 (basic-block 1 1 (##.reg.2909) ((##vcore.vector-length (bruijn ##.v.731 1 1))) ((bruijn ##.vector-copy.268 2 123) (bruijn ##.k.1729 1 0) (bruijn ##.v.731 1 1) (bruijn ##.start.732 1 2) (bruijn ##.reg.2909 0 0)))) (4 (basic-block 1 1 (##.reg.2910) ((##vcore.- (bruijn ##.end.735 1 3) (bruijn ##.start.734 1 2))) ((bruijn ##.make-vector.265 2 120) (close _V10_Dvector__copy_D268_k176) (bruijn ##.reg.2910 0 0)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dvector__copy_D268_lambda153, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dvector__copy_D268_lambda153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2908) ((##vcore.vector-length (bruijn ##.v.730 1 1))) ((bruijn ##.vector-copy.268 2 123) (bruijn ##.k.1727 1 0) (bruijn ##.v.730 1 1) 0 (bruijn ##.reg.2908 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[123]), 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(0l),
      self->vars[0]);
    }
}
__attribute__((used)) static void _V20Case1__V10_Dvector__copy_D268_lambda153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2909) ((##vcore.vector-length (bruijn ##.v.731 1 1))) ((bruijn ##.vector-copy.268 2 123) (bruijn ##.k.1729 1 0) (bruijn ##.v.731 1 1) (bruijn ##.start.732 1 2) (bruijn ##.reg.2909 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[123]), 4,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      self->vars[0]);
    }
}
__attribute__((used)) static void _V20Case2__V10_Dvector__copy_D268_lambda153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.reg.2910) ((##vcore.- (bruijn ##.end.735 1 3) (bruijn ##.start.734 1 2))) ((bruijn ##.make-vector.265 2 120) (close _V10_Dvector__copy_D268_k176) (bruijn ##.reg.2910 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[3],
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[120]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__copy_D268_k176, self)})),
      self->vars[0]);
    }
}
void _V10_Dvector__copy_D268_lambda153(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dvector__copy_D268_lambda153, @function\n"
#endif
"_V10_Dvector__copy_D268_lambda153:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dvector__copy_D268_lambda153\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dvector__copy_D268_lambda153\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V10_Dvector__copy_D268_lambda153\n"
"    jmp _V20CaseError__V10_Dvector__copy_D268_lambda153\n"
);
static void _V10_Dloop_D748_k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D748_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2916) ((##vcore.+ (bruijn ##.i.749 4 1) 1)) ((bruijn ##.loop.748 5 0) (bruijn ##.k.1739 4 0) (bruijn ##.reg.2916 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      statics->up->up->up->vars[0],
      self->vars[0]);
    }
}
static void _V10_Dloop_D748_k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D748_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1740 0 0) (basic-block 3 3 (##.reg.2913 ##.reg.2914 ##.reg.2915) ((##vcore.- (bruijn ##.start.746 4 4)) (##vcore.+ (bruijn ##.i.749 2 1) (bruijn ##.reg.2913 0 0) (bruijn ##.at.744 4 2)) (##vcore.vector-ref (bruijn ##.src.745 4 3) (bruijn ##.i.749 2 1))) (##vcore.vector-set! (close _V10_Dloop_D748_k178) (bruijn ##.dst.743 4 1) (bruijn ##.reg.2914 0 1) (bruijn ##.reg.2915 0 2))) ((bruijn ##.k.1739 1 0) (bruijn ##.dst.743 3 1)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->up->up->vars[4]);
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[1],
      self->vars[0],
      statics->up->up->up->vars[2]);
    self->vars[2] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[3],
      statics->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D748_k178, self)})),
      statics->up->up->up->vars[1],
      self->vars[1],
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[1]);
}
}
static void _V10_Dloop_D748_lambda155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D748_lambda155, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.< (close _V10_Dloop_D748_k177) (bruijn ##.i.749 0 1) (bruijn ##.end.747 2 5))
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D748_k177, self)})),
      _var1,
      statics->up->vars[5]);
}
__attribute__((used)) static void _V20CaseError__V10_Dvector__copy_B_D269_lambda154(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dvector__copy_B_D269_lambda154 #t (4 (basic-block 1 1 (##.reg.2911) ((##vcore.vector-length (bruijn ##.src.738 1 3))) ((bruijn ##.vector-copy!.269 2 124) (bruijn ##.k.1734 1 0) (bruijn ##.dst.736 1 1) (bruijn ##.at.737 1 2) (bruijn ##.src.738 1 3) 0 (bruijn ##.reg.2911 0 0)))) (5 (basic-block 1 1 (##.reg.2912) ((##vcore.vector-length (bruijn ##.src.741 1 3))) ((bruijn ##.vector-copy!.269 2 124) (bruijn ##.k.1736 1 0) (bruijn ##.dst.739 1 1) (bruijn ##.at.740 1 2) (bruijn ##.src.741 1 3) (bruijn ##.start.742 1 4) (bruijn ##.reg.2912 0 0)))) (6 (letrec 1 ((close _V10_Dloop_D748_lambda155)) ((bruijn ##.loop.748 0 0) (bruijn ##.k.1738 1 0) (bruijn ##.start.746 1 4)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dvector__copy_B_D269_lambda154, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 6~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dvector__copy_B_D269_lambda154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.reg.2911) ((##vcore.vector-length (bruijn ##.src.738 1 3))) ((bruijn ##.vector-copy!.269 2 124) (bruijn ##.k.1734 1 0) (bruijn ##.dst.736 1 1) (bruijn ##.at.737 1 2) (bruijn ##.src.738 1 3) 0 (bruijn ##.reg.2911 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[124]), 6,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      statics->vars[3],
      VEncodeInt(0l),
      self->vars[0]);
    }
}
__attribute__((used)) static void _V20Case1__V10_Dvector__copy_B_D269_lambda154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 1 1 (##.reg.2912) ((##vcore.vector-length (bruijn ##.src.741 1 3))) ((bruijn ##.vector-copy!.269 2 124) (bruijn ##.k.1736 1 0) (bruijn ##.dst.739 1 1) (bruijn ##.at.740 1 2) (bruijn ##.src.741 1 3) (bruijn ##.start.742 1 4) (bruijn ##.reg.2912 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[124]), 6,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      statics->vars[3],
      statics->vars[4],
      self->vars[0]);
    }
}
__attribute__((used)) static void _V20Case2__V10_Dvector__copy_B_D269_lambda154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
  struct { VEnv self; VWORD argv[6]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 6, 6, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  // (letrec 1 ((close _V10_Dloop_D748_lambda155)) ((bruijn ##.loop.748 0 0) (bruijn ##.k.1738 1 0) (bruijn ##.start.746 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D748_lambda155, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[4]);
    }
}
void _V10_Dvector__copy_B_D269_lambda154(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dvector__copy_B_D269_lambda154, @function\n"
#endif
"_V10_Dvector__copy_B_D269_lambda154:\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case0__V10_Dvector__copy_B_D269_lambda154\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case1__V10_Dvector__copy_B_D269_lambda154\n"
"    cmp " ARGC_REG ", 6\n"
"    je _V20Case2__V10_Dvector__copy_B_D269_lambda154\n"
"    jmp _V20CaseError__V10_Dvector__copy_B_D269_lambda154\n"
);
static void _V10_Dvector__append_D270_k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1748 5 0) (bruijn ##.v.753 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dvector__append_D270_k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2920) ((##vcore.vector-length (bruijn ##.a.751 4 1))) ((bruijn ##.vector-copy!.269 5 124) (close _V10_Dvector__append_D270_k181) (bruijn ##.v.753 2 0) (bruijn ##.reg.2920 0 0) (bruijn ##.b.752 4 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 124)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_k181, self)})),
      statics->up->vars[0],
      self->vars[0],
      statics->up->up->up->vars[2]);
    }
}
static void _V10_Dvector__append_D270_k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.vector-copy!.269 3 124) (close _V10_Dvector__append_D270_k180) (bruijn ##.v.753 0 0) 0 (bruijn ##.a.751 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[124]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_k180, self)})),
      _var0,
      VEncodeInt(0l),
      statics->up->vars[1]);
}
static void _V10_Dvector__append_D270_k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1755 7 0) (bruijn ##.v.757 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dvector__append_D270_k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.reg.2926 ##.reg.2927 ##.reg.2928) ((##vcore.vector-length (bruijn ##.a.754 6 1)) (##vcore.vector-length (bruijn ##.b.755 6 2)) (##vcore.+ (bruijn ##.reg.2926 0 0) (bruijn ##.reg.2927 0 1))) ((bruijn ##.vector-copy!.269 7 124) (close _V10_Dvector__append_D270_k185) (bruijn ##.v.757 4 0) (bruijn ##.reg.2928 0 2) (bruijn ##.c.756 6 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    self->vars[2] = _VBasic_VAdd2(runtime, NULL,
      self->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 124)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_k185, self)})),
      statics->up->up->up->vars[0],
      self->vars[2],
      VGetArg(statics, 6-1, 3));
    }
}
static void _V10_Dvector__append_D270_k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2925) ((##vcore.vector-length (bruijn ##.a.754 4 1))) ((bruijn ##.vector-copy!.269 5 124) (close _V10_Dvector__append_D270_k184) (bruijn ##.v.757 2 0) (bruijn ##.reg.2925 0 0) (bruijn ##.b.755 4 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 124)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_k184, self)})),
      statics->up->vars[0],
      self->vars[0],
      statics->up->up->up->vars[2]);
    }
}
static void _V10_Dvector__append_D270_k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.vector-copy!.269 3 124) (close _V10_Dvector__append_D270_k183) (bruijn ##.v.757 0 0) 0 (bruijn ##.a.754 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[124]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_k183, self)})),
      _var0,
      VEncodeInt(0l),
      statics->up->vars[1]);
}
static void _V10_Dvector__append_D270_k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1767 9 0) (bruijn ##.v.762 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dvector__append_D270_k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.reg.2938 ##.reg.2939 ##.reg.2940 ##.reg.2941) ((##vcore.vector-length (bruijn ##.a.758 8 1)) (##vcore.vector-length (bruijn ##.b.759 8 2)) (##vcore.vector-length (bruijn ##.c.760 8 3)) (##vcore.+ (bruijn ##.reg.2938 0 0) (bruijn ##.reg.2939 0 1) (bruijn ##.reg.2940 0 2))) ((bruijn ##.vector-copy!.269 9 124) (close _V10_Dvector__append_D270_k190) (bruijn ##.v.762 6 0) (bruijn ##.reg.2941 0 3) (bruijn ##.d.761 8 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    self->vars[2] = _VBasic_VVectorLength2(runtime, NULL,
      VGetArg(statics, 8-1, 3));
    self->vars[3] = _VBasic_VAdd2(runtime, NULL,
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 124)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_k190, self)})),
      VGetArg(statics, 6-1, 0),
      self->vars[3],
      VGetArg(statics, 8-1, 4));
    }
}
static void _V10_Dvector__append_D270_k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.reg.2935 ##.reg.2936 ##.reg.2937) ((##vcore.vector-length (bruijn ##.a.758 6 1)) (##vcore.vector-length (bruijn ##.b.759 6 2)) (##vcore.+ (bruijn ##.reg.2935 0 0) (bruijn ##.reg.2936 0 1))) ((bruijn ##.vector-copy!.269 7 124) (close _V10_Dvector__append_D270_k189) (bruijn ##.v.762 4 0) (bruijn ##.reg.2937 0 2) (bruijn ##.c.760 6 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    self->vars[2] = _VBasic_VAdd2(runtime, NULL,
      self->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 124)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_k189, self)})),
      statics->up->up->up->vars[0],
      self->vars[2],
      VGetArg(statics, 6-1, 3));
    }
}
static void _V10_Dvector__append_D270_k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2934) ((##vcore.vector-length (bruijn ##.a.758 4 1))) ((bruijn ##.vector-copy!.269 5 124) (close _V10_Dvector__append_D270_k188) (bruijn ##.v.762 2 0) (bruijn ##.reg.2934 0 0) (bruijn ##.b.759 4 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 124)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_k188, self)})),
      statics->up->vars[0],
      self->vars[0],
      statics->up->up->up->vars[2]);
    }
}
static void _V10_Dvector__append_D270_k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.vector-copy!.269 3 124) (close _V10_Dvector__append_D270_k187) (bruijn ##.v.762 0 0) 0 (bruijn ##.a.758 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[124]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_k187, self)})),
      _var0,
      VEncodeInt(0l),
      statics->up->vars[1]);
}
static void _V10_Dvector__append_D270_k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1785 5 0) (bruijn ##.x.1786 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      statics->up->vars[0]);
}
static void _V10_Dvector__append_D270_k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.reg.2942 ##.reg.2943) ((##vcore.vector-length (bruijn ##.vec.766 2 1)) (##vcore.+ (bruijn ##.at.765 3 0) (bruijn ##.reg.2942 0 0))) (set! (bruijn ##.k.1788 2 0) (bruijn ##.at.765 3 0) (bruijn ##.reg.2943 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->up->vars[0],
      VEncodeInt(3l), VEncodeInt(0l),
      self->vars[1]
    );
    }
}
static void _V10_Dvector__append_D270_lambda158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_lambda158, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.vector-copy!.269 6 124) (close _V10_Dvector__append_D270_k195) (bruijn ##.x.1786 2 0) (bruijn ##.at.765 1 0) (bruijn ##.vec.766 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 124)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_k195, self)})),
      statics->up->vars[0],
      statics->vars[0],
      _var1);
}
static void _V10_Dvector__append_D270_lambda157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.for-each.221 5 76) (close _V10_Dvector__append_D270_k194) (close _V10_Dvector__append_D270_lambda158) (bruijn ##.vecs.763 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 76)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_k194, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_lambda158, self)})),
      statics->up->up->up->vars[1]);
}
static void _V10_Dvector__append_D270_k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dvector__append_D270_lambda157) 0)
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvector__append_D270_lambda157, .env = self }, }, 1,
      VEncodeInt(0l));
}
static void _V10_Dvector__append_D270_k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-vector.265 3 120) (close _V10_Dvector__append_D270_k193) (bruijn ##.x.1792 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[120]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_k193, self)})),
      _var0);
}
static void _V10_Dvector__append_D270_k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dvector__append_D270_k192) (##intrinsic ##vcore.+) (bruijn ##.x.1793 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_k192, self)})),
      _V40_V10vcore_D_P,
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dvector__append_D270_lambda156(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dvector__append_D270_lambda156 #t (1 ((bruijn ##.vector.236 1 91) (bruijn ##.k.1746 0 0))) (2 ((bruijn ##.k.1747 0 0) (bruijn ##.a.750 0 1))) (3 (basic-block 3 3 (##.reg.2917 ##.reg.2918 ##.reg.2919) ((##vcore.vector-length (bruijn ##.a.751 1 1)) (##vcore.vector-length (bruijn ##.b.752 1 2)) (##vcore.+ (bruijn ##.reg.2917 0 0) (bruijn ##.reg.2918 0 1))) ((bruijn ##.make-vector.265 2 120) (close _V10_Dvector__append_D270_k179) (bruijn ##.reg.2919 0 2)))) (4 (basic-block 4 4 (##.reg.2921 ##.reg.2922 ##.reg.2923 ##.reg.2924) ((##vcore.vector-length (bruijn ##.a.754 1 1)) (##vcore.vector-length (bruijn ##.b.755 1 2)) (##vcore.vector-length (bruijn ##.c.756 1 3)) (##vcore.+ (bruijn ##.reg.2921 0 0) (bruijn ##.reg.2922 0 1) (bruijn ##.reg.2923 0 2))) ((bruijn ##.make-vector.265 2 120) (close _V10_Dvector__append_D270_k182) (bruijn ##.reg.2924 0 3)))) (5 (basic-block 5 5 (##.reg.2929 ##.reg.2930 ##.reg.2931 ##.reg.2932 ##.reg.2933) ((##vcore.vector-length (bruijn ##.a.758 1 1)) (##vcore.vector-length (bruijn ##.b.759 1 2)) (##vcore.vector-length (bruijn ##.c.760 1 3)) (##vcore.vector-length (bruijn ##.d.761 1 4)) (##vcore.+ (bruijn ##.reg.2929 0 0) (bruijn ##.reg.2930 0 1) (bruijn ##.reg.2931 0 2) (bruijn ##.reg.2932 0 3))) ((bruijn ##.make-vector.265 2 120) (close _V10_Dvector__append_D270_k186) (bruijn ##.reg.2933 0 4)))) (1 + ((bruijn ##.map.220 1 75) (close _V10_Dvector__append_D270_k191) (##intrinsic ##vcore.vector-length) (bruijn ##.vecs.763 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_lambda156, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dvector__append_D270_lambda156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // ((bruijn ##.vector.236 1 91) (bruijn ##.k.1746 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[91]), 1,
      _var0);
}
__attribute__((used)) static void _V20Case1__V10_Dvector__append_D270_lambda156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1747 0 0) (bruijn ##.a.750 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V10_Dvector__append_D270_lambda156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.reg.2917 ##.reg.2918 ##.reg.2919) ((##vcore.vector-length (bruijn ##.a.751 1 1)) (##vcore.vector-length (bruijn ##.b.752 1 2)) (##vcore.+ (bruijn ##.reg.2917 0 0) (bruijn ##.reg.2918 0 1))) ((bruijn ##.make-vector.265 2 120) (close _V10_Dvector__append_D270_k179) (bruijn ##.reg.2919 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[2]);
    self->vars[2] = _VBasic_VAdd2(runtime, NULL,
      self->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[120]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_k179, self)})),
      self->vars[2]);
    }
}
__attribute__((used)) static void _V20Case3__V10_Dvector__append_D270_lambda156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 4 4 (##.reg.2921 ##.reg.2922 ##.reg.2923 ##.reg.2924) ((##vcore.vector-length (bruijn ##.a.754 1 1)) (##vcore.vector-length (bruijn ##.b.755 1 2)) (##vcore.vector-length (bruijn ##.c.756 1 3)) (##vcore.+ (bruijn ##.reg.2921 0 0) (bruijn ##.reg.2922 0 1) (bruijn ##.reg.2923 0 2))) ((bruijn ##.make-vector.265 2 120) (close _V10_Dvector__append_D270_k182) (bruijn ##.reg.2924 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[2]);
    self->vars[2] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[3]);
    self->vars[3] = _VBasic_VAdd2(runtime, NULL,
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[120]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_k182, self)})),
      self->vars[3]);
    }
}
__attribute__((used)) static void _V20Case4__V10_Dvector__append_D270_lambda156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 5 5 (##.reg.2929 ##.reg.2930 ##.reg.2931 ##.reg.2932 ##.reg.2933) ((##vcore.vector-length (bruijn ##.a.758 1 1)) (##vcore.vector-length (bruijn ##.b.759 1 2)) (##vcore.vector-length (bruijn ##.c.760 1 3)) (##vcore.vector-length (bruijn ##.d.761 1 4)) (##vcore.+ (bruijn ##.reg.2929 0 0) (bruijn ##.reg.2930 0 1) (bruijn ##.reg.2931 0 2) (bruijn ##.reg.2932 0 3))) ((bruijn ##.make-vector.265 2 120) (close _V10_Dvector__append_D270_k186) (bruijn ##.reg.2933 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[2]);
    self->vars[2] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[3]);
    self->vars[3] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[4]);
    self->vars[4] = _VBasic_VAdd2(runtime, NULL,
      self->vars[0],
      self->vars[1],
      self->vars[2],
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[120]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_k186, self)})),
      self->vars[4]);
    }
}
__attribute__((used)) static void _V20Case5__V10_Dvector__append_D270_lambda156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _varargs;
  // ((bruijn ##.map.220 1 75) (close _V10_Dvector__append_D270_k191) (##intrinsic ##vcore.vector-length) (bruijn ##.vecs.763 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[75]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_k191, self)})),
      _V40_V10vcore_Dvector__length,
      _varargs);
}
void _V10_Dvector__append_D270_lambda156(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dvector__append_D270_lambda156, @function\n"
#endif
"_V10_Dvector__append_D270_lambda156:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dvector__append_D270_lambda156\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dvector__append_D270_lambda156\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dvector__append_D270_lambda156\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dvector__append_D270_lambda156\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V10_Dvector__append_D270_lambda156\n"
"    cmp " ARGC_REG ", 1\n"
"    jge _V20Case5__V10_Dvector__append_D270_lambda156\n"
"    jmp _V20CaseError__V10_Dvector__append_D270_lambda156\n"
);
static void _V10_Dloop_D776_k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D776_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2946) ((##vcore.+ (bruijn ##.i.777 3 1) 1)) ((bruijn ##.loop.776 4 0) (bruijn ##.k.1799 3 0) (bruijn ##.reg.2946 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      statics->up->up->vars[0],
      self->vars[0]);
    }
}
static void _V10_Dloop_D776_k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D776_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1800 0 0) (##vcore.vector-set! (close _V10_Dloop_D776_k197) (bruijn ##.v.772 3 1) (bruijn ##.i.777 1 1) (bruijn ##.fill.773 3 2)) ((bruijn ##.k.1799 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D776_k197, self)})),
      statics->up->up->vars[1],
      statics->vars[1],
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D776_lambda160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D776_lambda160, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.< (close _V10_Dloop_D776_k196) (bruijn ##.i.777 0 1) (bruijn ##.end.775 2 4))
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D776_k196, self)})),
      _var1,
      statics->up->vars[4]);
}
__attribute__((used)) static void _V20CaseError__V10_Dvector__fill_B_D271_lambda159(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dvector__fill_B_D271_lambda159 #t (3 (basic-block 1 1 (##.reg.2944) ((##vcore.vector-length (bruijn ##.v.767 1 1))) ((bruijn ##.vector-fill!.271 2 126) (bruijn ##.k.1794 1 0) (bruijn ##.v.767 1 1) (bruijn ##.fill.768 1 2) 0 (bruijn ##.reg.2944 0 0)))) (4 (basic-block 1 1 (##.reg.2945) ((##vcore.vector-length (bruijn ##.v.769 1 1))) ((bruijn ##.vector-fill!.271 2 126) (bruijn ##.k.1796 1 0) (bruijn ##.v.769 1 1) (bruijn ##.fill.770 1 2) (bruijn ##.start.771 1 3) (bruijn ##.reg.2945 0 0)))) (5 (letrec 1 ((close _V10_Dloop_D776_lambda160)) ((bruijn ##.loop.776 0 0) (bruijn ##.k.1798 1 0) (bruijn ##.start.774 1 3)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dvector__fill_B_D271_lambda159, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dvector__fill_B_D271_lambda159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2944) ((##vcore.vector-length (bruijn ##.v.767 1 1))) ((bruijn ##.vector-fill!.271 2 126) (bruijn ##.k.1794 1 0) (bruijn ##.v.767 1 1) (bruijn ##.fill.768 1 2) 0 (bruijn ##.reg.2944 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[126]), 5,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      VEncodeInt(0l),
      self->vars[0]);
    }
}
__attribute__((used)) static void _V20Case1__V10_Dvector__fill_B_D271_lambda159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.reg.2945) ((##vcore.vector-length (bruijn ##.v.769 1 1))) ((bruijn ##.vector-fill!.271 2 126) (bruijn ##.k.1796 1 0) (bruijn ##.v.769 1 1) (bruijn ##.fill.770 1 2) (bruijn ##.start.771 1 3) (bruijn ##.reg.2945 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[126]), 5,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      statics->vars[3],
      self->vars[0]);
    }
}
__attribute__((used)) static void _V20Case2__V10_Dvector__fill_B_D271_lambda159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (letrec 1 ((close _V10_Dloop_D776_lambda160)) ((bruijn ##.loop.776 0 0) (bruijn ##.k.1798 1 0) (bruijn ##.start.774 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D776_lambda160, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[3]);
    }
}
void _V10_Dvector__fill_B_D271_lambda159(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dvector__fill_B_D271_lambda159, @function\n"
#endif
"_V10_Dvector__fill_B_D271_lambda159:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dvector__fill_B_D271_lambda159\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dvector__fill_B_D271_lambda159\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dvector__fill_B_D271_lambda159\n"
"    jmp _V20CaseError__V10_Dvector__fill_B_D271_lambda159\n"
);
__attribute__((used)) static void _V20CaseError__V10_Dmake__hash__table_D272_lambda161(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__hash__table_D272_lambda161 #t (1 (##vcore.make-hash-table (bruijn ##.k.1803 0 0) (##intrinsic ##vcore.eq?) #f 32)) (2 (##vcore.make-hash-table (bruijn ##.k.1804 0 0) (bruijn ##.eq.778 0 1) #f 32)) (3 (##vcore.make-hash-table (bruijn ##.k.1805 0 0) (bruijn ##.eq.779 0 1) (bruijn ##.hash.780 0 2) 32)) (4 (##vcore.make-hash-table (bruijn ##.k.1806 0 0) (bruijn ##.eq.781 0 1) (bruijn ##.hash.782 0 2) (bruijn ##.len.783 0 3))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__hash__table_D272_lambda161, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__hash__table_D272_lambda161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // (##vcore.make-hash-table (bruijn ##.k.1803 0 0) (##intrinsic ##vcore.eq?) #f 32)
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      _var0,
      _V40_V10vcore_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__hash__table_D272_lambda161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.make-hash-table (bruijn ##.k.1804 0 0) (bruijn ##.eq.778 0 1) #f 32)
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      _var0,
      _var1,
      VEncodeBool(false),
      VEncodeInt(32l));
}
__attribute__((used)) static void _V20Case2__V10_Dmake__hash__table_D272_lambda161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.make-hash-table (bruijn ##.k.1805 0 0) (bruijn ##.eq.779 0 1) (bruijn ##.hash.780 0 2) 32)
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      _var0,
      _var1,
      _var2,
      VEncodeInt(32l));
}
__attribute__((used)) static void _V20Case3__V10_Dmake__hash__table_D272_lambda161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  // (##vcore.make-hash-table (bruijn ##.k.1806 0 0) (bruijn ##.eq.781 0 1) (bruijn ##.hash.782 0 2) (bruijn ##.len.783 0 3))
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      _var0,
      _var1,
      _var2,
      _var3);
}
void _V10_Dmake__hash__table_D272_lambda161(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__hash__table_D272_lambda161, @function\n"
#endif
"_V10_Dmake__hash__table_D272_lambda161:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dmake__hash__table_D272_lambda161\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dmake__hash__table_D272_lambda161\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dmake__hash__table_D272_lambda161\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dmake__hash__table_D272_lambda161\n"
"    jmp _V20CaseError__V10_Dmake__hash__table_D272_lambda161\n"
);
static void _V10_Dhash__table__ref_D273_lambda163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dhash__table__ref_D273_lambda163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.326 2 181) (bruijn ##.k.1808 0 0) (##string ##.string.2998) (bruijn ##.key.785 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[181]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2998.sym, VPOINTER_OTHER),
      statics->vars[2]);
}
__attribute__((used)) static void _V20CaseError__V10_Dhash__table__ref_D273_lambda162(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dhash__table__ref_D273_lambda162 #t (3 (##vcore.hash-table-ref (bruijn ##.k.1807 0 0) (bruijn ##.table.784 0 1) (bruijn ##.key.785 0 2) (close _V10_Dhash__table__ref_D273_lambda163))) (4 (##vcore.hash-table-ref (bruijn ##.k.1809 0 0) (bruijn ##.table.786 0 1) (bruijn ##.key.787 0 2) (bruijn ##.thunk.788 0 3))))
 VErrorC(runtime, "Not enough arguments to _V10_Dhash__table__ref_D273_lambda162, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dhash__table__ref_D273_lambda162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.hash-table-ref (bruijn ##.k.1807 0 0) (bruijn ##.table.784 0 1) (bruijn ##.key.785 0 2) (close _V10_Dhash__table__ref_D273_lambda163))
    VCallFuncWithGC(runtime, (VFunc)VHashTableRef, 4,
      _var0,
      _var1,
      _var2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dhash__table__ref_D273_lambda163, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dhash__table__ref_D273_lambda162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  // (##vcore.hash-table-ref (bruijn ##.k.1809 0 0) (bruijn ##.table.786 0 1) (bruijn ##.key.787 0 2) (bruijn ##.thunk.788 0 3))
    VCallFuncWithGC(runtime, (VFunc)VHashTableRef, 4,
      _var0,
      _var1,
      _var2,
      _var3);
}
void _V10_Dhash__table__ref_D273_lambda162(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dhash__table__ref_D273_lambda162, @function\n"
#endif
"_V10_Dhash__table__ref_D273_lambda162:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dhash__table__ref_D273_lambda162\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dhash__table__ref_D273_lambda162\n"
"    jmp _V20CaseError__V10_Dhash__table__ref_D273_lambda162\n"
);
static void _V10_Dhash__table__set_B_D274_lambda164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dhash__table__set_B_D274_lambda164, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  // (##vcore.hash-table-set! (bruijn ##.k.1810 0 0) (bruijn ##.table.789 0 1) (bruijn ##.key.790 0 2) (bruijn ##.val.791 0 3))
    VCallFuncWithGC(runtime, (VFunc)VHashTableSet, 4,
      _var0,
      _var1,
      _var2,
      _var3);
}
static void _V10_Dloop_D794_k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D794_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1812 5 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.reg.2951 1 0) (bruijn ##.reg.2953 1 2)) (bruijn ##.x.1817 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        statics->vars[2]),
        _var0));
}
static void _V10_Dloop_D794_k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D794_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1813 0 0) (basic-block 2 2 (##.reg.2948 ##.reg.2949) ((##vcore.vector-ref (bruijn ##.vec.793 5 0) (bruijn ##.i.795 3 1)) (##vcore.void? (bruijn ##.reg.2948 0 0))) (if (bruijn ##.reg.2949 0 1) (basic-block 1 1 (##.reg.2950) ((##vcore.+ (bruijn ##.i.795 4 1) 3)) ((bruijn ##.loop.794 5 0) (bruijn ##.k.1812 4 0) (bruijn ##.reg.2950 0 0))) (basic-block 4 4 (##.reg.2951 ##.reg.2952 ##.reg.2953 ##.reg.2954) ((##vcore.vector-ref (bruijn ##.vec.793 6 0) (bruijn ##.i.795 4 1)) (##vcore.+ (bruijn ##.i.795 4 1) 2) (##vcore.vector-ref (bruijn ##.vec.793 6 0) (bruijn ##.reg.2952 0 1)) (##vcore.+ (bruijn ##.i.795 4 1) 3)) ((bruijn ##.loop.794 5 0) (close _V10_Dloop_D794_k200) (bruijn ##.reg.2954 0 3))))) ((bruijn ##.k.1812 2 0) '()))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VVoidP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(3l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      statics->up->up->up->vars[0],
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(2l));
    self->vars[2] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(3l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D794_k200, self)})),
      self->vars[3]);
    }
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
}
}
static void _V10_Dloop_D794_lambda166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D794_lambda166, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2947) ((##vcore.vector-length (bruijn ##.vec.793 3 0))) (##vcore.< (close _V10_Dloop_D794_k199) (bruijn ##.i.795 1 1) (bruijn ##.reg.2947 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D794_k199, self)})),
      statics->vars[1],
      self->vars[0]);
    }
}
static void _V10_Dhash__table___Galist_D275_k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dhash__table___Galist_D275_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D794_lambda166)) ((bruijn ##.loop.794 0 0) (bruijn ##.k.1811 2 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D794_lambda166, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dhash__table___Galist_D275_lambda165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dhash__table___Galist_D275_lambda165, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.hash-table-vector (close _V10_Dhash__table___Galist_D275_k198) (bruijn ##.table.792 0 1))
    VCallFuncWithGC(runtime, (VFunc)VHashTableVector, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dhash__table___Galist_D275_k198, self)})),
      _var1);
}
static void _V10_Dnumber___Gstring_D276_lambda167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dnumber___Gstring_D276_lambda167, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.sprintf.322 1 177) (bruijn ##.k.1824 0 0) (##string ##.string.2999) (bruijn ##.x.796 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[177]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2999.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dchar__numeric_Q_D277_lambda168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dchar__numeric_Q_D277_lambda168, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2955) ((##vcore.char-integer (bruijn ##.x.797 1 1))) (##vcore.<= (bruijn ##.k.1825 1 0) 48 (bruijn ##.reg.2955 0 0) 57))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCharInt2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCmpLe, 4,
      statics->vars[0],
      VEncodeInt(48l),
      self->vars[0],
      VEncodeInt(57l));
    }
}
static void _V10_Dchar__alphabetic_Q_D278_k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dchar__alphabetic_Q_D278_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1828 0 0) ((bruijn ##.k.1827 2 0) (bruijn ##.p.1828 0 0)) (##vcore.<= (bruijn ##.k.1827 2 0) 97 (bruijn ##.reg.2956 1 0) 122))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCmpLe, 4,
      statics->up->vars[0],
      VEncodeInt(97l),
      statics->vars[0],
      VEncodeInt(122l));
}
}
static void _V10_Dchar__alphabetic_Q_D278_lambda169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dchar__alphabetic_Q_D278_lambda169, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2956) ((##vcore.char-integer (bruijn ##.x.798 1 1))) (##vcore.<= (close _V10_Dchar__alphabetic_Q_D278_k201) 65 (bruijn ##.reg.2956 0 0) 90))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCharInt2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCmpLe, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dchar__alphabetic_Q_D278_k201, self)})),
      VEncodeInt(65l),
      self->vars[0],
      VEncodeInt(90l));
    }
}
static void _V10_Dtry__or__gc_D282_lambda172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtry__or__gc_D282_lambda172, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (bruijn ##.ok.805 0 2) ((bruijn ##.k.1832 0 0) (bruijn ##.ret.804 0 1)) ((bruijn ##.error.326 4 181) (bruijn ##.k.1832 0 0) (bruijn ##.msg.801 3 2)))
if(VDecodeBool(
_var2)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[181]), 2,
      _var0,
      statics->up->up->vars[2]);
}
}
static void _V10_Dtry__or__gc_D282_k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtry__or__gc_D282_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1830 1 0) (bruijn ##.thunk.800 2 1) (close _V10_Dtry__or__gc_D282_lambda172))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      statics->up->vars[1],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtry__or__gc_D282_lambda172, self)})));
}
static void _V10_Dtry__or__gc_D282_lambda171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtry__or__gc_D282_lambda171, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (bruijn ##.ok.803 0 2) ((bruijn ##.k.1830 0 0) (bruijn ##.ret.802 0 1)) (##vcore.garbage-collect (close _V10_Dtry__or__gc_D282_k202) #t))
if(VDecodeBool(
_var2)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VGarbageCollect, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtry__or__gc_D282_k202, self)})),
      VEncodeBool(true));
}
}
static void _V10_Dtry__or__gc_D282_lambda170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtry__or__gc_D282_lambda170, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.k.1829 0 0) (bruijn ##.thunk.800 0 1) (close _V10_Dtry__or__gc_D282_lambda171))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      _var1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtry__or__gc_D282_lambda171, self)})));
}
static void _V10_Dclose__port_D283_k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dclose__port_D283_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1834 0 0) (##vcore.finalize! (bruijn ##.k.1833 1 0) (bruijn ##.port.806 1 1)) (##vcore.close-stream (bruijn ##.k.1833 1 0) (bruijn ##.port.806 1 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VFinalize, 2,
      statics->vars[0],
      statics->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCloseStream2, 2,
      statics->vars[0],
      statics->vars[1]);
}
}
static void _V10_Dclose__port_D283_lambda173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dclose__port_D283_lambda173, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.has-finalizer? (close _V10_Dclose__port_D283_k203) (bruijn ##.port.806 0 1))
    VCallFuncWithGC(runtime, (VFunc)VHasFinalizer, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dclose__port_D283_k203, self)})),
      _var1);
}
static void _V10_Dopen__input__file__impl_D284_lambda175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file__impl_D284_lambda175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.open-input-stream (bruijn ##.k.1836 0 0) (bruijn ##.path.807 1 1))
    VCallFuncWithGC(runtime, (VFunc)VOpenInputStream2, 2,
      _var0,
      statics->vars[1]);
}
static void _V10_Dopen__input__file__impl_D284_k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file__impl_D284_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.ret.808 1 1) (##vcore.set-finalizer! (bruijn ##.k.1839 0 0) (bruijn ##.ret.808 1 1) (##intrinsic ##vcore.close-stream)) ((bruijn ##.k.1839 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VSetFinalizer, 3,
      _var0,
      statics->vars[1],
      _V40_V10vcore_Dclose__stream);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dopen__input__file__impl_D284_k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file__impl_D284_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.305 3 160) (bruijn ##.k.1837 1 0) (bruijn ##.ret.808 1 1) (bruijn ##.ok.809 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[160]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
}
static void _V10_Dopen__input__file__impl_D284_lambda176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file__impl_D284_lambda176, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dopen__input__file__impl_D284_k204) (close _V10_Dopen__input__file__impl_D284_k205))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dopen__input__file__impl_D284_k204, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__input__file__impl_D284_k205, self)})));
}
static void _V10_Dopen__input__file__impl_D284_lambda174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file__impl_D284_lambda174, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call-with-values (bruijn ##.k.1835 0 0) (close _V10_Dopen__input__file__impl_D284_lambda175) (close _V10_Dopen__input__file__impl_D284_lambda176))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__input__file__impl_D284_lambda175, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__input__file__impl_D284_lambda176, self)})));
}
static void _V10_Dopen__output__file__impl_D285_lambda178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file__impl_D285_lambda178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.open-output-stream (bruijn ##.k.1841 0 0) (bruijn ##.path.810 1 1))
    VCallFuncWithGC(runtime, (VFunc)VOpenOutputStream2, 2,
      _var0,
      statics->vars[1]);
}
static void _V10_Dopen__output__file__impl_D285_k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file__impl_D285_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.ret.811 1 1) (##vcore.set-finalizer! (bruijn ##.k.1844 0 0) (bruijn ##.ret.811 1 1) (##intrinsic ##vcore.close-stream)) ((bruijn ##.k.1844 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VSetFinalizer, 3,
      _var0,
      statics->vars[1],
      _V40_V10vcore_Dclose__stream);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dopen__output__file__impl_D285_k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file__impl_D285_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.305 3 160) (bruijn ##.k.1842 1 0) (bruijn ##.ret.811 1 1) (bruijn ##.ok.812 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[160]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
}
static void _V10_Dopen__output__file__impl_D285_lambda179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file__impl_D285_lambda179, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dopen__output__file__impl_D285_k206) (close _V10_Dopen__output__file__impl_D285_k207))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dopen__output__file__impl_D285_k206, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__file__impl_D285_k207, self)})));
}
static void _V10_Dopen__output__file__impl_D285_lambda177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file__impl_D285_lambda177, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call-with-values (bruijn ##.k.1840 0 0) (close _V10_Dopen__output__file__impl_D285_lambda178) (close _V10_Dopen__output__file__impl_D285_lambda179))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__file__impl_D285_lambda178, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__file__impl_D285_lambda179, self)})));
}
static void _V10_Dopen__output__string__impl_D286_lambda181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__string__impl_D286_lambda181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.open-output-string (bruijn ##.k.1846 0 0))
    VCallFuncWithGC(runtime, (VFunc)VOpenOutputString2, 1,
      _var0);
}
static void _V10_Dopen__output__string__impl_D286_k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__string__impl_D286_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.ret.813 1 1) (##vcore.set-finalizer! (bruijn ##.k.1849 0 0) (bruijn ##.ret.813 1 1) (##intrinsic ##vcore.close-stream)) ((bruijn ##.k.1849 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VSetFinalizer, 3,
      _var0,
      statics->vars[1],
      _V40_V10vcore_Dclose__stream);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dopen__output__string__impl_D286_k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__string__impl_D286_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.305 3 160) (bruijn ##.k.1847 1 0) (bruijn ##.ret.813 1 1) (bruijn ##.ok.814 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[160]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
}
static void _V10_Dopen__output__string__impl_D286_lambda182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__string__impl_D286_lambda182, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dopen__output__string__impl_D286_k208) (close _V10_Dopen__output__string__impl_D286_k209))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dopen__output__string__impl_D286_k208, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__string__impl_D286_k209, self)})));
}
static void _V10_Dopen__output__string__impl_D286_lambda180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__string__impl_D286_lambda180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1845 0 0) (close _V10_Dopen__output__string__impl_D286_lambda181) (close _V10_Dopen__output__string__impl_D286_lambda182))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__string__impl_D286_lambda181, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__string__impl_D286_lambda182, self)})));
}
static void _V10_Dopen__input__file_D287_lambda184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file_D287_lambda184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.open-input-file-impl.284 2 139) (bruijn ##.k.1851 0 0) (bruijn ##.path.815 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[139]), 2,
      _var0,
      statics->vars[1]);
}
static void _V10_Dopen__input__file_D287_lambda183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file_D287_lambda183, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.try-or-gc.282 1 137) (bruijn ##.k.1850 0 0) (close _V10_Dopen__input__file_D287_lambda184) (##string ##.string.3000))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[137]), 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__input__file_D287_lambda184, self)})),
      VEncodePointer(&_V10_Dstring_D3000.sym, VPOINTER_OTHER));
}
static void _V10_Dopen__output__file_D288_lambda186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file_D288_lambda186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.open-output-file-impl.285 2 140) (bruijn ##.k.1853 0 0) (bruijn ##.path.816 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[140]), 2,
      _var0,
      statics->vars[1]);
}
static void _V10_Dopen__output__file_D288_lambda185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file_D288_lambda185, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.try-or-gc.282 1 137) (bruijn ##.k.1852 0 0) (close _V10_Dopen__output__file_D288_lambda186) (##string ##.string.3001))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[137]), 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__file_D288_lambda186, self)})),
      VEncodePointer(&_V10_Dstring_D3001.sym, VPOINTER_OTHER));
}
static void _V10_Dopen__output__string_D289_lambda187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__string_D289_lambda187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.try-or-gc.282 1 137) (bruijn ##.k.1854 0 0) (bruijn ##.open-output-string-impl.286 1 141) (##string ##.string.3002))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[137]), 3,
      _var0,
      statics->vars[141],
      VEncodePointer(&_V10_Dstring_D3002.sym, VPOINTER_OTHER));
}
static void _V10_Dcall__with__port_D291_k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcall__with__port_D291_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1855 2 0) (bruijn ##.ret.819 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->vars[0]);
}
static void _V10_Dcall__with__port_D291_k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcall__with__port_D291_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.close-port.283 2 138) (close _V10_Dcall__with__port_D291_k211) (bruijn ##.port.817 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[138]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcall__with__port_D291_k211, self)})),
      statics->vars[1]);
}
static void _V10_Dcall__with__port_D291_lambda188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcall__with__port_D291_lambda188, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.proc.818 0 2) (close _V10_Dcall__with__port_D291_k210) (bruijn ##.port.817 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var2), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcall__with__port_D291_k210, self)})),
      _var1);
}
static void _V10_Dcall__with__input__file_D292_k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcall__with__input__file_D292_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.call-with-port.291 2 146) (bruijn ##.k.1857 1 0) (bruijn ##.x.1858 0 0) (bruijn ##.proc.821 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[146]), 3,
      statics->vars[0],
      _var0,
      statics->vars[2]);
}
static void _V10_Dcall__with__input__file_D292_lambda189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcall__with__input__file_D292_lambda189, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.open-input-file.287 1 142) (close _V10_Dcall__with__input__file_D292_k212) (bruijn ##.path.820 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[142]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcall__with__input__file_D292_k212, self)})),
      _var1);
}
static void _V10_Dcall__with__output__file_D293_k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcall__with__output__file_D293_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.call-with-port.291 2 146) (bruijn ##.k.1859 1 0) (bruijn ##.x.1860 0 0) (bruijn ##.proc.823 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[146]), 3,
      statics->vars[0],
      _var0,
      statics->vars[2]);
}
static void _V10_Dcall__with__output__file_D293_lambda190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcall__with__output__file_D293_lambda190, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.open-output-file.288 1 143) (close _V10_Dcall__with__output__file_D293_k213) (bruijn ##.path.822 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[143]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcall__with__output__file_D293_k213, self)})),
      _var1);
}
static void _V10_Dwith__output__to__file_D294_k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__output__to__file_D294_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1861 6 0) (bruijn ##.ret.830 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      statics->up->vars[0]);
}
static void _V10_Dwith__output__to__file_D294_k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__output__to__file_D294_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parameter.0.827 3 0) (close _V10_Dwith__output__to__file_D294_k218) '##vcore.pop-value (bruijn ##.keyval.1.828 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__output__to__file_D294_k218, self)})),
      _V10vcore_Dpop__value,
      statics->up->vars[0]);
}
static void _V10_Dwith__output__to__file_D294_k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__output__to__file_D294_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.close-port.283 5 138) (close _V10_Dwith__output__to__file_D294_k217) (bruijn ##.port.826 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 138)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__output__to__file_D294_k217, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Dwith__output__to__file_D294_k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__output__to__file_D294_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.thunk.825 3 2) (close _V10_Dwith__output__to__file_D294_k216))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__output__to__file_D294_k216, self)})));
}
static void _V10_Dwith__output__to__file_D294_lambda192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parameter.0.827 0 0) (close _V10_Dwith__output__to__file_D294_k215) '##vcore.push-value (bruijn ##.port.826 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__output__to__file_D294_k215, self)})),
      _V10vcore_Dpush__value,
      statics->vars[0]);
}
static void _V10_Dwith__output__to__file_D294_k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__output__to__file_D294_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dwith__output__to__file_D294_lambda192) (bruijn ##.current-output-port.279 2 134))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dwith__output__to__file_D294_lambda192, .env = self }, }, 1,
      statics->up->vars[134]);
}
static void _V10_Dwith__output__to__file_D294_lambda191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__output__to__file_D294_lambda191, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.open-output-file.288 1 143) (close _V10_Dwith__output__to__file_D294_k214) (bruijn ##.str.824 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[143]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__output__to__file_D294_k214, self)})),
      _var1);
}
static void _V10_Dwith__input__from__file_D295_k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__input__from__file_D295_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1864 6 0) (bruijn ##.ret.837 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      statics->up->vars[0]);
}
static void _V10_Dwith__input__from__file_D295_k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__input__from__file_D295_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parameter.3.834 3 0) (close _V10_Dwith__input__from__file_D295_k223) '##vcore.pop-value (bruijn ##.keyval.4.835 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__input__from__file_D295_k223, self)})),
      _V10vcore_Dpop__value,
      statics->up->vars[0]);
}
static void _V10_Dwith__input__from__file_D295_k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__input__from__file_D295_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.close-port.283 5 138) (close _V10_Dwith__input__from__file_D295_k222) (bruijn ##.port.833 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 138)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__input__from__file_D295_k222, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Dwith__input__from__file_D295_k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__input__from__file_D295_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.thunk.832 3 2) (close _V10_Dwith__input__from__file_D295_k221))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__input__from__file_D295_k221, self)})));
}
static void _V10_Dwith__input__from__file_D295_lambda194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parameter.3.834 0 0) (close _V10_Dwith__input__from__file_D295_k220) '##vcore.push-value (bruijn ##.port.833 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__input__from__file_D295_k220, self)})),
      _V10vcore_Dpush__value,
      statics->vars[0]);
}
static void _V10_Dwith__input__from__file_D295_k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__input__from__file_D295_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dwith__input__from__file_D295_lambda194) (bruijn ##.current-input-port.281 2 136))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dwith__input__from__file_D295_lambda194, .env = self }, }, 1,
      statics->up->vars[136]);
}
static void _V10_Dwith__input__from__file_D295_lambda193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__input__from__file_D295_lambda193, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.open-input-file.287 1 142) (close _V10_Dwith__input__from__file_D295_k219) (bruijn ##.str.831 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[142]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__input__from__file_D295_k219, self)})),
      _var1);
}
static void _V10_Dread__char_D296_k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__char_D296_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2957) ((##vcore.read-char (bruijn ##.x.1868 1 0))) ((bruijn ##.k.1867 2 0) (bruijn ##.reg.2957 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VReadChar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
__attribute__((used)) static void _V20CaseError__V10_Dread__char_D296_lambda195(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dread__char_D296_lambda195 #t (1 ((bruijn ##.current-input-port.281 1 136) (close _V10_Dread__char_D296_k224))) (2 (basic-block 1 1 (##.reg.2958) ((##vcore.read-char (bruijn ##.port.838 1 1))) ((bruijn ##.k.1869 1 0) (bruijn ##.reg.2958 0 0)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dread__char_D296_lambda195, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dread__char_D296_lambda195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-input-port.281 1 136) (close _V10_Dread__char_D296_k224))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[136]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__char_D296_k224, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dread__char_D296_lambda195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2958) ((##vcore.read-char (bruijn ##.port.838 1 1))) ((bruijn ##.k.1869 1 0) (bruijn ##.reg.2958 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VReadChar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
void _V10_Dread__char_D296_lambda195(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dread__char_D296_lambda195, @function\n"
#endif
"_V10_Dread__char_D296_lambda195:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dread__char_D296_lambda195\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dread__char_D296_lambda195\n"
"    jmp _V20CaseError__V10_Dread__char_D296_lambda195\n"
);
static void _V10_Dread__line_D297_k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.read-line.297 2 152) (bruijn ##.k.1870 1 0) (bruijn ##.x.1871 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[152]), 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dread__line_D297_k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.2960 1 0) ((bruijn ##.k.1877 0 0) (##string ##.string.2997)) ((bruijn ##.k.1877 0 0) (bruijn ##.rest.845 2 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D2997.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
}
static void _V10_Dread__line_D297_k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.string-append.235 8 90) (bruijn ##.k.1872 7 0) (bruijn ##.line.840 6 0) (bruijn ##.x.1875 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 90)), 3,
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 6-1, 0),
      _var0);
}
static void _V10_Dread__line_D297_k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2960) ((##vcore.eof-object? (bruijn ##.rest.845 1 0))) ((close _V10_Dread__line_D297_k229) (close _V10_Dread__line_D297_k230)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEofP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dread__line_D297_k229, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D297_k230, self)})));
    }
}
static void _V10_Dread__line_D297_k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2959) ((##vcore.eof-object? (bruijn ##.line.840 3 0))) (if (bruijn ##.reg.2959 0 0) ((bruijn ##.k.1872 4 0) (bruijn ##.line.840 3 0)) (if (bruijn ##.complete.841 3 1) ((bruijn ##.k.1872 4 0) (bruijn ##.line.840 3 0)) ((bruijn ##.read-line.297 5 152) (close _V10_Dread__line_D297_k228) (bruijn ##.port.839 4 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEofP2(runtime, NULL,
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->up->vars[0]);
} else {
if(VDecodeBool(
statics->up->up->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 152)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D297_k228, self)})),
      statics->up->up->up->vars[1]);
}
}
    }
}
static void _V10_Dread__line_D297_k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Dread__line_D297_k227) (bruijn ##.dummy.8.842 1 2) (bruijn ##.x.1878 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D297_k227, self)})),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Dread__line_D297_lambda197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_lambda197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.read-line2 (bruijn ##.k.1879 0 0) (bruijn ##.port.839 2 1))
    VCallFuncWithGC(runtime, (VFunc)VReadLine3, 2,
      _var0,
      statics->up->vars[1]);
}
static void _V10_Dread__line_D297_k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.1880 1 0) (bruijn ##.complete.841 2 1) (bruijn ##.complete.7.844 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      statics->vars[2]
    );
}
static void _V10_Dread__line_D297_lambda198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_lambda198, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V10_Dread__line_D297_k231) (bruijn ##.line.840 1 0) (bruijn ##.line.6.843 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D297_k231, self)})),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
__attribute__((used)) static void _V20CaseError__V10_Dread__line_D297_lambda196(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dread__line_D297_lambda196 #t (1 ((bruijn ##.current-input-port.281 1 136) (close _V10_Dread__line_D297_k225))) (2 (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Dread__line_D297_k226) (close _V10_Dread__line_D297_lambda197) (close _V10_Dread__line_D297_lambda198)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_lambda196, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dread__line_D297_lambda196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-input-port.281 1 136) (close _V10_Dread__line_D297_k225))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[136]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D297_k225, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dread__line_D297_lambda196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Dread__line_D297_k226) (close _V10_Dread__line_D297_lambda197) (close _V10_Dread__line_D297_lambda198)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D297_k226, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D297_lambda197, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D297_lambda198, self)})));
    }
}
void _V10_Dread__line_D297_lambda196(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dread__line_D297_lambda196, @function\n"
#endif
"_V10_Dread__line_D297_lambda196:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dread__line_D297_lambda196\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dread__line_D297_lambda196\n"
"    jmp _V20CaseError__V10_Dread__line_D297_lambda196\n"
);
static void _V10_Dread_D298_k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread_D298_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.read (bruijn ##.k.1882 1 0) (bruijn ##.x.1883 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRead2, 2,
      statics->vars[0],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dread_D298_lambda199(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dread_D298_lambda199 #t (1 ((bruijn ##.current-input-port.281 1 136) (close _V10_Dread_D298_k232))) (2 (##vcore.read (bruijn ##.k.1884 0 0) (bruijn ##.port.846 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dread_D298_lambda199, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dread_D298_lambda199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-input-port.281 1 136) (close _V10_Dread_D298_k232))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[136]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread_D298_k232, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dread_D298_lambda199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.read (bruijn ##.k.1884 0 0) (bruijn ##.port.846 0 1))
    VCallFuncWithGC(runtime, (VFunc)VRead2, 2,
      _var0,
      _var1);
}
void _V10_Dread_D298_lambda199(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dread_D298_lambda199, @function\n"
#endif
"_V10_Dread_D298_lambda199:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dread_D298_lambda199\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dread_D298_lambda199\n"
"    jmp _V20CaseError__V10_Dread_D298_lambda199\n"
);
static void _V10_Dnewline_D299_k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dnewline_D299_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2961) ((##vcore.newline (bruijn ##.x.1886 1 0))) ((bruijn ##.k.1885 2 0) (bruijn ##.reg.2961 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNewline2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
__attribute__((used)) static void _V20CaseError__V10_Dnewline_D299_lambda200(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dnewline_D299_lambda200 #t (1 ((bruijn ##.current-output-port.279 1 134) (close _V10_Dnewline_D299_k233))) (2 (basic-block 1 1 (##.reg.2962) ((##vcore.newline (bruijn ##.port.847 1 1))) ((bruijn ##.k.1887 1 0) (bruijn ##.reg.2962 0 0)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dnewline_D299_lambda200, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dnewline_D299_lambda200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-output-port.279 1 134) (close _V10_Dnewline_D299_k233))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[134]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dnewline_D299_k233, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dnewline_D299_lambda200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2962) ((##vcore.newline (bruijn ##.port.847 1 1))) ((bruijn ##.k.1887 1 0) (bruijn ##.reg.2962 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNewline2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
void _V10_Dnewline_D299_lambda200(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dnewline_D299_lambda200, @function\n"
#endif
"_V10_Dnewline_D299_lambda200:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dnewline_D299_lambda200\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dnewline_D299_lambda200\n"
"    jmp _V20CaseError__V10_Dnewline_D299_lambda200\n"
);
static void _V10_Dloop_D851_k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D851_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.851 3 0) (bruijn ##.k.1892 2 0) (##inline ##vcore.cdr (bruijn ##.xs.852 2 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      statics->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]));
}
static void _V10_Dloop_D851_lambda202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D851_lambda202, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.xs.852 0 1)) (basic-block 1 1 (##.reg.2964) ((##vcore.display-word (##string ##.string.3004) (bruijn ##.port.850 5 3))) ((bruijn ##.printout.302 6 157) (close _V10_Dloop_D851_k235) (##inline ##vcore.car (bruijn ##.xs.852 1 1)) (bruijn ##.write?.849 5 2) (bruijn ##.port.850 5 3))) (if (##inline ##vcore.null? (bruijn ##.xs.852 0 1)) ((bruijn ##.k.1892 0 0) 'ok) (basic-block 1 1 (##.reg.2965) ((##vcore.display-word (##string ##.string.3005) (bruijn ##.port.850 5 3))) ((bruijn ##.printout.302 6 157) (bruijn ##.k.1892 1 0) (bruijn ##.xs.852 1 1) (bruijn ##.write?.849 5 2) (bruijn ##.port.850 5 3)))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D3004.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 157)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D851_k235, self)})),
      VInlineCar2(runtime,
        statics->vars[1]),
      VGetArg(statics, 5-1, 2),
      VGetArg(statics, 5-1, 3));
    }
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0ok);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D3005.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 157)), 4,
      statics->vars[0],
      statics->vars[1],
      VGetArg(statics, 5-1, 2),
      VGetArg(statics, 5-1, 3));
    }
}
}
}
static void _V10_Dprintout__list_D300_k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__list_D300_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2966) ((##vcore.display-word (##string ##.string.3006) (bruijn ##.port.850 5 3))) ((bruijn ##.k.1888 5 0) (bruijn ##.reg.2966 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D3006.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
static void _V10_Dprintout__list_D300_k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__list_D300_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D851_lambda202)) ((bruijn ##.loop.851 0 0) (close _V10_Dprintout__list_D300_k236) (##inline ##vcore.cdr (bruijn ##.x.848 3 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D851_lambda202, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__list_D300_k236, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
    }
}
static void _V10_Dprintout__list_D300_lambda201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__list_D300_lambda201, got ~D~N"
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
  // (basic-block 1 1 (##.reg.2963) ((##vcore.display-word (##string ##.string.3003) (bruijn ##.port.850 1 3))) ((bruijn ##.printout.302 2 157) (close _V10_Dprintout__list_D300_k234) (##inline ##vcore.car (bruijn ##.x.848 1 1)) (bruijn ##.write?.849 1 2) (bruijn ##.port.850 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D3003.sym, VPOINTER_OTHER),
      statics->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[157]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__list_D300_k234, self)})),
      VInlineCar2(runtime,
        statics->vars[1]),
      statics->vars[2],
      statics->vars[3]);
    }
}
static void _V10_Dprintout__quotation_D301_k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__quotation_D301_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printout.302 4 157) (bruijn ##.k.1902 3 0) (bruijn ##.x.1904 0 0) (bruijn ##.write?.854 3 2) (bruijn ##.port.855 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[157]), 4,
      statics->up->up->vars[0],
      _var0,
      statics->up->up->vars[2],
      statics->up->up->vars[3]);
}
static void _V10_Dprintout__quotation_D301_k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__quotation_D301_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2967) ((##vcore.display-word (##inline ##vcore.cdr (bruijn ##.x.1906 1 0)) (bruijn ##.port.855 2 3))) ((bruijn ##.cadr.185 3 40) (close _V10_Dprintout__quotation_D301_k238) (bruijn ##.x.853 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VInlineCdr2(runtime,
        statics->vars[0]),
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[40]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__quotation_D301_k238, self)})),
      statics->up->vars[1]);
    }
}
static void _V10_Dprintout__quotation_D301_lambda203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__quotation_D301_lambda203, got ~D~N"
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
  // ((bruijn ##.assv.229 1 84) (close _V10_Dprintout__quotation_D301_k237) (##inline ##vcore.car (bruijn ##.x.853 0 1)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quote '(##string ##.string.3007)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quasiquote '(##string ##.string.3008)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote '(##string ##.string.3009)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote-splicing '(##string ##.string.3010)) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[84]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__quotation_D301_k237, self)})),
      VInlineCar2(runtime,
        _var1),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quote,
        VEncodePointer(&_V10_Dstring_D3007.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quasiquote,
        VEncodePointer(&_V10_Dstring_D3008.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unquote,
        VEncodePointer(&_V10_Dstring_D3009.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unquote__splicing,
        VEncodePointer(&_V10_Dstring_D3010.sym, VPOINTER_OTHER)),
        VNULL)))));
}
static void _V10_Dprintout_D302_k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D302_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1918 0 0) ((bruijn ##.printout-quotation.301 2 156) (bruijn ##.k.1916 1 0) (bruijn ##.x.856 1 1) (bruijn ##.write?.857 1 2) (bruijn ##.port.858 1 3)) ((bruijn ##.printout-list.300 2 155) (bruijn ##.k.1916 1 0) (bruijn ##.x.856 1 1) (bruijn ##.write?.857 1 2) (bruijn ##.port.858 1 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[156]), 4,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      statics->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[155]), 4,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      statics->vars[3]);
}
}
static void _V10_Dloop_D860_k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D860_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.i.861 1 1) 0) ((bruijn ##.k.1934 0 0) #f) (basic-block 1 1 (##.reg.2973) ((##vcore.display-word (##string ##.string.3004) (bruijn ##.port.858 6 3))) ((bruijn ##.k.1934 1 0) (bruijn ##.reg.2973 0 0))))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[1],
        VEncodeInt(0l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D3004.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
static void _V10_Dloop_D860_k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D860_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2972) ((##vcore.+ (bruijn ##.i.861 4 1) 1)) ((bruijn ##.loop.860 5 0) (bruijn ##.k.1927 4 0) (bruijn ##.reg.2972 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      statics->up->up->up->vars[0],
      self->vars[0]);
    }
}
static void _V10_Dloop_D860_k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D860_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2971) ((##vcore.vector-ref (bruijn ##.x.856 6 1) (bruijn ##.i.861 2 1))) ((bruijn ##.printout.302 7 157) (close _V10_Dloop_D860_k242) (bruijn ##.reg.2971 0 0) (bruijn ##.write?.857 6 2) (bruijn ##.port.858 6 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 157)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D860_k242, self)})),
      self->vars[0],
      VGetArg(statics, 6-1, 2),
      VGetArg(statics, 6-1, 3));
    }
}
static void _V10_Dloop_D860_lambda205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D860_lambda205, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.861 0 1) (bruijn ##.reg.2969 2 0)) ((bruijn ##.k.1927 0 0) #f) ((close _V10_Dloop_D860_k240) (close _V10_Dloop_D860_k241)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D860_k240, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D860_k241, self)})));
}
}
static void _V10_Dprintout_D302_k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D302_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2974) ((##vcore.display-word (##string ##.string.3006) (bruijn ##.port.858 5 3))) ((bruijn ##.k.1916 5 0) (bruijn ##.reg.2974 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D3006.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
static void _V10_Dprintout_D302_k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D302_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.eq.862 1 0) (##intrinsic ##vcore.eq?)) (basic-block 1 1 (##.reg.2976) ((##vcore.display-word (##string ##.string.3012) (bruijn ##.port.858 5 3))) ((bruijn ##.k.1939 1 0) (bruijn ##.reg.2976 0 0))) (if (##inline ##vcore.eq? (bruijn ##.eq.862 1 0) (##intrinsic ##vcore.eqv?)) (basic-block 1 1 (##.reg.2977) ((##vcore.display-word (##string ##.string.3013) (bruijn ##.port.858 5 3))) ((bruijn ##.k.1939 1 0) (bruijn ##.reg.2977 0 0))) (basic-block 1 1 (##.reg.2978) ((##vcore.display-word (##string ##.string.3014) (bruijn ##.port.858 5 3))) ((bruijn ##.k.1939 1 0) (bruijn ##.reg.2978 0 0)))))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        _V40_V10vcore_Deq_Q))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D3012.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        _V40_V10vcore_Deqv_Q))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D3013.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D3014.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
}
static void _V10_Dprintout_D302_k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D302_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printout.302 6 157) (bruijn ##.k.1916 5 0) (bruijn ##.x.1937 0 0) (bruijn ##.write?.857 5 2) (bruijn ##.port.858 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 157)), 4,
      VGetArg(statics, 5-1, 0),
      _var0,
      VGetArg(statics, 5-1, 2),
      VGetArg(statics, 5-1, 3));
}
static void _V10_Dprintout_D302_k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D302_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.hash-table->alist.275 5 130) (close _V10_Dprintout_D302_k247) (bruijn ##.x.856 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 130)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D302_k247, self)})),
      statics->up->up->up->vars[1]);
}
static void _V10_Dprintout_D302_k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D302_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprintout_D302_k245) (close _V10_Dprintout_D302_k246))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout_D302_k245, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D302_k246, self)})));
}
static void _V10_Dprintout_D302_lambda204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D302_lambda204, got ~D~N"
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
  // (if (##inline ##vcore.pair? (bruijn ##.x.856 0 1)) ((bruijn ##.memq.225 1 80) (close _V10_Dprintout_D302_k239) (##inline ##vcore.car (bruijn ##.x.856 0 1)) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'quasiquote (##inline ##vcore.qcons 'unquote (##inline ##vcore.qcons 'unquote-splicing '()))))) (basic-block 1 1 (##.reg.2968) ((##vcore.vector? (bruijn ##.x.856 1 1))) (if (bruijn ##.reg.2968 0 0) (basic-block 2 2 (##.reg.2969 ##.reg.2970) ((##vcore.vector-length (bruijn ##.x.856 2 1)) (##vcore.display-word (##string ##.string.3011) (bruijn ##.port.858 2 3))) (letrec 1 ((close _V10_Dloop_D860_lambda205)) ((bruijn ##.loop.860 0 0) (close _V10_Dprintout_D302_k243) 0))) (basic-block 1 1 (##.reg.2975) ((##vcore.hash-table? (bruijn ##.x.856 2 1))) (if (bruijn ##.reg.2975 0 0) (##vcore.hash-table-equivalence-function (close _V10_Dprintout_D302_k244) (bruijn ##.x.856 2 1)) (if (bruijn ##.write?.857 2 2) (basic-block 1 1 (##.reg.2979) ((##vcore.write (bruijn ##.x.856 3 1) (bruijn ##.port.858 3 3))) ((bruijn ##.k.1916 3 0) (bruijn ##.reg.2979 0 0))) (basic-block 1 1 (##.reg.2980) ((##vcore.display-word (bruijn ##.x.856 3 1) (bruijn ##.port.858 3 3))) ((bruijn ##.k.1916 3 0) (bruijn ##.reg.2980 0 0)))))))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D302_k239, self)})),
      VInlineCar2(runtime,
        _var1),
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _V0quasiquote,
        VInlineCons2(runtime,
        _V0unquote,
        VInlineCons2(runtime,
        _V0unquote__splicing,
        VNULL)))));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D3011.sym, VPOINTER_OTHER),
      statics->up->vars[3]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D860_lambda205, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D302_k243, self)})),
      VEncodeInt(0l));
    }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VHashTableP(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VHashTableEqvFunc, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D302_k244, self)})),
      statics->up->vars[1]);
} else {
if(VDecodeBool(
statics->up->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VWrite2(runtime, NULL,
      statics->up->up->vars[1],
      statics->up->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      statics->up->up->vars[1],
      statics->up->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
}
    }
}
    }
}
}
static void _V10_Ddisplay_D303_k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddisplay_D303_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printout.302 2 157) (bruijn ##.k.1941 1 0) (bruijn ##.x.863 1 1) #f (bruijn ##.x.1942 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[157]), 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeBool(false),
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Ddisplay_D303_lambda206(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Ddisplay_D303_lambda206 #t (2 ((bruijn ##.current-output-port.279 1 134) (close _V10_Ddisplay_D303_k248))) (3 ((bruijn ##.printout.302 1 157) (bruijn ##.k.1943 0 0) (bruijn ##.x.864 0 1) #f (bruijn ##.port.865 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Ddisplay_D303_lambda206, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Ddisplay_D303_lambda206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-output-port.279 1 134) (close _V10_Ddisplay_D303_k248))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[134]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddisplay_D303_k248, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Ddisplay_D303_lambda206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // ((bruijn ##.printout.302 1 157) (bruijn ##.k.1943 0 0) (bruijn ##.x.864 0 1) #f (bruijn ##.port.865 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[157]), 4,
      _var0,
      _var1,
      VEncodeBool(false),
      _var2);
}
void _V10_Ddisplay_D303_lambda206(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Ddisplay_D303_lambda206, @function\n"
#endif
"_V10_Ddisplay_D303_lambda206:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Ddisplay_D303_lambda206\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Ddisplay_D303_lambda206\n"
"    jmp _V20CaseError__V10_Ddisplay_D303_lambda206\n"
);
static void _V10_Dwrite_D304_k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwrite_D304_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printout.302 2 157) (bruijn ##.k.1944 1 0) (bruijn ##.x.866 1 1) #t (bruijn ##.x.1945 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[157]), 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeBool(true),
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dwrite_D304_lambda207(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dwrite_D304_lambda207 #t (2 ((bruijn ##.current-output-port.279 1 134) (close _V10_Dwrite_D304_k249))) (3 ((bruijn ##.printout.302 1 157) (bruijn ##.k.1946 0 0) (bruijn ##.x.867 0 1) #t (bruijn ##.port.868 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dwrite_D304_lambda207, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dwrite_D304_lambda207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-output-port.279 1 134) (close _V10_Dwrite_D304_k249))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[134]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwrite_D304_k249, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dwrite_D304_lambda207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // ((bruijn ##.printout.302 1 157) (bruijn ##.k.1946 0 0) (bruijn ##.x.867 0 1) #t (bruijn ##.port.868 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[157]), 4,
      _var0,
      _var1,
      VEncodeBool(true),
      _var2);
}
void _V10_Dwrite_D304_lambda207(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dwrite_D304_lambda207, @function\n"
#endif
"_V10_Dwrite_D304_lambda207:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dwrite_D304_lambda207\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dwrite_D304_lambda207\n"
"    jmp _V20CaseError__V10_Dwrite_D304_lambda207\n"
);
static void _V10_Dvalues_D305_lambda209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalues_D305_lambda209, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.k.1948 0 0) (bruijn ##.k.870 0 1) (bruijn ##.args.869 1 1))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      _var0,
      _var1,
      statics->vars[1]);
}
static void _V10_Dvalues_D305_lambda208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalues_D305_lambda208, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.k.1947 0 0) (close _V10_Dvalues_D305_lambda209))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalues_D305_lambda209, self)})));
}
static void _V10_Dmake__parameter_D308_lambda211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_lambda211, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1950 0 0) (bruijn ##.x.872 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
static void _V10_Dmake__parameter_D308_k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.lookup.880 0 0) ((bruijn ##.k.1955 2 0) (##inline ##vcore.cdr (bruijn ##.lookup.880 0 0))) ((bruijn ##.k.1955 2 0) (bruijn ##.x.1954 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->up->vars[0]);
}
}
static void _V10_Dmake__parameter_D308_k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assq.228 5 83) (close _V10_Dmake__parameter_D308_k253) (bruijn ##.x.1953 3 0) (bruijn ##.x.1956 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 83)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D308_k253, self)})),
      statics->up->up->vars[0],
      _var0);
}
static void _V10_Dmake__parameter_D308_k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.push-dynamic (bruijn ##.k.1957 2 0) (bruijn ##.x.1953 4 0) (bruijn ##.x.1959 0 0))
    VCallFuncWithGC(runtime, (VFunc)VPushDynamic, 3,
      statics->up->vars[0],
      statics->up->up->up->vars[0],
      _var0);
}
static void _V10_Dmake__parameter_D308_k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1960 0 0) (##vcore.pop-dynamic (bruijn ##.k.1957 2 0) (bruijn ##.x.882 2 2)) ((bruijn ##.error.326 6 181) (bruijn ##.k.1957 2 0) (##string ##.string.3015)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VPopDynamic, 2,
      statics->up->vars[0],
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 181)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D3015.sym, VPOINTER_OTHER));
}
}
static void _V10_Dmake__parameter_D308_k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1958 0 0) ((bruijn ##.convert.876 4 2) (close _V10_Dmake__parameter_D308_k255) (bruijn ##.x.882 1 2)) (##vcore.eqv? (close _V10_Dmake__parameter_D308_k256) (bruijn ##.action.881 1 1) '##vcore.pop-value))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D308_k255, self)})),
      statics->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D308_k256, self)})),
      statics->vars[1],
      _V10vcore_Dpop__value);
}
}
__attribute__((used)) static void _V20CaseError__V10_Dmake__parameter_D308_lambda212(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__parameter_D308_lambda212 #t (1 (##vcore.get-dynamics (close _V10_Dmake__parameter_D308_k252))) (3 (##vcore.eqv? (close _V10_Dmake__parameter_D308_k254) (bruijn ##.action.881 0 1) '##vcore.push-value)))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_lambda212, got ~D~N"
 "-- expected 1~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__parameter_D308_lambda212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.get-dynamics (close _V10_Dmake__parameter_D308_k252))
    VCallFuncWithGC(runtime, (VFunc)VGetDynamics, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D308_k252, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__parameter_D308_lambda212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.eqv? (close _V10_Dmake__parameter_D308_k254) (bruijn ##.action.881 0 1) '##vcore.push-value)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D308_k254, self)})),
      _var1,
      _V10vcore_Dpush__value);
}
void _V10_Dmake__parameter_D308_lambda212(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__parameter_D308_lambda212, @function\n"
#endif
"_V10_Dmake__parameter_D308_lambda212:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dmake__parameter_D308_lambda212\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__parameter_D308_lambda212\n"
"    jmp _V20CaseError__V10_Dmake__parameter_D308_lambda212\n"
);
static void _V10_Dmake__parameter_D308_k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.k.1952 2 0) (close _V10_Dmake__parameter_D308_lambda212))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D308_lambda212, self)})));
}
static void _V10_Dmake__parameter_D308_k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.convert.876 1 2) (close _V10_Dmake__parameter_D308_k251) (bruijn ##.init.875 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[2]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D308_k251, self)})),
      statics->vars[1]);
}
__attribute__((used)) static void _V20CaseError__V10_Dmake__parameter_D308_lambda210(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__parameter_D308_lambda210 #t (2 ((bruijn ##.make-parameter.308 1 163) (bruijn ##.k.1949 0 0) (bruijn ##.init.871 0 1) (close _V10_Dmake__parameter_D308_lambda211) 'parameter)) (3 ((bruijn ##.make-parameter.308 1 163) (bruijn ##.k.1951 0 0) (bruijn ##.init.873 0 1) (bruijn ##.convert.874 0 2) 'parameter)) (4 ((close _V10_Dmake__parameter_D308_k250) (##inline ##vcore.cons (bruijn ##.name.877 0 3) '()))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_lambda210, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__parameter_D308_lambda210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.make-parameter.308 1 163) (bruijn ##.k.1949 0 0) (bruijn ##.init.871 0 1) (close _V10_Dmake__parameter_D308_lambda211) 'parameter)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[163]), 4,
      _var0,
      _var1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D308_lambda211, self)})),
      _V0parameter);
}
__attribute__((used)) static void _V20Case1__V10_Dmake__parameter_D308_lambda210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // ((bruijn ##.make-parameter.308 1 163) (bruijn ##.k.1951 0 0) (bruijn ##.init.873 0 1) (bruijn ##.convert.874 0 2) 'parameter)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[163]), 4,
      _var0,
      _var1,
      _var2,
      _V0parameter);
}
__attribute__((used)) static void _V20Case2__V10_Dmake__parameter_D308_lambda210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((close _V10_Dmake__parameter_D308_k250) (##inline ##vcore.cons (bruijn ##.name.877 0 3) '()))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dmake__parameter_D308_k250, .env = self }, }, 1,
      VInlineCons2(runtime,
        _var3,
        VNULL));
}
void _V10_Dmake__parameter_D308_lambda210(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__parameter_D308_lambda210, @function\n"
#endif
"_V10_Dmake__parameter_D308_lambda210:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__parameter_D308_lambda210\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__parameter_D308_lambda210\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V10_Dmake__parameter_D308_lambda210\n"
"    jmp _V20CaseError__V10_Dmake__parameter_D308_lambda210\n"
);
__attribute__((used)) static void _V20CaseError__V10_Dfile__exists_Q_D309_lambda213(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dfile__exists_Q_D309_lambda213 #t (2 (##vcore.access (bruijn ##.k.1961 0 0) (bruijn ##.path.884 0 1) 0)) (3 (##vcore.access (bruijn ##.k.1962 0 0) (bruijn ##.path.885 0 1) (bruijn ##.mode.886 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dfile__exists_Q_D309_lambda213, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dfile__exists_Q_D309_lambda213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.access (bruijn ##.k.1961 0 0) (bruijn ##.path.884 0 1) 0)
    VCallFuncWithGC(runtime, (VFunc)VAccess, 3,
      _var0,
      _var1,
      VEncodeInt(0l));
}
__attribute__((used)) static void _V20Case1__V10_Dfile__exists_Q_D309_lambda213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.access (bruijn ##.k.1962 0 0) (bruijn ##.path.885 0 1) (bruijn ##.mode.886 0 2))
    VCallFuncWithGC(runtime, (VFunc)VAccess, 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Dfile__exists_Q_D309_lambda213(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dfile__exists_Q_D309_lambda213, @function\n"
#endif
"_V10_Dfile__exists_Q_D309_lambda213:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dfile__exists_Q_D309_lambda213\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dfile__exists_Q_D309_lambda213\n"
"    jmp _V20CaseError__V10_Dfile__exists_Q_D309_lambda213\n"
);
static void _V10_Dbitwise__and_D310_k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__and_D310_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-and (bruijn ##.k.1966 1 0) (bruijn ##.x.1967 0 0) (bruijn ##.c.892 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
static void _V10_Dbitwise__and_D310_k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__and_D310_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-and (bruijn ##.k.1968 2 0) (bruijn ##.x.1969 0 0) (bruijn ##.d.896 2 4))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      statics->up->vars[0],
      _var0,
      statics->up->vars[4]);
}
static void _V10_Dbitwise__and_D310_k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__and_D310_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.bitwise-and (close _V10_Dbitwise__and_D310_k259) (bruijn ##.x.1970 0 0) (bruijn ##.c.895 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__and_D310_k259, self)})),
      _var0,
      statics->vars[3]);
}
static void _V10_Dloop_D899_k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D899_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.899 2 0) (bruijn ##.k.1972 1 0) (bruijn ##.x.1974 0 0) (##inline ##vcore.cdr (bruijn ##.bs.898 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      _var0,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D899_lambda215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D899_lambda215, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.bs.898 2 2)) ((bruijn ##.k.1972 0 0) (bruijn ##.ret.900 0 1)) (##vcore.bitwise-and (close _V10_Dloop_D899_k260) (bruijn ##.a.897 2 1) (##inline ##vcore.car (bruijn ##.bs.898 2 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D899_k260, self)})),
      statics->up->vars[1],
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
__attribute__((used)) static void _V20CaseError__V10_Dbitwise__and_D310_lambda214(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dbitwise__and_D310_lambda214 #t (1 ((bruijn ##.k.1963 0 0) -1)) (2 ((bruijn ##.k.1964 0 0) (bruijn ##.a.887 0 1))) (3 (##vcore.bitwise-and (bruijn ##.k.1965 0 0) (bruijn ##.a.888 0 1) (bruijn ##.b.889 0 2))) (4 (##vcore.bitwise-and (close _V10_Dbitwise__and_D310_k257) (bruijn ##.a.890 0 1) (bruijn ##.b.891 0 2))) (5 (##vcore.bitwise-and (close _V10_Dbitwise__and_D310_k258) (bruijn ##.a.893 0 1) (bruijn ##.b.894 0 2))) (2 + (letrec 1 ((close _V10_Dloop_D899_lambda215)) ((bruijn ##.loop.899 0 0) (bruijn ##.k.1971 1 0) (bruijn ##.a.897 1 1) (bruijn ##.bs.898 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__and_D310_lambda214, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dbitwise__and_D310_lambda214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // ((bruijn ##.k.1963 0 0) -1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(-1l));
}
__attribute__((used)) static void _V20Case1__V10_Dbitwise__and_D310_lambda214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1964 0 0) (bruijn ##.a.887 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V10_Dbitwise__and_D310_lambda214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.bitwise-and (bruijn ##.k.1965 0 0) (bruijn ##.a.888 0 1) (bruijn ##.b.889 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      _var0,
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V10_Dbitwise__and_D310_lambda214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##vcore.bitwise-and (close _V10_Dbitwise__and_D310_k257) (bruijn ##.a.890 0 1) (bruijn ##.b.891 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__and_D310_k257, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case4__V10_Dbitwise__and_D310_lambda214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##vcore.bitwise-and (close _V10_Dbitwise__and_D310_k258) (bruijn ##.a.893 0 1) (bruijn ##.b.894 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__and_D310_k258, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case5__V10_Dbitwise__and_D310_lambda214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D899_lambda215)) ((bruijn ##.loop.899 0 0) (bruijn ##.k.1971 1 0) (bruijn ##.a.897 1 1) (bruijn ##.bs.898 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D899_lambda215, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
    }
}
void _V10_Dbitwise__and_D310_lambda214(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dbitwise__and_D310_lambda214, @function\n"
#endif
"_V10_Dbitwise__and_D310_lambda214:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dbitwise__and_D310_lambda214\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dbitwise__and_D310_lambda214\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dbitwise__and_D310_lambda214\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dbitwise__and_D310_lambda214\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V10_Dbitwise__and_D310_lambda214\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case5__V10_Dbitwise__and_D310_lambda214\n"
"    jmp _V20CaseError__V10_Dbitwise__and_D310_lambda214\n"
);
static void _V10_Dbitwise__ior_D311_k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__ior_D311_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-ior (bruijn ##.k.1980 1 0) (bruijn ##.x.1981 0 0) (bruijn ##.c.907 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
static void _V10_Dbitwise__ior_D311_k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__ior_D311_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-ior (bruijn ##.k.1982 2 0) (bruijn ##.x.1983 0 0) (bruijn ##.d.911 2 4))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      statics->up->vars[0],
      _var0,
      statics->up->vars[4]);
}
static void _V10_Dbitwise__ior_D311_k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__ior_D311_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.bitwise-ior (close _V10_Dbitwise__ior_D311_k263) (bruijn ##.x.1984 0 0) (bruijn ##.c.910 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__ior_D311_k263, self)})),
      _var0,
      statics->vars[3]);
}
static void _V10_Dloop_D914_k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D914_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.914 2 0) (bruijn ##.k.1986 1 0) (bruijn ##.x.1988 0 0) (##inline ##vcore.cdr (bruijn ##.bs.913 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      _var0,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D914_lambda217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D914_lambda217, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.bs.913 2 2)) ((bruijn ##.k.1986 0 0) (bruijn ##.ret.915 0 1)) (##vcore.bitwise-ior (close _V10_Dloop_D914_k264) (bruijn ##.a.912 2 1) (##inline ##vcore.car (bruijn ##.bs.913 2 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D914_k264, self)})),
      statics->up->vars[1],
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
__attribute__((used)) static void _V20CaseError__V10_Dbitwise__ior_D311_lambda216(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dbitwise__ior_D311_lambda216 #t (1 ((bruijn ##.k.1977 0 0) 0)) (2 ((bruijn ##.k.1978 0 0) (bruijn ##.a.902 0 1))) (3 (##vcore.bitwise-ior (bruijn ##.k.1979 0 0) (bruijn ##.a.903 0 1) (bruijn ##.b.904 0 2))) (4 (##vcore.bitwise-ior (close _V10_Dbitwise__ior_D311_k261) (bruijn ##.a.905 0 1) (bruijn ##.b.906 0 2))) (5 (##vcore.bitwise-ior (close _V10_Dbitwise__ior_D311_k262) (bruijn ##.a.908 0 1) (bruijn ##.b.909 0 2))) (2 + (letrec 1 ((close _V10_Dloop_D914_lambda217)) ((bruijn ##.loop.914 0 0) (bruijn ##.k.1985 1 0) (bruijn ##.a.912 1 1) (bruijn ##.bs.913 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__ior_D311_lambda216, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dbitwise__ior_D311_lambda216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // ((bruijn ##.k.1977 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
__attribute__((used)) static void _V20Case1__V10_Dbitwise__ior_D311_lambda216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1978 0 0) (bruijn ##.a.902 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V10_Dbitwise__ior_D311_lambda216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.bitwise-ior (bruijn ##.k.1979 0 0) (bruijn ##.a.903 0 1) (bruijn ##.b.904 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      _var0,
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V10_Dbitwise__ior_D311_lambda216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##vcore.bitwise-ior (close _V10_Dbitwise__ior_D311_k261) (bruijn ##.a.905 0 1) (bruijn ##.b.906 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__ior_D311_k261, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case4__V10_Dbitwise__ior_D311_lambda216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##vcore.bitwise-ior (close _V10_Dbitwise__ior_D311_k262) (bruijn ##.a.908 0 1) (bruijn ##.b.909 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__ior_D311_k262, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case5__V10_Dbitwise__ior_D311_lambda216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D914_lambda217)) ((bruijn ##.loop.914 0 0) (bruijn ##.k.1985 1 0) (bruijn ##.a.912 1 1) (bruijn ##.bs.913 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D914_lambda217, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
    }
}
void _V10_Dbitwise__ior_D311_lambda216(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dbitwise__ior_D311_lambda216, @function\n"
#endif
"_V10_Dbitwise__ior_D311_lambda216:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dbitwise__ior_D311_lambda216\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dbitwise__ior_D311_lambda216\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dbitwise__ior_D311_lambda216\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dbitwise__ior_D311_lambda216\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V10_Dbitwise__ior_D311_lambda216\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case5__V10_Dbitwise__ior_D311_lambda216\n"
"    jmp _V20CaseError__V10_Dbitwise__ior_D311_lambda216\n"
);
static void _V10_Dbitwise__xor_D312_k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xor_D312_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-xor (bruijn ##.k.1994 1 0) (bruijn ##.x.1995 0 0) (bruijn ##.c.922 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
static void _V10_Dbitwise__xor_D312_k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xor_D312_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-xor (bruijn ##.k.1996 2 0) (bruijn ##.x.1997 0 0) (bruijn ##.d.926 2 4))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      statics->up->vars[0],
      _var0,
      statics->up->vars[4]);
}
static void _V10_Dbitwise__xor_D312_k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xor_D312_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.bitwise-xor (close _V10_Dbitwise__xor_D312_k267) (bruijn ##.x.1998 0 0) (bruijn ##.c.925 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__xor_D312_k267, self)})),
      _var0,
      statics->vars[3]);
}
static void _V10_Dloop_D929_k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D929_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.929 2 0) (bruijn ##.k.2000 1 0) (bruijn ##.x.2002 0 0) (##inline ##vcore.cdr (bruijn ##.bs.928 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      _var0,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D929_lambda219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D929_lambda219, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.bs.928 2 2)) ((bruijn ##.k.2000 0 0) (bruijn ##.ret.930 0 1)) (##vcore.bitwise-xor (close _V10_Dloop_D929_k268) (bruijn ##.a.927 2 1) (##inline ##vcore.car (bruijn ##.bs.928 2 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D929_k268, self)})),
      statics->up->vars[1],
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
__attribute__((used)) static void _V20CaseError__V10_Dbitwise__xor_D312_lambda218(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dbitwise__xor_D312_lambda218 #t (1 ((bruijn ##.k.1991 0 0) 0)) (2 ((bruijn ##.k.1992 0 0) (bruijn ##.a.917 0 1))) (3 (##vcore.bitwise-xor (bruijn ##.k.1993 0 0) (bruijn ##.a.918 0 1) (bruijn ##.b.919 0 2))) (4 (##vcore.bitwise-xor (close _V10_Dbitwise__xor_D312_k265) (bruijn ##.a.920 0 1) (bruijn ##.b.921 0 2))) (5 (##vcore.bitwise-xor (close _V10_Dbitwise__xor_D312_k266) (bruijn ##.a.923 0 1) (bruijn ##.b.924 0 2))) (2 + (letrec 1 ((close _V10_Dloop_D929_lambda219)) ((bruijn ##.loop.929 0 0) (bruijn ##.k.1999 1 0) (bruijn ##.a.927 1 1) (bruijn ##.bs.928 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xor_D312_lambda218, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dbitwise__xor_D312_lambda218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // ((bruijn ##.k.1991 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
__attribute__((used)) static void _V20Case1__V10_Dbitwise__xor_D312_lambda218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1992 0 0) (bruijn ##.a.917 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V10_Dbitwise__xor_D312_lambda218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.bitwise-xor (bruijn ##.k.1993 0 0) (bruijn ##.a.918 0 1) (bruijn ##.b.919 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      _var0,
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V10_Dbitwise__xor_D312_lambda218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##vcore.bitwise-xor (close _V10_Dbitwise__xor_D312_k265) (bruijn ##.a.920 0 1) (bruijn ##.b.921 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__xor_D312_k265, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case4__V10_Dbitwise__xor_D312_lambda218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##vcore.bitwise-xor (close _V10_Dbitwise__xor_D312_k266) (bruijn ##.a.923 0 1) (bruijn ##.b.924 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__xor_D312_k266, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case5__V10_Dbitwise__xor_D312_lambda218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D929_lambda219)) ((bruijn ##.loop.929 0 0) (bruijn ##.k.1999 1 0) (bruijn ##.a.927 1 1) (bruijn ##.bs.928 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D929_lambda219, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
    }
}
void _V10_Dbitwise__xor_D312_lambda218(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dbitwise__xor_D312_lambda218, @function\n"
#endif
"_V10_Dbitwise__xor_D312_lambda218:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dbitwise__xor_D312_lambda218\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dbitwise__xor_D312_lambda218\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dbitwise__xor_D312_lambda218\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dbitwise__xor_D312_lambda218\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V10_Dbitwise__xor_D312_lambda218\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case5__V10_Dbitwise__xor_D312_lambda218\n"
"    jmp _V20CaseError__V10_Dbitwise__xor_D312_lambda218\n"
);
static void _V10_Dbitwise__xnor_D313_k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xnor_D313_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-xnor (bruijn ##.k.2008 1 0) (bruijn ##.x.2009 0 0) (bruijn ##.c.937 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
static void _V10_Dbitwise__xnor_D313_k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xnor_D313_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-xnor (bruijn ##.k.2010 2 0) (bruijn ##.x.2011 0 0) (bruijn ##.d.941 2 4))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      statics->up->vars[0],
      _var0,
      statics->up->vars[4]);
}
static void _V10_Dbitwise__xnor_D313_k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xnor_D313_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.bitwise-xnor (close _V10_Dbitwise__xnor_D313_k271) (bruijn ##.x.2012 0 0) (bruijn ##.c.940 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__xnor_D313_k271, self)})),
      _var0,
      statics->vars[3]);
}
static void _V10_Dloop_D944_k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D944_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.944 2 0) (bruijn ##.k.2014 1 0) (bruijn ##.x.2016 0 0) (##inline ##vcore.cdr (bruijn ##.bs.943 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      _var0,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D944_lambda221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D944_lambda221, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.bs.943 2 2)) ((bruijn ##.k.2014 0 0) (bruijn ##.ret.945 0 1)) (##vcore.bitwise-xnor (close _V10_Dloop_D944_k272) (bruijn ##.a.942 2 1) (##inline ##vcore.car (bruijn ##.bs.943 2 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D944_k272, self)})),
      statics->up->vars[1],
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
__attribute__((used)) static void _V20CaseError__V10_Dbitwise__xnor_D313_lambda220(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dbitwise__xnor_D313_lambda220 #t (1 ((bruijn ##.k.2005 0 0) -1)) (2 ((bruijn ##.k.2006 0 0) (bruijn ##.a.932 0 1))) (3 (##vcore.bitwise-xnor (bruijn ##.k.2007 0 0) (bruijn ##.a.933 0 1) (bruijn ##.b.934 0 2))) (4 (##vcore.bitwise-xnor (close _V10_Dbitwise__xnor_D313_k269) (bruijn ##.a.935 0 1) (bruijn ##.b.936 0 2))) (5 (##vcore.bitwise-xnor (close _V10_Dbitwise__xnor_D313_k270) (bruijn ##.a.938 0 1) (bruijn ##.b.939 0 2))) (2 + (letrec 1 ((close _V10_Dloop_D944_lambda221)) ((bruijn ##.loop.944 0 0) (bruijn ##.k.2013 1 0) (bruijn ##.a.942 1 1) (bruijn ##.bs.943 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xnor_D313_lambda220, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dbitwise__xnor_D313_lambda220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // ((bruijn ##.k.2005 0 0) -1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(-1l));
}
__attribute__((used)) static void _V20Case1__V10_Dbitwise__xnor_D313_lambda220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.2006 0 0) (bruijn ##.a.932 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V10_Dbitwise__xnor_D313_lambda220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.bitwise-xnor (bruijn ##.k.2007 0 0) (bruijn ##.a.933 0 1) (bruijn ##.b.934 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      _var0,
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V10_Dbitwise__xnor_D313_lambda220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##vcore.bitwise-xnor (close _V10_Dbitwise__xnor_D313_k269) (bruijn ##.a.935 0 1) (bruijn ##.b.936 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__xnor_D313_k269, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case4__V10_Dbitwise__xnor_D313_lambda220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##vcore.bitwise-xnor (close _V10_Dbitwise__xnor_D313_k270) (bruijn ##.a.938 0 1) (bruijn ##.b.939 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__xnor_D313_k270, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case5__V10_Dbitwise__xnor_D313_lambda220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D944_lambda221)) ((bruijn ##.loop.944 0 0) (bruijn ##.k.2013 1 0) (bruijn ##.a.942 1 1) (bruijn ##.bs.943 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D944_lambda221, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
    }
}
void _V10_Dbitwise__xnor_D313_lambda220(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dbitwise__xnor_D313_lambda220, @function\n"
#endif
"_V10_Dbitwise__xnor_D313_lambda220:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dbitwise__xnor_D313_lambda220\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dbitwise__xnor_D313_lambda220\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dbitwise__xnor_D313_lambda220\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dbitwise__xnor_D313_lambda220\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V10_Dbitwise__xnor_D313_lambda220\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case5__V10_Dbitwise__xnor_D313_lambda220\n"
"    jmp _V20CaseError__V10_Dbitwise__xnor_D313_lambda220\n"
);
static void _V10_Datom_Q_D316_lambda222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Datom_Q_D316_lambda222, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.2019 0 0) (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.x.947 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineNot2(runtime,
        VInlinePairP2(runtime,
        _var1)));
}
static void _V10_Ddisplayln_D317_k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddisplayln_D317_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.displayln.317 2 172) (bruijn ##.k.2021 1 0) (bruijn ##.x.948 1 1) (bruijn ##.x.2022 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[172]), 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
static void _V10_Ddisplayln_D317_k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddisplayln_D317_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.newline.299 2 154) (bruijn ##.k.2023 1 0) (bruijn ##.port.950 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[154]), 2,
      statics->vars[0],
      statics->vars[2]);
}
__attribute__((used)) static void _V20CaseError__V10_Ddisplayln_D317_lambda223(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Ddisplayln_D317_lambda223 #t (2 ((bruijn ##.current-output-port.279 1 134) (close _V10_Ddisplayln_D317_k273))) (3 ((bruijn ##.display.303 1 158) (close _V10_Ddisplayln_D317_k274) (bruijn ##.x.949 0 1) (bruijn ##.port.950 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Ddisplayln_D317_lambda223, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Ddisplayln_D317_lambda223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-output-port.279 1 134) (close _V10_Ddisplayln_D317_k273))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[134]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddisplayln_D317_k273, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Ddisplayln_D317_lambda223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.display.303 1 158) (close _V10_Ddisplayln_D317_k274) (bruijn ##.x.949 0 1) (bruijn ##.port.950 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[158]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddisplayln_D317_k274, self)})),
      _var1,
      _var2);
}
void _V10_Ddisplayln_D317_lambda223(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Ddisplayln_D317_lambda223, @function\n"
#endif
"_V10_Ddisplayln_D317_lambda223:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Ddisplayln_D317_lambda223\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Ddisplayln_D317_lambda223\n"
"    jmp _V20CaseError__V10_Ddisplayln_D317_lambda223\n"
);
static void _V10_Dwriteln_D318_k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwriteln_D318_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.writeln.318 2 173) (bruijn ##.k.2025 1 0) (bruijn ##.x.951 1 1) (bruijn ##.x.2026 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[173]), 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
static void _V10_Dwriteln_D318_k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwriteln_D318_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.newline.299 2 154) (bruijn ##.k.2027 1 0) (bruijn ##.port.953 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[154]), 2,
      statics->vars[0],
      statics->vars[2]);
}
__attribute__((used)) static void _V20CaseError__V10_Dwriteln_D318_lambda224(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dwriteln_D318_lambda224 #t (2 ((bruijn ##.current-output-port.279 1 134) (close _V10_Dwriteln_D318_k275))) (3 ((bruijn ##.write.304 1 159) (close _V10_Dwriteln_D318_k276) (bruijn ##.x.952 0 1) (bruijn ##.port.953 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dwriteln_D318_lambda224, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dwriteln_D318_lambda224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-output-port.279 1 134) (close _V10_Dwriteln_D318_k275))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[134]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwriteln_D318_k275, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dwriteln_D318_lambda224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.write.304 1 159) (close _V10_Dwriteln_D318_k276) (bruijn ##.x.952 0 1) (bruijn ##.port.953 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[159]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwriteln_D318_k276, self)})),
      _var1,
      _var2);
}
void _V10_Dwriteln_D318_lambda224(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dwriteln_D318_lambda224, @function\n"
#endif
"_V10_Dwriteln_D318_lambda224:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dwriteln_D318_lambda224\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dwriteln_D318_lambda224\n"
"    jmp _V20CaseError__V10_Dwriteln_D318_lambda224\n"
);
static void _V10_Dloop_D958_k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.2065 1 0) ((bruijn ##.error.326 9 181) (bruijn ##.k.2066 0 0) (##string ##.string.3016) (bruijn ##.fmt.955 8 2)) ((bruijn ##.k.2066 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 181)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D3016.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D958_k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.2062 1 0) ((bruijn ##.k.2063 0 0) (bruijn ##.p.2062 1 0)) (##vcore.eqv? (bruijn ##.k.2063 0 0) (bruijn ##.reg.2985 3 1) '#\N))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      _var0,
      statics->up->up->vars[1],
      VEncodeChar('N'));
}
}
static void _V10_Dloop_D958_k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.2060 1 0) ((bruijn ##.k.2061 0 0) (bruijn ##.p.2060 1 0)) (##vcore.eqv? (bruijn ##.k.2061 0 0) (bruijn ##.reg.2985 5 1) '#\A))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      _var0,
      VGetArg(statics, 5-1, 1),
      VEncodeChar('A'));
}
}
static void _V10_Dloop_D958_k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.null? (bruijn ##.args.960 12 2)) ((bruijn ##.error.326 16 181) (bruijn ##.k.2047 0 0) (##string ##.string.3017) (bruijn ##.fmt.955 15 2)) ((bruijn ##.k.2047 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VGetArg(statics, 12-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 181)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D3017.sym, VPOINTER_OTHER),
      VGetArg(statics, 15-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D958_k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2990) ((##vcore.+ (bruijn ##.i.959 14 1) 2)) ((bruijn ##.loop.958 15 0) (bruijn ##.k.2030 14 0) (bruijn ##.reg.2990 0 0) (##inline ##vcore.cdr (bruijn ##.args.960 14 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 14-1, 1),
      VEncodeInt(2l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      VGetArg(statics, 14-1, 0),
      self->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 2)));
    }
}
static void _V10_Dloop_D958_k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.display.303 16 158) (close _V10_Dloop_D958_k290) (##inline ##vcore.car (bruijn ##.args.960 12 2)) (bruijn ##.port.954 15 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 158)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D958_k290, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 2)),
      VGetArg(statics, 15-1, 1));
}
static void _V10_Dloop_D958_k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.2058 1 0) ((bruijn ##.k.2059 0 0) (bruijn ##.p.2058 1 0)) (##vcore.eqv? (bruijn ##.k.2059 0 0) (bruijn ##.reg.2985 7 1) '#\S))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      _var0,
      VGetArg(statics, 7-1, 1),
      VEncodeChar('S'));
}
}
static void _V10_Dloop_D958_k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.null? (bruijn ##.args.960 14 2)) ((bruijn ##.error.326 18 181) (bruijn ##.k.2055 0 0) (##string ##.string.3017) (bruijn ##.fmt.955 17 2)) ((bruijn ##.k.2055 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VGetArg(statics, 14-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 181)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D3017.sym, VPOINTER_OTHER),
      VGetArg(statics, 17-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D958_k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2991) ((##vcore.+ (bruijn ##.i.959 16 1) 2)) ((bruijn ##.loop.958 17 0) (bruijn ##.k.2030 16 0) (bruijn ##.reg.2991 0 0) (##inline ##vcore.cdr (bruijn ##.args.960 16 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 16-1, 1),
      VEncodeInt(2l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      VGetArg(statics, 16-1, 0),
      self->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 16-1, 2)));
    }
}
static void _V10_Dloop_D958_k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.write.304 18 159) (close _V10_Dloop_D958_k296) (##inline ##vcore.car (bruijn ##.args.960 14 2)) (bruijn ##.port.954 17 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 159)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D958_k296, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 14-1, 2)),
      VGetArg(statics, 17-1, 1));
}
static void _V10_Dloop_D958_k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.326 19 181) (bruijn ##.k.2030 15 0) (##string ##.string.3018) (bruijn ##.x.2056 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 181)), 3,
      VGetArg(statics, 15-1, 0),
      VEncodePointer(&_V10_Dstring_D3018.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dloop_D958_k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2048 0 0) ((close _V10_Dloop_D958_k294) (close _V10_Dloop_D958_k295)) (basic-block 1 1 (##.reg.2992) ((##vcore.+ (bruijn ##.i.959 14 1) 2)) (##vcore.substring (close _V10_Dloop_D958_k297) (bruijn ##.fmt.955 17 2) (bruijn ##.i.959 14 1) (bruijn ##.reg.2992 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D958_k294, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D958_k295, self)})));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 14-1, 1),
      VEncodeInt(2l));
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D958_k297, self)})),
      VGetArg(statics, 17-1, 2),
      VGetArg(statics, 14-1, 1),
      self->vars[0]);
    }
}
}
static void _V10_Dloop_D958_k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D958_k292) (close _V10_Dloop_D958_k293))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D958_k292, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D958_k293, self)})));
}
static void _V10_Dloop_D958_k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2040 0 0) ((close _V10_Dloop_D958_k288) (close _V10_Dloop_D958_k289)) (##vcore.eqv? (close _V10_Dloop_D958_k291) (bruijn ##.reg.2985 5 1) '#\s))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D958_k288, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D958_k289, self)})));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D958_k291, self)})),
      VGetArg(statics, 5-1, 1),
      VEncodeChar('s'));
}
}
static void _V10_Dloop_D958_k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D958_k286) (close _V10_Dloop_D958_k287))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D958_k286, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D958_k287, self)})));
}
static void _V10_Dloop_D958_k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2037 0 0) (basic-block 2 2 (##.reg.2988 ##.reg.2989) ((##vcore.display-word #\newline (bruijn ##.port.954 13 1)) (##vcore.+ (bruijn ##.i.959 10 1) 2)) ((bruijn ##.loop.958 11 0) (bruijn ##.k.2030 10 0) (bruijn ##.reg.2989 0 1) (bruijn ##.args.960 10 2))) (##vcore.eqv? (close _V10_Dloop_D958_k285) (bruijn ##.reg.2985 3 1) '#\a))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodeChar('\n'),
      VGetArg(statics, 13-1, 1));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 10-1, 1),
      VEncodeInt(2l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      VGetArg(statics, 10-1, 0),
      self->vars[1],
      VGetArg(statics, 10-1, 2));
    }
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D958_k285, self)})),
      statics->up->up->vars[1],
      VEncodeChar('a'));
}
}
static void _V10_Dloop_D958_k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D958_k283) (close _V10_Dloop_D958_k284))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D958_k283, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D958_k284, self)})));
}
static void _V10_Dloop_D958_k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2034 0 0) (basic-block 2 2 (##.reg.2986 ##.reg.2987) ((##vcore.display-word #\~ (bruijn ##.port.954 11 1)) (##vcore.+ (bruijn ##.i.959 8 1) 2)) ((bruijn ##.loop.958 9 0) (bruijn ##.k.2030 8 0) (bruijn ##.reg.2987 0 1) (bruijn ##.args.960 8 2))) (##vcore.eqv? (close _V10_Dloop_D958_k282) (bruijn ##.reg.2985 1 1) '#\n))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodeChar('~'),
      VGetArg(statics, 11-1, 1));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      VEncodeInt(2l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      VGetArg(statics, 8-1, 0),
      self->vars[1],
      VGetArg(statics, 8-1, 2));
    }
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D958_k282, self)})),
      statics->vars[1],
      VEncodeChar('n'));
}
}
static void _V10_Dloop_D958_k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.reg.2984 ##.reg.2985) ((##vcore.+ (bruijn ##.i.959 6 1) 1) (##vcore.string-ref (bruijn ##.fmt.955 9 2) (bruijn ##.reg.2984 0 0))) (##vcore.eqv? (close _V10_Dloop_D958_k281) (bruijn ##.reg.2985 0 1) '#\~))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 9-1, 2),
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D958_k281, self)})),
      self->vars[1],
      VEncodeChar('~'));
    }
}
static void _V10_Dloop_D958_k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D958_k279) (close _V10_Dloop_D958_k280))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D958_k279, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D958_k280, self)})));
}
static void _V10_Dloop_D958_k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2031 0 0) (basic-block 1 1 (##.reg.2982) ((##vcore.string-ref (bruijn ##.fmt.955 5 2) (bruijn ##.i.959 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2982 0 0) #\~) (basic-block 1 1 (##.reg.2983) ((##vcore.+ (bruijn ##.i.959 3 1) 1)) (##vcore.= (close _V10_Dloop_D958_k278) (bruijn ##.reg.2983 0 0) (bruijn ##.reg.2981 5 0))) (basic-block 2 2 (##.reg.2993 ##.reg.2994) ((##vcore.display-word (bruijn ##.reg.2982 1 0) (bruijn ##.port.954 6 1)) (##vcore.+ (bruijn ##.i.959 3 1) 1)) ((bruijn ##.loop.958 4 0) (bruijn ##.k.2030 3 0) (bruijn ##.reg.2994 0 1) (bruijn ##.args.960 3 2))))) ((bruijn ##.k.2030 1 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      statics->up->vars[1]);
if(VDecodeBool(
VInlineEq2(runtime,
        self->vars[0],
        VEncodeChar('~')))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D958_k278, self)})),
      self->vars[0],
      VGetArg(statics, 5-1, 0));
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      self->vars[1],
      statics->up->up->vars[2]);
    }
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D958_lambda226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D958_lambda226, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.< (close _V10_Dloop_D958_k277) (bruijn ##.i.959 0 1) (bruijn ##.reg.2981 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D958_k277, self)})),
      _var1,
      statics->up->vars[0]);
}
static void _V10_Dformat__printf_D319_lambda225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__printf_D319_lambda225, got ~D~N"
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
  // (basic-block 1 1 (##.reg.2981) ((##vcore.string-length (bruijn ##.fmt.955 1 2))) (letrec 1 ((close _V10_Dloop_D958_lambda226)) ((bruijn ##.loop.958 0 0) (bruijn ##.k.2029 2 0) 0 (bruijn ##.args.956 2 3))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[2]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D958_lambda226, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->up->vars[0],
      VEncodeInt(0l),
      statics->up->vars[3]);
    }
    }
}
static void _V10_Dformat__sprintf_D320_k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__sprintf_D320_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2070 4 0) (bruijn ##.ret.966 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->vars[0]);
}
static void _V10_Dformat__sprintf_D320_k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__sprintf_D320_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.close-port.283 4 138) (close _V10_Dformat__sprintf_D320_k301) (bruijn ##.strport.965 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[138]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__sprintf_D320_k301, self)})),
      statics->up->vars[0]);
}
static void _V10_Dformat__sprintf_D320_k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__sprintf_D320_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-output-string.290 3 145) (close _V10_Dformat__sprintf_D320_k300) (bruijn ##.strport.965 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[145]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__sprintf_D320_k300, self)})),
      statics->vars[0]);
}
static void _V10_Dformat__sprintf_D320_k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__sprintf_D320_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.format-printf.319 2 174) (close _V10_Dformat__sprintf_D320_k299) (bruijn ##.strport.965 0 0) (bruijn ##.fmt.963 1 1) (bruijn ##.args.964 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[174]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__sprintf_D320_k299, self)})),
      _var0,
      statics->vars[1],
      statics->vars[2]);
}
static void _V10_Dformat__sprintf_D320_lambda227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__sprintf_D320_lambda227, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.open-output-string.289 1 144) (close _V10_Dformat__sprintf_D320_k298))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[144]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__sprintf_D320_k298, self)})));
}
static void _V10_Dprintf_D321_k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintf_D321_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.format-printf.319 2 174) (bruijn ##.k.2073 1 0) (bruijn ##.x.2074 0 0) (bruijn ##.fmt.967 1 1) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[174]), 4,
      statics->vars[0],
      _var0,
      statics->vars[1],
      VNULL);
}
static void _V10_Dprintf_D321_k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintf_D321_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.format-printf.319 3 174) (bruijn ##.k.2075 2 0) (bruijn ##.x.2077 0 0) (bruijn ##.a.968 2 1) (##inline ##vcore.cons (bruijn ##.b.969 2 2) (bruijn ##.args.970 2 3)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[174]), 4,
      statics->up->vars[0],
      _var0,
      statics->up->vars[1],
      VInlineCons2(runtime,
        statics->up->vars[2],
        statics->up->vars[3]));
}
__attribute__((used)) static void _V20CaseError__V10_Dprintf_D321_lambda228(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dprintf_D321_lambda228 #t (2 ((bruijn ##.current-output-port.279 1 134) (close _V10_Dprintf_D321_k302))) (3 + (basic-block 1 1 (##.reg.2995) ((##vcore.string? (bruijn ##.a.968 1 1))) (if (bruijn ##.reg.2995 0 0) ((bruijn ##.current-output-port.279 2 134) (close _V10_Dprintf_D321_k303)) ((bruijn ##.format-printf.319 2 174) (bruijn ##.k.2075 1 0) (bruijn ##.a.968 1 1) (bruijn ##.b.969 1 2) (bruijn ##.args.970 1 3))))))
 VErrorC(runtime, "Not enough arguments to _V10_Dprintf_D321_lambda228, got ~D~N"
 "-- expected 2~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dprintf_D321_lambda228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-output-port.279 1 134) (close _V10_Dprintf_D321_k302))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[134]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintf_D321_k302, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dprintf_D321_lambda228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (basic-block 1 1 (##.reg.2995) ((##vcore.string? (bruijn ##.a.968 1 1))) (if (bruijn ##.reg.2995 0 0) ((bruijn ##.current-output-port.279 2 134) (close _V10_Dprintf_D321_k303)) ((bruijn ##.format-printf.319 2 174) (bruijn ##.k.2075 1 0) (bruijn ##.a.968 1 1) (bruijn ##.b.969 1 2) (bruijn ##.args.970 1 3))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[134]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintf_D321_k303, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[174]), 4,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      statics->vars[3]);
}
    }
}
void _V10_Dprintf_D321_lambda228(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dprintf_D321_lambda228, @function\n"
#endif
"_V10_Dprintf_D321_lambda228:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dprintf_D321_lambda228\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case1__V10_Dprintf_D321_lambda228\n"
"    jmp _V20CaseError__V10_Dprintf_D321_lambda228\n"
);
static void _V10_Dsprintf_D322_k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsprintf_D322_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2079 4 0) (bruijn ##.ret.974 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->vars[0]);
}
static void _V10_Dsprintf_D322_k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsprintf_D322_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.close-port.283 4 138) (close _V10_Dsprintf_D322_k307) (bruijn ##.strport.973 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[138]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsprintf_D322_k307, self)})),
      statics->up->vars[0]);
}
static void _V10_Dsprintf_D322_k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsprintf_D322_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-output-string.290 3 145) (close _V10_Dsprintf_D322_k306) (bruijn ##.strport.973 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[145]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsprintf_D322_k306, self)})),
      statics->vars[0]);
}
static void _V10_Dsprintf_D322_k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsprintf_D322_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.format-printf.319 2 174) (close _V10_Dsprintf_D322_k305) (bruijn ##.strport.973 0 0) (bruijn ##.fmt.971 1 1) (bruijn ##.args.972 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[174]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsprintf_D322_k305, self)})),
      _var0,
      statics->vars[1],
      statics->vars[2]);
}
static void _V10_Dsprintf_D322_lambda229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsprintf_D322_lambda229, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // ((bruijn ##.open-output-string.289 1 144) (close _V10_Dsprintf_D322_k304))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[144]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsprintf_D322_k304, self)})));
}
static void _V10_Dformat_D323_k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat_D323_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.format-printf.319 3 174) (bruijn ##.k.2083 2 0) (bruijn ##.x.2087 0 0) (bruijn ##.b.977 2 2) (bruijn ##.args.978 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[174]), 4,
      statics->up->vars[0],
      _var0,
      statics->up->vars[2],
      statics->up->vars[3]);
}
__attribute__((used)) static void _V20CaseError__V10_Dformat_D323_lambda230(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dformat_D323_lambda230 #t (2 ((bruijn ##.sprintf.322 1 177) (bruijn ##.k.2082 0 0) (bruijn ##.fmt.975 0 1))) (3 + (basic-block 1 1 (##.reg.2996) ((##vcore.string? (bruijn ##.a.976 1 1))) (if (bruijn ##.reg.2996 0 0) ((bruijn ##.format-sprintf.320 2 175) (bruijn ##.k.2083 1 0) (bruijn ##.a.976 1 1) (##inline ##vcore.cons (bruijn ##.b.977 1 2) (bruijn ##.args.978 1 3))) (if (##inline ##vcore.eq? (bruijn ##.a.976 1 1) #t) ((bruijn ##.current-output-port.279 2 134) (close _V10_Dformat_D323_k308)) (if (##inline ##vcore.eq? (bruijn ##.a.976 1 1) #f) ((bruijn ##.format-sprintf.320 2 175) (bruijn ##.k.2083 1 0) (bruijn ##.b.977 1 2) (bruijn ##.args.978 1 3)) ((bruijn ##.format-printf.319 2 174) (bruijn ##.k.2083 1 0) (bruijn ##.a.976 1 1) (bruijn ##.b.977 1 2) (bruijn ##.args.978 1 3))))))))
 VErrorC(runtime, "Not enough arguments to _V10_Dformat_D323_lambda230, got ~D~N"
 "-- expected 2~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dformat_D323_lambda230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.sprintf.322 1 177) (bruijn ##.k.2082 0 0) (bruijn ##.fmt.975 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[177]), 2,
      _var0,
      _var1);
}
__attribute__((used)) static void _V20Case1__V10_Dformat_D323_lambda230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (basic-block 1 1 (##.reg.2996) ((##vcore.string? (bruijn ##.a.976 1 1))) (if (bruijn ##.reg.2996 0 0) ((bruijn ##.format-sprintf.320 2 175) (bruijn ##.k.2083 1 0) (bruijn ##.a.976 1 1) (##inline ##vcore.cons (bruijn ##.b.977 1 2) (bruijn ##.args.978 1 3))) (if (##inline ##vcore.eq? (bruijn ##.a.976 1 1) #t) ((bruijn ##.current-output-port.279 2 134) (close _V10_Dformat_D323_k308)) (if (##inline ##vcore.eq? (bruijn ##.a.976 1 1) #f) ((bruijn ##.format-sprintf.320 2 175) (bruijn ##.k.2083 1 0) (bruijn ##.b.977 1 2) (bruijn ##.args.978 1 3)) ((bruijn ##.format-printf.319 2 174) (bruijn ##.k.2083 1 0) (bruijn ##.a.976 1 1) (bruijn ##.b.977 1 2) (bruijn ##.args.978 1 3))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[175]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCons2(runtime,
        statics->vars[2],
        statics->vars[3]));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[1],
        VEncodeBool(true)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[134]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat_D323_k308, self)})));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[1],
        VEncodeBool(false)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[175]), 3,
      statics->vars[0],
      statics->vars[2],
      statics->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[174]), 4,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      statics->vars[3]);
}
}
}
    }
}
void _V10_Dformat_D323_lambda230(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dformat_D323_lambda230, @function\n"
#endif
"_V10_Dformat_D323_lambda230:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dformat_D323_lambda230\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case1__V10_Dformat_D323_lambda230\n"
"    jmp _V20CaseError__V10_Dformat_D323_lambda230\n"
);
static void _V10_Draise__continuable_D324_k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Draise__continuable_D324_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2089 3 0) (bruijn ##.ret.981 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
static void _V10_Draise__continuable_D324_k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Draise__continuable_D324_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.push-exception-handler (close _V10_Draise__continuable_D324_k311) (bruijn ##.handler.980 1 0))
    VCallFuncWithGC(runtime, (VFunc)VPushExceptionHandler, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Draise__continuable_D324_k311, self)})),
      statics->vars[0]);
}
static void _V10_Draise__continuable_D324_k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Draise__continuable_D324_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.handler.980 0 0) (close _V10_Draise__continuable_D324_k310) (bruijn ##.x.979 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Draise__continuable_D324_k310, self)})),
      statics->vars[1]);
}
static void _V10_Draise__continuable_D324_lambda231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Draise__continuable_D324_lambda231, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.get-exception-handler (close _V10_Draise__continuable_D324_k309))
    VCallFuncWithGC(runtime, (VFunc)VGetExceptionHandler, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Draise__continuable_D324_k309, self)})));
}
static void _V10_Dwith__exception__handler_D325_k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__exception__handler_D325_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.k.2093 1 0) (bruijn ##.values.305 4 160) (bruijn ##.rets.984 1 1))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      statics->vars[0],
      statics->up->up->up->vars[160],
      statics->vars[1]);
}
static void _V10_Dwith__exception__handler_D325_lambda233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__exception__handler_D325_lambda233, got ~D~N"
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
  // (##vcore.pop-exception-handler (close _V10_Dwith__exception__handler_D325_k313) (bruijn ##.handler.982 2 1))
    VCallFuncWithGC(runtime, (VFunc)VPopExceptionHandler, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__exception__handler_D325_k313, self)})),
      statics->up->vars[1]);
}
static void _V10_Dwith__exception__handler_D325_k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__exception__handler_D325_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.2091 1 0) (bruijn ##.thunk.983 1 2) (close _V10_Dwith__exception__handler_D325_lambda233))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      statics->vars[2],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__exception__handler_D325_lambda233, self)})));
}
static void _V10_Dwith__exception__handler_D325_lambda232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__exception__handler_D325_lambda232, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.push-exception-handler (close _V10_Dwith__exception__handler_D325_k312) (bruijn ##.handler.982 0 1))
    VCallFuncWithGC(runtime, (VFunc)VPushExceptionHandler, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__exception__handler_D325_k312, self)})),
      _var1);
}
static void _V10_Derror_D326_k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Derror_D326_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.k.2095 1 0) (bruijn ##.x.2096 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Derror_D326_lambda234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Derror_D326_lambda234, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (##vcore.record (close _V10_Derror_D326_k314) #f 'error (bruijn ##.msg.985 0 1) (bruijn ##.irritants.986 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Derror_D326_k314, self)})),
      VEncodeBool(false),
      _V0error,
      _var1,
      _varargs);
}
static void _V10_Dfiber__fork_D327_lambda235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__fork_D327_lambda235, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.fiber-fork-list (bruijn ##.k.2097 0 0) (bruijn ##.args.987 0 1))
    VCallFuncWithGC(runtime, (VFunc)VFiberForkList, 2,
      _var0,
      _varargs);
}
static void _V10_Dfiber__map_D328_k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.fiber-fork-list (bruijn ##.k.2098 1 0) (bruijn ##.x.2099 0 0))
    VCallFuncWithGC(runtime, (VFunc)VFiberForkList, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dfiber__map_D328_lambda238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_lambda238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.f.988 2 1) (bruijn ##.k.2101 0 0) (bruijn ##.e.990 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      _var0,
      statics->vars[1]);
}
static void _V10_Dfiber__map_D328_lambda237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_lambda237, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.k.2100 0 0) (close _V10_Dfiber__map_D328_lambda238))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D328_lambda238, self)})));
}
static void _V10_Dfiber__map_D328_k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.fiber-fork-list (bruijn ##.k.2102 1 0) (bruijn ##.x.2103 0 0))
    VCallFuncWithGC(runtime, (VFunc)VFiberForkList, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dfiber__map_D328_lambda240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_lambda240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.f.991 2 1) (bruijn ##.k.2105 0 0) (bruijn ##.a.994 1 1) (bruijn ##.b.995 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 3,
      _var0,
      statics->vars[1],
      statics->vars[2]);
}
static void _V10_Dfiber__map_D328_lambda239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_lambda239, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.k.2104 0 0) (close _V10_Dfiber__map_D328_lambda240))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D328_lambda240, self)})));
}
static void _V10_Dfiber__map_D328_k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.fiber-fork-list (bruijn ##.k.2106 1 0) (bruijn ##.x.2107 0 0))
    VCallFuncWithGC(runtime, (VFunc)VFiberForkList, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dfiber__map_D328_lambda242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_lambda242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.f.996 2 1) (bruijn ##.k.2109 0 0) (bruijn ##.a.1000 1 1) (bruijn ##.b.1001 1 2) (bruijn ##.c.1002 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 4,
      _var0,
      statics->vars[1],
      statics->vars[2],
      statics->vars[3]);
}
static void _V10_Dfiber__map_D328_lambda241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_lambda241, got ~D~N"
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
  // ((bruijn ##.k.2108 0 0) (close _V10_Dfiber__map_D328_lambda242))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D328_lambda242, self)})));
}
static void _V10_Dfiber__map_D328_k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.fiber-fork-list (bruijn ##.k.2110 1 0) (bruijn ##.x.2111 0 0))
    VCallFuncWithGC(runtime, (VFunc)VFiberForkList, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dfiber__map_D328_lambda244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_lambda244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.k.2113 0 0) (bruijn ##.f.1003 2 1) (bruijn ##.args.1006 1 1))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      _var0,
      statics->up->vars[1],
      statics->vars[1]);
}
static void _V10_Dfiber__map_D328_lambda243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_lambda243, got ~D~N"
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
  // ((bruijn ##.k.2112 0 0) (close _V10_Dfiber__map_D328_lambda244))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D328_lambda244, self)})));
}
__attribute__((used)) static void _V20CaseError__V10_Dfiber__map_D328_lambda236(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dfiber__map_D328_lambda236 #t (3 ((bruijn ##.map.220 1 75) (close _V10_Dfiber__map_D328_k315) (close _V10_Dfiber__map_D328_lambda237) (bruijn ##.lst.989 0 2))) (4 ((bruijn ##.map.220 1 75) (close _V10_Dfiber__map_D328_k316) (close _V10_Dfiber__map_D328_lambda239) (bruijn ##.as.992 0 2) (bruijn ##.bs.993 0 3))) (5 ((bruijn ##.map.220 1 75) (close _V10_Dfiber__map_D328_k317) (close _V10_Dfiber__map_D328_lambda241) (bruijn ##.as.997 0 2) (bruijn ##.bs.998 0 3) (bruijn ##.cs.999 0 4))) (3 + (##vcore.apply (close _V10_Dfiber__map_D328_k318) (bruijn ##.map.220 1 75) (close _V10_Dfiber__map_D328_lambda243) (bruijn ##.as.1004 0 2) (bruijn ##.args.1005 0 3))))
 VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_lambda236, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dfiber__map_D328_lambda236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.map.220 1 75) (close _V10_Dfiber__map_D328_k315) (close _V10_Dfiber__map_D328_lambda237) (bruijn ##.lst.989 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[75]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D328_k315, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D328_lambda237, self)})),
      _var2);
}
__attribute__((used)) static void _V20Case1__V10_Dfiber__map_D328_lambda236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((bruijn ##.map.220 1 75) (close _V10_Dfiber__map_D328_k316) (close _V10_Dfiber__map_D328_lambda239) (bruijn ##.as.992 0 2) (bruijn ##.bs.993 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[75]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D328_k316, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D328_lambda239, self)})),
      _var2,
      _var3);
}
__attribute__((used)) static void _V20Case2__V10_Dfiber__map_D328_lambda236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // ((bruijn ##.map.220 1 75) (close _V10_Dfiber__map_D328_k317) (close _V10_Dfiber__map_D328_lambda241) (bruijn ##.as.997 0 2) (bruijn ##.bs.998 0 3) (bruijn ##.cs.999 0 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[75]), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D328_k317, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D328_lambda241, self)})),
      _var2,
      _var3,
      _var4);
}
__attribute__((used)) static void _V20Case3__V10_Dfiber__map_D328_lambda236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##vcore.apply (close _V10_Dfiber__map_D328_k318) (bruijn ##.map.220 1 75) (close _V10_Dfiber__map_D328_lambda243) (bruijn ##.as.1004 0 2) (bruijn ##.args.1005 0 3))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D328_k318, self)})),
      statics->vars[75],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D328_lambda243, self)})),
      _var2,
      _varargs);
}
void _V10_Dfiber__map_D328_lambda236(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dfiber__map_D328_lambda236, @function\n"
#endif
"_V10_Dfiber__map_D328_lambda236:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dfiber__map_D328_lambda236\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dfiber__map_D328_lambda236\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dfiber__map_D328_lambda236\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case3__V10_Dfiber__map_D328_lambda236\n"
"    jmp _V20CaseError__V10_Dfiber__map_D328_lambda236\n"
);
static void _V0vanity_V0core_V20_k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1008 22 0) (##inline ##vcore.cons (##inline ##vcore.cons 'null? (##intrinsic ##vcore.null?)) (##inline ##vcore.cons (##inline ##vcore.cons 'eof-object? (##intrinsic ##vcore.eof-object?)) (##inline ##vcore.cons (##inline ##vcore.cons 'boolean? (bruijn ##.boolean?.145 17 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'pair? (##intrinsic ##vcore.pair?)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector? (##intrinsic ##vcore.vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table? (##intrinsic ##vcore.hash-table?)) (##inline ##vcore.cons (##inline ##vcore.cons 'record? (##intrinsic ##vcore.record?)) (##inline ##vcore.cons (##inline ##vcore.cons 'procedure? (##intrinsic ##vcore.procedure?)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol? (##intrinsic ##vcore.symbol?)) (##inline ##vcore.cons (##inline ##vcore.cons 'string? (##intrinsic ##vcore.string?)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact? (##intrinsic ##vcore.int?)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact-integer? (##intrinsic ##vcore.int?)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact? (##intrinsic ##vcore.double?)) (##inline ##vcore.cons (##inline ##vcore.cons 'real? (##intrinsic ##vcore.double?)) (##inline ##vcore.cons (##inline ##vcore.cons 'integer? (##intrinsic ##vcore.int?)) (##inline ##vcore.cons (##inline ##vcore.cons 'char? (##intrinsic ##vcore.char?)) (##inline ##vcore.cons (##inline ##vcore.cons 'nullptr? (##intrinsic ##vcore.nullptr?)) (##inline ##vcore.cons (##inline ##vcore.cons 'foreign-pointer? (##intrinsic ##vcore.foreign-pointer?)) (##inline ##vcore.cons (##inline ##vcore.cons 'eq? (##intrinsic ##vcore.eq?)) (##inline ##vcore.cons (##inline ##vcore.cons 'eqv? (##intrinsic ##vcore.eqv?)) (##inline ##vcore.cons (##inline ##vcore.cons 'equal? (bruijn ##.equal?.156 17 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'boolean=? (##intrinsic ##vcore.eq?)) (##inline ##vcore.cons (##inline ##vcore.cons 'char=? (##intrinsic ##vcore.eq?)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol=? (bruijn ##.symbol=?.146 17 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'string=? (##intrinsic ##vcore.blob=?)) (##inline ##vcore.cons (##inline ##vcore.cons 'not (##intrinsic ##vcore.not)) (##inline ##vcore.cons (##inline ##vcore.cons '< (##intrinsic ##vcore.<)) (##inline ##vcore.cons (##inline ##vcore.cons '= (##intrinsic ##vcore.=)) (##inline ##vcore.cons (##inline ##vcore.cons '> (##intrinsic ##vcore.>)) (##inline ##vcore.cons (##inline ##vcore.cons '<= (##intrinsic ##vcore.<=)) (##inline ##vcore.cons (##inline ##vcore.cons '>= (##intrinsic ##vcore.>=)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact (##intrinsic ##vcore.exact)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact->exact (##intrinsic ##vcore.exact)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact (##intrinsic ##vcore.inexact)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact->inexact (##intrinsic ##vcore.inexact)) (##inline ##vcore.cons (##inline ##vcore.cons 'number? (bruijn ##.number?.157 17 12)) (##inline ##vcore.cons (##inline ##vcore.cons 'complex? (bruijn ##.complex?.158 17 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'rational? (bruijn ##.rational?.159 17 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'positive? (bruijn ##.positive?.160 17 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'negative? (bruijn ##.negative?.162 17 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'zero? (bruijn ##.zero?.161 17 16)) (##inline ##vcore.cons (##inline ##vcore.cons '+ (##intrinsic ##vcore.+)) (##inline ##vcore.cons (##inline ##vcore.cons '- (##intrinsic ##vcore.-)) (##inline ##vcore.cons (##inline ##vcore.cons '* (##intrinsic ##vcore.*)) (##inline ##vcore.cons (##inline ##vcore.cons '/ (##intrinsic ##vcore./)) (##inline ##vcore.cons (##inline ##vcore.cons 'quotient (##intrinsic ##vcore.quotient)) (##inline ##vcore.cons (##inline ##vcore.cons 'remainder (##intrinsic ##vcore.remainder)) (##inline ##vcore.cons (##inline ##vcore.cons 'max (bruijn ##.max.182 17 37)) (##inline ##vcore.cons (##inline ##vcore.cons 'min (bruijn ##.min.183 17 38)) (##inline ##vcore.cons (##inline ##vcore.cons 'abs (bruijn ##.abs.163 17 18)) (##inline ##vcore.cons (##inline ##vcore.cons 'square (bruijn ##.square.167 17 22)) (##inline ##vcore.cons (##inline ##vcore.cons 'sqrt (bruijn ##.sqrt.168 17 23)) (##inline ##vcore.cons (##inline ##vcore.cons 'ceiling (bruijn ##.ceiling.164 17 19)) (##inline ##vcore.cons (##inline ##vcore.cons 'floor (bruijn ##.floor.165 17 20)) (##inline ##vcore.cons (##inline ##vcore.cons 'round (bruijn ##.round.166 17 21)) (##inline ##vcore.cons (##inline ##vcore.cons 'sin (bruijn ##.sin.169 17 24)) (##inline ##vcore.cons (##inline ##vcore.cons 'cos (bruijn ##.cos.170 17 25)) (##inline ##vcore.cons (##inline ##vcore.cons 'tan (bruijn ##.tan.171 17 26)) (##inline ##vcore.cons (##inline ##vcore.cons 'asin (bruijn ##.asin.172 17 27)) (##inline ##vcore.cons (##inline ##vcore.cons 'acos (bruijn ##.acos.173 17 28)) (##inline ##vcore.cons (##inline ##vcore.cons 'atan (bruijn ##.atan.176 17 31)) (##inline ##vcore.cons (##inline ##vcore.cons 'exp (bruijn ##.exp.177 17 32)) (##inline ##vcore.cons (##inline ##vcore.cons 'log (bruijn ##.log.179 17 34)) (##inline ##vcore.cons (##inline ##vcore.cons 'expt (bruijn ##.expt.181 17 36)) (##inline ##vcore.cons (##inline ##vcore.cons 'pow (bruijn ##.pow.180 17 35)) (##inline ##vcore.cons (##inline ##vcore.cons 'cons (##intrinsic ##vcore.cons)) (##inline ##vcore.cons (##inline ##vcore.cons 'car (##intrinsic ##vcore.car)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdr (##intrinsic ##vcore.cdr)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-car! (##intrinsic ##vcore.set-car!)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-cdr! (##intrinsic ##vcore.set-cdr!)) (##inline ##vcore.cons (##inline ##vcore.cons 'caar (bruijn ##.caar.184 17 39)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadr (bruijn ##.cadr.185 17 40)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdar (bruijn ##.cdar.186 17 41)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddr (bruijn ##.cddr.187 17 42)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaar (bruijn ##.caaar.188 17 43)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadr (bruijn ##.caadr.189 17 44)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadar (bruijn ##.cadar.190 17 45)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddr (bruijn ##.caddr.191 17 46)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaar (bruijn ##.cdaar.192 17 47)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadr (bruijn ##.cdadr.193 17 48)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddar (bruijn ##.cddar.194 17 49)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddr (bruijn ##.cdddr.195 17 50)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaaar (bruijn ##.caaaar.196 17 51)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaadr (bruijn ##.caaadr.197 17 52)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadar (bruijn ##.caadar.198 17 53)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaddr (bruijn ##.caaddr.199 17 54)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadaar (bruijn ##.cadaar.200 17 55)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadadr (bruijn ##.cadadr.201 17 56)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddar (bruijn ##.caddar.202 17 57)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadddr (bruijn ##.cadddr.203 17 58)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaaar (bruijn ##.cdaaar.204 17 59)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaadr (bruijn ##.cdaadr.205 17 60)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadar (bruijn ##.cdadar.206 17 61)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaddr (bruijn ##.cdaddr.207 17 62)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddaar (bruijn ##.cddaar.208 17 63)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddadr (bruijn ##.cddadr.209 17 64)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddar (bruijn ##.cdddar.210 17 65)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddddr (bruijn ##.cddddr.211 17 66)) (##inline ##vcore.cons (##inline ##vcore.cons 'list (bruijn ##.list.212 17 67)) (##inline ##vcore.cons (##inline ##vcore.cons 'list? (bruijn ##.list?.213 17 68)) (##inline ##vcore.cons (##inline ##vcore.cons 'length (bruijn ##.length.214 17 69)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-tail (bruijn ##.list-tail.215 17 70)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-ref (bruijn ##.list-ref.216 17 71)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-set! (bruijn ##.list-set!.217 17 72)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-copy (bruijn ##.list-copy.218 17 73)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-list (bruijn ##.make-list.219 17 74)) (##inline ##vcore.cons (##inline ##vcore.cons 'map (bruijn ##.map.220 17 75)) (##inline ##vcore.cons (##inline ##vcore.cons 'for-each (bruijn ##.for-each.221 17 76)) (##inline ##vcore.cons (##inline ##vcore.cons 'append (bruijn ##.append.223 17 78)) (##inline ##vcore.cons (##inline ##vcore.cons 'reverse (bruijn ##.reverse.224 17 79)) (##inline ##vcore.cons (##inline ##vcore.cons 'memq (bruijn ##.memq.225 17 80)) (##inline ##vcore.cons (##inline ##vcore.cons 'memv (bruijn ##.memv.226 17 81)) (##inline ##vcore.cons (##inline ##vcore.cons 'member (bruijn ##.member.227 17 82)) (##inline ##vcore.cons (##inline ##vcore.cons 'assq (bruijn ##.assq.228 17 83)) (##inline ##vcore.cons (##inline ##vcore.cons 'assv (bruijn ##.assv.229 17 84)) (##inline ##vcore.cons (##inline ##vcore.cons 'assoc (bruijn ##.assoc.230 17 85)) (##inline ##vcore.cons (##inline ##vcore.cons 'num-pairs (bruijn ##.num-pairs.231 17 86)) (##inline ##vcore.cons (##inline ##vcore.cons 'split-at-right (bruijn ##.split-at-right.232 17 87)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->list (bruijn ##.string->list.234 17 89)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->string (bruijn ##.list->string.233 17 88)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-string (##intrinsic ##vcore.make-string)) (##inline ##vcore.cons (##inline ##vcore.cons 'substring (##intrinsic ##vcore.substring)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-copy (##intrinsic ##vcore.substring)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-copy! (##intrinsic ##vcore.string-copy!)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-ref (##intrinsic ##vcore.string-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-set! (##intrinsic ##vcore.string-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-length (##intrinsic ##vcore.string-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->symbol (##intrinsic ##vcore.string->symbol)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->number (##intrinsic ##vcore.string->number)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-append (bruijn ##.string-append.235 17 90)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol->string (##intrinsic ##vcore.symbol->string)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->vector (##intrinsic ##vcore.list->vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector->list (bruijn ##.vector->list.264 17 119)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-vector (bruijn ##.make-vector.265 17 120)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-copy (bruijn ##.vector-copy.268 17 123)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-copy! (bruijn ##.vector-copy!.269 17 124)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector (bruijn ##.vector.236 17 91)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-ref (##intrinsic ##vcore.vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-set! (##intrinsic ##vcore.vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-length (##intrinsic ##vcore.vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-map (bruijn ##.vector-map.267 17 122)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-for-each (bruijn ##.vector-for-each.266 17 121)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-append (bruijn ##.vector-append.270 17 125)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-fill! (bruijn ##.vector-fill!.271 17 126)) (##inline ##vcore.cons (##inline ##vcore.cons 'f64vector? (##intrinsic ##vcore.f64vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->f64vector (##intrinsic ##vcore.list->f64vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'f64vector->list (bruijn ##.f64vector->list.242 17 97)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-f64vector (bruijn ##.make-f64vector.240 17 95)) (##inline ##vcore.cons (##inline ##vcore.cons 'f64vector (bruijn ##.f64vector.241 17 96)) (##inline ##vcore.cons (##inline ##vcore.cons 'f64vector-ref (##intrinsic ##vcore.f64vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'f64vector-set! (##intrinsic ##vcore.f64vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'f64vector-length (##intrinsic ##vcore.f64vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'f32vector? (##intrinsic ##vcore.f32vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->f32vector (##intrinsic ##vcore.list->f32vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'f32vector->list (bruijn ##.f32vector->list.239 17 94)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-f32vector (bruijn ##.make-f32vector.237 17 92)) (##inline ##vcore.cons (##inline ##vcore.cons 'f32vector (bruijn ##.f32vector.238 17 93)) (##inline ##vcore.cons (##inline ##vcore.cons 'f32vector-ref (##intrinsic ##vcore.f32vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'f32vector-set! (##intrinsic ##vcore.f32vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'f32vector-length (##intrinsic ##vcore.f32vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 's32vector? (##intrinsic ##vcore.s32vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->s32vector (##intrinsic ##vcore.list->s32vector)) (##inline ##vcore.cons (##inline ##vcore.cons 's32vector->list (bruijn ##.s32vector->list.245 17 100)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-s32vector (bruijn ##.make-s32vector.243 17 98)) (##inline ##vcore.cons (##inline ##vcore.cons 's32vector (bruijn ##.s32vector.244 17 99)) (##inline ##vcore.cons (##inline ##vcore.cons 's32vector-ref (##intrinsic ##vcore.s32vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 's32vector-set! (##intrinsic ##vcore.s32vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 's32vector-length (##intrinsic ##vcore.s32vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'u16vector? (##intrinsic ##vcore.u16vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->u16vector (##intrinsic ##vcore.list->u16vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'u16vector->list (bruijn ##.u16vector->list.248 17 103)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-u16vector (bruijn ##.make-u16vector.246 17 101)) (##inline ##vcore.cons (##inline ##vcore.cons 'u16vector (bruijn ##.u16vector.247 17 102)) (##inline ##vcore.cons (##inline ##vcore.cons 'u16vector-ref (##intrinsic ##vcore.u16vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'u16vector-set! (##intrinsic ##vcore.u16vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'u16vector-length (##intrinsic ##vcore.u16vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 's16vector? (##intrinsic ##vcore.s16vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->s16vector (##intrinsic ##vcore.list->s16vector)) (##inline ##vcore.cons (##inline ##vcore.cons 's16vector->list (bruijn ##.s16vector->list.251 17 106)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-s16vector (bruijn ##.make-s16vector.249 17 104)) (##inline ##vcore.cons (##inline ##vcore.cons 's16vector (bruijn ##.s16vector.250 17 105)) (##inline ##vcore.cons (##inline ##vcore.cons 's16vector-ref (##intrinsic ##vcore.s16vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 's16vector-set! (##intrinsic ##vcore.s16vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 's16vector-length (##intrinsic ##vcore.s16vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'u8vector? (##intrinsic ##vcore.u8vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->u8vector (##intrinsic ##vcore.list->u8vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'u8vector->list (bruijn ##.u8vector->list.254 17 109)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-u8vector (bruijn ##.make-u8vector.252 17 107)) (##inline ##vcore.cons (##inline ##vcore.cons 'u8vector (bruijn ##.u8vector.253 17 108)) (##inline ##vcore.cons (##inline ##vcore.cons 'u8vector-ref (##intrinsic ##vcore.u8vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'u8vector-set! (##intrinsic ##vcore.u8vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'u8vector-length (##intrinsic ##vcore.u8vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 's8vector? (##intrinsic ##vcore.s8vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->s8vector (##intrinsic ##vcore.list->s8vector)) (##inline ##vcore.cons (##inline ##vcore.cons 's8vector->list (bruijn ##.s8vector->list.262 17 117)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-s8vector (bruijn ##.make-s8vector.260 17 115)) (##inline ##vcore.cons (##inline ##vcore.cons 's8vector (bruijn ##.s8vector.261 17 116)) (##inline ##vcore.cons (##inline ##vcore.cons 's8vector-ref (##intrinsic ##vcore.s8vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 's8vector-set! (##intrinsic ##vcore.s8vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 's8vector-length (##intrinsic ##vcore.s8vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'bytevector? (##intrinsic ##vcore.u8vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->bytevector (##intrinsic ##vcore.list->u8vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'bytevector->list (bruijn ##.bytevector->list.256 17 111)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-bytevector (bruijn ##.make-bytevector.255 17 110)) (##inline ##vcore.cons (##inline ##vcore.cons 'bytevector (bruijn ##.bytevector.257 17 112)) (##inline ##vcore.cons (##inline ##vcore.cons 'bytevector-u8-ref (##intrinsic ##vcore.u8vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'bytevector-u8-set! (##intrinsic ##vcore.u8vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'bytevector-length (##intrinsic ##vcore.u8vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-u8vector (bruijn ##.read-u8vector.258 17 113)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-bytevector (bruijn ##.read-bytevector.259 17 114)) (##inline ##vcore.cons (##inline ##vcore.cons 'typevector? (bruijn ##.typevector?.263 17 118)) (##inline ##vcore.cons (##inline ##vcore.cons 'record (##intrinsic ##vcore.record)) (##inline ##vcore.cons (##inline ##vcore.cons 'record-ref (##intrinsic ##vcore.record-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'record-set! (##intrinsic ##vcore.record-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'record-length (##intrinsic ##vcore.record-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-hash-table (bruijn ##.make-hash-table.272 17 127)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table-ref (bruijn ##.hash-table-ref.273 17 128)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table-set! (bruijn ##.hash-table-set!.274 17 129)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table-delete! (##intrinsic ##vcore.hash-table-delete!)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table->alist (bruijn ##.hash-table->alist.275 17 130)) (##inline ##vcore.cons (##inline ##vcore.cons 'char->integer (##intrinsic ##vcore.char-integer)) (##inline ##vcore.cons (##inline ##vcore.cons 'integer->char (##intrinsic ##vcore.integer->char)) (##inline ##vcore.cons (##inline ##vcore.cons 'number->string (bruijn ##.number->string.276 17 131)) (##inline ##vcore.cons (##inline ##vcore.cons 'char-numeric? (bruijn ##.char-numeric?.277 17 132)) (##inline ##vcore.cons (##inline ##vcore.cons 'char-alphabetic? (bruijn ##.char-alphabetic?.278 17 133)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-output-port (bruijn ##.current-output-port.279 17 134)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-error-port (bruijn ##.current-error-port.280 17 135)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-input-port (bruijn ##.current-input-port.281 17 136)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-input-file (bruijn ##.open-input-file.287 17 142)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-file (bruijn ##.open-output-file.288 17 143)) (##inline ##vcore.cons (##inline ##vcore.cons 'close-port (bruijn ##.close-port.283 17 138)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-string (bruijn ##.open-output-string.289 17 144)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-output-string (bruijn ##.get-output-string.290 17 145)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-output-to-file (bruijn ##.with-output-to-file.294 17 149)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-input-from-file (bruijn ##.with-input-from-file.295 17 150)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-port (bruijn ##.call-with-port.291 17 146)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-input-file (bruijn ##.call-with-input-file.292 17 147)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-output-file (bruijn ##.call-with-output-file.293 17 148)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-char (bruijn ##.read-char.296 17 151)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-line (bruijn ##.read-line.297 17 152)) (##inline ##vcore.cons (##inline ##vcore.cons 'read (bruijn ##.read.298 17 153)) (##inline ##vcore.cons (##inline ##vcore.cons 'newline (bruijn ##.newline.299 17 154)) (##inline ##vcore.cons (##inline ##vcore.cons 'display (bruijn ##.display.303 17 158)) (##inline ##vcore.cons (##inline ##vcore.cons 'write (bruijn ##.write.304 17 159)) (##inline ##vcore.cons (##inline ##vcore.cons 'call/cc (##intrinsic ##vcore.call/cc)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-current-continuation (##intrinsic ##vcore.call/cc)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-values (##intrinsic ##vcore.call-with-values)) (##inline ##vcore.cons (##inline ##vcore.cons 'apply (##intrinsic ##vcore.apply)) (##inline ##vcore.cons (##inline ##vcore.cons 'values (bruijn ##.values.305 17 160)) (##inline ##vcore.cons (##inline ##vcore.cons 'setter (bruijn ##.setter.306 17 161)) (##inline ##vcore.cons (##inline ##vcore.cons 'mutator (bruijn ##.mutator.307 17 162)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.setter (bruijn ##.x.1009 19 0)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.mutator (bruijn ##.x.1010 18 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-parameter (bruijn ##.make-parameter.308 17 163)) (##inline ##vcore.cons (##inline ##vcore.cons 'raise (##intrinsic ##vcore.raise)) (##inline ##vcore.cons (##inline ##vcore.cons 'raise-continuable (bruijn ##.raise-continuable.324 17 179)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-exception-handler (bruijn ##.with-exception-handler.325 17 180)) (##inline ##vcore.cons (##inline ##vcore.cons 'command-line (##intrinsic ##vcore.command-line)) (##inline ##vcore.cons (##inline ##vcore.cons 'system (##intrinsic ##vcore.system)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-input-process (##intrinsic ##vcore.open-input-process)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-process (##intrinsic ##vcore.open-output-process)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-temporary-file (##intrinsic ##vcore.make-temporary-file)) (##inline ##vcore.cons (##inline ##vcore.cons 'file-exists? (bruijn ##.file-exists?.309 17 164)) (##inline ##vcore.cons (##inline ##vcore.cons 'exit (##intrinsic ##vcore.exit)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-jiffy (##intrinsic ##vcore.current-jiffy)) (##inline ##vcore.cons (##inline ##vcore.cons 'jiffies-per-second (##intrinsic ##vcore.jiffies-per-second)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-not (##intrinsic ##vcore.bitwise-not)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-and (bruijn ##.bitwise-and.310 17 165)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-or (bruijn ##.bitwise-or.315 17 170)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-ior (bruijn ##.bitwise-ior.311 17 166)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-xor (bruijn ##.bitwise-xor.312 17 167)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-xnor (bruijn ##.bitwise-xnor.313 17 168)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-eqv (bruijn ##.bitwise-eqv.314 17 169)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-nand (##intrinsic ##vcore.bitwise-nand)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-nor (##intrinsic ##vcore.bitwise-nor)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-andc1 (##intrinsic ##vcore.bitwise-andc1)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-andc2 (##intrinsic ##vcore.bitwise-andc2)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-orc1 (##intrinsic ##vcore.bitwise-orc1)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-orc2 (##intrinsic ##vcore.bitwise-orc2)) (##inline ##vcore.cons (##inline ##vcore.cons 'arithmetic-shift (##intrinsic ##vcore.arithmetic-shift)) (##inline ##vcore.cons (##inline ##vcore.cons 'bit-count (##intrinsic ##vcore.bit-count)) (##inline ##vcore.cons (##inline ##vcore.cons 'fiber-fork (bruijn ##.fiber-fork.327 17 182)) (##inline ##vcore.cons (##inline ##vcore.cons 'fiber-fork-list (##intrinsic ##vcore.fiber-fork-list)) (##inline ##vcore.cons (##inline ##vcore.cons 'fiber-map (bruijn ##.fiber-map.328 17 183)) (##inline ##vcore.cons (##inline ##vcore.cons 'async (##intrinsic ##vcore.async)) (##inline ##vcore.cons (##inline ##vcore.cons 'await (##intrinsic ##vcore.await)) (##inline ##vcore.cons (##inline ##vcore.cons 'atom? (bruijn ##.atom?.316 17 171)) (##inline ##vcore.cons (##inline ##vcore.cons 'displayln (bruijn ##.displayln.317 17 172)) (##inline ##vcore.cons (##inline ##vcore.cons 'writeln (bruijn ##.writeln.318 17 173)) (##inline ##vcore.cons (##inline ##vcore.cons 'format (bruijn ##.format.323 17 178)) (##inline ##vcore.cons (##inline ##vcore.cons 'printf (bruijn ##.printf.321 17 176)) (##inline ##vcore.cons (##inline ##vcore.cons 'sprintf (bruijn ##.sprintf.322 17 177)) (##inline ##vcore.cons (##inline ##vcore.cons 'error (bruijn ##.error.326 17 181)) '()))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0null_Q,
        _V40_V10vcore_Dnull_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eof__object_Q,
        _V40_V10vcore_Deof__object_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0boolean_Q,
        VGetArg(statics, 17-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0pair_Q,
        _V40_V10vcore_Dpair_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector_Q,
        _V40_V10vcore_Dvector_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table_Q,
        _V40_V10vcore_Dhash__table_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0record_Q,
        _V40_V10vcore_Drecord_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0procedure_Q,
        _V40_V10vcore_Dprocedure_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0symbol_Q,
        _V40_V10vcore_Dsymbol_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string_Q,
        _V40_V10vcore_Dstring_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exact_Q,
        _V40_V10vcore_Dint_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exact__integer_Q,
        _V40_V10vcore_Dint_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0inexact_Q,
        _V40_V10vcore_Ddouble_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0real_Q,
        _V40_V10vcore_Ddouble_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0integer_Q,
        _V40_V10vcore_Dint_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char_Q,
        _V40_V10vcore_Dchar_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0nullptr_Q,
        _V40_V10vcore_Dnullptr_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0foreign__pointer_Q,
        _V40_V10vcore_Dforeign__pointer_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eq_Q,
        _V40_V10vcore_Deq_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eqv_Q,
        _V40_V10vcore_Deqv_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0equal_Q,
        VGetArg(statics, 17-1, 11)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0boolean_E_Q,
        _V40_V10vcore_Deq_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char_E_Q,
        _V40_V10vcore_Deq_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0symbol_E_Q,
        VGetArg(statics, 17-1, 1)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string_E_Q,
        _V40_V10vcore_Dblob_E_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0not,
        _V40_V10vcore_Dnot),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_L,
        _V40_V10vcore_D_L),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_E,
        _V40_V10vcore_D_E),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_G,
        _V40_V10vcore_D_G),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_L_E,
        _V40_V10vcore_D_L_E),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_G_E,
        _V40_V10vcore_D_G_E),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exact,
        _V40_V10vcore_Dexact),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0inexact___Gexact,
        _V40_V10vcore_Dexact),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0inexact,
        _V40_V10vcore_Dinexact),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exact___Ginexact,
        _V40_V10vcore_Dinexact),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0number_Q,
        VGetArg(statics, 17-1, 12)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0complex_Q,
        VGetArg(statics, 17-1, 13)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0rational_Q,
        VGetArg(statics, 17-1, 14)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0positive_Q,
        VGetArg(statics, 17-1, 15)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0negative_Q,
        VGetArg(statics, 17-1, 17)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0zero_Q,
        VGetArg(statics, 17-1, 16)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_P,
        _V40_V10vcore_D_P),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0__,
        _V40_V10vcore_D__),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_S,
        _V40_V10vcore_D_S),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_W,
        _V40_V10vcore_D_W),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quotient,
        _V40_V10vcore_Dquotient),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0remainder,
        _V40_V10vcore_Dremainder),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0max,
        VGetArg(statics, 17-1, 37)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0min,
        VGetArg(statics, 17-1, 38)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0abs,
        VGetArg(statics, 17-1, 18)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0square,
        VGetArg(statics, 17-1, 22)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0sqrt,
        VGetArg(statics, 17-1, 23)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0ceiling,
        VGetArg(statics, 17-1, 19)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0floor,
        VGetArg(statics, 17-1, 20)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0round,
        VGetArg(statics, 17-1, 21)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0sin,
        VGetArg(statics, 17-1, 24)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cos,
        VGetArg(statics, 17-1, 25)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0tan,
        VGetArg(statics, 17-1, 26)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0asin,
        VGetArg(statics, 17-1, 27)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0acos,
        VGetArg(statics, 17-1, 28)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0atan,
        VGetArg(statics, 17-1, 31)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exp,
        VGetArg(statics, 17-1, 32)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0log,
        VGetArg(statics, 17-1, 34)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0expt,
        VGetArg(statics, 17-1, 36)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0pow,
        VGetArg(statics, 17-1, 35)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cons,
        _V40_V10vcore_Dcons),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0car,
        _V40_V10vcore_Dcar),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdr,
        _V40_V10vcore_Dcdr),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0set__car_B,
        _V40_V10vcore_Dset__car_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0set__cdr_B,
        _V40_V10vcore_Dset__cdr_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caar,
        VGetArg(statics, 17-1, 39)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadr,
        VGetArg(statics, 17-1, 40)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdar,
        VGetArg(statics, 17-1, 41)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddr,
        VGetArg(statics, 17-1, 42)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaar,
        VGetArg(statics, 17-1, 43)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caadr,
        VGetArg(statics, 17-1, 44)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadar,
        VGetArg(statics, 17-1, 45)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caddr,
        VGetArg(statics, 17-1, 46)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaar,
        VGetArg(statics, 17-1, 47)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdadr,
        VGetArg(statics, 17-1, 48)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddar,
        VGetArg(statics, 17-1, 49)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdddr,
        VGetArg(statics, 17-1, 50)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaaar,
        VGetArg(statics, 17-1, 51)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaadr,
        VGetArg(statics, 17-1, 52)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caadar,
        VGetArg(statics, 17-1, 53)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaddr,
        VGetArg(statics, 17-1, 54)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadaar,
        VGetArg(statics, 17-1, 55)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadadr,
        VGetArg(statics, 17-1, 56)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caddar,
        VGetArg(statics, 17-1, 57)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadddr,
        VGetArg(statics, 17-1, 58)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaaar,
        VGetArg(statics, 17-1, 59)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaadr,
        VGetArg(statics, 17-1, 60)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdadar,
        VGetArg(statics, 17-1, 61)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaddr,
        VGetArg(statics, 17-1, 62)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddaar,
        VGetArg(statics, 17-1, 63)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddadr,
        VGetArg(statics, 17-1, 64)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdddar,
        VGetArg(statics, 17-1, 65)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddddr,
        VGetArg(statics, 17-1, 66)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list,
        VGetArg(statics, 17-1, 67)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list_Q,
        VGetArg(statics, 17-1, 68)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0length,
        VGetArg(statics, 17-1, 69)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__tail,
        VGetArg(statics, 17-1, 70)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__ref,
        VGetArg(statics, 17-1, 71)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__set_B,
        VGetArg(statics, 17-1, 72)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__copy,
        VGetArg(statics, 17-1, 73)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__list,
        VGetArg(statics, 17-1, 74)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0map,
        VGetArg(statics, 17-1, 75)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0for__each,
        VGetArg(statics, 17-1, 76)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append,
        VGetArg(statics, 17-1, 78)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0reverse,
        VGetArg(statics, 17-1, 79)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0memq,
        VGetArg(statics, 17-1, 80)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0memv,
        VGetArg(statics, 17-1, 81)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0member,
        VGetArg(statics, 17-1, 82)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assq,
        VGetArg(statics, 17-1, 83)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assv,
        VGetArg(statics, 17-1, 84)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assoc,
        VGetArg(statics, 17-1, 85)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0num__pairs,
        VGetArg(statics, 17-1, 86)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0split__at__right,
        VGetArg(statics, 17-1, 87)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Glist,
        VGetArg(statics, 17-1, 89)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gstring,
        VGetArg(statics, 17-1, 88)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__string,
        _V40_V10vcore_Dmake__string),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0substring,
        _V40_V10vcore_Dsubstring),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__copy,
        _V40_V10vcore_Dsubstring),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__copy_B,
        _V40_V10vcore_Dstring__copy_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__ref,
        _V40_V10vcore_Dstring__ref),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__set_B,
        _V40_V10vcore_Dstring__set_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__length,
        _V40_V10vcore_Dstring__length),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Gsymbol,
        _V40_V10vcore_Dstring___Gsymbol),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Gnumber,
        _V40_V10vcore_Dstring___Gnumber),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__append,
        VGetArg(statics, 17-1, 90)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0symbol___Gstring,
        _V40_V10vcore_Dsymbol___Gstring),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gvector,
        _V40_V10vcore_Dlist___Gvector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector___Glist,
        VGetArg(statics, 17-1, 119)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__vector,
        VGetArg(statics, 17-1, 120)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__copy,
        VGetArg(statics, 17-1, 123)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__copy_B,
        VGetArg(statics, 17-1, 124)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector,
        VGetArg(statics, 17-1, 91)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__ref,
        _V40_V10vcore_Dvector__ref),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__set_B,
        _V40_V10vcore_Dvector__set_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__length,
        _V40_V10vcore_Dvector__length),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__map,
        VGetArg(statics, 17-1, 122)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__for__each,
        VGetArg(statics, 17-1, 121)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__append,
        VGetArg(statics, 17-1, 125)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__fill_B,
        VGetArg(statics, 17-1, 126)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0f64vector_Q,
        _V40_V10vcore_Df64vector_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gf64vector,
        _V40_V10vcore_Dlist___Gf64vector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0f64vector___Glist,
        VGetArg(statics, 17-1, 97)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__f64vector,
        VGetArg(statics, 17-1, 95)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0f64vector,
        VGetArg(statics, 17-1, 96)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0f64vector__ref,
        _V40_V10vcore_Df64vector__ref),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0f64vector__set_B,
        _V40_V10vcore_Df64vector__set_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0f64vector__length,
        _V40_V10vcore_Df64vector__length),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0f32vector_Q,
        _V40_V10vcore_Df32vector_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gf32vector,
        _V40_V10vcore_Dlist___Gf32vector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0f32vector___Glist,
        VGetArg(statics, 17-1, 94)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__f32vector,
        VGetArg(statics, 17-1, 92)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0f32vector,
        VGetArg(statics, 17-1, 93)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0f32vector__ref,
        _V40_V10vcore_Df32vector__ref),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0f32vector__set_B,
        _V40_V10vcore_Df32vector__set_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0f32vector__length,
        _V40_V10vcore_Df32vector__length),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s32vector_Q,
        _V40_V10vcore_Ds32vector_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gs32vector,
        _V40_V10vcore_Dlist___Gs32vector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s32vector___Glist,
        VGetArg(statics, 17-1, 100)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__s32vector,
        VGetArg(statics, 17-1, 98)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s32vector,
        VGetArg(statics, 17-1, 99)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s32vector__ref,
        _V40_V10vcore_Ds32vector__ref),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s32vector__set_B,
        _V40_V10vcore_Ds32vector__set_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s32vector__length,
        _V40_V10vcore_Ds32vector__length),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0u16vector_Q,
        _V40_V10vcore_Du16vector_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gu16vector,
        _V40_V10vcore_Dlist___Gu16vector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0u16vector___Glist,
        VGetArg(statics, 17-1, 103)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__u16vector,
        VGetArg(statics, 17-1, 101)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0u16vector,
        VGetArg(statics, 17-1, 102)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0u16vector__ref,
        _V40_V10vcore_Du16vector__ref),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0u16vector__set_B,
        _V40_V10vcore_Du16vector__set_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0u16vector__length,
        _V40_V10vcore_Du16vector__length),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s16vector_Q,
        _V40_V10vcore_Ds16vector_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gs16vector,
        _V40_V10vcore_Dlist___Gs16vector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s16vector___Glist,
        VGetArg(statics, 17-1, 106)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__s16vector,
        VGetArg(statics, 17-1, 104)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s16vector,
        VGetArg(statics, 17-1, 105)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s16vector__ref,
        _V40_V10vcore_Ds16vector__ref),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s16vector__set_B,
        _V40_V10vcore_Ds16vector__set_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s16vector__length,
        _V40_V10vcore_Ds16vector__length),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0u8vector_Q,
        _V40_V10vcore_Du8vector_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gu8vector,
        _V40_V10vcore_Dlist___Gu8vector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0u8vector___Glist,
        VGetArg(statics, 17-1, 109)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__u8vector,
        VGetArg(statics, 17-1, 107)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0u8vector,
        VGetArg(statics, 17-1, 108)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0u8vector__ref,
        _V40_V10vcore_Du8vector__ref),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0u8vector__set_B,
        _V40_V10vcore_Du8vector__set_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0u8vector__length,
        _V40_V10vcore_Du8vector__length),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s8vector_Q,
        _V40_V10vcore_Ds8vector_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gs8vector,
        _V40_V10vcore_Dlist___Gs8vector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s8vector___Glist,
        VGetArg(statics, 17-1, 117)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__s8vector,
        VGetArg(statics, 17-1, 115)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s8vector,
        VGetArg(statics, 17-1, 116)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s8vector__ref,
        _V40_V10vcore_Ds8vector__ref),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s8vector__set_B,
        _V40_V10vcore_Ds8vector__set_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s8vector__length,
        _V40_V10vcore_Ds8vector__length),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bytevector_Q,
        _V40_V10vcore_Du8vector_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gbytevector,
        _V40_V10vcore_Dlist___Gu8vector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bytevector___Glist,
        VGetArg(statics, 17-1, 111)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__bytevector,
        VGetArg(statics, 17-1, 110)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bytevector,
        VGetArg(statics, 17-1, 112)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bytevector__u8__ref,
        _V40_V10vcore_Du8vector__ref),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bytevector__u8__set_B,
        _V40_V10vcore_Du8vector__set_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bytevector__length,
        _V40_V10vcore_Du8vector__length),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__u8vector,
        VGetArg(statics, 17-1, 113)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__bytevector,
        VGetArg(statics, 17-1, 114)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0typevector_Q,
        VGetArg(statics, 17-1, 118)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0record,
        _V40_V10vcore_Drecord),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0record__ref,
        _V40_V10vcore_Drecord__ref),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0record__set_B,
        _V40_V10vcore_Drecord__set_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0record__length,
        _V40_V10vcore_Drecord__length),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__hash__table,
        VGetArg(statics, 17-1, 127)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table__ref,
        VGetArg(statics, 17-1, 128)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table__set_B,
        VGetArg(statics, 17-1, 129)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table__delete_B,
        _V40_V10vcore_Dhash__table__delete_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table___Galist,
        VGetArg(statics, 17-1, 130)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char___Ginteger,
        _V40_V10vcore_Dchar__integer),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0integer___Gchar,
        _V40_V10vcore_Dinteger___Gchar),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0number___Gstring,
        VGetArg(statics, 17-1, 131)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char__numeric_Q,
        VGetArg(statics, 17-1, 132)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char__alphabetic_Q,
        VGetArg(statics, 17-1, 133)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__output__port,
        VGetArg(statics, 17-1, 134)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__error__port,
        VGetArg(statics, 17-1, 135)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__input__port,
        VGetArg(statics, 17-1, 136)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__input__file,
        VGetArg(statics, 17-1, 142)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__file,
        VGetArg(statics, 17-1, 143)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0close__port,
        VGetArg(statics, 17-1, 138)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__string,
        VGetArg(statics, 17-1, 144)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__output__string,
        VGetArg(statics, 17-1, 145)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__output__to__file,
        VGetArg(statics, 17-1, 149)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__input__from__file,
        VGetArg(statics, 17-1, 150)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__port,
        VGetArg(statics, 17-1, 146)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__input__file,
        VGetArg(statics, 17-1, 147)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__output__file,
        VGetArg(statics, 17-1, 148)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__char,
        VGetArg(statics, 17-1, 151)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__line,
        VGetArg(statics, 17-1, 152)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read,
        VGetArg(statics, 17-1, 153)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0newline,
        VGetArg(statics, 17-1, 154)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0display,
        VGetArg(statics, 17-1, 158)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0write,
        VGetArg(statics, 17-1, 159)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call_Wcc,
        _V40_V10vcore_Dcall_Wcc),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__current__continuation,
        _V40_V10vcore_Dcall_Wcc),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__values,
        _V40_V10vcore_Dcall__with__values),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0apply,
        _V40_V10vcore_Dapply),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0values,
        VGetArg(statics, 17-1, 160)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0setter,
        VGetArg(statics, 17-1, 161)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mutator,
        VGetArg(statics, 17-1, 162)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dsetter,
        VGetArg(statics, 19-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dmutator,
        VGetArg(statics, 18-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__parameter,
        VGetArg(statics, 17-1, 163)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0raise,
        _V40_V10vcore_Draise),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0raise__continuable,
        VGetArg(statics, 17-1, 179)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__exception__handler,
        VGetArg(statics, 17-1, 180)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0command__line,
        _V40_V10vcore_Dcommand__line),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0system,
        _V40_V10vcore_Dsystem),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__input__process,
        _V40_V10vcore_Dopen__input__process),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__process,
        _V40_V10vcore_Dopen__output__process),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__temporary__file,
        _V40_V10vcore_Dmake__temporary__file),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0file__exists_Q,
        VGetArg(statics, 17-1, 164)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exit,
        _V40_V10vcore_Dexit),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__jiffy,
        _V40_V10vcore_Dcurrent__jiffy),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0jiffies__per__second,
        _V40_V10vcore_Djiffies__per__second),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__not,
        _V40_V10vcore_Dbitwise__not),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__and,
        VGetArg(statics, 17-1, 165)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__or,
        VGetArg(statics, 17-1, 170)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__ior,
        VGetArg(statics, 17-1, 166)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__xor,
        VGetArg(statics, 17-1, 167)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__xnor,
        VGetArg(statics, 17-1, 168)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__eqv,
        VGetArg(statics, 17-1, 169)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__nand,
        _V40_V10vcore_Dbitwise__nand),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__nor,
        _V40_V10vcore_Dbitwise__nor),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__andc1,
        _V40_V10vcore_Dbitwise__andc1),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__andc2,
        _V40_V10vcore_Dbitwise__andc2),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__orc1,
        _V40_V10vcore_Dbitwise__orc1),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__orc2,
        _V40_V10vcore_Dbitwise__orc2),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0arithmetic__shift,
        _V40_V10vcore_Darithmetic__shift),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bit__count,
        _V40_V10vcore_Dbit__count),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fiber__fork,
        VGetArg(statics, 17-1, 182)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fiber__fork__list,
        _V40_V10vcore_Dfiber__fork__list),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fiber__map,
        VGetArg(statics, 17-1, 183)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0async,
        _V40_V10vcore_Dasync),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0await,
        _V40_V10vcore_Dawait),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0atom_Q,
        VGetArg(statics, 17-1, 171)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0displayln,
        VGetArg(statics, 17-1, 172)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0writeln,
        VGetArg(statics, 17-1, 173)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0format,
        VGetArg(statics, 17-1, 178)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0printf,
        VGetArg(statics, 17-1, 176)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0sprintf,
        VGetArg(statics, 17-1, 177)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0error,
        VGetArg(statics, 17-1, 181)),
        VNULL))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}
static void _V0vanity_V0core_V20_k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k335) (bruijn ##.bitwise-or.315 16 170) (bruijn ##.bitwise-ior.311 16 166))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k335, self)})),
      VEncodeInt(16l), VEncodeInt(170l),
      VGetArg(statics, 16-1, 166)
    );
}
static void _V0vanity_V0core_V20_k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k334) (bruijn ##.bitwise-eqv.314 15 169) (bruijn ##.bitwise-xnor.313 15 168))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k334, self)})),
      VEncodeInt(15l), VEncodeInt(169l),
      VGetArg(statics, 15-1, 168)
    );
}
static void _V0vanity_V0core_V20_k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k333) (bruijn ##.current-input-port.281 14 136) (bruijn ##.x.2710 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k333, self)})),
      VEncodeInt(14l), VEncodeInt(136l),
      _var0
    );
}
static void _V0vanity_V0core_V20_k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-parameter.308 13 163) (close _V0vanity_V0core_V20_k332) (bruijn ##.x.2711 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 163)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k332, self)})),
      _var0);
}
static void _V0vanity_V0core_V20_k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.stdin->port (close _V0vanity_V0core_V20_k331))
    VCallFuncWithGC(runtime, (VFunc)VStdinPort, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k331, self)})));
}
static void _V0vanity_V0core_V20_k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k330) (bruijn ##.current-error-port.280 11 135) (bruijn ##.x.2712 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k330, self)})),
      VEncodeInt(11l), VEncodeInt(135l),
      _var0
    );
}
static void _V0vanity_V0core_V20_k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-parameter.308 10 163) (close _V0vanity_V0core_V20_k329) (bruijn ##.x.2713 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 163)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k329, self)})),
      _var0);
}
static void _V0vanity_V0core_V20_k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.stderr->port (close _V0vanity_V0core_V20_k328))
    VCallFuncWithGC(runtime, (VFunc)VStderrPort, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k328, self)})));
}
static void _V0vanity_V0core_V20_k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k327) (bruijn ##.current-output-port.279 8 134) (bruijn ##.x.2714 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k327, self)})),
      VEncodeInt(8l), VEncodeInt(134l),
      _var0
    );
}
static void _V0vanity_V0core_V20_k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-parameter.308 7 163) (close _V0vanity_V0core_V20_k326) (bruijn ##.x.2715 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 163)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k326, self)})),
      _var0);
}
static void _V0vanity_V0core_V20_k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.stdout->port (close _V0vanity_V0core_V20_k325))
    VCallFuncWithGC(runtime, (VFunc)VStdoutPort, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k325, self)})));
}
static void _V0vanity_V0core_V20_k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k324) (bruijn ##.read-bytevector.259 5 114) (bruijn ##.read-u8vector.258 5 113))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k324, self)})),
      VEncodeInt(5l), VEncodeInt(114l),
      VGetArg(statics, 5-1, 113)
    );
}
static void _V0vanity_V0core_V20_k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k323) (bruijn ##.bytevector.257 4 112) (bruijn ##.u8vector.253 4 108))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k323, self)})),
      VEncodeInt(4l), VEncodeInt(112l),
      statics->up->up->up->vars[108]
    );
}
static void _V0vanity_V0core_V20_k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k322) (bruijn ##.bytevector->list.256 3 111) (bruijn ##.u8vector->list.254 3 109))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k322, self)})),
      VEncodeInt(3l), VEncodeInt(111l),
      statics->up->up->vars[109]
    );
}
static void _V0vanity_V0core_V20_k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k321) (bruijn ##.make-bytevector.255 2 110) (bruijn ##.make-u8vector.252 2 107))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k321, self)})),
      VEncodeInt(2l), VEncodeInt(110l),
      statics->up->vars[107]
    );
}
static void _V0vanity_V0core_V20_k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k320) (bruijn ##.expt.181 1 36) (bruijn ##.pow.180 1 35))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k320, self)})),
      VEncodeInt(1l), VEncodeInt(36l),
      statics->vars[35]
    );
}
static void _V0vanity_V0core_V20_k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 184 ((close _V10_Dboolean_Q_D145_lambda2) (close _V10_Dsymbol_E_Q_D146_lambda3) (close _V10_Dvector_E_Q_D147_lambda5) (close _V10_Df32vector_E_Q_D148_lambda7) (close _V10_Df64vector_E_Q_D149_lambda9) (close _V10_Ds32vector_E_Q_D150_lambda11) (close _V10_Du16vector_E_Q_D151_lambda13) (close _V10_Ds16vector_E_Q_D152_lambda15) (close _V10_Du8vector_E_Q_D153_lambda17) (close _V10_Ds8vector_E_Q_D154_lambda19) (close _V10_Drecord_E_Q_D155_lambda21) (close _V10_Dequal_Q_D156_lambda23) (close _V10_Dnumber_Q_D157_lambda24) #f (##intrinsic ##vcore.int?) (close _V10_Dpositive_Q_D160_lambda25) (close _V10_Dzero_Q_D161_lambda26) (close _V10_Dnegative_Q_D162_lambda27) (close _V10_Dabs_D163_lambda28) (##foreign.function "_V30ceil_shim") (##foreign.function "_V30floor_shim") (##foreign.function "_V30round_shim") (close _V10_Dsquare_D167_lambda29) (##foreign.function "_V30sqrt_shim") (##foreign.function "_V30sin_shim") (##foreign.function "_V30cos_shim") (##foreign.function "_V30tan_shim") (##foreign.function "_V30asin_shim") (##foreign.function "_V30acos_shim") (##foreign.function "_V30atan_shim") (##foreign.function "_V30atan2_shim") (close _V10_Datan_D176_lambda30) (##foreign.function "_V30exp_shim") (##foreign.function "_V30log_shim") (close _V10_Dlog_D179_lambda31) (##foreign.function "_V30pow_shim") #f (close _V10_Dmax_D182_lambda32) (close _V10_Dmin_D183_lambda34) (close _V10_Dcaar_D184_lambda36) (close _V10_Dcadr_D185_lambda37) (close _V10_Dcdar_D186_lambda38) (close _V10_Dcddr_D187_lambda39) (close _V10_Dcaaar_D188_lambda40) (close _V10_Dcaadr_D189_lambda41) (close _V10_Dcadar_D190_lambda42) (close _V10_Dcaddr_D191_lambda43) (close _V10_Dcdaar_D192_lambda44) (close _V10_Dcdadr_D193_lambda45) (close _V10_Dcddar_D194_lambda46) (close _V10_Dcdddr_D195_lambda47) (close _V10_Dcaaaar_D196_lambda48) (close _V10_Dcaaadr_D197_lambda49) (close _V10_Dcaadar_D198_lambda50) (close _V10_Dcaaddr_D199_lambda51) (close _V10_Dcadaar_D200_lambda52) (close _V10_Dcadadr_D201_lambda53) (close _V10_Dcaddar_D202_lambda54) (close _V10_Dcadddr_D203_lambda55) (close _V10_Dcdaaar_D204_lambda56) (close _V10_Dcdaadr_D205_lambda57) (close _V10_Dcdadar_D206_lambda58) (close _V10_Dcdaddr_D207_lambda59) (close _V10_Dcddaar_D208_lambda60) (close _V10_Dcddadr_D209_lambda61) (close _V10_Dcdddar_D210_lambda62) (close _V10_Dcddddr_D211_lambda63) (close _V10_Dlist_D212_lambda64) (close _V10_Dlist_Q_D213_lambda65) (close _V10_Dlength_D214_lambda66) (close _V10_Dlist__tail_D215_lambda68) (close _V10_Dlist__ref_D216_lambda69) (close _V10_Dlist__set_B_D217_lambda70) (close _V10_Dlist__copy_D218_lambda71) (close _V10_Dmake__list_D219_lambda72) (close _V10_Dmap_D220_lambda74) (close _V10_Dfor__each_D221_lambda79) (close _V10_Dfold__right_D222_lambda84) (close _V10_Dappend_D223_lambda86) (close _V10_Dreverse_D224_lambda88) (close _V10_Dmemq_D225_lambda90) (close _V10_Dmemv_D226_lambda91) (close _V10_Dmember_D227_lambda92) (close _V10_Dassq_D228_lambda93) (close _V10_Dassv_D229_lambda94) (close _V10_Dassoc_D230_lambda95) (close _V10_Dnum__pairs_D231_lambda96) (close _V10_Dsplit__at__right_D232_lambda98) (close _V10_Dlist___Gstring_D233_lambda102) (close _V10_Dstring___Glist_D234_lambda104) (close _V10_Dstring__append_D235_lambda106) (close _V10_Dvector_D236_lambda107) (close _V10_Dmake__f32vector_D237_lambda108) (close _V10_Df32vector_D238_lambda109) (close _V10_Df32vector___Glist_D239_lambda110) (close _V10_Dmake__f64vector_D240_lambda112) (close _V10_Df64vector_D241_lambda113) (close _V10_Df64vector___Glist_D242_lambda114) (close _V10_Dmake__s32vector_D243_lambda116) (close _V10_Ds32vector_D244_lambda117) (close _V10_Ds32vector___Glist_D245_lambda118) (close _V10_Dmake__u16vector_D246_lambda120) (close _V10_Du16vector_D247_lambda121) (close _V10_Du16vector___Glist_D248_lambda122) (close _V10_Dmake__s16vector_D249_lambda124) (close _V10_Ds16vector_D250_lambda125) (close _V10_Ds16vector___Glist_D251_lambda126) (close _V10_Dmake__u8vector_D252_lambda128) (close _V10_Du8vector_D253_lambda129) (close _V10_Du8vector___Glist_D254_lambda130) #f #f #f (close _V10_Dread__u8vector_D258_lambda132) #f (close _V10_Dmake__s8vector_D260_lambda133) (close _V10_Ds8vector_D261_lambda134) (close _V10_Ds8vector___Glist_D262_lambda135) (close _V10_Dtypevector_Q_D263_lambda137) (close _V10_Dvector___Glist_D264_lambda138) (close _V10_Dmake__vector_D265_lambda140) (close _V10_Dvector__for__each_D266_lambda141) (close _V10_Dvector__map_D267_lambda147) (close _V10_Dvector__copy_D268_lambda153) (close _V10_Dvector__copy_B_D269_lambda154) (close _V10_Dvector__append_D270_lambda156) (close _V10_Dvector__fill_B_D271_lambda159) (close _V10_Dmake__hash__table_D272_lambda161) (close _V10_Dhash__table__ref_D273_lambda162) (close _V10_Dhash__table__set_B_D274_lambda164) (close _V10_Dhash__table___Galist_D275_lambda165) (close _V10_Dnumber___Gstring_D276_lambda167) (close _V10_Dchar__numeric_Q_D277_lambda168) (close _V10_Dchar__alphabetic_Q_D278_lambda169) #f #f #f (close _V10_Dtry__or__gc_D282_lambda170) (close _V10_Dclose__port_D283_lambda173) (close _V10_Dopen__input__file__impl_D284_lambda174) (close _V10_Dopen__output__file__impl_D285_lambda177) (close _V10_Dopen__output__string__impl_D286_lambda180) (close _V10_Dopen__input__file_D287_lambda183) (close _V10_Dopen__output__file_D288_lambda185) (close _V10_Dopen__output__string_D289_lambda187) (##intrinsic ##vcore.get-output-string) (close _V10_Dcall__with__port_D291_lambda188) (close _V10_Dcall__with__input__file_D292_lambda189) (close _V10_Dcall__with__output__file_D293_lambda190) (close _V10_Dwith__output__to__file_D294_lambda191) (close _V10_Dwith__input__from__file_D295_lambda193) (close _V10_Dread__char_D296_lambda195) (close _V10_Dread__line_D297_lambda196) (close _V10_Dread_D298_lambda199) (close _V10_Dnewline_D299_lambda200) (close _V10_Dprintout__list_D300_lambda201) (close _V10_Dprintout__quotation_D301_lambda203) (close _V10_Dprintout_D302_lambda204) (close _V10_Ddisplay_D303_lambda206) (close _V10_Dwrite_D304_lambda207) (close _V10_Dvalues_D305_lambda208) (bruijn ##.x.1009 2 0) (bruijn ##.x.1010 1 0) (close _V10_Dmake__parameter_D308_lambda210) (close _V10_Dfile__exists_Q_D309_lambda213) (close _V10_Dbitwise__and_D310_lambda214) (close _V10_Dbitwise__ior_D311_lambda216) (close _V10_Dbitwise__xor_D312_lambda218) (close _V10_Dbitwise__xnor_D313_lambda220) #f #f (close _V10_Datom_Q_D316_lambda222) (close _V10_Ddisplayln_D317_lambda223) (close _V10_Dwriteln_D318_lambda224) (close _V10_Dformat__printf_D319_lambda225) (close _V10_Dformat__sprintf_D320_lambda227) (close _V10_Dprintf_D321_lambda228) (close _V10_Dsprintf_D322_lambda229) (close _V10_Dformat_D323_lambda230) (close _V10_Draise__continuable_D324_lambda231) (close _V10_Dwith__exception__handler_D325_lambda232) (close _V10_Derror_D326_lambda234) (close _V10_Dfiber__fork_D327_lambda235) (close _V10_Dfiber__map_D328_lambda236)) (set! (close _V0vanity_V0core_V20_k319) (bruijn ##.complex?.158 0 13) (bruijn ##.number?.157 0 12)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[184]; } container;
    self = &container.self;
    VInitEnv(self, 184, 184, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dboolean_Q_D145_lambda2, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsymbol_E_Q_D146_lambda3, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector_E_Q_D147_lambda5, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Df32vector_E_Q_D148_lambda7, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Df64vector_E_Q_D149_lambda9, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds32vector_E_Q_D150_lambda11, self)}));
    self->vars[6] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Du16vector_E_Q_D151_lambda13, self)}));
    self->vars[7] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds16vector_E_Q_D152_lambda15, self)}));
    self->vars[8] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Du8vector_E_Q_D153_lambda17, self)}));
    self->vars[9] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds8vector_E_Q_D154_lambda19, self)}));
    self->vars[10] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Drecord_E_Q_D155_lambda21, self)}));
    self->vars[11] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D156_lambda23, self)}));
    self->vars[12] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dnumber_Q_D157_lambda24, self)}));
    self->vars[13] = VEncodeBool(false);
    self->vars[14] = _V40_V10vcore_Dint_Q;
    self->vars[15] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpositive_Q_D160_lambda25, self)}));
    self->vars[16] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dzero_Q_D161_lambda26, self)}));
    self->vars[17] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dnegative_Q_D162_lambda27, self)}));
    self->vars[18] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dabs_D163_lambda28, self)}));
    self->vars[19] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30ceil_shim, NULL)})));
    self->vars[20] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30floor_shim, NULL)})));
    self->vars[21] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30round_shim, NULL)})));
    self->vars[22] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsquare_D167_lambda29, self)}));
    self->vars[23] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30sqrt_shim, NULL)})));
    self->vars[24] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30sin_shim, NULL)})));
    self->vars[25] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30cos_shim, NULL)})));
    self->vars[26] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30tan_shim, NULL)})));
    self->vars[27] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30asin_shim, NULL)})));
    self->vars[28] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30acos_shim, NULL)})));
    self->vars[29] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30atan_shim, NULL)})));
    self->vars[30] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30atan2_shim, NULL)})));
    self->vars[31] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Datan_D176_lambda30, self)}));
    self->vars[32] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30exp_shim, NULL)})));
    self->vars[33] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30log_shim, NULL)})));
    self->vars[34] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlog_D179_lambda31, self)}));
    self->vars[35] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30pow_shim, NULL)})));
    self->vars[36] = VEncodeBool(false);
    self->vars[37] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmax_D182_lambda32, self)}));
    self->vars[38] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmin_D183_lambda34, self)}));
    self->vars[39] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaar_D184_lambda36, self)}));
    self->vars[40] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcadr_D185_lambda37, self)}));
    self->vars[41] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdar_D186_lambda38, self)}));
    self->vars[42] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcddr_D187_lambda39, self)}));
    self->vars[43] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaaar_D188_lambda40, self)}));
    self->vars[44] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaadr_D189_lambda41, self)}));
    self->vars[45] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcadar_D190_lambda42, self)}));
    self->vars[46] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaddr_D191_lambda43, self)}));
    self->vars[47] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdaar_D192_lambda44, self)}));
    self->vars[48] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdadr_D193_lambda45, self)}));
    self->vars[49] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcddar_D194_lambda46, self)}));
    self->vars[50] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdddr_D195_lambda47, self)}));
    self->vars[51] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaaaar_D196_lambda48, self)}));
    self->vars[52] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaaadr_D197_lambda49, self)}));
    self->vars[53] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaadar_D198_lambda50, self)}));
    self->vars[54] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaaddr_D199_lambda51, self)}));
    self->vars[55] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcadaar_D200_lambda52, self)}));
    self->vars[56] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcadadr_D201_lambda53, self)}));
    self->vars[57] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaddar_D202_lambda54, self)}));
    self->vars[58] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcadddr_D203_lambda55, self)}));
    self->vars[59] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdaaar_D204_lambda56, self)}));
    self->vars[60] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdaadr_D205_lambda57, self)}));
    self->vars[61] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdadar_D206_lambda58, self)}));
    self->vars[62] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdaddr_D207_lambda59, self)}));
    self->vars[63] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcddaar_D208_lambda60, self)}));
    self->vars[64] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcddadr_D209_lambda61, self)}));
    self->vars[65] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdddar_D210_lambda62, self)}));
    self->vars[66] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcddddr_D211_lambda63, self)}));
    self->vars[67] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist_D212_lambda64, self)}));
    self->vars[68] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist_Q_D213_lambda65, self)}));
    self->vars[69] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlength_D214_lambda66, self)}));
    self->vars[70] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__tail_D215_lambda68, self)}));
    self->vars[71] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__ref_D216_lambda69, self)}));
    self->vars[72] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__set_B_D217_lambda70, self)}));
    self->vars[73] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__copy_D218_lambda71, self)}));
    self->vars[74] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__list_D219_lambda72, self)}));
    self->vars[75] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmap_D220_lambda74, self)}));
    self->vars[76] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfor__each_D221_lambda79, self)}));
    self->vars[77] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold__right_D222_lambda84, self)}));
    self->vars[78] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dappend_D223_lambda86, self)}));
    self->vars[79] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreverse_D224_lambda88, self)}));
    self->vars[80] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemq_D225_lambda90, self)}));
    self->vars[81] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemv_D226_lambda91, self)}));
    self->vars[82] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmember_D227_lambda92, self)}));
    self->vars[83] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq_D228_lambda93, self)}));
    self->vars[84] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv_D229_lambda94, self)}));
    self->vars[85] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc_D230_lambda95, self)}));
    self->vars[86] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dnum__pairs_D231_lambda96, self)}));
    self->vars[87] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at__right_D232_lambda98, self)}));
    self->vars[88] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist___Gstring_D233_lambda102, self)}));
    self->vars[89] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring___Glist_D234_lambda104, self)}));
    self->vars[90] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D235_lambda106, self)}));
    self->vars[91] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector_D236_lambda107, self)}));
    self->vars[92] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__f32vector_D237_lambda108, self)}));
    self->vars[93] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Df32vector_D238_lambda109, self)}));
    self->vars[94] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Df32vector___Glist_D239_lambda110, self)}));
    self->vars[95] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__f64vector_D240_lambda112, self)}));
    self->vars[96] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Df64vector_D241_lambda113, self)}));
    self->vars[97] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Df64vector___Glist_D242_lambda114, self)}));
    self->vars[98] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__s32vector_D243_lambda116, self)}));
    self->vars[99] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds32vector_D244_lambda117, self)}));
    self->vars[100] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds32vector___Glist_D245_lambda118, self)}));
    self->vars[101] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__u16vector_D246_lambda120, self)}));
    self->vars[102] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Du16vector_D247_lambda121, self)}));
    self->vars[103] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Du16vector___Glist_D248_lambda122, self)}));
    self->vars[104] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__s16vector_D249_lambda124, self)}));
    self->vars[105] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds16vector_D250_lambda125, self)}));
    self->vars[106] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds16vector___Glist_D251_lambda126, self)}));
    self->vars[107] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__u8vector_D252_lambda128, self)}));
    self->vars[108] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Du8vector_D253_lambda129, self)}));
    self->vars[109] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Du8vector___Glist_D254_lambda130, self)}));
    self->vars[110] = VEncodeBool(false);
    self->vars[111] = VEncodeBool(false);
    self->vars[112] = VEncodeBool(false);
    self->vars[113] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__u8vector_D258_lambda132, self)}));
    self->vars[114] = VEncodeBool(false);
    self->vars[115] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__s8vector_D260_lambda133, self)}));
    self->vars[116] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds8vector_D261_lambda134, self)}));
    self->vars[117] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds8vector___Glist_D262_lambda135, self)}));
    self->vars[118] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtypevector_Q_D263_lambda137, self)}));
    self->vars[119] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector___Glist_D264_lambda138, self)}));
    self->vars[120] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__vector_D265_lambda140, self)}));
    self->vars[121] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__for__each_D266_lambda141, self)}));
    self->vars[122] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__map_D267_lambda147, self)}));
    self->vars[123] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__copy_D268_lambda153, self)}));
    self->vars[124] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__copy_B_D269_lambda154, self)}));
    self->vars[125] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D270_lambda156, self)}));
    self->vars[126] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__fill_B_D271_lambda159, self)}));
    self->vars[127] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__hash__table_D272_lambda161, self)}));
    self->vars[128] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dhash__table__ref_D273_lambda162, self)}));
    self->vars[129] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dhash__table__set_B_D274_lambda164, self)}));
    self->vars[130] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dhash__table___Galist_D275_lambda165, self)}));
    self->vars[131] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dnumber___Gstring_D276_lambda167, self)}));
    self->vars[132] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dchar__numeric_Q_D277_lambda168, self)}));
    self->vars[133] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dchar__alphabetic_Q_D278_lambda169, self)}));
    self->vars[134] = VEncodeBool(false);
    self->vars[135] = VEncodeBool(false);
    self->vars[136] = VEncodeBool(false);
    self->vars[137] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtry__or__gc_D282_lambda170, self)}));
    self->vars[138] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dclose__port_D283_lambda173, self)}));
    self->vars[139] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__input__file__impl_D284_lambda174, self)}));
    self->vars[140] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__file__impl_D285_lambda177, self)}));
    self->vars[141] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__string__impl_D286_lambda180, self)}));
    self->vars[142] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__input__file_D287_lambda183, self)}));
    self->vars[143] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__file_D288_lambda185, self)}));
    self->vars[144] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__string_D289_lambda187, self)}));
    self->vars[145] = _V40_V10vcore_Dget__output__string;
    self->vars[146] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcall__with__port_D291_lambda188, self)}));
    self->vars[147] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcall__with__input__file_D292_lambda189, self)}));
    self->vars[148] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcall__with__output__file_D293_lambda190, self)}));
    self->vars[149] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__output__to__file_D294_lambda191, self)}));
    self->vars[150] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__input__from__file_D295_lambda193, self)}));
    self->vars[151] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__char_D296_lambda195, self)}));
    self->vars[152] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D297_lambda196, self)}));
    self->vars[153] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread_D298_lambda199, self)}));
    self->vars[154] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dnewline_D299_lambda200, self)}));
    self->vars[155] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__list_D300_lambda201, self)}));
    self->vars[156] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__quotation_D301_lambda203, self)}));
    self->vars[157] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D302_lambda204, self)}));
    self->vars[158] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddisplay_D303_lambda206, self)}));
    self->vars[159] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwrite_D304_lambda207, self)}));
    self->vars[160] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalues_D305_lambda208, self)}));
    self->vars[161] = statics->up->vars[0];
    self->vars[162] = statics->vars[0];
    self->vars[163] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D308_lambda210, self)}));
    self->vars[164] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfile__exists_Q_D309_lambda213, self)}));
    self->vars[165] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__and_D310_lambda214, self)}));
    self->vars[166] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__ior_D311_lambda216, self)}));
    self->vars[167] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__xor_D312_lambda218, self)}));
    self->vars[168] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__xnor_D313_lambda220, self)}));
    self->vars[169] = VEncodeBool(false);
    self->vars[170] = VEncodeBool(false);
    self->vars[171] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Datom_Q_D316_lambda222, self)}));
    self->vars[172] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddisplayln_D317_lambda223, self)}));
    self->vars[173] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwriteln_D318_lambda224, self)}));
    self->vars[174] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__printf_D319_lambda225, self)}));
    self->vars[175] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__sprintf_D320_lambda227, self)}));
    self->vars[176] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintf_D321_lambda228, self)}));
    self->vars[177] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsprintf_D322_lambda229, self)}));
    self->vars[178] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat_D323_lambda230, self)}));
    self->vars[179] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Draise__continuable_D324_lambda231, self)}));
    self->vars[180] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__exception__handler_D325_lambda232, self)}));
    self->vars[181] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Derror_D326_lambda234, self)}));
    self->vars[182] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__fork_D327_lambda235, self)}));
    self->vars[183] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D328_lambda236, self)}));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k319, self)})),
      VEncodeInt(0l), VEncodeInt(13l),
      self->vars[12]
    );
    }
}
static void _V0vanity_V0core_V20_k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.11 1 0) (close _V0vanity_V0core_V20_k4) '##vcore.mutator)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k4, self)})),
      _V10vcore_Dmutator);
}
static void _V0vanity_V0core_V20_k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.11 0 0) (close _V0vanity_V0core_V20_k3) '##vcore.setter)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k3, self)})),
      _V10vcore_Dsetter);
}
static void _V0vanity_V0core_V20_k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0core_V20_k2) (##string ##.string.3019) (bruijn ##.x.2716 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D3019.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0core_V20_lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0core_V20_k1) (##string ##.string.3020))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D3020.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0core_V20 = (VFunc)_V0vanity_V0core_V20_lambda1;
