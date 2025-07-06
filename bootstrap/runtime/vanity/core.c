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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D3008 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0seed_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D3007 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
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
VWEAK VWORD _V40_V10vcore_Dmake__s8vector;VWEAK VClosure _VW_V40_V10vcore_Dmake__s8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeS8Vector, NULL };
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
VWEAK VWORD _V40_V10vcore_Du8vector;VWEAK VClosure _VW_V40_V10vcore_Du8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8Vector, NULL };
VWEAK VWORD _V0u8vector;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0u8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "u8vector" };
VWEAK VWORD _V40_V10vcore_Dmake__u8vector;VWEAK VClosure _VW_V40_V10vcore_Dmake__u8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeU8Vector, NULL };
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
VWEAK VWORD _V40_V10vcore_Ds16vector;VWEAK VClosure _VW_V40_V10vcore_Ds16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16Vector, NULL };
VWEAK VWORD _V0s16vector;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0s16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "s16vector" };
VWEAK VWORD _V40_V10vcore_Dmake__s16vector;VWEAK VClosure _VW_V40_V10vcore_Dmake__s16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeS16Vector, NULL };
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
VWEAK VWORD _V40_V10vcore_Du16vector;VWEAK VClosure _VW_V40_V10vcore_Du16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16Vector, NULL };
VWEAK VWORD _V0u16vector;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0u16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "u16vector" };
VWEAK VWORD _V40_V10vcore_Dmake__u16vector;VWEAK VClosure _VW_V40_V10vcore_Dmake__u16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeU16Vector, NULL };
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
VWEAK VWORD _V40_V10vcore_Ds32vector;VWEAK VClosure _VW_V40_V10vcore_Ds32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32Vector, NULL };
VWEAK VWORD _V0s32vector;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0s32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "s32vector" };
VWEAK VWORD _V40_V10vcore_Dmake__s32vector;VWEAK VClosure _VW_V40_V10vcore_Dmake__s32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeS32Vector, NULL };
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
VWEAK VWORD _V40_V10vcore_Df32vector;VWEAK VClosure _VW_V40_V10vcore_Df32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32Vector, NULL };
VWEAK VWORD _V0f32vector;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0f32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "f32vector" };
VWEAK VWORD _V40_V10vcore_Dmake__f32vector;VWEAK VClosure _VW_V40_V10vcore_Dmake__f32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeF32Vector, NULL };
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
VWEAK VWORD _V40_V10vcore_Df64vector;VWEAK VClosure _VW_V40_V10vcore_Df64vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64Vector, NULL };
VWEAK VWORD _V0f64vector;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0f64vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "f64vector" };
VWEAK VWORD _V40_V10vcore_Dmake__f64vector;VWEAK VClosure _VW_V40_V10vcore_Dmake__f64vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeF64Vector, NULL };
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
VWEAK VWORD _V40_V10vcore_Dvector;VWEAK VClosure _VW_V40_V10vcore_Dvector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCreateVector, NULL };
VWEAK VWORD _V0vector;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vector" };
VWEAK VWORD _V0vector__copy_B;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0vector__copy_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "vector-copy!" };
VWEAK VWORD _V0vector__copy;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0vector__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "vector-copy" };
VWEAK VWORD _V40_V10vcore_Dmake__vector;VWEAK VClosure _VW_V40_V10vcore_Dmake__vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeVector, NULL };
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
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D3006 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "printf: unknown format" };
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D3005 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "printf: not enough args for format string" };
static struct { VBlob sym; char bytes[41]; } _V10_Dstring_D3004 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "printf: format string has trailing tilde" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D3003 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "parameter object expects zero arguments" };
VWEAK VWORD _V0parameter;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0parameter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "parameter" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D3002 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "#hash" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D3001 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "#hasheqv" };
VWEAK VWORD _V40_V10vcore_Deqv_Q;VWEAK VClosure _VW_V40_V10vcore_Deqv_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEqv, NULL };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D3000 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "#hasheq" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D2999 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "#(" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D2998 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ",@" };
VWEAK VWORD _V0unquote__splicing;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0unquote__splicing = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "unquote-splicing" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D2997 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "," };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D2996 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "`" };
VWEAK VWORD _V0quasiquote;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quasiquote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D2995 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "'" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D2994 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D2993 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " . " };
VWEAK VWORD _V0ok;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0ok = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "ok" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D2992 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D2991 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "(" };
VWEAK VWORD _V10vcore_Dpush__value;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dpush__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.push-value" };
VWEAK VWORD _V10vcore_Dpop__value;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dpop__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.pop-value" };
VWEAK VWORD _V40_V10vcore_Dget__output__string;VWEAK VClosure _VW_V40_V10vcore_Dget__output__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetOutputString2, NULL };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D2990 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "open-output-string: failed" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D2989 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "open-output-file: failed" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D2988 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "open-input-file: failed" };
VWEAK VWORD _V40_V10vcore_Dclose__stream;VWEAK VClosure _VW_V40_V10vcore_Dclose__stream = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCloseStream2, NULL };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D2987 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "~A" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D2986 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "No such key in hash table" };
VWEAK VWORD _V40_V10vcore_Deq_Q;VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V40_V10vcore_D_P;VWEAK VClosure _VW_V40_V10vcore_D_P = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAdd2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__length;VWEAK VClosure _VW_V40_V10vcore_Dvector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorLength2, NULL };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D2985 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
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
  _V40_V10vcore_Dmake__s8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__s8vector", &_VW_V40_V10vcore_Dmake__s8vector), VPOINTER_CLOSURE);
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
  _V40_V10vcore_Du8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector", &_VW_V40_V10vcore_Du8vector), VPOINTER_CLOSURE);
  _V0u8vector = VEncodePointer(VLookupConstant("_V0u8vector", &_VW_V0u8vector), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__u8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__u8vector", &_VW_V40_V10vcore_Dmake__u8vector), VPOINTER_CLOSURE);
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
  _V40_V10vcore_Ds16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector", &_VW_V40_V10vcore_Ds16vector), VPOINTER_CLOSURE);
  _V0s16vector = VEncodePointer(VLookupConstant("_V0s16vector", &_VW_V0s16vector), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__s16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__s16vector", &_VW_V40_V10vcore_Dmake__s16vector), VPOINTER_CLOSURE);
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
  _V40_V10vcore_Du16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector", &_VW_V40_V10vcore_Du16vector), VPOINTER_CLOSURE);
  _V0u16vector = VEncodePointer(VLookupConstant("_V0u16vector", &_VW_V0u16vector), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__u16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__u16vector", &_VW_V40_V10vcore_Dmake__u16vector), VPOINTER_CLOSURE);
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
  _V40_V10vcore_Ds32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector", &_VW_V40_V10vcore_Ds32vector), VPOINTER_CLOSURE);
  _V0s32vector = VEncodePointer(VLookupConstant("_V0s32vector", &_VW_V0s32vector), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__s32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__s32vector", &_VW_V40_V10vcore_Dmake__s32vector), VPOINTER_CLOSURE);
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
  _V40_V10vcore_Df32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector", &_VW_V40_V10vcore_Df32vector), VPOINTER_CLOSURE);
  _V0f32vector = VEncodePointer(VLookupConstant("_V0f32vector", &_VW_V0f32vector), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__f32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__f32vector", &_VW_V40_V10vcore_Dmake__f32vector), VPOINTER_CLOSURE);
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
  _V40_V10vcore_Df64vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector", &_VW_V40_V10vcore_Df64vector), VPOINTER_CLOSURE);
  _V0f64vector = VEncodePointer(VLookupConstant("_V0f64vector", &_VW_V0f64vector), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__f64vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__f64vector", &_VW_V40_V10vcore_Dmake__f64vector), VPOINTER_CLOSURE);
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
  _V40_V10vcore_Dvector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector", &_VW_V40_V10vcore_Dvector), VPOINTER_CLOSURE);
  _V0vector = VEncodePointer(VLookupConstant("_V0vector", &_VW_V0vector), VPOINTER_OTHER);
  _V0vector__copy_B = VEncodePointer(VLookupConstant("_V0vector__copy_B", &_VW_V0vector__copy_B), VPOINTER_OTHER);
  _V0vector__copy = VEncodePointer(VLookupConstant("_V0vector__copy", &_VW_V0vector__copy), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__vector", &_VW_V40_V10vcore_Dmake__vector), VPOINTER_CLOSURE);
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
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0fiber__map);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0fiber__fork, _var0);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0error, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0with__exception__handler, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0raise__continuable, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0format);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0sprintf, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0printf);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0format__sprintf, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0format__printf, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0writeln);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0displayln);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0atom_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0bitwise__xnor_V10_Dloop_D912, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0bitwise__xnor);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0bitwise__xor_V10_Dloop_D897, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0bitwise__xor);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0bitwise__ior_V10_Dloop_D882, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0bitwise__ior);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0bitwise__and_V10_Dloop_D867, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0bitwise__and);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0file__exists_Q);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0make__parameter);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0values, _var0);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0write);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0display);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0printout_V10_Dloop_D828, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0printout, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0printout__quotation, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0printout__list_V10_Dloop_D819, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0printout__list, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0newline);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0read);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0read__line);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0read__char);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0with__input__from__file, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0with__output__to__file, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0call__with__output__file, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0call__with__input__file, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0call__with__port, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0open__output__string, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0open__output__file, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0open__input__file, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0open__output__string__impl, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0open__output__file__impl, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0open__input__file__impl, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0close__port, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0try__or__gc, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0char__alphabetic_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0char__numeric_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0number___Gstring, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0hash__table___Galist_V10_Dloop_D762, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0hash__table___Galist, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0hash__table__set_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0hash__table__ref);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0make__hash__table);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0vector__fill_B_V10_Dloop_D744, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0vector__fill_B);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0vector__append);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0vector__copy_B_V10_Dloop_D716, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0vector__copy_B);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0vector__copy);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D689, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D681, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D674, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0vector__map);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D662, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D655, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D649, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0vector__for__each);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0vector___Glist_V10_Dloop_D643, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0vector___Glist, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0typevector_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0s8vector___Glist_V10_Dloop_D637, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0s8vector___Glist, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0read__u8vector);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0u8vector___Glist_V10_Dloop_D629, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0u8vector___Glist, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0s16vector___Glist_V10_Dloop_D624, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0s16vector___Glist, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0u16vector___Glist_V10_Dloop_D619, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0u16vector___Glist, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0s32vector___Glist_V10_Dloop_D614, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0s32vector___Glist, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0f64vector___Glist_V10_Dloop_D609, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0f64vector___Glist, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0f32vector___Glist_V10_Dloop_D604, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0f32vector___Glist, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0string__append);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0string___Glist_V10_Dloop_D582, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0string___Glist, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0list___Gstring_V10_Dloop_D578, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0list___Gstring, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0split__at__right_V10_Dloop_D571, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0split__at__right, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0num__pairs_V10_Dloop_D566, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0num__pairs, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0assoc);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0assv, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0assq, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0member);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0memv, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0memq, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0reverse_V10_Diter_D544, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0reverse, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0append_V10_Dloop_D533, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0append);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0fold__right_V10_Dloop_D528, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0fold__right, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0for__each_V10_Dloop_D523, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0for__each_V10_Dloop_D517, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0for__each_V10_Dloop_D510, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0for__each_V10_Dloop_D505, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0for__each);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0map_V10_Dloop_D501, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0map_V10_Dloop_D495, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0map_V10_Dloop_D488, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0map_V10_Dloop_D483, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0map);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0make__list_V10_Dloop_D478, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0make__list);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0list__copy, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0list__set_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0list__ref, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0list__tail, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0length_V10_Dloop_D464, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0length, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0list_Q, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0list, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cddddr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cdddar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cddadr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cddaar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cdaddr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cdadar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cdaadr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cdaaar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cadddr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0caddar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cadadr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cadaar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0caaddr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0caadar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0caaadr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0caaaar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cdddr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cddar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cdadr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cdaar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0caddr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cadar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0caadr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0caaar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cddr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cdar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0cadr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0caar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0min_V10_Dloop_D430, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0min);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0max_V10_Dloop_D415, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0max);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0log);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0atan);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0square, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0abs, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0negative_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0zero_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0positive_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0number_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0equal_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0record_E_Q_V10_Dloop_D386, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0record_E_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0s8vector_E_Q_V10_Dloop_D381, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0s8vector_E_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0u8vector_E_Q_V10_Dloop_D376, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0u8vector_E_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0s16vector_E_Q_V10_Dloop_D371, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0s16vector_E_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0u16vector_E_Q_V10_Dloop_D366, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0u16vector_E_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0s32vector_E_Q_V10_Dloop_D361, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0s32vector_E_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0f64vector_E_Q_V10_Dloop_D356, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0f64vector_E_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0f32vector_E_Q_V10_Dloop_D351, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0f32vector_E_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0vector_E_Q_V10_Dloop_D346, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0vector_E_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0symbol_E_Q_V10_Dloop_D342, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0core_V0symbol_E_Q);
V_DECLARE_FUNC(_V50_V0vanity_V0core_V0boolean_Q, _var0, _var1);
double pow(double, double);;
static void _V30pow_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0, VWORD _arg1) {
  V_ARG_CHECK3(runtime, "_V30pow_shim", 3, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30pow_shim, runtime, statics, 3, 3, _k, _arg0, _arg1) {
    VWORD _ret = VEncodeDouble(pow(VCheckedDecodeNumber2(runtime, _arg0, "pow"), VCheckedDecodeNumber2(runtime, _arg1, "pow")));
  V_BOUNCE(_k, runtime, _ret);
  }
}
double log(double);;
static void _V30log_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30log_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30log_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(log(VCheckedDecodeNumber2(runtime, _arg0, "log")));
  V_BOUNCE(_k, runtime, _ret);
  }
}
double exp(double);;
static void _V30exp_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30exp_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30exp_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(exp(VCheckedDecodeNumber2(runtime, _arg0, "exp")));
  V_BOUNCE(_k, runtime, _ret);
  }
}
double atan2(double, double);;
static void _V30atan2_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0, VWORD _arg1) {
  V_ARG_CHECK3(runtime, "_V30atan2_shim", 3, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30atan2_shim, runtime, statics, 3, 3, _k, _arg0, _arg1) {
    VWORD _ret = VEncodeDouble(atan2(VCheckedDecodeNumber2(runtime, _arg0, "atan2"), VCheckedDecodeNumber2(runtime, _arg1, "atan2")));
  V_BOUNCE(_k, runtime, _ret);
  }
}
double atan(double);;
static void _V30atan_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30atan_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30atan_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(atan(VCheckedDecodeNumber2(runtime, _arg0, "atan")));
  V_BOUNCE(_k, runtime, _ret);
  }
}
double acos(double);;
static void _V30acos_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30acos_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30acos_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(acos(VCheckedDecodeNumber2(runtime, _arg0, "acos")));
  V_BOUNCE(_k, runtime, _ret);
  }
}
double asin(double);;
static void _V30asin_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30asin_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30asin_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(asin(VCheckedDecodeNumber2(runtime, _arg0, "asin")));
  V_BOUNCE(_k, runtime, _ret);
  }
}
double tan(double);;
static void _V30tan_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30tan_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30tan_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(tan(VCheckedDecodeNumber2(runtime, _arg0, "tan")));
  V_BOUNCE(_k, runtime, _ret);
  }
}
double cos(double);;
static void _V30cos_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30cos_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30cos_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(cos(VCheckedDecodeNumber2(runtime, _arg0, "cos")));
  V_BOUNCE(_k, runtime, _ret);
  }
}
double sin(double);;
static void _V30sin_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30sin_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30sin_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(sin(VCheckedDecodeNumber2(runtime, _arg0, "sin")));
  V_BOUNCE(_k, runtime, _ret);
  }
}
double sqrt(double);;
static void _V30sqrt_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30sqrt_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30sqrt_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(sqrt(VCheckedDecodeNumber2(runtime, _arg0, "sqrt")));
  V_BOUNCE(_k, runtime, _ret);
  }
}
double round(double);;
static void _V30round_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30round_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30round_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(round(VCheckedDecodeNumber2(runtime, _arg0, "round")));
  V_BOUNCE(_k, runtime, _ret);
  }
}
double floor(double);;
static void _V30floor_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30floor_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30floor_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(floor(VCheckedDecodeNumber2(runtime, _arg0, "floor")));
  V_BOUNCE(_k, runtime, _ret);
  }
}
double ceil(double);;
static void _V30ceil_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30ceil_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30ceil_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(ceil(VCheckedDecodeNumber2(runtime, _arg0, "ceil")));
  V_BOUNCE(_k, runtime, _ret);
  }
}
void _V50_V0vanity_V0core_V0boolean_Q_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0boolean_Q_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.980 0 0) ((bruijn ##.k.979 1 0) (bruijn ##.p.980 0 0)) ((bruijn ##.k.979 1 0) (##inline ##vcore.eq? (bruijn ##.x.329 1 1) #f)))
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
void _V50_V0vanity_V0core_V0boolean_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0boolean_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0core_V0boolean_Q_V0k5) (##inline ##vcore.eq? (bruijn ##.x.329 0 1) #t))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0boolean_Q_V0k5, self)), 1,
      VInlineEq2(runtime,
        _var1,
        VEncodeBool(true)));
}
static void _V10_Dsymbol_E_Q_D164_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsymbol_E_Q_D164_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.983 0 0) (##vcore.symbol=? (bruijn ##.k.982 1 0) (bruijn ##.y.333 1 2) (bruijn ##.z.334 1 3)) ((bruijn ##.k.982 1 0) #f))
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
static void _V10_Dsymbol_E_Q_D164_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsymbol_E_Q_D164_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.986 0 0) (##vcore.symbol=? (bruijn ##.k.984 2 0) (bruijn ##.z.337 2 3) (bruijn ##.w.338 2 4)) ((bruijn ##.k.984 2 0) #f))
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
static void _V10_Dsymbol_E_Q_D164_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsymbol_E_Q_D164_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.985 0 0) (##vcore.symbol=? (close _V10_Dsymbol_E_Q_D164_V0k8) (bruijn ##.y.336 1 2) (bruijn ##.z.337 1 3)) ((bruijn ##.k.984 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSymbolEqv2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsymbol_E_Q_D164_V0k8, self)))),
      statics->vars[2],
      statics->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0core_V0symbol_E_Q_V10_Dloop_D342_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0symbol_E_Q_V10_Dloop_D342_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.992 0 0)) ((bruijn ##.k.988 1 0) #f) (##qualified-call (vanity core symbol=? ##.loop.342) (bruijn ##.loop.342 2 0) (bruijn ##.k.988 1 0) (##inline ##vcore.cdr (bruijn ##.xs.343 1 1))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0symbol_E_Q_V10_Dloop_D342(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0core_V0symbol_E_Q_V10_Dloop_D342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0symbol_E_Q_V10_Dloop_D342, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.xs.343 0 1)) ((bruijn ##.k.988 0 0) #t) (##vcore.symbol=? (close _V50_V0vanity_V0core_V0symbol_E_Q_V10_Dloop_D342_V0k9) (bruijn ##.x.339 2 1) (##inline ##vcore.car (bruijn ##.xs.343 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VSymbolEqv2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0symbol_E_Q_V10_Dloop_D342_V0k9, self)))),
      statics->up->vars[1],
      VInlineCar2(runtime,
        _var1));
}
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0symbol_E_Q(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0symbol_E_Q" #t (3 (##vcore.symbol=? (bruijn ##.k.981 0 0) (bruijn ##.x.330 0 1) (bruijn ##.y.331 0 2))) (4 (##vcore.symbol=? (close _V10_Dsymbol_E_Q_D164_V0k6) (bruijn ##.x.332 0 1) (bruijn ##.y.333 0 2))) (5 (##vcore.symbol=? (close _V10_Dsymbol_E_Q_D164_V0k7) (bruijn ##.x.335 0 1) (bruijn ##.y.336 0 2))) (3 + (letrec 1 ((close "_V50_V0vanity_V0core_V0symbol_E_Q_V10_Dloop_D342")) (##qualified-call (vanity core symbol=? ##.loop.342) (bruijn ##.loop.342 0 0) (bruijn ##.k.987 1 0) (##inline ##vcore.cons (bruijn ##.y.340 1 2) (bruijn ##.xs.341 1 3))))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0symbol_E_Q, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0symbol_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.symbol=? (bruijn ##.k.981 0 0) (bruijn ##.x.330 0 1) (bruijn ##.y.331 0 2))
    VCallFuncWithGC(runtime, (VFunc)VSymbolEqv2, 3,
      _var0,
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0symbol_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##vcore.symbol=? (close _V10_Dsymbol_E_Q_D164_V0k6) (bruijn ##.x.332 0 1) (bruijn ##.y.333 0 2))
    VCallFuncWithGC(runtime, (VFunc)VSymbolEqv2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsymbol_E_Q_D164_V0k6, self)))),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0symbol_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##vcore.symbol=? (close _V10_Dsymbol_E_Q_D164_V0k7) (bruijn ##.x.335 0 1) (bruijn ##.y.336 0 2))
    VCallFuncWithGC(runtime, (VFunc)VSymbolEqv2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsymbol_E_Q_D164_V0k7, self)))),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0core_V0symbol_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0symbol_E_Q_V10_Dloop_D342")) (##qualified-call (vanity core symbol=? ##.loop.342) (bruijn ##.loop.342 0 0) (bruijn ##.k.987 1 0) (##inline ##vcore.cons (bruijn ##.y.340 1 2) (bruijn ##.xs.341 1 3))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0symbol_E_Q_V10_Dloop_D342, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->vars[2],
        statics->vars[3]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0symbol_E_Q_V10_Dloop_D342(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0symbol_E_Q(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0symbol_E_Q, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0symbol_E_Q\n"
"_V50_V0vanity_V0core_V0symbol_E_Q:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0core_V0symbol_E_Q\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V50_V0vanity_V0core_V0symbol_E_Q\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V50_V0vanity_V0core_V0symbol_E_Q\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case3__V50_V0vanity_V0core_V0symbol_E_Q\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0symbol_E_Q\n"
);
void _V50_V0vanity_V0core_V0vector_E_Q_V10_Dloop_D346_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector_E_Q_V10_Dloop_D346_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.999 0 0) (basic-block 1 1 (##.reg.2663) ((##vcore.+ (bruijn ##.i.347 4 1) 1)) (##qualified-call (vanity core vector=? ##.loop.346) (bruijn ##.loop.346 5 0) (bruijn ##.k.997 4 0) (bruijn ##.reg.2663 0 0) (bruijn ##.len.348 4 2))) ((bruijn ##.k.997 3 0) #f))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0vector_E_Q_V10_Dloop_D346(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0core_V0vector_E_Q_V10_Dloop_D346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector_E_Q_V10_Dloop_D346, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2660) ((##vcore.= (bruijn ##.i.347 1 1) (bruijn ##.len.348 1 2))) (if (bruijn ##.reg.2660 0 0) ((bruijn ##.k.997 1 0) #t) (basic-block 2 2 (##.reg.2661 ##.reg.2662) ((##vcore.vector-ref (bruijn ##.x.344 5 1) (bruijn ##.i.347 2 1)) (##vcore.vector-ref (bruijn ##.y.345 5 2) (bruijn ##.i.347 2 1))) (##qualified-call (vanity core equal?) (bruijn ##.equal?.174 6 11) (close _V50_V0vanity_V0core_V0vector_E_Q_V10_Dloop_D346_V0k10) (bruijn ##.reg.2661 0 0) (bruijn ##.reg.2662 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      statics->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector_E_Q_V10_Dloop_D346_V0k10, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0equal_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0core_V0vector_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector_E_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.reg.2657 ##.reg.2658 ##.reg.2659) ((##vcore.vector-length (bruijn ##.x.344 1 1)) (##vcore.vector-length (bruijn ##.y.345 1 2)) (##vcore.= (bruijn ##.reg.2657 0 0) (bruijn ##.reg.2658 0 1))) (if (##inline ##vcore.not (bruijn ##.reg.2659 0 2)) ((bruijn ##.k.995 1 0) #f) (letrec 1 ((close "_V50_V0vanity_V0core_V0vector_E_Q_V10_Dloop_D346")) (basic-block 1 1 (##.reg.2664) ((##vcore.vector-length (bruijn ##.x.344 3 1))) (##qualified-call (vanity core vector=? ##.loop.346) (bruijn ##.loop.346 1 0) (bruijn ##.k.995 3 0) 0 (bruijn ##.reg.2664 0 0))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[2]);
    self->vars[2] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[0],
      self->vars[1]);
if(VDecodeBool(
VInlineNot2(runtime,
        self->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector_E_Q_V10_Dloop_D346, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0vector_E_Q_V10_Dloop_D346(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
    }
}
void _V50_V0vanity_V0core_V0f32vector_E_Q_V10_Dloop_D351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0f32vector_E_Q_V10_Dloop_D351, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2668) ((##vcore.= (bruijn ##.i.352 1 1) (bruijn ##.len.353 1 2))) (if (bruijn ##.reg.2668 0 0) ((bruijn ##.k.1009 1 0) #t) (basic-block 2 2 (##.reg.2669 ##.reg.2670) ((##vcore.f32vector-ref (bruijn ##.x.349 5 1) (bruijn ##.i.352 2 1)) (##vcore.f32vector-ref (bruijn ##.y.350 5 2) (bruijn ##.i.352 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2669 0 0) (bruijn ##.reg.2670 0 1)) (basic-block 1 1 (##.reg.2671) ((##vcore.+ (bruijn ##.i.352 3 1) 1)) (##qualified-call (vanity core f32vector=? ##.loop.351) (bruijn ##.loop.351 4 0) (bruijn ##.k.1009 3 0) (bruijn ##.reg.2671 0 0) (bruijn ##.len.353 3 2))) ((bruijn ##.k.1009 2 0) #f)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VF32VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VF32VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 2),
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0f32vector_E_Q_V10_Dloop_D351(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
    }
}
void _V50_V0vanity_V0core_V0f32vector_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0f32vector_E_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.reg.2665 ##.reg.2666 ##.reg.2667) ((##vcore.f32vector-length (bruijn ##.x.349 1 1)) (##vcore.f32vector-length (bruijn ##.y.350 1 2)) (##vcore.= (bruijn ##.reg.2665 0 0) (bruijn ##.reg.2666 0 1))) (if (##inline ##vcore.not (bruijn ##.reg.2667 0 2)) ((bruijn ##.k.1007 1 0) #f) (letrec 1 ((close "_V50_V0vanity_V0core_V0f32vector_E_Q_V10_Dloop_D351")) (basic-block 1 1 (##.reg.2672) ((##vcore.f32vector-length (bruijn ##.x.349 3 1))) (##qualified-call (vanity core f32vector=? ##.loop.351) (bruijn ##.loop.351 1 0) (bruijn ##.k.1007 3 0) 0 (bruijn ##.reg.2672 0 0))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VF32VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VF32VectorLength(runtime, NULL,
      statics->vars[2]);
    self->vars[2] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[0],
      self->vars[1]);
if(VDecodeBool(
VInlineNot2(runtime,
        self->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0f32vector_E_Q_V10_Dloop_D351, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorLength(runtime, NULL,
      statics->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0f32vector_E_Q_V10_Dloop_D351(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
    }
}
void _V50_V0vanity_V0core_V0f64vector_E_Q_V10_Dloop_D356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0f64vector_E_Q_V10_Dloop_D356, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2676) ((##vcore.= (bruijn ##.i.357 1 1) (bruijn ##.len.358 1 2))) (if (bruijn ##.reg.2676 0 0) ((bruijn ##.k.1021 1 0) #t) (basic-block 2 2 (##.reg.2677 ##.reg.2678) ((##vcore.f64vector-ref (bruijn ##.x.354 5 1) (bruijn ##.i.357 2 1)) (##vcore.f64vector-ref (bruijn ##.y.355 5 2) (bruijn ##.i.357 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2677 0 0) (bruijn ##.reg.2678 0 1)) (basic-block 1 1 (##.reg.2679) ((##vcore.+ (bruijn ##.i.357 3 1) 1)) (##qualified-call (vanity core f64vector=? ##.loop.356) (bruijn ##.loop.356 4 0) (bruijn ##.k.1021 3 0) (bruijn ##.reg.2679 0 0) (bruijn ##.len.358 3 2))) ((bruijn ##.k.1021 2 0) #f)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VF64VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VF64VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 2),
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0f64vector_E_Q_V10_Dloop_D356(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
    }
}
void _V50_V0vanity_V0core_V0f64vector_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0f64vector_E_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.reg.2673 ##.reg.2674 ##.reg.2675) ((##vcore.f64vector-length (bruijn ##.x.354 1 1)) (##vcore.f64vector-length (bruijn ##.y.355 1 2)) (##vcore.= (bruijn ##.reg.2673 0 0) (bruijn ##.reg.2674 0 1))) (if (##inline ##vcore.not (bruijn ##.reg.2675 0 2)) ((bruijn ##.k.1019 1 0) #f) (letrec 1 ((close "_V50_V0vanity_V0core_V0f64vector_E_Q_V10_Dloop_D356")) (basic-block 1 1 (##.reg.2680) ((##vcore.f64vector-length (bruijn ##.x.354 3 1))) (##qualified-call (vanity core f64vector=? ##.loop.356) (bruijn ##.loop.356 1 0) (bruijn ##.k.1019 3 0) 0 (bruijn ##.reg.2680 0 0))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VF64VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VF64VectorLength(runtime, NULL,
      statics->vars[2]);
    self->vars[2] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[0],
      self->vars[1]);
if(VDecodeBool(
VInlineNot2(runtime,
        self->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0f64vector_E_Q_V10_Dloop_D356, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorLength(runtime, NULL,
      statics->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0f64vector_E_Q_V10_Dloop_D356(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
    }
}
void _V50_V0vanity_V0core_V0s32vector_E_Q_V10_Dloop_D361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0s32vector_E_Q_V10_Dloop_D361, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2684) ((##vcore.= (bruijn ##.i.362 1 1) (bruijn ##.len.363 1 2))) (if (bruijn ##.reg.2684 0 0) ((bruijn ##.k.1033 1 0) #t) (basic-block 2 2 (##.reg.2685 ##.reg.2686) ((##vcore.s32vector-ref (bruijn ##.x.359 5 1) (bruijn ##.i.362 2 1)) (##vcore.s32vector-ref (bruijn ##.y.360 5 2) (bruijn ##.i.362 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2685 0 0) (bruijn ##.reg.2686 0 1)) (basic-block 1 1 (##.reg.2687) ((##vcore.+ (bruijn ##.i.362 3 1) 1)) (##qualified-call (vanity core s32vector=? ##.loop.361) (bruijn ##.loop.361 4 0) (bruijn ##.k.1033 3 0) (bruijn ##.reg.2687 0 0) (bruijn ##.len.363 3 2))) ((bruijn ##.k.1033 2 0) #f)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VS32VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VS32VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 2),
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0s32vector_E_Q_V10_Dloop_D361(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
    }
}
void _V50_V0vanity_V0core_V0s32vector_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0s32vector_E_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.reg.2681 ##.reg.2682 ##.reg.2683) ((##vcore.s32vector-length (bruijn ##.x.359 1 1)) (##vcore.s32vector-length (bruijn ##.y.360 1 2)) (##vcore.= (bruijn ##.reg.2681 0 0) (bruijn ##.reg.2682 0 1))) (if (##inline ##vcore.not (bruijn ##.reg.2683 0 2)) ((bruijn ##.k.1031 1 0) #f) (letrec 1 ((close "_V50_V0vanity_V0core_V0s32vector_E_Q_V10_Dloop_D361")) (basic-block 1 1 (##.reg.2688) ((##vcore.s32vector-length (bruijn ##.x.359 3 1))) (##qualified-call (vanity core s32vector=? ##.loop.361) (bruijn ##.loop.361 1 0) (bruijn ##.k.1031 3 0) 0 (bruijn ##.reg.2688 0 0))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VS32VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VS32VectorLength(runtime, NULL,
      statics->vars[2]);
    self->vars[2] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[0],
      self->vars[1]);
if(VDecodeBool(
VInlineNot2(runtime,
        self->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0s32vector_E_Q_V10_Dloop_D361, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorLength(runtime, NULL,
      statics->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0s32vector_E_Q_V10_Dloop_D361(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
    }
}
void _V50_V0vanity_V0core_V0u16vector_E_Q_V10_Dloop_D366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0u16vector_E_Q_V10_Dloop_D366, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2692) ((##vcore.= (bruijn ##.i.367 1 1) (bruijn ##.len.368 1 2))) (if (bruijn ##.reg.2692 0 0) ((bruijn ##.k.1045 1 0) #t) (basic-block 2 2 (##.reg.2693 ##.reg.2694) ((##vcore.u16vector-ref (bruijn ##.x.364 5 1) (bruijn ##.i.367 2 1)) (##vcore.u16vector-ref (bruijn ##.y.365 5 2) (bruijn ##.i.367 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2693 0 0) (bruijn ##.reg.2694 0 1)) (basic-block 1 1 (##.reg.2695) ((##vcore.+ (bruijn ##.i.367 3 1) 1)) (##qualified-call (vanity core u16vector=? ##.loop.366) (bruijn ##.loop.366 4 0) (bruijn ##.k.1045 3 0) (bruijn ##.reg.2695 0 0) (bruijn ##.len.368 3 2))) ((bruijn ##.k.1045 2 0) #f)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VU16VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VU16VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 2),
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0u16vector_E_Q_V10_Dloop_D366(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
    }
}
void _V50_V0vanity_V0core_V0u16vector_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0u16vector_E_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.reg.2689 ##.reg.2690 ##.reg.2691) ((##vcore.u16vector-length (bruijn ##.x.364 1 1)) (##vcore.u16vector-length (bruijn ##.y.365 1 2)) (##vcore.= (bruijn ##.reg.2689 0 0) (bruijn ##.reg.2690 0 1))) (if (##inline ##vcore.not (bruijn ##.reg.2691 0 2)) ((bruijn ##.k.1043 1 0) #f) (letrec 1 ((close "_V50_V0vanity_V0core_V0u16vector_E_Q_V10_Dloop_D366")) (basic-block 1 1 (##.reg.2696) ((##vcore.u16vector-length (bruijn ##.x.364 3 1))) (##qualified-call (vanity core u16vector=? ##.loop.366) (bruijn ##.loop.366 1 0) (bruijn ##.k.1043 3 0) 0 (bruijn ##.reg.2696 0 0))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VU16VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VU16VectorLength(runtime, NULL,
      statics->vars[2]);
    self->vars[2] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[0],
      self->vars[1]);
if(VDecodeBool(
VInlineNot2(runtime,
        self->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0u16vector_E_Q_V10_Dloop_D366, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorLength(runtime, NULL,
      statics->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0u16vector_E_Q_V10_Dloop_D366(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
    }
}
void _V50_V0vanity_V0core_V0s16vector_E_Q_V10_Dloop_D371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0s16vector_E_Q_V10_Dloop_D371, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2700) ((##vcore.= (bruijn ##.i.372 1 1) (bruijn ##.len.373 1 2))) (if (bruijn ##.reg.2700 0 0) ((bruijn ##.k.1057 1 0) #t) (basic-block 2 2 (##.reg.2701 ##.reg.2702) ((##vcore.s16vector-ref (bruijn ##.x.369 5 1) (bruijn ##.i.372 2 1)) (##vcore.s16vector-ref (bruijn ##.y.370 5 2) (bruijn ##.i.372 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2701 0 0) (bruijn ##.reg.2702 0 1)) (basic-block 1 1 (##.reg.2703) ((##vcore.+ (bruijn ##.i.372 3 1) 1)) (##qualified-call (vanity core s16vector=? ##.loop.371) (bruijn ##.loop.371 4 0) (bruijn ##.k.1057 3 0) (bruijn ##.reg.2703 0 0) (bruijn ##.len.373 3 2))) ((bruijn ##.k.1057 2 0) #f)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VS16VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VS16VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 2),
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0s16vector_E_Q_V10_Dloop_D371(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
    }
}
void _V50_V0vanity_V0core_V0s16vector_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0s16vector_E_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.reg.2697 ##.reg.2698 ##.reg.2699) ((##vcore.s16vector-length (bruijn ##.x.369 1 1)) (##vcore.s16vector-length (bruijn ##.y.370 1 2)) (##vcore.= (bruijn ##.reg.2697 0 0) (bruijn ##.reg.2698 0 1))) (if (##inline ##vcore.not (bruijn ##.reg.2699 0 2)) ((bruijn ##.k.1055 1 0) #f) (letrec 1 ((close "_V50_V0vanity_V0core_V0s16vector_E_Q_V10_Dloop_D371")) (basic-block 1 1 (##.reg.2704) ((##vcore.s16vector-length (bruijn ##.x.369 3 1))) (##qualified-call (vanity core s16vector=? ##.loop.371) (bruijn ##.loop.371 1 0) (bruijn ##.k.1055 3 0) 0 (bruijn ##.reg.2704 0 0))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VS16VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VS16VectorLength(runtime, NULL,
      statics->vars[2]);
    self->vars[2] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[0],
      self->vars[1]);
if(VDecodeBool(
VInlineNot2(runtime,
        self->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0s16vector_E_Q_V10_Dloop_D371, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorLength(runtime, NULL,
      statics->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0s16vector_E_Q_V10_Dloop_D371(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
    }
}
void _V50_V0vanity_V0core_V0u8vector_E_Q_V10_Dloop_D376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0u8vector_E_Q_V10_Dloop_D376, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2708) ((##vcore.= (bruijn ##.i.377 1 1) (bruijn ##.len.378 1 2))) (if (bruijn ##.reg.2708 0 0) ((bruijn ##.k.1069 1 0) #t) (basic-block 2 2 (##.reg.2709 ##.reg.2710) ((##vcore.u8vector-ref (bruijn ##.x.374 5 1) (bruijn ##.i.377 2 1)) (##vcore.u8vector-ref (bruijn ##.y.375 5 2) (bruijn ##.i.377 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2709 0 0) (bruijn ##.reg.2710 0 1)) (basic-block 1 1 (##.reg.2711) ((##vcore.+ (bruijn ##.i.377 3 1) 1)) (##qualified-call (vanity core u8vector=? ##.loop.376) (bruijn ##.loop.376 4 0) (bruijn ##.k.1069 3 0) (bruijn ##.reg.2711 0 0) (bruijn ##.len.378 3 2))) ((bruijn ##.k.1069 2 0) #f)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VU8VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VU8VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 2),
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0u8vector_E_Q_V10_Dloop_D376(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
    }
}
void _V50_V0vanity_V0core_V0u8vector_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0u8vector_E_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.reg.2705 ##.reg.2706 ##.reg.2707) ((##vcore.u8vector-length (bruijn ##.x.374 1 1)) (##vcore.u8vector-length (bruijn ##.y.375 1 2)) (##vcore.= (bruijn ##.reg.2705 0 0) (bruijn ##.reg.2706 0 1))) (if (##inline ##vcore.not (bruijn ##.reg.2707 0 2)) ((bruijn ##.k.1067 1 0) #f) (letrec 1 ((close "_V50_V0vanity_V0core_V0u8vector_E_Q_V10_Dloop_D376")) (basic-block 1 1 (##.reg.2712) ((##vcore.u8vector-length (bruijn ##.x.374 3 1))) (##qualified-call (vanity core u8vector=? ##.loop.376) (bruijn ##.loop.376 1 0) (bruijn ##.k.1067 3 0) 0 (bruijn ##.reg.2712 0 0))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VU8VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VU8VectorLength(runtime, NULL,
      statics->vars[2]);
    self->vars[2] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[0],
      self->vars[1]);
if(VDecodeBool(
VInlineNot2(runtime,
        self->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0u8vector_E_Q_V10_Dloop_D376, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorLength(runtime, NULL,
      statics->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0u8vector_E_Q_V10_Dloop_D376(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
    }
}
void _V50_V0vanity_V0core_V0s8vector_E_Q_V10_Dloop_D381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0s8vector_E_Q_V10_Dloop_D381, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2716) ((##vcore.= (bruijn ##.i.382 1 1) (bruijn ##.len.383 1 2))) (if (bruijn ##.reg.2716 0 0) ((bruijn ##.k.1081 1 0) #t) (basic-block 2 2 (##.reg.2717 ##.reg.2718) ((##vcore.s8vector-ref (bruijn ##.x.379 5 1) (bruijn ##.i.382 2 1)) (##vcore.s8vector-ref (bruijn ##.y.380 5 2) (bruijn ##.i.382 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2717 0 0) (bruijn ##.reg.2718 0 1)) (basic-block 1 1 (##.reg.2719) ((##vcore.+ (bruijn ##.i.382 3 1) 1)) (##qualified-call (vanity core s8vector=? ##.loop.381) (bruijn ##.loop.381 4 0) (bruijn ##.k.1081 3 0) (bruijn ##.reg.2719 0 0) (bruijn ##.len.383 3 2))) ((bruijn ##.k.1081 2 0) #f)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VS8VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VS8VectorRef(runtime, NULL,
      VGetArg(statics, 5-1, 2),
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0s8vector_E_Q_V10_Dloop_D381(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
    }
}
void _V50_V0vanity_V0core_V0s8vector_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0s8vector_E_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.reg.2713 ##.reg.2714 ##.reg.2715) ((##vcore.s8vector-length (bruijn ##.x.379 1 1)) (##vcore.s8vector-length (bruijn ##.y.380 1 2)) (##vcore.= (bruijn ##.reg.2713 0 0) (bruijn ##.reg.2714 0 1))) (if (##inline ##vcore.not (bruijn ##.reg.2715 0 2)) ((bruijn ##.k.1079 1 0) #f) (letrec 1 ((close "_V50_V0vanity_V0core_V0s8vector_E_Q_V10_Dloop_D381")) (basic-block 1 1 (##.reg.2720) ((##vcore.s8vector-length (bruijn ##.x.379 3 1))) (##qualified-call (vanity core s8vector=? ##.loop.381) (bruijn ##.loop.381 1 0) (bruijn ##.k.1079 3 0) 0 (bruijn ##.reg.2720 0 0))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VS8VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VS8VectorLength(runtime, NULL,
      statics->vars[2]);
    self->vars[2] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[0],
      self->vars[1]);
if(VDecodeBool(
VInlineNot2(runtime,
        self->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0s8vector_E_Q_V10_Dloop_D381, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorLength(runtime, NULL,
      statics->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0s8vector_E_Q_V10_Dloop_D381(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
    }
}
void _V50_V0vanity_V0core_V0record_E_Q_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0record_E_Q_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2723 1 2) (basic-block 2 2 (##.reg.2729 ##.reg.2730) ((##vcore.record-ref (bruijn ##.x.384 3 1) 0) (##vcore.record-ref (bruijn ##.y.385 3 2) 0)) (##vcore.eqv? (bruijn ##.k.1102 1 0) (bruijn ##.reg.2729 0 0) (bruijn ##.reg.2730 0 1))) ((bruijn ##.k.1102 0 0) #f))
if(VDecodeBool(
statics->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(0l));
    self->vars[1] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->up->vars[2],
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
void _V50_V0vanity_V0core_V0record_E_Q_V10_Dloop_D386_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0record_E_Q_V10_Dloop_D386_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1095 0 0) (basic-block 1 1 (##.reg.2727) ((##vcore.+ (bruijn ##.i.387 4 1) 1)) (##qualified-call (vanity core record=? ##.loop.386) (bruijn ##.loop.386 5 0) (bruijn ##.k.1093 4 0) (bruijn ##.reg.2727 0 0) (bruijn ##.len.388 4 2))) ((bruijn ##.k.1093 3 0) #f))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0record_E_Q_V10_Dloop_D386(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0core_V0record_E_Q_V10_Dloop_D386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0record_E_Q_V10_Dloop_D386, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2724) ((##vcore.= (bruijn ##.i.387 1 1) (bruijn ##.len.388 1 2))) (if (bruijn ##.reg.2724 0 0) ((bruijn ##.k.1093 1 0) #t) (basic-block 2 2 (##.reg.2725 ##.reg.2726) ((##vcore.record-ref (bruijn ##.x.384 6 1) (bruijn ##.i.387 2 1)) (##vcore.record-ref (bruijn ##.y.385 6 2) (bruijn ##.i.387 2 1))) (##qualified-call (vanity core equal?) (bruijn ##.equal?.174 7 11) (close _V50_V0vanity_V0core_V0record_E_Q_V10_Dloop_D386_V0k13) (bruijn ##.reg.2725 0 0) (bruijn ##.reg.2726 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VRecordRef2(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0record_E_Q_V10_Dloop_D386_V0k13, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0equal_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0core_V0record_E_Q_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0record_E_Q_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1100 0 0)) ((bruijn ##.k.1091 2 0) #f) (letrec 1 ((close "_V50_V0vanity_V0core_V0record_E_Q_V10_Dloop_D386")) (basic-block 1 1 (##.reg.2728) ((##vcore.record-length (bruijn ##.x.384 4 1))) (##qualified-call (vanity core record=? ##.loop.386) (bruijn ##.loop.386 1 0) (bruijn ##.k.1091 4 0) 1 (bruijn ##.reg.2728 0 0)))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0record_E_Q_V10_Dloop_D386, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(1l);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0record_E_Q_V10_Dloop_D386(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
}
void _V50_V0vanity_V0core_V0record_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0record_E_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.reg.2721 ##.reg.2722 ##.reg.2723) ((##vcore.record-length (bruijn ##.x.384 1 1)) (##vcore.record-length (bruijn ##.y.385 1 2)) (##vcore.= (bruijn ##.reg.2721 0 0) (bruijn ##.reg.2722 0 1))) ((close _V50_V0vanity_V0core_V0record_E_Q_V0k11) (close _V50_V0vanity_V0core_V0record_E_Q_V0k12)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VRecordLength2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VRecordLength2(runtime, NULL,
      statics->vars[2]);
    self->vars[2] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0record_E_Q_V0k11, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0record_E_Q_V0k12, self)))));
    }
}
void _V50_V0vanity_V0core_V0equal_Q_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2731 1 0) (basic-block 1 1 (##.reg.2750) ((##vcore.blob? (bruijn ##.y.390 4 2))) (if (bruijn ##.reg.2750 0 0) (##vcore.blob=? (bruijn ##.k.1154 1 0) (bruijn ##.x.389 4 1) (bruijn ##.y.390 4 2)) ((bruijn ##.k.1154 1 0) #f))) ((bruijn ##.k.1154 0 0) #f))
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
void _V50_V0vanity_V0core_V0equal_Q_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1148 0 0) (##qualified-call (vanity core equal?) (bruijn ##.equal?.174 6 11) (bruijn ##.k.1146 1 0) (##inline ##vcore.cdr (bruijn ##.x.389 5 1)) (##inline ##vcore.cdr (bruijn ##.y.390 5 2))) ((bruijn ##.k.1146 1 0) #f))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 11));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1));
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0equal_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0core_V0equal_Q_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.389 4 1)) (if (##inline ##vcore.pair? (bruijn ##.y.390 4 2)) (##qualified-call (vanity core equal?) (bruijn ##.equal?.174 5 11) (close _V50_V0vanity_V0core_V0equal_Q_V0k18) (##inline ##vcore.car (bruijn ##.x.389 4 1)) (##inline ##vcore.car (bruijn ##.y.390 4 2))) ((bruijn ##.k.1146 0 0) #f)) ((bruijn ##.k.1146 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[2]))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k18, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0equal_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0core_V0equal_Q_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2732 1 0) (basic-block 1 1 (##.reg.2749) ((##vcore.vector? (bruijn ##.y.390 7 2))) (if (bruijn ##.reg.2749 0 0) (##qualified-call (vanity core vector=?) (bruijn ##.vector=?.165 8 2) (bruijn ##.k.1143 1 0) (bruijn ##.x.389 7 1) (bruijn ##.y.390 7 2)) ((bruijn ##.k.1143 1 0) #f))) ((bruijn ##.k.1143 0 0) #f))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 2));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0vector_E_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
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
void _V50_V0vanity_V0core_V0equal_Q_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2733 1 0) (basic-block 1 1 (##.reg.2748) ((##vcore.f32vector? (bruijn ##.y.390 9 2))) (if (bruijn ##.reg.2748 0 0) (##qualified-call (vanity core f32vector=?) (bruijn ##.f32vector=?.166 10 3) (bruijn ##.k.1140 1 0) (bruijn ##.x.389 9 1) (bruijn ##.y.390 9 2)) ((bruijn ##.k.1140 1 0) #f))) ((bruijn ##.k.1140 0 0) #f))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 3));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0f32vector_E_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
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
void _V50_V0vanity_V0core_V0equal_Q_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2734 1 0) (basic-block 1 1 (##.reg.2747) ((##vcore.f64vector? (bruijn ##.y.390 11 2))) (if (bruijn ##.reg.2747 0 0) (##qualified-call (vanity core f64vector=?) (bruijn ##.f64vector=?.167 12 4) (bruijn ##.k.1137 1 0) (bruijn ##.x.389 11 1) (bruijn ##.y.390 11 2)) ((bruijn ##.k.1137 1 0) #f))) ((bruijn ##.k.1137 0 0) #f))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 4));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0f64vector_E_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
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
void _V50_V0vanity_V0core_V0equal_Q_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2735 1 0) (basic-block 1 1 (##.reg.2746) ((##vcore.s32vector? (bruijn ##.y.390 13 2))) (if (bruijn ##.reg.2746 0 0) (##qualified-call (vanity core s32vector=?) (bruijn ##.s32vector=?.168 14 5) (bruijn ##.k.1134 1 0) (bruijn ##.x.389 13 1) (bruijn ##.y.390 13 2)) ((bruijn ##.k.1134 1 0) #f))) ((bruijn ##.k.1134 0 0) #f))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 5));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0s32vector_E_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
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
void _V50_V0vanity_V0core_V0equal_Q_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2736 1 0) (basic-block 1 1 (##.reg.2745) ((##vcore.u16vector? (bruijn ##.y.390 15 2))) (if (bruijn ##.reg.2745 0 0) (##qualified-call (vanity core u16vector=?) (bruijn ##.u16vector=?.169 16 6) (bruijn ##.k.1131 1 0) (bruijn ##.x.389 15 1) (bruijn ##.y.390 15 2)) ((bruijn ##.k.1131 1 0) #f))) ((bruijn ##.k.1131 0 0) #f))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 6));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 15-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 15-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0u16vector_E_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
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
void _V50_V0vanity_V0core_V0equal_Q_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2737 1 0) (basic-block 1 1 (##.reg.2744) ((##vcore.s16vector? (bruijn ##.y.390 17 2))) (if (bruijn ##.reg.2744 0 0) (##qualified-call (vanity core s16vector=?) (bruijn ##.s16vector=?.170 18 7) (bruijn ##.k.1128 1 0) (bruijn ##.x.389 17 1) (bruijn ##.y.390 17 2)) ((bruijn ##.k.1128 1 0) #f))) ((bruijn ##.k.1128 0 0) #f))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 7));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 17-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0s16vector_E_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
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
void _V50_V0vanity_V0core_V0equal_Q_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2738 1 0) (basic-block 1 1 (##.reg.2743) ((##vcore.u8vector? (bruijn ##.y.390 19 2))) (if (bruijn ##.reg.2743 0 0) (##qualified-call (vanity core u8vector=?) (bruijn ##.u8vector=?.171 20 8) (bruijn ##.k.1125 1 0) (bruijn ##.x.389 19 1) (bruijn ##.y.390 19 2)) ((bruijn ##.k.1125 1 0) #f))) ((bruijn ##.k.1125 0 0) #f))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 8));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 19-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 19-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0u8vector_E_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
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
void _V50_V0vanity_V0core_V0equal_Q_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2739 1 0) (basic-block 1 1 (##.reg.2742) ((##vcore.s8vector? (bruijn ##.y.390 21 2))) (if (bruijn ##.reg.2742 0 0) (##qualified-call (vanity core s8vector=?) (bruijn ##.s8vector=?.172 22 9) (bruijn ##.k.1122 1 0) (bruijn ##.x.389 21 1) (bruijn ##.y.390 21 2)) ((bruijn ##.k.1122 1 0) #f))) ((bruijn ##.k.1122 0 0) #f))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 9));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 21-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 21-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0s8vector_E_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
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
void _V50_V0vanity_V0core_V0equal_Q_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1118 0 0) ((bruijn ##.k.1107 20 0) (bruijn ##.p.1118 0 0)) (basic-block 1 1 (##.reg.2740) ((##vcore.record? (bruijn ##.x.389 21 1))) (if (bruijn ##.reg.2740 0 0) (basic-block 1 1 (##.reg.2741) ((##vcore.record? (bruijn ##.y.390 22 2))) (if (bruijn ##.reg.2741 0 0) (##qualified-call (vanity core record=?) (bruijn ##.record=?.173 23 10) (bruijn ##.k.1107 22 0) (bruijn ##.x.389 22 1) (bruijn ##.y.390 22 2)) ((bruijn ##.k.1107 22 0) #f))) ((bruijn ##.k.1107 21 0) #f))))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 10));
    VWORD _arg0 = 
      VGetArg(statics, 22-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 22-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 22-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0record_E_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
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
void _V50_V0vanity_V0core_V0equal_Q_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1117 0 0) ((bruijn ##.k.1107 18 0) (bruijn ##.p.1117 0 0)) (basic-block 1 1 (##.reg.2739) ((##vcore.s8vector? (bruijn ##.x.389 19 1))) ((close _V50_V0vanity_V0core_V0equal_Q_V0k34) (close _V50_V0vanity_V0core_V0equal_Q_V0k35))))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k34, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k35, self)))));
    }
}
}
void _V50_V0vanity_V0core_V0equal_Q_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1116 0 0) ((bruijn ##.k.1107 16 0) (bruijn ##.p.1116 0 0)) (basic-block 1 1 (##.reg.2738) ((##vcore.u8vector? (bruijn ##.x.389 17 1))) ((close _V50_V0vanity_V0core_V0equal_Q_V0k32) (close _V50_V0vanity_V0core_V0equal_Q_V0k33))))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k32, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k33, self)))));
    }
}
}
void _V50_V0vanity_V0core_V0equal_Q_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1115 0 0) ((bruijn ##.k.1107 14 0) (bruijn ##.p.1115 0 0)) (basic-block 1 1 (##.reg.2737) ((##vcore.s16vector? (bruijn ##.x.389 15 1))) ((close _V50_V0vanity_V0core_V0equal_Q_V0k30) (close _V50_V0vanity_V0core_V0equal_Q_V0k31))))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k30, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k31, self)))));
    }
}
}
void _V50_V0vanity_V0core_V0equal_Q_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1114 0 0) ((bruijn ##.k.1107 12 0) (bruijn ##.p.1114 0 0)) (basic-block 1 1 (##.reg.2736) ((##vcore.u16vector? (bruijn ##.x.389 13 1))) ((close _V50_V0vanity_V0core_V0equal_Q_V0k28) (close _V50_V0vanity_V0core_V0equal_Q_V0k29))))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k28, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k29, self)))));
    }
}
}
void _V50_V0vanity_V0core_V0equal_Q_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1113 0 0) ((bruijn ##.k.1107 10 0) (bruijn ##.p.1113 0 0)) (basic-block 1 1 (##.reg.2735) ((##vcore.s32vector? (bruijn ##.x.389 11 1))) ((close _V50_V0vanity_V0core_V0equal_Q_V0k26) (close _V50_V0vanity_V0core_V0equal_Q_V0k27))))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k26, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k27, self)))));
    }
}
}
void _V50_V0vanity_V0core_V0equal_Q_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1112 0 0) ((bruijn ##.k.1107 8 0) (bruijn ##.p.1112 0 0)) (basic-block 1 1 (##.reg.2734) ((##vcore.f64vector? (bruijn ##.x.389 9 1))) ((close _V50_V0vanity_V0core_V0equal_Q_V0k24) (close _V50_V0vanity_V0core_V0equal_Q_V0k25))))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k24, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k25, self)))));
    }
}
}
void _V50_V0vanity_V0core_V0equal_Q_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1111 0 0) ((bruijn ##.k.1107 6 0) (bruijn ##.p.1111 0 0)) (basic-block 1 1 (##.reg.2733) ((##vcore.f32vector? (bruijn ##.x.389 7 1))) ((close _V50_V0vanity_V0core_V0equal_Q_V0k22) (close _V50_V0vanity_V0core_V0equal_Q_V0k23))))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k22, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k23, self)))));
    }
}
}
void _V50_V0vanity_V0core_V0equal_Q_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1110 0 0) ((bruijn ##.k.1107 4 0) (bruijn ##.p.1110 0 0)) (basic-block 1 1 (##.reg.2732) ((##vcore.vector? (bruijn ##.x.389 5 1))) ((close _V50_V0vanity_V0core_V0equal_Q_V0k20) (close _V50_V0vanity_V0core_V0equal_Q_V0k21))))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k20, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k21, self)))));
    }
}
}
void _V50_V0vanity_V0core_V0equal_Q_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1109 0 0) ((bruijn ##.k.1107 3 0) (bruijn ##.p.1109 0 0)) ((close _V50_V0vanity_V0core_V0equal_Q_V0k17) (close _V50_V0vanity_V0core_V0equal_Q_V0k19)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k17, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k19, self)))));
}
}
void _V50_V0vanity_V0core_V0equal_Q_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1108 0 0) ((bruijn ##.k.1107 1 0) (bruijn ##.p.1108 0 0)) (basic-block 1 1 (##.reg.2731) ((##vcore.blob? (bruijn ##.x.389 2 1))) ((close _V50_V0vanity_V0core_V0equal_Q_V0k15) (close _V50_V0vanity_V0core_V0equal_Q_V0k16))))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k15, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k16, self)))));
    }
}
}
void _V50_V0vanity_V0core_V0equal_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0equal_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0core_V0equal_Q_V0k14) (##inline ##vcore.eq? (bruijn ##.x.389 0 1) (bruijn ##.y.390 0 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q_V0k14, self)), 1,
      VInlineEq2(runtime,
        _var1,
        _var2));
}
void _V50_V0vanity_V0core_V0number_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0number_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2751) ((##vcore.double? (bruijn ##.x.391 1 1))) (if (bruijn ##.reg.2751 0 0) ((bruijn ##.k.1156 1 0) (bruijn ##.reg.2751 0 0)) (basic-block 1 1 (##.reg.2752) ((##vcore.int? (bruijn ##.x.391 2 1))) ((bruijn ##.k.1156 2 0) (bruijn ##.reg.2752 0 0)))))
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
void _V50_V0vanity_V0core_V0positive_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0positive_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2753) ((##vcore.> (bruijn ##.x.392 1 1) 0)) ((bruijn ##.k.1158 1 0) (bruijn ##.reg.2753 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      statics->vars[1],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0core_V0zero_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0zero_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2754) ((##vcore.= (bruijn ##.x.393 1 1) 0)) ((bruijn ##.k.1159 1 0) (bruijn ##.reg.2754 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0core_V0negative_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0negative_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2755) ((##vcore.< (bruijn ##.x.394 1 1) 0)) ((bruijn ##.k.1160 1 0) (bruijn ##.reg.2755 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0core_V0abs(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0abs, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2756) ((##vcore.< (bruijn ##.x.395 1 1) 0)) (if (bruijn ##.reg.2756 0 0) (basic-block 1 1 (##.reg.2757) ((##vcore.- (bruijn ##.x.395 2 1))) ((bruijn ##.k.1161 2 0) (bruijn ##.reg.2757 0 0))) ((bruijn ##.k.1161 1 0) (bruijn ##.x.395 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
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
}
void _V50_V0vanity_V0core_V0square(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0square, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2758) ((##vcore.* (bruijn ##.x.396 1 1) (bruijn ##.x.396 1 1))) ((bruijn ##.k.1163 1 0) (bruijn ##.reg.2758 0 0)))
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
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0atan(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0atan" #t (2 ((bruijn ##.atan-impl.192 1 29) (bruijn ##.k.1164 0 0) (bruijn ##.x.397 0 1))) (3 ((bruijn ##.atan2-impl.193 1 30) (bruijn ##.k.1165 0 0) (bruijn ##.y.398 0 1) (bruijn ##.x.399 0 2))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0atan, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0atan(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.atan-impl.192 1 29) (bruijn ##.k.1164 0 0) (bruijn ##.x.397 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[29]), 2,
      _var0,
      _var1);
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0atan(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // ((bruijn ##.atan2-impl.193 1 30) (bruijn ##.k.1165 0 0) (bruijn ##.y.398 0 1) (bruijn ##.x.399 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[30]), 3,
      _var0,
      _var1,
      _var2);
}
void _V50_V0vanity_V0core_V0atan(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0atan, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0atan\n"
"_V50_V0vanity_V0core_V0atan:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0core_V0atan\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0core_V0atan\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0atan\n"
);
static void _V10_Dlog_D197_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlog_D197_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2759) ((##vcore./ (bruijn ##.x.1168 2 0) (bruijn ##.x.1169 1 0))) ((bruijn ##.k.1167 3 0) (bruijn ##.reg.2759 0 0)))
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
static void _V10_Dlog_D197_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlog_D197_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.log-impl.196 2 33) (close _V10_Dlog_D197_V0k37) (bruijn ##.base.402 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[33]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlog_D197_V0k37, self)))),
      statics->vars[2]);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0log(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0log" #t (2 ((bruijn ##.log-impl.196 1 33) (bruijn ##.k.1166 0 0) (bruijn ##.x.400 0 1))) (3 ((bruijn ##.log-impl.196 1 33) (close _V10_Dlog_D197_V0k36) (bruijn ##.x.401 0 1))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0log, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0log(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.log-impl.196 1 33) (bruijn ##.k.1166 0 0) (bruijn ##.x.400 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[33]), 2,
      _var0,
      _var1);
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0log(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.log-impl.196 1 33) (close _V10_Dlog_D197_V0k36) (bruijn ##.x.401 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[33]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlog_D197_V0k36, self)))),
      _var1);
}
void _V50_V0vanity_V0core_V0log(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0log, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0log\n"
"_V50_V0vanity_V0core_V0log:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0core_V0log\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0core_V0log\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0log\n"
);
static void _V10_Dmax_D200_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmax_D200_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core max) (bruijn ##.max.200 2 37) (bruijn ##.k.1173 1 0) (bruijn ##.x.1174 0 0) (bruijn ##.c.408 1 3))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[37]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0max(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V10_Dmax_D200_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmax_D200_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core max) (bruijn ##.max.200 3 37) (bruijn ##.k.1175 2 0) (bruijn ##.x.1176 0 0) (bruijn ##.d.412 2 4))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[37]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->vars[4];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0max(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V10_Dmax_D200_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmax_D200_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core max) (bruijn ##.max.200 2 37) (close _V10_Dmax_D200_V0k40) (bruijn ##.x.1177 0 0) (bruijn ##.c.411 1 3))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[37]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmax_D200_V0k40, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0max(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0max_V10_Dloop_D415_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0max_V10_Dloop_D415_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core max ##.loop.415) (bruijn ##.loop.415 2 0) (bruijn ##.k.1179 1 0) (bruijn ##.x.1181 0 0) (##inline ##vcore.cdr (bruijn ##.bs.414 3 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0max_V10_Dloop_D415(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0max_V10_Dloop_D415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0max_V10_Dloop_D415, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.bs.414 2 2)) ((bruijn ##.k.1179 0 0) (bruijn ##.ret.416 0 1)) (##qualified-call (vanity core max) (bruijn ##.max.200 3 37) (close _V50_V0vanity_V0core_V0max_V10_Dloop_D415_V0k41) (bruijn ##.a.413 2 1) (##inline ##vcore.car (bruijn ##.bs.414 2 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[37]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0max_V10_Dloop_D415_V0k41, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0max(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0max(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0max" #t (2 ((bruijn ##.k.1170 0 0) (bruijn ##.a.403 0 1))) (3 (basic-block 1 1 (##.reg.2760) ((##vcore.> (bruijn ##.a.404 1 1) (bruijn ##.b.405 1 2))) (if (bruijn ##.reg.2760 0 0) ((bruijn ##.k.1171 1 0) (bruijn ##.a.404 1 1)) ((bruijn ##.k.1171 1 0) (bruijn ##.b.405 1 2))))) (4 (##qualified-call (vanity core max) (bruijn ##.max.200 1 37) (close _V10_Dmax_D200_V0k38) (bruijn ##.a.406 0 1) (bruijn ##.b.407 0 2))) (5 (##qualified-call (vanity core max) (bruijn ##.max.200 1 37) (close _V10_Dmax_D200_V0k39) (bruijn ##.a.409 0 1) (bruijn ##.b.410 0 2))) (2 + (letrec 1 ((close "_V50_V0vanity_V0core_V0max_V10_Dloop_D415")) (##qualified-call (vanity core max ##.loop.415) (bruijn ##.loop.415 0 0) (bruijn ##.k.1178 1 0) (bruijn ##.a.413 1 1) (bruijn ##.bs.414 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0max, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0max(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1170 0 0) (bruijn ##.a.403 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0max(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2760) ((##vcore.> (bruijn ##.a.404 1 1) (bruijn ##.b.405 1 2))) (if (bruijn ##.reg.2760 0 0) ((bruijn ##.k.1171 1 0) (bruijn ##.a.404 1 1)) ((bruijn ##.k.1171 1 0) (bruijn ##.b.405 1 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
}
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0max(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##qualified-call (vanity core max) (bruijn ##.max.200 1 37) (close _V10_Dmax_D200_V0k38) (bruijn ##.a.406 0 1) (bruijn ##.b.407 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[37]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmax_D200_V0k38, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0max(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0core_V0max(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##qualified-call (vanity core max) (bruijn ##.max.200 1 37) (close _V10_Dmax_D200_V0k39) (bruijn ##.a.409 0 1) (bruijn ##.b.410 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[37]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmax_D200_V0k39, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0max(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case4__V50_V0vanity_V0core_V0max(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0max_V10_Dloop_D415")) (##qualified-call (vanity core max ##.loop.415) (bruijn ##.loop.415 0 0) (bruijn ##.k.1178 1 0) (bruijn ##.a.413 1 1) (bruijn ##.bs.414 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0max_V10_Dloop_D415, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0max_V10_Dloop_D415(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0max(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0max, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0max\n"
"_V50_V0vanity_V0core_V0max:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0core_V0max\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0core_V0max\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V50_V0vanity_V0core_V0max\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case3__V50_V0vanity_V0core_V0max\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case4__V50_V0vanity_V0core_V0max\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0max\n"
);
static void _V10_Dmin_D201_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmin_D201_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core min) (bruijn ##.min.201 2 38) (bruijn ##.k.1187 1 0) (bruijn ##.x.1188 0 0) (bruijn ##.c.423 1 3))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[38]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0min(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V10_Dmin_D201_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmin_D201_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core min) (bruijn ##.min.201 3 38) (bruijn ##.k.1189 2 0) (bruijn ##.x.1190 0 0) (bruijn ##.d.427 2 4))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[38]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->vars[4];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0min(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V10_Dmin_D201_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmin_D201_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core min) (bruijn ##.min.201 2 38) (close _V10_Dmin_D201_V0k44) (bruijn ##.x.1191 0 0) (bruijn ##.c.426 1 3))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[38]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmin_D201_V0k44, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0min(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0min_V10_Dloop_D430_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0min_V10_Dloop_D430_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core min ##.loop.430) (bruijn ##.loop.430 2 0) (bruijn ##.k.1193 1 0) (bruijn ##.x.1195 0 0) (##inline ##vcore.cdr (bruijn ##.bs.429 3 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0min_V10_Dloop_D430(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0min_V10_Dloop_D430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0min_V10_Dloop_D430, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.bs.429 2 2)) ((bruijn ##.k.1193 0 0) (bruijn ##.ret.431 0 1)) (##qualified-call (vanity core min) (bruijn ##.min.201 3 38) (close _V50_V0vanity_V0core_V0min_V10_Dloop_D430_V0k45) (bruijn ##.a.428 2 1) (##inline ##vcore.car (bruijn ##.bs.429 2 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[38]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0min_V10_Dloop_D430_V0k45, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0min(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0min(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0min" #t (2 ((bruijn ##.k.1184 0 0) (bruijn ##.a.418 0 1))) (3 (basic-block 1 1 (##.reg.2761) ((##vcore.< (bruijn ##.a.419 1 1) (bruijn ##.b.420 1 2))) (if (bruijn ##.reg.2761 0 0) ((bruijn ##.k.1185 1 0) (bruijn ##.a.419 1 1)) ((bruijn ##.k.1185 1 0) (bruijn ##.b.420 1 2))))) (4 (##qualified-call (vanity core min) (bruijn ##.min.201 1 38) (close _V10_Dmin_D201_V0k42) (bruijn ##.a.421 0 1) (bruijn ##.b.422 0 2))) (5 (##qualified-call (vanity core min) (bruijn ##.min.201 1 38) (close _V10_Dmin_D201_V0k43) (bruijn ##.a.424 0 1) (bruijn ##.b.425 0 2))) (2 + (letrec 1 ((close "_V50_V0vanity_V0core_V0min_V10_Dloop_D430")) (##qualified-call (vanity core min ##.loop.430) (bruijn ##.loop.430 0 0) (bruijn ##.k.1192 1 0) (bruijn ##.a.428 1 1) (bruijn ##.bs.429 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0min, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0min(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1184 0 0) (bruijn ##.a.418 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0min(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2761) ((##vcore.< (bruijn ##.a.419 1 1) (bruijn ##.b.420 1 2))) (if (bruijn ##.reg.2761 0 0) ((bruijn ##.k.1185 1 0) (bruijn ##.a.419 1 1)) ((bruijn ##.k.1185 1 0) (bruijn ##.b.420 1 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
}
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0min(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##qualified-call (vanity core min) (bruijn ##.min.201 1 38) (close _V10_Dmin_D201_V0k42) (bruijn ##.a.421 0 1) (bruijn ##.b.422 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[38]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmin_D201_V0k42, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0min(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0core_V0min(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##qualified-call (vanity core min) (bruijn ##.min.201 1 38) (close _V10_Dmin_D201_V0k43) (bruijn ##.a.424 0 1) (bruijn ##.b.425 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[38]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmin_D201_V0k43, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0min(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case4__V50_V0vanity_V0core_V0min(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0min_V10_Dloop_D430")) (##qualified-call (vanity core min ##.loop.430) (bruijn ##.loop.430 0 0) (bruijn ##.k.1192 1 0) (bruijn ##.a.428 1 1) (bruijn ##.bs.429 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0min_V10_Dloop_D430, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0min_V10_Dloop_D430(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0min(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0min, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0min\n"
"_V50_V0vanity_V0core_V0min:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0core_V0min\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0core_V0min\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V50_V0vanity_V0core_V0min\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case3__V50_V0vanity_V0core_V0min\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case4__V50_V0vanity_V0core_V0min\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0min\n"
);
void _V50_V0vanity_V0core_V0caar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0caar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1198 0 0) (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.433 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)));
}
void _V50_V0vanity_V0core_V0cadr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cadr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1200 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.434 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)));
}
void _V50_V0vanity_V0core_V0cdar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cdar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1202 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.435 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)));
}
void _V50_V0vanity_V0core_V0cddr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cddr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1204 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.436 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)));
}
void _V50_V0vanity_V0core_V0caaar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0caaar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1206 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.437 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1))));
}
void _V50_V0vanity_V0core_V0caadr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0caadr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1209 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.438 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1))));
}
void _V50_V0vanity_V0core_V0cadar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cadar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1212 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.439 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1))));
}
void _V50_V0vanity_V0core_V0caddr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0caddr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1215 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.440 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1))));
}
void _V50_V0vanity_V0core_V0cdaar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cdaar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1218 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.441 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1))));
}
void _V50_V0vanity_V0core_V0cdadr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cdadr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1221 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.442 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1))));
}
void _V50_V0vanity_V0core_V0cddar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cddar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1224 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.443 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1))));
}
void _V50_V0vanity_V0core_V0cdddr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cdddr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1227 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.444 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1))));
}
void _V50_V0vanity_V0core_V0caaaar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0caaaar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1230 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.445 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
void _V50_V0vanity_V0core_V0caaadr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0caaadr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1234 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.446 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
void _V50_V0vanity_V0core_V0caadar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0caadar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1238 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.447 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
void _V50_V0vanity_V0core_V0caaddr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0caaddr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1242 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.448 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
void _V50_V0vanity_V0core_V0cadaar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cadaar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1246 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.449 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
void _V50_V0vanity_V0core_V0cadadr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cadadr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1250 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.450 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
void _V50_V0vanity_V0core_V0caddar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0caddar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1254 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.451 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
void _V50_V0vanity_V0core_V0cadddr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cadddr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1258 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.452 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
void _V50_V0vanity_V0core_V0cdaaar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cdaaar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1262 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.453 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
void _V50_V0vanity_V0core_V0cdaadr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cdaadr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1266 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.454 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
void _V50_V0vanity_V0core_V0cdadar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cdadar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1270 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.455 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
void _V50_V0vanity_V0core_V0cdaddr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cdaddr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1274 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.456 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
void _V50_V0vanity_V0core_V0cddaar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cddaar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1278 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.457 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
void _V50_V0vanity_V0core_V0cddadr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cddadr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1282 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.458 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
void _V50_V0vanity_V0core_V0cdddar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cdddar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1286 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.459 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
void _V50_V0vanity_V0core_V0cddddr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0cddddr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1290 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.460 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
void _V50_V0vanity_V0core_V0list(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0list, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // ((bruijn ##.k.1294 0 0) (bruijn ##.args.461 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _varargs);
}
void _V50_V0vanity_V0core_V0list_Q_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0list_Q_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1296 0 0) ((bruijn ##.k.1295 1 0) (bruijn ##.p.1296 0 0)) (if (##inline ##vcore.pair? (bruijn ##.lst.462 1 1)) (##qualified-call (vanity core list?) (bruijn ##.list?.231 2 68) (bruijn ##.k.1295 1 0) (##inline ##vcore.cdr (bruijn ##.lst.462 1 1))) ((bruijn ##.k.1295 1 0) #f)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[1]))) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[68]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0list_Q(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
}
void _V50_V0vanity_V0core_V0list_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0list_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0core_V0list_Q_V0k46) (##inline ##vcore.null? (bruijn ##.lst.462 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0list_Q_V0k46, self)), 1,
      VInlineNullP2(runtime,
        _var1));
}
void _V50_V0vanity_V0core_V0length_V10_Dloop_D464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0length_V10_Dloop_D464, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.lst.465 0 1)) ((bruijn ##.k.1300 0 0) (bruijn ##.i.466 0 2)) (basic-block 1 1 (##.reg.2762) ((##vcore.+ (bruijn ##.i.466 1 2) 1)) (##qualified-call (vanity core length ##.loop.464) (bruijn ##.loop.464 2 0) (bruijn ##.k.1300 1 0) (##inline ##vcore.cdr (bruijn ##.lst.465 1 1)) (bruijn ##.reg.2762 0 0))))
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0length_V10_Dloop_D464(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0core_V0length(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0length, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0length_V10_Dloop_D464")) (##qualified-call (vanity core length ##.loop.464) (bruijn ##.loop.464 0 0) (bruijn ##.k.1299 1 0) (bruijn ##.lst.463 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0length_V10_Dloop_D464, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0length_V10_Dloop_D464(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0list__tail(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0list__tail, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.x.468 0 2) 0) ((bruijn ##.k.1304 0 0) (bruijn ##.lst.467 0 1)) (basic-block 1 1 (##.reg.2763) ((##vcore.- (bruijn ##.x.468 1 2) 1)) (##qualified-call (vanity core list-tail) (bruijn ##.list-tail.233 2 70) (bruijn ##.k.1304 1 0) (##inline ##vcore.cdr (bruijn ##.lst.467 1 1)) (bruijn ##.reg.2763 0 0))))
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[70]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0list__tail(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0core_V0list__ref(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0list__ref, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.x.470 0 2) 0) ((bruijn ##.k.1308 0 0) (##inline ##vcore.car (bruijn ##.lst.469 0 1))) (basic-block 1 1 (##.reg.2764) ((##vcore.- (bruijn ##.x.470 1 2) 1)) (##qualified-call (vanity core list-ref) (bruijn ##.list-ref.234 2 71) (bruijn ##.k.1308 1 0) (##inline ##vcore.cdr (bruijn ##.lst.469 1 1)) (bruijn ##.reg.2764 0 0))))
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[71]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0list__ref(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0core_V0list__set_B_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0list__set_B_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-car! (bruijn ##.k.1312 1 0) (bruijn ##.x.1313 0 0) (bruijn ##.val.473 1 3))
    VCallFuncWithGC(runtime, (VFunc)VSetCar2, 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
void _V50_V0vanity_V0core_V0list__set_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0list__set_B, got ~D~N"
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
  // (##qualified-call (vanity core list-tail) (bruijn ##.list-tail.233 1 70) (close _V50_V0vanity_V0core_V0list__set_B_V0k47) (bruijn ##.lst.471 0 1) (bruijn ##.i.472 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[70]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0list__set_B_V0k47, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0list__tail(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0list__copy_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0list__copy_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1314 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.474 1 1)) (bruijn ##.x.1317 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
void _V50_V0vanity_V0core_V0list__copy(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0list__copy, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.lst.474 0 1)) ((bruijn ##.k.1314 0 0) '()) (##qualified-call (vanity core list-copy) (bruijn ##.list-copy.236 1 73) (close _V50_V0vanity_V0core_V0list__copy_V0k48) (##inline ##vcore.cdr (bruijn ##.lst.474 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[73]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0list__copy_V0k48, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0list__copy(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0core_V0make__list_V10_Dloop_D478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0make__list_V10_Dloop_D478, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.k.479 0 1) 0) ((bruijn ##.k.1321 0 0) (bruijn ##.ret.480 0 2)) (basic-block 1 1 (##.reg.2765) ((##vcore.- (bruijn ##.k.479 1 1) 1)) (##qualified-call (vanity core make-list ##.loop.478) (bruijn ##.loop.478 2 0) (bruijn ##.k.1321 1 0) (bruijn ##.reg.2765 0 0) (##inline ##vcore.cons (bruijn ##.val.477 3 2) (bruijn ##.ret.480 1 2)))))
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VInlineCons2(runtime,
        statics->up->up->vars[2],
        statics->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0make__list_V10_Dloop_D478(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0make__list(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0make__list" #t (2 (##qualified-call (vanity core make-list) (bruijn ##.make-list.237 1 74) (bruijn ##.k.1319 0 0) (bruijn ##.k.475 0 1) #f)) (3 (letrec 1 ((close "_V50_V0vanity_V0core_V0make__list_V10_Dloop_D478")) (##qualified-call (vanity core make-list ##.loop.478) (bruijn ##.loop.478 0 0) (bruijn ##.k.1320 1 0) (bruijn ##.k.476 1 1) '()))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0make__list, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0make__list(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##qualified-call (vanity core make-list) (bruijn ##.make-list.237 1 74) (bruijn ##.k.1319 0 0) (bruijn ##.k.475 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(statics->vars[74]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0make__list(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0make__list(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0make__list_V10_Dloop_D478")) (##qualified-call (vanity core make-list ##.loop.478) (bruijn ##.loop.478 0 0) (bruijn ##.k.1320 1 0) (bruijn ##.k.476 1 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0make__list_V10_Dloop_D478, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0make__list_V10_Dloop_D478(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0make__list(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0make__list, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0make__list\n"
"_V50_V0vanity_V0core_V0make__list:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0core_V0make__list\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0core_V0make__list\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0make__list\n"
);
void _V50_V0vanity_V0core_V0map_V10_Dloop_D483_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D483_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1326 2 0) (##inline ##vcore.cons (bruijn ##.x.1328 1 0) (bruijn ##.x.1329 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D483_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D483_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core map ##.loop.483) (bruijn ##.loop.483 2 0) (close _V50_V0vanity_V0core_V0map_V10_Dloop_D483_V0k50) (##inline ##vcore.cdr (bruijn ##.xs.484 1 1)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D483_V0k50, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0map_V10_Dloop_D483(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D483, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.xs.484 0 1)) ((bruijn ##.k.1326 0 0) '()) ((bruijn ##.f.481 2 1) (close _V50_V0vanity_V0core_V0map_V10_Dloop_D483_V0k49) (##inline ##vcore.car (bruijn ##.xs.484 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D483_V0k49, self)))),
      VInlineCar2(runtime,
        _var1));
}
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1341 1 0) ((bruijn ##.k.1342 0 0) (bruijn ##.p.1341 1 0)) ((bruijn ##.k.1342 0 0) (##inline ##vcore.null? (bruijn ##.ys.490 2 2))))
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
void _V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1333 4 0) (##inline ##vcore.cons (bruijn ##.x.1335 1 0) (bruijn ##.x.1336 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core map ##.loop.488) (bruijn ##.loop.488 4 0) (close _V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k55) (##inline ##vcore.cdr (bruijn ##.xs.489 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.490 3 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k55, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0map_V10_Dloop_D488(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1334 0 0) ((bruijn ##.k.1333 2 0) '()) ((bruijn ##.f.485 4 1) (close _V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k54) (##inline ##vcore.car (bruijn ##.xs.489 2 1)) (##inline ##vcore.car (bruijn ##.ys.490 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k54, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k52) (close _V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k53))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k52, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k53, self)))));
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D488, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k51) (##inline ##vcore.null? (bruijn ##.xs.489 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D488_V0k51, self)), 1,
      VInlineNullP2(runtime,
        _var1));
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1356 0 0) ((bruijn ##.k.1355 1 0) (bruijn ##.p.1356 0 0)) ((bruijn ##.k.1355 1 0) (##inline ##vcore.null? (bruijn ##.zs.498 3 3))))
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
void _V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1354 1 0) ((bruijn ##.k.1355 0 0) (bruijn ##.p.1354 1 0)) ((close _V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k58) (##inline ##vcore.null? (bruijn ##.ys.497 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k58, self)), 1,
      VInlineNullP2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1344 4 0) (##inline ##vcore.cons (bruijn ##.x.1346 1 0) (bruijn ##.x.1347 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core map ##.loop.495) (bruijn ##.loop.495 4 0) (close _V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k61) (##inline ##vcore.cdr (bruijn ##.xs.496 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.497 3 2)) (##inline ##vcore.cdr (bruijn ##.zs.498 3 3)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k61, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[3]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0map_V10_Dloop_D495(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1345 0 0) ((bruijn ##.k.1344 2 0) '()) ((bruijn ##.f.491 4 1) (close _V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k60) (##inline ##vcore.car (bruijn ##.xs.496 2 1)) (##inline ##vcore.car (bruijn ##.ys.497 2 2)) (##inline ##vcore.car (bruijn ##.zs.498 2 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k60, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]),
      VInlineCar2(runtime,
        statics->up->vars[3]));
}
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k57) (close _V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k59))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k57, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k59, self)))));
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D495, got ~D~N"
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
  // ((close _V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k56) (##inline ##vcore.null? (bruijn ##.xs.496 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D495_V0k56, self)), 1,
      VInlineNullP2(runtime,
        _var1));
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1358 6 0) (##inline ##vcore.cons (bruijn ##.x.1360 2 0) (bruijn ##.x.1361 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core map ##.loop.501) (bruijn ##.loop.501 6 0) (close _V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k67) (bruijn ##.x.1362 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k67, self))));
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0map_V10_Dloop_D501(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core map) (bruijn ##.map.238 7 75) (close _V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k66) (##intrinsic ##vcore.cdr) (bruijn ##.lsts.502 4 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 75));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k66, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcdr;
    VWORD _arg2 = 
      statics->up->up->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0map(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k65) (bruijn ##.f.499 5 1) (bruijn ##.x.1363 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k65, self)))),
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1359 0 0) ((bruijn ##.k.1358 2 0) '()) (##qualified-call (vanity core map) (bruijn ##.map.238 5 75) (close _V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k64) (##intrinsic ##vcore.car) (bruijn ##.lsts.502 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 75));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k64, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcar;
    VWORD _arg2 = 
      statics->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0map(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core memq) (bruijn ##.memq.243 4 80) (close _V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k63) #t (bruijn ##.x.1364 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[80]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k63, self))));
    VWORD _arg1 = 
      VEncodeBool(true);
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0memq(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0map_V10_Dloop_D501(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map_V10_Dloop_D501, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity core map) (bruijn ##.map.238 3 75) (close _V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k62) (##intrinsic ##vcore.null?) (bruijn ##.lsts.502 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[75]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D501_V0k62, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dnull_Q;
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0map(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0map(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0map" #t (3 (letrec 1 ((close "_V50_V0vanity_V0core_V0map_V10_Dloop_D483")) (##qualified-call (vanity core map ##.loop.483) (bruijn ##.loop.483 0 0) (bruijn ##.k.1325 1 0) (bruijn ##.xs.482 1 2)))) (4 (letrec 1 ((close "_V50_V0vanity_V0core_V0map_V10_Dloop_D488")) (##qualified-call (vanity core map ##.loop.488) (bruijn ##.loop.488 0 0) (bruijn ##.k.1332 1 0) (bruijn ##.xs.486 1 2) (bruijn ##.ys.487 1 3)))) (5 (letrec 1 ((close "_V50_V0vanity_V0core_V0map_V10_Dloop_D495")) (##qualified-call (vanity core map ##.loop.495) (bruijn ##.loop.495 0 0) (bruijn ##.k.1343 1 0) (bruijn ##.xs.492 1 2) (bruijn ##.ys.493 1 3) (bruijn ##.zs.494 1 4)))) (2 + (letrec 1 ((close "_V50_V0vanity_V0core_V0map_V10_Dloop_D501")) (##qualified-call (vanity core map ##.loop.501) (bruijn ##.loop.501 0 0) (bruijn ##.k.1357 1 0) (bruijn ##.lsts.500 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0map, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0map_V10_Dloop_D483")) (##qualified-call (vanity core map ##.loop.483) (bruijn ##.loop.483 0 0) (bruijn ##.k.1325 1 0) (bruijn ##.xs.482 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D483, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0map_V10_Dloop_D483(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0map_V10_Dloop_D488")) (##qualified-call (vanity core map ##.loop.488) (bruijn ##.loop.488 0 0) (bruijn ##.k.1332 1 0) (bruijn ##.xs.486 1 2) (bruijn ##.ys.487 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D488, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0map_V10_Dloop_D488(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0map_V10_Dloop_D495")) (##qualified-call (vanity core map ##.loop.495) (bruijn ##.loop.495 0 0) (bruijn ##.k.1343 1 0) (bruijn ##.xs.492 1 2) (bruijn ##.ys.493 1 3) (bruijn ##.zs.494 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D495, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      statics->vars[3];
    VWORD _arg3 = 
      statics->vars[4];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0map_V10_Dloop_D495(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0core_V0map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0map_V10_Dloop_D501")) (##qualified-call (vanity core map ##.loop.501) (bruijn ##.loop.501 0 0) (bruijn ##.k.1357 1 0) (bruijn ##.lsts.500 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map_V10_Dloop_D501, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0map_V10_Dloop_D501(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0map(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0map, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0map\n"
"_V50_V0vanity_V0core_V0map:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0core_V0map\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V50_V0vanity_V0core_V0map\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V50_V0vanity_V0core_V0map\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V50_V0vanity_V0core_V0map\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0map\n"
);
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D505_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D505_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core for-each ##.loop.505) (bruijn ##.loop.505 2 0) (bruijn ##.k.1366 1 0) (##inline ##vcore.cdr (bruijn ##.xs.506 1 1)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0for__each_V10_Dloop_D505(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D505, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.xs.506 0 1))) ((bruijn ##.f.503 2 1) (close _V50_V0vanity_V0core_V0for__each_V10_Dloop_D505_V0k68) (##inline ##vcore.car (bruijn ##.xs.506 0 1))) ((bruijn ##.k.1366 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineNullP2(runtime,
        _var1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D505_V0k68, self)))),
      VInlineCar2(runtime,
        _var1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D510_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D510_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1381 1 0) ((bruijn ##.k.1382 0 0) (bruijn ##.p.1381 1 0)) ((bruijn ##.k.1382 0 0) (##inline ##vcore.null? (bruijn ##.ys.512 2 2))))
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
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D510_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D510_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core for-each ##.loop.510) (bruijn ##.loop.510 4 0) (bruijn ##.k.1373 3 0) (##inline ##vcore.cdr (bruijn ##.xs.511 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.512 3 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0for__each_V10_Dloop_D510(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D510_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D510_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1380 0 0)) ((bruijn ##.f.507 4 1) (close _V50_V0vanity_V0core_V0for__each_V10_Dloop_D510_V0k72) (##inline ##vcore.car (bruijn ##.xs.511 2 1)) (##inline ##vcore.car (bruijn ##.ys.512 2 2))) ((bruijn ##.k.1373 2 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D510_V0k72, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D510_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D510_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0core_V0for__each_V10_Dloop_D510_V0k70) (close _V50_V0vanity_V0core_V0for__each_V10_Dloop_D510_V0k71))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D510_V0k70, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D510_V0k71, self)))));
}
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D510(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D510, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0core_V0for__each_V10_Dloop_D510_V0k69) (##inline ##vcore.null? (bruijn ##.xs.511 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D510_V0k69, self)), 1,
      VInlineNullP2(runtime,
        _var1));
}
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1396 0 0) ((bruijn ##.k.1395 1 0) (bruijn ##.p.1396 0 0)) ((bruijn ##.k.1395 1 0) (##inline ##vcore.null? (bruijn ##.zs.520 3 3))))
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
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1394 1 0) ((bruijn ##.k.1395 0 0) (bruijn ##.p.1394 1 0)) ((close _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k75) (##inline ##vcore.null? (bruijn ##.ys.519 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k75, self)), 1,
      VInlineNullP2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core for-each ##.loop.517) (bruijn ##.loop.517 4 0) (bruijn ##.k.1384 3 0) (##inline ##vcore.cdr (bruijn ##.xs.518 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.519 3 2)) (##inline ##vcore.cdr (bruijn ##.zs.520 3 3)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[3]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1393 0 0)) ((bruijn ##.f.513 4 1) (close _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k77) (##inline ##vcore.car (bruijn ##.xs.518 2 1)) (##inline ##vcore.car (bruijn ##.ys.519 2 2)) (##inline ##vcore.car (bruijn ##.zs.520 2 3))) ((bruijn ##.k.1384 2 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k77, self)))),
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
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k74) (close _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k76))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k74, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k76, self)))));
}
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517, got ~D~N"
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
  // ((close _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k73) (##inline ##vcore.null? (bruijn ##.xs.518 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D517_V0k73, self)), 1,
      VInlineNullP2(runtime,
        _var1));
}
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core for-each ##.loop.523) (bruijn ##.loop.523 6 0) (bruijn ##.k.1398 5 0) (bruijn ##.x.1401 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core map) (bruijn ##.map.238 7 75) (close _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k82) (##intrinsic ##vcore.cdr) (bruijn ##.lsts.524 4 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 75));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k82, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcdr;
    VWORD _arg2 = 
      statics->up->up->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0map(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k81) (bruijn ##.f.521 5 1) (bruijn ##.x.1402 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k81, self)))),
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1403 0 0)) (##qualified-call (vanity core map) (bruijn ##.map.238 5 75) (close _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k80) (##intrinsic ##vcore.car) (bruijn ##.lsts.524 2 1)) ((bruijn ##.k.1398 2 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 75));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k80, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcar;
    VWORD _arg2 = 
      statics->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0map(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core memq) (bruijn ##.memq.243 4 80) (close _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k79) #t (bruijn ##.x.1404 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[80]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k79, self))));
    VWORD _arg1 = 
      VEncodeBool(true);
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0memq(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity core map) (bruijn ##.map.238 3 75) (close _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k78) (##intrinsic ##vcore.null?) (bruijn ##.lsts.524 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[75]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D523_V0k78, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dnull_Q;
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0map(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0for__each(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0for__each" #t (3 (letrec 1 ((close "_V50_V0vanity_V0core_V0for__each_V10_Dloop_D505")) (##qualified-call (vanity core for-each ##.loop.505) (bruijn ##.loop.505 0 0) (bruijn ##.k.1365 1 0) (bruijn ##.xs.504 1 2)))) (4 (letrec 1 ((close "_V50_V0vanity_V0core_V0for__each_V10_Dloop_D510")) (##qualified-call (vanity core for-each ##.loop.510) (bruijn ##.loop.510 0 0) (bruijn ##.k.1372 1 0) (bruijn ##.xs.508 1 2) (bruijn ##.ys.509 1 3)))) (5 (letrec 1 ((close "_V50_V0vanity_V0core_V0for__each_V10_Dloop_D517")) (##qualified-call (vanity core for-each ##.loop.517) (bruijn ##.loop.517 0 0) (bruijn ##.k.1383 1 0) (bruijn ##.xs.514 1 2) (bruijn ##.ys.515 1 3) (bruijn ##.zs.516 1 4)))) (2 + (letrec 1 ((close "_V50_V0vanity_V0core_V0for__each_V10_Dloop_D523")) (##qualified-call (vanity core for-each ##.loop.523) (bruijn ##.loop.523 0 0) (bruijn ##.k.1397 1 0) (bruijn ##.lsts.522 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0for__each, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0for__each_V10_Dloop_D505")) (##qualified-call (vanity core for-each ##.loop.505) (bruijn ##.loop.505 0 0) (bruijn ##.k.1365 1 0) (bruijn ##.xs.504 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D505, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0for__each_V10_Dloop_D505(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0for__each_V10_Dloop_D510")) (##qualified-call (vanity core for-each ##.loop.510) (bruijn ##.loop.510 0 0) (bruijn ##.k.1372 1 0) (bruijn ##.xs.508 1 2) (bruijn ##.ys.509 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D510, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0for__each_V10_Dloop_D510(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0for__each_V10_Dloop_D517")) (##qualified-call (vanity core for-each ##.loop.517) (bruijn ##.loop.517 0 0) (bruijn ##.k.1383 1 0) (bruijn ##.xs.514 1 2) (bruijn ##.ys.515 1 3) (bruijn ##.zs.516 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D517, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      statics->vars[3];
    VWORD _arg3 = 
      statics->vars[4];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0for__each_V10_Dloop_D517(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0core_V0for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0for__each_V10_Dloop_D523")) (##qualified-call (vanity core for-each ##.loop.523) (bruijn ##.loop.523 0 0) (bruijn ##.k.1397 1 0) (bruijn ##.lsts.522 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each_V10_Dloop_D523, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0for__each_V10_Dloop_D523(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0for__each(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0for__each, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0for__each\n"
"_V50_V0vanity_V0core_V0for__each:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0core_V0for__each\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V50_V0vanity_V0core_V0for__each\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V50_V0vanity_V0core_V0for__each\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V50_V0vanity_V0core_V0for__each\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0for__each\n"
);
void _V50_V0vanity_V0core_V0fold__right_V10_Dloop_D528_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0fold__right_V10_Dloop_D528_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kons.525 3 1) (bruijn ##.k.1406 1 0) (##inline ##vcore.car (bruijn ##.ks.529 1 1)) (bruijn ##.x.1409 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
void _V50_V0vanity_V0core_V0fold__right_V10_Dloop_D528(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0fold__right_V10_Dloop_D528, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.ks.529 0 1)) ((bruijn ##.k.1406 0 0) (bruijn ##.knil.526 2 2)) (##qualified-call (vanity core fold-right ##.loop.528) (bruijn ##.loop.528 1 0) (close _V50_V0vanity_V0core_V0fold__right_V10_Dloop_D528_V0k83) (##inline ##vcore.cdr (bruijn ##.ks.529 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[2]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0fold__right_V10_Dloop_D528_V0k83, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0fold__right_V10_Dloop_D528(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0core_V0fold__right(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0fold__right, got ~D~N"
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
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0fold__right_V10_Dloop_D528")) (##qualified-call (vanity core fold-right ##.loop.528) (bruijn ##.loop.528 0 0) (bruijn ##.k.1405 1 0) (bruijn ##.ks.527 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0fold__right_V10_Dloop_D528, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0fold__right_V10_Dloop_D528(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0append_V10_Dloop_D533_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0append_V10_Dloop_D533_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1414 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.a.534 1 1)) (bruijn ##.x.1417 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
void _V50_V0vanity_V0core_V0append_V10_Dloop_D533(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0append_V10_Dloop_D533, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.a.534 0 1)) ((bruijn ##.k.1414 0 0) (bruijn ##.b.532 2 2)) (##qualified-call (vanity core append ##.loop.533) (bruijn ##.loop.533 1 0) (close _V50_V0vanity_V0core_V0append_V10_Dloop_D533_V0k84) (##inline ##vcore.cdr (bruijn ##.a.534 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[2]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0append_V10_Dloop_D533_V0k84, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0append_V10_Dloop_D533(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
static void _V10_Dappend_D241_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_D241_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core append) (bruijn ##.append.241 2 78) (bruijn ##.k.1419 1 0) (bruijn ##.a.535 1 1) (bruijn ##.x.1420 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[78]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0append(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V10_Dappend_D241_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_D241_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core append) (bruijn ##.append.241 3 78) (bruijn ##.k.1421 2 0) (bruijn ##.a.538 2 1) (bruijn ##.x.1422 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[78]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0append(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V10_Dappend_D241_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_D241_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core append) (bruijn ##.append.241 2 78) (close _V10_Dappend_D241_V0k87) (bruijn ##.b.539 1 2) (bruijn ##.x.1423 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[78]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_D241_V0k87, self))));
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0append(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0append(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0append" #t (1 ((bruijn ##.k.1411 0 0) '())) (2 ((bruijn ##.k.1412 0 0) (bruijn ##.a.530 0 1))) (3 (letrec 1 ((close "_V50_V0vanity_V0core_V0append_V10_Dloop_D533")) (##qualified-call (vanity core append ##.loop.533) (bruijn ##.loop.533 0 0) (bruijn ##.k.1413 1 0) (bruijn ##.a.531 1 1)))) (4 (##qualified-call (vanity core append) (bruijn ##.append.241 1 78) (close _V10_Dappend_D241_V0k85) (bruijn ##.b.536 0 2) (bruijn ##.c.537 0 3))) (5 (##qualified-call (vanity core append) (bruijn ##.append.241 1 78) (close _V10_Dappend_D241_V0k86) (bruijn ##.c.540 0 3) (bruijn ##.d.541 0 4))) (1 + (##qualified-call (vanity core fold-right) (bruijn ##.fold-right.240 1 77) (bruijn ##.k.1424 0 0) (bruijn ##.append.241 1 78) '() (bruijn ##.lsts.542 0 1))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0append, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // ((bruijn ##.k.1411 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1412 0 0) (bruijn ##.a.530 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0append_V10_Dloop_D533")) (##qualified-call (vanity core append ##.loop.533) (bruijn ##.loop.533 0 0) (bruijn ##.k.1413 1 0) (bruijn ##.a.531 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0append_V10_Dloop_D533, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0append_V10_Dloop_D533(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0core_V0append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##qualified-call (vanity core append) (bruijn ##.append.241 1 78) (close _V10_Dappend_D241_V0k85) (bruijn ##.b.536 0 2) (bruijn ##.c.537 0 3))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[78]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_D241_V0k85, self))));
    VWORD _arg1 = 
      _var2;
    VWORD _arg2 = 
      _var3;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0append(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case4__V50_V0vanity_V0core_V0append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##qualified-call (vanity core append) (bruijn ##.append.241 1 78) (close _V10_Dappend_D241_V0k86) (bruijn ##.c.540 0 3) (bruijn ##.d.541 0 4))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[78]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_D241_V0k86, self))));
    VWORD _arg1 = 
      _var3;
    VWORD _arg2 = 
      _var4;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0append(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case5__V50_V0vanity_V0core_V0append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##qualified-call (vanity core fold-right) (bruijn ##.fold-right.240 1 77) (bruijn ##.k.1424 0 0) (bruijn ##.append.241 1 78) '() (bruijn ##.lsts.542 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[77]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[78];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      _varargs;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0fold__right(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0core_V0append(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0append, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0append\n"
"_V50_V0vanity_V0core_V0append:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V50_V0vanity_V0core_V0append\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V50_V0vanity_V0core_V0append\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V50_V0vanity_V0core_V0append\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V50_V0vanity_V0core_V0append\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V50_V0vanity_V0core_V0append\n"
"    cmp " ARGC_REG ", 1\n"
"    jge _V20Case5__V50_V0vanity_V0core_V0append\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0append\n"
);
void _V50_V0vanity_V0core_V0reverse_V10_Diter_D544(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0reverse_V10_Diter_D544, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (##inline ##vcore.null? (bruijn ##.rest.546 0 2)) ((bruijn ##.k.1426 0 0) (bruijn ##.acc.545 0 1)) (##qualified-call (vanity core reverse ##.iter.544) (bruijn ##.iter.544 1 0) (bruijn ##.k.1426 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.rest.546 0 2)) (bruijn ##.acc.545 0 1)) (##inline ##vcore.cdr (bruijn ##.rest.546 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var2),
        _var1);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        _var2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0reverse_V10_Diter_D544(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0core_V0reverse(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0reverse, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0reverse_V10_Diter_D544")) (##qualified-call (vanity core reverse ##.iter.544) (bruijn ##.iter.544 0 0) (bruijn ##.k.1425 1 0) '() (bruijn ##.lst.543 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0reverse_V10_Diter_D544, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      statics->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0reverse_V10_Diter_D544(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0memq(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0memq, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (##inline ##vcore.null? (bruijn ##.lst.548 0 2)) ((bruijn ##.k.1431 0 0) #f) (if (##inline ##vcore.eq? (bruijn ##.x.547 0 1) (##inline ##vcore.car (bruijn ##.lst.548 0 2))) ((bruijn ##.k.1431 0 0) (bruijn ##.lst.548 0 2)) (##qualified-call (vanity core memq) (bruijn ##.memq.243 1 80) (bruijn ##.k.1431 0 0) (bruijn ##.x.547 0 1) (##inline ##vcore.cdr (bruijn ##.lst.548 0 2)))))
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
  {
    VClosure * _closure = VDecodeClosure(statics->vars[80]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        _var2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0memq(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
}
void _V50_V0vanity_V0core_V0memv_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0memv_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1438 0 0) ((bruijn ##.k.1436 1 0) (bruijn ##.lst.550 1 2)) (##qualified-call (vanity core memv) (bruijn ##.memv.244 2 81) (bruijn ##.k.1436 1 0) (bruijn ##.x.549 1 1) (##inline ##vcore.cdr (bruijn ##.lst.550 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[81]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0memv(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0core_V0memv(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0memv, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.lst.550 0 2)) ((bruijn ##.k.1436 0 0) #f) (##vcore.eqv? (close _V50_V0vanity_V0core_V0memv_V0k88) (bruijn ##.x.549 0 1) (##inline ##vcore.car (bruijn ##.lst.550 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0memv_V0k88, self)))),
      _var1,
      VInlineCar2(runtime,
        _var2));
}
}
static void _V10_Dmember_D245_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmember_D245_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1444 0 0) ((bruijn ##.k.1442 1 0) (bruijn ##.lst.554 1 2)) (##qualified-call (vanity core member) (bruijn ##.member.245 2 82) (bruijn ##.k.1442 1 0) (bruijn ##.x.553 1 1) (##inline ##vcore.cdr (bruijn ##.lst.554 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[82]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0member(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0member(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0member" #t (3 (##qualified-call (vanity core member) (bruijn ##.member.245 1 82) (bruijn ##.k.1441 0 0) (bruijn ##.x.551 0 1) (bruijn ##.lst.552 0 2) (bruijn ##.equal?.174 1 11))) (4 (if (##inline ##vcore.null? (bruijn ##.lst.554 0 2)) ((bruijn ##.k.1442 0 0) #f) ((bruijn ##.=.555 0 3) (close _V10_Dmember_D245_V0k89) (bruijn ##.x.553 0 1) (##inline ##vcore.car (bruijn ##.lst.554 0 2))))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0member, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0member(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##qualified-call (vanity core member) (bruijn ##.member.245 1 82) (bruijn ##.k.1441 0 0) (bruijn ##.x.551 0 1) (bruijn ##.lst.552 0 2) (bruijn ##.equal?.174 1 11))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[82]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      statics->vars[11];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0member(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0member(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.lst.554 0 2)) ((bruijn ##.k.1442 0 0) #f) ((bruijn ##.=.555 0 3) (close _V10_Dmember_D245_V0k89) (bruijn ##.x.553 0 1) (##inline ##vcore.car (bruijn ##.lst.554 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var3), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmember_D245_V0k89, self)))),
      _var1,
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0core_V0member(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0member, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0member\n"
"_V50_V0vanity_V0core_V0member:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0core_V0member\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V50_V0vanity_V0core_V0member\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0member\n"
);
void _V50_V0vanity_V0core_V0assq_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0assq_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (bruijn ##.x.556 1 1) (bruijn ##.x.1451 0 0)) ((bruijn ##.k.1447 1 0) (##inline ##vcore.car (bruijn ##.alst.557 1 2))) (##qualified-call (vanity core assq) (bruijn ##.assq.246 2 83) (bruijn ##.k.1447 1 0) (bruijn ##.x.556 1 1) (##inline ##vcore.cdr (bruijn ##.alst.557 1 2))))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[1],
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCar2(runtime,
        statics->vars[2]));
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[83]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0assq(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0core_V0assq(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0assq, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.alst.557 0 2)) ((bruijn ##.k.1447 0 0) #f) (##qualified-call (vanity core caar) (bruijn ##.caar.202 1 39) (close _V50_V0vanity_V0core_V0assq_V0k90) (bruijn ##.alst.557 0 2)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[39]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0assq_V0k90, self))));
    VWORD _arg1 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0caar(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0core_V0assv_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0assv_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1454 0 0) ((bruijn ##.k.1452 2 0) (##inline ##vcore.car (bruijn ##.alst.559 2 2))) (##qualified-call (vanity core assv) (bruijn ##.assv.247 3 84) (bruijn ##.k.1452 2 0) (bruijn ##.x.558 2 1) (##inline ##vcore.cdr (bruijn ##.alst.559 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[84]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0assv(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0core_V0assv_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0assv_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V50_V0vanity_V0core_V0assv_V0k92) (bruijn ##.x.558 1 1) (bruijn ##.x.1456 0 0))
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0assv_V0k92, self)))),
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0core_V0assv(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0assv, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.alst.559 0 2)) ((bruijn ##.k.1452 0 0) #f) (##qualified-call (vanity core caar) (bruijn ##.caar.202 1 39) (close _V50_V0vanity_V0core_V0assv_V0k91) (bruijn ##.alst.559 0 2)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[39]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0assv_V0k91, self))));
    VWORD _arg1 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0caar(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
static void _V10_Dassoc_D248_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc_D248_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1460 0 0) ((bruijn ##.k.1458 2 0) (##inline ##vcore.car (bruijn ##.alst.563 2 2))) (##qualified-call (vanity core assoc) (bruijn ##.assoc.248 3 85) (bruijn ##.k.1458 2 0) (bruijn ##.x.562 2 1) (##inline ##vcore.cdr (bruijn ##.alst.563 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[85]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0assoc(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
static void _V10_Dassoc_D248_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc_D248_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.=.564 1 3) (close _V10_Dassoc_D248_V0k94) (bruijn ##.x.562 1 1) (bruijn ##.x.1462 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[3]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassoc_D248_V0k94, self)))),
      statics->vars[1],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0assoc(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0assoc" #t (3 (##qualified-call (vanity core assoc) (bruijn ##.assoc.248 1 85) (bruijn ##.k.1457 0 0) (bruijn ##.x.560 0 1) (bruijn ##.alst.561 0 2) (bruijn ##.equal?.174 1 11))) (4 (if (##inline ##vcore.null? (bruijn ##.alst.563 0 2)) ((bruijn ##.k.1458 0 0) #f) (##qualified-call (vanity core caar) (bruijn ##.caar.202 1 39) (close _V10_Dassoc_D248_V0k93) (bruijn ##.alst.563 0 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0assoc, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0assoc(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##qualified-call (vanity core assoc) (bruijn ##.assoc.248 1 85) (bruijn ##.k.1457 0 0) (bruijn ##.x.560 0 1) (bruijn ##.alst.561 0 2) (bruijn ##.equal?.174 1 11))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[85]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      statics->vars[11];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0assoc(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0assoc(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.alst.563 0 2)) ((bruijn ##.k.1458 0 0) #f) (##qualified-call (vanity core caar) (bruijn ##.caar.202 1 39) (close _V10_Dassoc_D248_V0k93) (bruijn ##.alst.563 0 2)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[39]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassoc_D248_V0k93, self))));
    VWORD _arg1 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0caar(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0core_V0assoc(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0assoc, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0assoc\n"
"_V50_V0vanity_V0core_V0assoc:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0core_V0assoc\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V50_V0vanity_V0core_V0assoc\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0assoc\n"
);
void _V50_V0vanity_V0core_V0num__pairs_V10_Dloop_D566(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0num__pairs_V10_Dloop_D566, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.lst.568 0 2)) (basic-block 1 1 (##.reg.2766) ((##vcore.+ (bruijn ##.n.567 1 1) 1)) (##qualified-call (vanity core num-pairs ##.loop.566) (bruijn ##.loop.566 2 0) (bruijn ##.k.1464 1 0) (bruijn ##.reg.2766 0 0) (##inline ##vcore.cdr (bruijn ##.lst.568 1 2)))) ((bruijn ##.k.1464 0 0) (bruijn ##.n.567 0 1)))
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0num__pairs_V10_Dloop_D566(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
}
void _V50_V0vanity_V0core_V0num__pairs(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0num__pairs, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0num__pairs_V10_Dloop_D566")) (##qualified-call (vanity core num-pairs ##.loop.566) (bruijn ##.loop.566 0 0) (bruijn ##.k.1463 1 0) 0 (bruijn ##.lst.565 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0num__pairs_V10_Dloop_D566, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      statics->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0num__pairs_V10_Dloop_D566(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0split__at__right_V10_Dloop_D571_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0split__at__right_V10_Dloop_D571_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2767) ((##vcore.- (bruijn ##.len.573 2 2) 1)) (##qualified-call (vanity core split-at-right ##.loop.571) (bruijn ##.loop.571 3 0) (bruijn ##.k.1471 1 0) (##inline ##vcore.cdr (bruijn ##.lst.572 2 1)) (bruijn ##.reg.2767 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0split__at__right_V10_Dloop_D571(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0split__at__right_V10_Dloop_D571_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0split__at__right_V10_Dloop_D571_V0lambda3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##qualified-call (vanity core values) (bruijn ##.values.305 4 142) (bruijn ##.k.1474 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.572 1 1)) (bruijn ##.d.574 0 1)) (bruijn ##.t.575 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[142]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var1);
    VWORD _arg2 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0values(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0split__at__right_V10_Dloop_D571(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0split__at__right_V10_Dloop_D571, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.len.573 0 2) (bruijn ##.n.570 2 2)) (##qualified-call (vanity core values) (bruijn ##.values.305 3 142) (bruijn ##.k.1469 0 0) '() (bruijn ##.lst.572 0 1)) (##vcore.call-with-values (bruijn ##.k.1469 0 0) (close _V50_V0vanity_V0core_V0split__at__right_V10_Dloop_D571_V0lambda2) (close _V50_V0vanity_V0core_V0split__at__right_V10_Dloop_D571_V0lambda3)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var2,
        statics->up->vars[2]))) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[142]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0values(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0split__at__right_V10_Dloop_D571_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0split__at__right_V10_Dloop_D571_V0lambda3, self)))));
}
}
void _V50_V0vanity_V0core_V0split__at__right_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0split__at__right_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core split-at-right ##.loop.571) (bruijn ##.loop.571 1 0) (bruijn ##.k.1468 2 0) (bruijn ##.lst.569 2 1) (bruijn ##.x.1477 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0split__at__right_V10_Dloop_D571(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0split__at__right(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0split__at__right, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0split__at__right_V10_Dloop_D571")) (##qualified-call (vanity core num-pairs) (bruijn ##.num-pairs.249 2 86) (close _V50_V0vanity_V0core_V0split__at__right_V0k95) (bruijn ##.lst.569 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0split__at__right_V10_Dloop_D571, self))));
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[86]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0split__at__right_V0k95, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0num__pairs(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0list___Gstring_V10_Dloop_D578(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0list___Gstring_V10_Dloop_D578, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.lst.579 0 1)) ((bruijn ##.k.1479 0 0) (bruijn ##.str.577 2 0)) (basic-block 2 2 (##.reg.2768 ##.reg.2769) ((##vcore.string-set! (bruijn ##.str.577 3 0) (bruijn ##.i.580 1 2) (##inline ##vcore.car (bruijn ##.lst.579 1 1))) (##vcore.+ (bruijn ##.i.580 1 2) 1)) (##qualified-call (vanity core list->string ##.loop.578) (bruijn ##.loop.578 2 0) (bruijn ##.k.1479 1 0) (##inline ##vcore.cdr (bruijn ##.lst.579 1 1)) (bruijn ##.reg.2769 0 1))))
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      self->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0list___Gstring_V10_Dloop_D578(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0core_V0list___Gstring_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0list___Gstring_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0list___Gstring_V10_Dloop_D578")) (##qualified-call (vanity core list->string ##.loop.578) (bruijn ##.loop.578 0 0) (bruijn ##.k.1478 3 0) (bruijn ##.lst.576 3 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0list___Gstring_V10_Dloop_D578, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0list___Gstring_V10_Dloop_D578(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0list___Gstring_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0list___Gstring_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-string (close _V50_V0vanity_V0core_V0list___Gstring_V0k97) (bruijn ##.x.1485 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0list___Gstring_V0k97, self)))),
      _var0);
}
void _V50_V0vanity_V0core_V0list___Gstring(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0list___Gstring, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity core length) (bruijn ##.length.232 1 69) (close _V50_V0vanity_V0core_V0list___Gstring_V0k96) (bruijn ##.lst.576 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[69]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0list___Gstring_V0k96, self))));
    VWORD _arg1 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0length(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0core_V0string___Glist_V10_Dloop_D582(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0string___Glist_V10_Dloop_D582, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.i.583 0 1) -1) ((bruijn ##.k.1487 0 0) (bruijn ##.acc.584 0 2)) (basic-block 2 2 (##.reg.2770 ##.reg.2771) ((##vcore.- (bruijn ##.i.583 1 1) 1) (##vcore.string-ref (bruijn ##.str.581 3 1) (bruijn ##.i.583 1 1))) (##qualified-call (vanity core string->list ##.loop.582) (bruijn ##.loop.582 2 0) (bruijn ##.k.1487 1 0) (bruijn ##.reg.2770 0 0) (##inline ##vcore.cons (bruijn ##.reg.2771 0 1) (bruijn ##.acc.584 1 2)))))
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VInlineCons2(runtime,
        self->vars[1],
        statics->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0string___Glist_V10_Dloop_D582(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0core_V0string___Glist(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0string___Glist, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0string___Glist_V10_Dloop_D582")) (basic-block 2 2 (##.reg.2772 ##.reg.2773) ((##vcore.string-length (bruijn ##.str.581 2 1)) (##vcore.- (bruijn ##.reg.2772 0 0) 1)) (##qualified-call (vanity core string->list ##.loop.582) (bruijn ##.loop.582 1 0) (bruijn ##.k.1486 2 0) (bruijn ##.reg.2773 0 1) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0string___Glist_V10_Dloop_D582, self))));
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
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0string___Glist_V10_Dloop_D582(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
static void _V10_Dstring__append_D253_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D253_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1496 5 0) (bruijn ##.str.589 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dstring__append_D253_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D253_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2777) ((##vcore.string-length (bruijn ##.a.586 4 1))) (##vcore.string-copy! (close _V10_Dstring__append_D253_V0k100) (bruijn ##.str.589 2 0) (bruijn ##.reg.2777 0 0) (bruijn ##.b.587 4 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dstring__append_D253_V0k100, self)))),
      statics->up->vars[0],
      self->vars[0],
      statics->up->up->up->vars[2]);
    }
}
static void _V10_Dstring__append_D253_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D253_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string-copy! (close _V10_Dstring__append_D253_V0k99) (bruijn ##.str.589 0 0) 0 (bruijn ##.a.586 2 1))
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dstring__append_D253_V0k99, self)))),
      _var0,
      VEncodeInt(0l),
      statics->up->vars[1]);
}
static void _V10_Dstring__append_D253_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D253_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1502 7 0) (bruijn ##.str.594 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dstring__append_D253_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D253_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.reg.2783 ##.reg.2784 ##.reg.2785) ((##vcore.string-length (bruijn ##.a.590 6 1)) (##vcore.string-length (bruijn ##.b.591 6 2)) (##vcore.+ (bruijn ##.reg.2783 0 0) (bruijn ##.reg.2784 0 1))) (##vcore.string-copy! (close _V10_Dstring__append_D253_V0k104) (bruijn ##.str.594 4 0) (bruijn ##.reg.2785 0 2) (bruijn ##.c.592 6 3)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dstring__append_D253_V0k104, self)))),
      statics->up->up->up->vars[0],
      self->vars[2],
      VGetArg(statics, 6-1, 3));
    }
}
static void _V10_Dstring__append_D253_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D253_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2782) ((##vcore.string-length (bruijn ##.a.590 4 1))) (##vcore.string-copy! (close _V10_Dstring__append_D253_V0k103) (bruijn ##.str.594 2 0) (bruijn ##.reg.2782 0 0) (bruijn ##.b.591 4 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dstring__append_D253_V0k103, self)))),
      statics->up->vars[0],
      self->vars[0],
      statics->up->up->up->vars[2]);
    }
}
static void _V10_Dstring__append_D253_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D253_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string-copy! (close _V10_Dstring__append_D253_V0k102) (bruijn ##.str.594 0 0) 0 (bruijn ##.a.590 2 1))
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dstring__append_D253_V0k102, self)))),
      _var0,
      VEncodeInt(0l),
      statics->up->vars[1]);
}
static void _V10_Dstring__append_D253_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D253_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1513 9 0) (bruijn ##.str.600 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dstring__append_D253_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D253_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.reg.2795 ##.reg.2796 ##.reg.2797 ##.reg.2798) ((##vcore.string-length (bruijn ##.a.595 8 1)) (##vcore.string-length (bruijn ##.b.596 8 2)) (##vcore.string-length (bruijn ##.c.597 8 3)) (##vcore.+ (bruijn ##.reg.2795 0 0) (bruijn ##.reg.2796 0 1) (bruijn ##.reg.2797 0 2))) (##vcore.string-copy! (close _V10_Dstring__append_D253_V0k109) (bruijn ##.str.600 6 0) (bruijn ##.reg.2798 0 3) (bruijn ##.d.598 8 4)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dstring__append_D253_V0k109, self)))),
      VGetArg(statics, 6-1, 0),
      self->vars[3],
      VGetArg(statics, 8-1, 4));
    }
}
static void _V10_Dstring__append_D253_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D253_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.reg.2792 ##.reg.2793 ##.reg.2794) ((##vcore.string-length (bruijn ##.a.595 6 1)) (##vcore.string-length (bruijn ##.b.596 6 2)) (##vcore.+ (bruijn ##.reg.2792 0 0) (bruijn ##.reg.2793 0 1))) (##vcore.string-copy! (close _V10_Dstring__append_D253_V0k108) (bruijn ##.str.600 4 0) (bruijn ##.reg.2794 0 2) (bruijn ##.c.597 6 3)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dstring__append_D253_V0k108, self)))),
      statics->up->up->up->vars[0],
      self->vars[2],
      VGetArg(statics, 6-1, 3));
    }
}
static void _V10_Dstring__append_D253_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D253_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2791) ((##vcore.string-length (bruijn ##.a.595 4 1))) (##vcore.string-copy! (close _V10_Dstring__append_D253_V0k107) (bruijn ##.str.600 2 0) (bruijn ##.reg.2791 0 0) (bruijn ##.b.596 4 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dstring__append_D253_V0k107, self)))),
      statics->up->vars[0],
      self->vars[0],
      statics->up->up->up->vars[2]);
    }
}
static void _V10_Dstring__append_D253_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D253_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string-copy! (close _V10_Dstring__append_D253_V0k106) (bruijn ##.str.600 0 0) 0 (bruijn ##.a.595 2 1))
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dstring__append_D253_V0k106, self)))),
      _var0,
      VEncodeInt(0l),
      statics->up->vars[1]);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0string__append(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0string__append" #t (1 (##vcore.substring (bruijn ##.k.1494 0 0) (##string ##.string.2985))) (2 (##vcore.substring (bruijn ##.k.1495 0 0) (bruijn ##.a.585 0 1))) (3 (basic-block 3 3 (##.reg.2774 ##.reg.2775 ##.reg.2776) ((##vcore.string-length (bruijn ##.a.586 1 1)) (##vcore.string-length (bruijn ##.b.587 1 2)) (##vcore.+ (bruijn ##.reg.2774 0 0) (bruijn ##.reg.2775 0 1))) (##vcore.make-string (close _V10_Dstring__append_D253_V0k98) (bruijn ##.reg.2776 0 2)))) (4 (basic-block 4 4 (##.reg.2778 ##.reg.2779 ##.reg.2780 ##.reg.2781) ((##vcore.string-length (bruijn ##.a.590 1 1)) (##vcore.string-length (bruijn ##.b.591 1 2)) (##vcore.string-length (bruijn ##.c.592 1 3)) (##vcore.+ (bruijn ##.reg.2778 0 0) (bruijn ##.reg.2779 0 1) (bruijn ##.reg.2780 0 2))) (##vcore.make-string (close _V10_Dstring__append_D253_V0k101) (bruijn ##.reg.2781 0 3)))) (5 (basic-block 5 5 (##.reg.2786 ##.reg.2787 ##.reg.2788 ##.reg.2789 ##.reg.2790) ((##vcore.string-length (bruijn ##.a.595 1 1)) (##vcore.string-length (bruijn ##.b.596 1 2)) (##vcore.string-length (bruijn ##.c.597 1 3)) (##vcore.string-length (bruijn ##.d.598 1 4)) (##vcore.+ (bruijn ##.reg.2786 0 0) (bruijn ##.reg.2787 0 1) (bruijn ##.reg.2788 0 2) (bruijn ##.reg.2789 0 3))) (##vcore.make-string (close _V10_Dstring__append_D253_V0k105) (bruijn ##.reg.2790 0 4)))) (1 + (##qualified-call (vanity core fold-right) (bruijn ##.fold-right.240 1 77) (bruijn ##.k.1530 0 0) (bruijn ##.string-append.253 1 90) (##string ##.string.2985) (bruijn ##.strs.601 0 1))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0string__append, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0string__append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // (##vcore.substring (bruijn ##.k.1494 0 0) (##string ##.string.2985))
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2985.sym, VPOINTER_OTHER));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0string__append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.substring (bruijn ##.k.1495 0 0) (bruijn ##.a.585 0 1))
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 2,
      _var0,
      _var1);
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0string__append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.reg.2774 ##.reg.2775 ##.reg.2776) ((##vcore.string-length (bruijn ##.a.586 1 1)) (##vcore.string-length (bruijn ##.b.587 1 2)) (##vcore.+ (bruijn ##.reg.2774 0 0) (bruijn ##.reg.2775 0 1))) (##vcore.make-string (close _V10_Dstring__append_D253_V0k98) (bruijn ##.reg.2776 0 2)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dstring__append_D253_V0k98, self)))),
      self->vars[2]);
    }
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0core_V0string__append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 4 4 (##.reg.2778 ##.reg.2779 ##.reg.2780 ##.reg.2781) ((##vcore.string-length (bruijn ##.a.590 1 1)) (##vcore.string-length (bruijn ##.b.591 1 2)) (##vcore.string-length (bruijn ##.c.592 1 3)) (##vcore.+ (bruijn ##.reg.2778 0 0) (bruijn ##.reg.2779 0 1) (bruijn ##.reg.2780 0 2))) (##vcore.make-string (close _V10_Dstring__append_D253_V0k101) (bruijn ##.reg.2781 0 3)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dstring__append_D253_V0k101, self)))),
      self->vars[3]);
    }
}
__attribute__((used)) static void _V20Case4__V50_V0vanity_V0core_V0string__append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 5 5 (##.reg.2786 ##.reg.2787 ##.reg.2788 ##.reg.2789 ##.reg.2790) ((##vcore.string-length (bruijn ##.a.595 1 1)) (##vcore.string-length (bruijn ##.b.596 1 2)) (##vcore.string-length (bruijn ##.c.597 1 3)) (##vcore.string-length (bruijn ##.d.598 1 4)) (##vcore.+ (bruijn ##.reg.2786 0 0) (bruijn ##.reg.2787 0 1) (bruijn ##.reg.2788 0 2) (bruijn ##.reg.2789 0 3))) (##vcore.make-string (close _V10_Dstring__append_D253_V0k105) (bruijn ##.reg.2790 0 4)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dstring__append_D253_V0k105, self)))),
      self->vars[4]);
    }
}
__attribute__((used)) static void _V20Case5__V50_V0vanity_V0core_V0string__append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##qualified-call (vanity core fold-right) (bruijn ##.fold-right.240 1 77) (bruijn ##.k.1530 0 0) (bruijn ##.string-append.253 1 90) (##string ##.string.2985) (bruijn ##.strs.601 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[77]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[90];
    VWORD _arg2 = 
      VEncodePointer(&_V10_Dstring_D2985.sym, VPOINTER_OTHER);
    VWORD _arg3 = 
      _varargs;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0fold__right(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0core_V0string__append(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0string__append, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0string__append\n"
"_V50_V0vanity_V0core_V0string__append:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V50_V0vanity_V0core_V0string__append\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V50_V0vanity_V0core_V0string__append\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V50_V0vanity_V0core_V0string__append\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V50_V0vanity_V0core_V0string__append\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V50_V0vanity_V0core_V0string__append\n"
"    cmp " ARGC_REG ", 1\n"
"    jge _V20Case5__V50_V0vanity_V0core_V0string__append\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0string__append\n"
);
void _V50_V0vanity_V0core_V0f32vector___Glist_V10_Dloop_D604(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0f32vector___Glist_V10_Dloop_D604, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2800) ((##vcore.< (bruijn ##.i.606 1 2) 0)) (if (bruijn ##.reg.2800 0 0) ((bruijn ##.k.1532 1 0) (bruijn ##.acc.605 1 1)) (basic-block 2 2 (##.reg.2801 ##.reg.2802) ((##vcore.f32vector-ref (bruijn ##.vec.602 5 1) (bruijn ##.i.606 2 2)) (##vcore.- (bruijn ##.i.606 2 2) 1)) (##qualified-call (vanity core f32vector->list ##.loop.604) (bruijn ##.loop.604 3 0) (bruijn ##.k.1532 2 0) (##inline ##vcore.cons (bruijn ##.reg.2801 0 0) (bruijn ##.acc.605 2 1)) (bruijn ##.reg.2802 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[2],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCons2(runtime,
        self->vars[0],
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0f32vector___Glist_V10_Dloop_D604(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0core_V0f32vector___Glist(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0f32vector___Glist, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2799) ((##vcore.f32vector-length (bruijn ##.vec.602 1 1))) (letrec 1 ((close "_V50_V0vanity_V0core_V0f32vector___Glist_V10_Dloop_D604")) (basic-block 1 1 (##.reg.2803) ((##vcore.- (bruijn ##.reg.2799 2 0) 1)) (##qualified-call (vanity core f32vector->list ##.loop.604) (bruijn ##.loop.604 1 0) (bruijn ##.k.1531 3 0) '() (bruijn ##.reg.2803 0 0)))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0f32vector___Glist_V10_Dloop_D604, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0f32vector___Glist_V10_Dloop_D604(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
    }
}
void _V50_V0vanity_V0core_V0f64vector___Glist_V10_Dloop_D609(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0f64vector___Glist_V10_Dloop_D609, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2805) ((##vcore.< (bruijn ##.i.611 1 2) 0)) (if (bruijn ##.reg.2805 0 0) ((bruijn ##.k.1539 1 0) (bruijn ##.acc.610 1 1)) (basic-block 2 2 (##.reg.2806 ##.reg.2807) ((##vcore.f64vector-ref (bruijn ##.vec.607 5 1) (bruijn ##.i.611 2 2)) (##vcore.- (bruijn ##.i.611 2 2) 1)) (##qualified-call (vanity core f64vector->list ##.loop.609) (bruijn ##.loop.609 3 0) (bruijn ##.k.1539 2 0) (##inline ##vcore.cons (bruijn ##.reg.2806 0 0) (bruijn ##.acc.610 2 1)) (bruijn ##.reg.2807 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[2],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCons2(runtime,
        self->vars[0],
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0f64vector___Glist_V10_Dloop_D609(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0core_V0f64vector___Glist(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0f64vector___Glist, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2804) ((##vcore.f64vector-length (bruijn ##.vec.607 1 1))) (letrec 1 ((close "_V50_V0vanity_V0core_V0f64vector___Glist_V10_Dloop_D609")) (basic-block 1 1 (##.reg.2808) ((##vcore.- (bruijn ##.reg.2804 2 0) 1)) (##qualified-call (vanity core f64vector->list ##.loop.609) (bruijn ##.loop.609 1 0) (bruijn ##.k.1538 3 0) '() (bruijn ##.reg.2808 0 0)))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0f64vector___Glist_V10_Dloop_D609, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0f64vector___Glist_V10_Dloop_D609(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
    }
}
void _V50_V0vanity_V0core_V0s32vector___Glist_V10_Dloop_D614(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0s32vector___Glist_V10_Dloop_D614, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2810) ((##vcore.< (bruijn ##.i.616 1 2) 0)) (if (bruijn ##.reg.2810 0 0) ((bruijn ##.k.1546 1 0) (bruijn ##.acc.615 1 1)) (basic-block 2 2 (##.reg.2811 ##.reg.2812) ((##vcore.s32vector-ref (bruijn ##.vec.612 5 1) (bruijn ##.i.616 2 2)) (##vcore.- (bruijn ##.i.616 2 2) 1)) (##qualified-call (vanity core s32vector->list ##.loop.614) (bruijn ##.loop.614 3 0) (bruijn ##.k.1546 2 0) (##inline ##vcore.cons (bruijn ##.reg.2811 0 0) (bruijn ##.acc.615 2 1)) (bruijn ##.reg.2812 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[2],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCons2(runtime,
        self->vars[0],
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0s32vector___Glist_V10_Dloop_D614(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0core_V0s32vector___Glist(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0s32vector___Glist, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2809) ((##vcore.s32vector-length (bruijn ##.vec.612 1 1))) (letrec 1 ((close "_V50_V0vanity_V0core_V0s32vector___Glist_V10_Dloop_D614")) (basic-block 1 1 (##.reg.2813) ((##vcore.- (bruijn ##.reg.2809 2 0) 1)) (##qualified-call (vanity core s32vector->list ##.loop.614) (bruijn ##.loop.614 1 0) (bruijn ##.k.1545 3 0) '() (bruijn ##.reg.2813 0 0)))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0s32vector___Glist_V10_Dloop_D614, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0s32vector___Glist_V10_Dloop_D614(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
    }
}
void _V50_V0vanity_V0core_V0u16vector___Glist_V10_Dloop_D619(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0u16vector___Glist_V10_Dloop_D619, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2815) ((##vcore.< (bruijn ##.i.621 1 2) 0)) (if (bruijn ##.reg.2815 0 0) ((bruijn ##.k.1553 1 0) (bruijn ##.acc.620 1 1)) (basic-block 2 2 (##.reg.2816 ##.reg.2817) ((##vcore.u16vector-ref (bruijn ##.vec.617 5 1) (bruijn ##.i.621 2 2)) (##vcore.- (bruijn ##.i.621 2 2) 1)) (##qualified-call (vanity core u16vector->list ##.loop.619) (bruijn ##.loop.619 3 0) (bruijn ##.k.1553 2 0) (##inline ##vcore.cons (bruijn ##.reg.2816 0 0) (bruijn ##.acc.620 2 1)) (bruijn ##.reg.2817 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[2],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCons2(runtime,
        self->vars[0],
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0u16vector___Glist_V10_Dloop_D619(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0core_V0u16vector___Glist(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0u16vector___Glist, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2814) ((##vcore.u16vector-length (bruijn ##.vec.617 1 1))) (letrec 1 ((close "_V50_V0vanity_V0core_V0u16vector___Glist_V10_Dloop_D619")) (basic-block 1 1 (##.reg.2818) ((##vcore.- (bruijn ##.reg.2814 2 0) 1)) (##qualified-call (vanity core u16vector->list ##.loop.619) (bruijn ##.loop.619 1 0) (bruijn ##.k.1552 3 0) '() (bruijn ##.reg.2818 0 0)))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0u16vector___Glist_V10_Dloop_D619, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0u16vector___Glist_V10_Dloop_D619(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
    }
}
void _V50_V0vanity_V0core_V0s16vector___Glist_V10_Dloop_D624(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0s16vector___Glist_V10_Dloop_D624, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2820) ((##vcore.< (bruijn ##.i.626 1 2) 0)) (if (bruijn ##.reg.2820 0 0) ((bruijn ##.k.1560 1 0) (bruijn ##.acc.625 1 1)) (basic-block 2 2 (##.reg.2821 ##.reg.2822) ((##vcore.s16vector-ref (bruijn ##.vec.622 5 1) (bruijn ##.i.626 2 2)) (##vcore.- (bruijn ##.i.626 2 2) 1)) (##qualified-call (vanity core s16vector->list ##.loop.624) (bruijn ##.loop.624 3 0) (bruijn ##.k.1560 2 0) (##inline ##vcore.cons (bruijn ##.reg.2821 0 0) (bruijn ##.acc.625 2 1)) (bruijn ##.reg.2822 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[2],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCons2(runtime,
        self->vars[0],
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0s16vector___Glist_V10_Dloop_D624(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0core_V0s16vector___Glist(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0s16vector___Glist, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2819) ((##vcore.s16vector-length (bruijn ##.vec.622 1 1))) (letrec 1 ((close "_V50_V0vanity_V0core_V0s16vector___Glist_V10_Dloop_D624")) (basic-block 1 1 (##.reg.2823) ((##vcore.- (bruijn ##.reg.2819 2 0) 1)) (##qualified-call (vanity core s16vector->list ##.loop.624) (bruijn ##.loop.624 1 0) (bruijn ##.k.1559 3 0) '() (bruijn ##.reg.2823 0 0)))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0s16vector___Glist_V10_Dloop_D624, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0s16vector___Glist_V10_Dloop_D624(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
    }
}
void _V50_V0vanity_V0core_V0u8vector___Glist_V10_Dloop_D629(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0u8vector___Glist_V10_Dloop_D629, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2825) ((##vcore.< (bruijn ##.i.631 1 2) 0)) (if (bruijn ##.reg.2825 0 0) ((bruijn ##.k.1567 1 0) (bruijn ##.acc.630 1 1)) (basic-block 2 2 (##.reg.2826 ##.reg.2827) ((##vcore.u8vector-ref (bruijn ##.vec.627 5 1) (bruijn ##.i.631 2 2)) (##vcore.- (bruijn ##.i.631 2 2) 1)) (##qualified-call (vanity core u8vector->list ##.loop.629) (bruijn ##.loop.629 3 0) (bruijn ##.k.1567 2 0) (##inline ##vcore.cons (bruijn ##.reg.2826 0 0) (bruijn ##.acc.630 2 1)) (bruijn ##.reg.2827 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[2],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCons2(runtime,
        self->vars[0],
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0u8vector___Glist_V10_Dloop_D629(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0core_V0u8vector___Glist(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0u8vector___Glist, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2824) ((##vcore.u8vector-length (bruijn ##.vec.627 1 1))) (letrec 1 ((close "_V50_V0vanity_V0core_V0u8vector___Glist_V10_Dloop_D629")) (basic-block 1 1 (##.reg.2828) ((##vcore.- (bruijn ##.reg.2824 2 0) 1)) (##qualified-call (vanity core u8vector->list ##.loop.629) (bruijn ##.loop.629 1 0) (bruijn ##.k.1566 3 0) '() (bruijn ##.reg.2828 0 0)))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0u8vector___Glist_V10_Dloop_D629, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0u8vector___Glist_V10_Dloop_D629(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
    }
}
static void _V10_Dread__u8vector_D261_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__u8vector_D261_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.read-u8vector (bruijn ##.k.1573 1 0) (bruijn ##.n.632 1 1) (bruijn ##.x.1574 0 0))
    VCallFuncWithGC(runtime, (VFunc)VReadU8Vector, 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0read__u8vector(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0read__u8vector" #t (2 ((bruijn ##.current-input-port.281 1 118) (close _V10_Dread__u8vector_D261_V0k110))) (3 (##vcore.read-u8vector (bruijn ##.k.1575 0 0) (bruijn ##.n.633 0 1) (bruijn ##.port.634 0 2))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0read__u8vector, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0read__u8vector(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-input-port.281 1 118) (close _V10_Dread__u8vector_D261_V0k110))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[118]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dread__u8vector_D261_V0k110, self)))));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0read__u8vector(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.read-u8vector (bruijn ##.k.1575 0 0) (bruijn ##.n.633 0 1) (bruijn ##.port.634 0 2))
    VCallFuncWithGC(runtime, (VFunc)VReadU8Vector, 3,
      _var0,
      _var1,
      _var2);
}
void _V50_V0vanity_V0core_V0read__u8vector(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0read__u8vector, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0read__u8vector\n"
"_V50_V0vanity_V0core_V0read__u8vector:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0core_V0read__u8vector\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0core_V0read__u8vector\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0read__u8vector\n"
);
void _V50_V0vanity_V0core_V0s8vector___Glist_V10_Dloop_D637(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0s8vector___Glist_V10_Dloop_D637, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2830) ((##vcore.< (bruijn ##.i.639 1 2) 0)) (if (bruijn ##.reg.2830 0 0) ((bruijn ##.k.1577 1 0) (bruijn ##.acc.638 1 1)) (basic-block 2 2 (##.reg.2831 ##.reg.2832) ((##vcore.s8vector-ref (bruijn ##.vec.635 5 1) (bruijn ##.i.639 2 2)) (##vcore.- (bruijn ##.i.639 2 2) 1)) (##qualified-call (vanity core s8vector->list ##.loop.637) (bruijn ##.loop.637 3 0) (bruijn ##.k.1577 2 0) (##inline ##vcore.cons (bruijn ##.reg.2831 0 0) (bruijn ##.acc.638 2 1)) (bruijn ##.reg.2832 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[2],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCons2(runtime,
        self->vars[0],
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0s8vector___Glist_V10_Dloop_D637(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0core_V0s8vector___Glist(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0s8vector___Glist, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2829) ((##vcore.s8vector-length (bruijn ##.vec.635 1 1))) (letrec 1 ((close "_V50_V0vanity_V0core_V0s8vector___Glist_V10_Dloop_D637")) (basic-block 1 1 (##.reg.2833) ((##vcore.- (bruijn ##.reg.2829 2 0) 1)) (##qualified-call (vanity core s8vector->list ##.loop.637) (bruijn ##.loop.637 1 0) (bruijn ##.k.1576 3 0) '() (bruijn ##.reg.2833 0 0)))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0s8vector___Glist_V10_Dloop_D637, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0s8vector___Glist_V10_Dloop_D637(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
    }
}
void _V50_V0vanity_V0core_V0typevector_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0typevector_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2834) ((##vcore.s8vector? (bruijn ##.x.640 1 1))) (if (bruijn ##.reg.2834 0 0) ((bruijn ##.k.1583 1 0) (bruijn ##.reg.2834 0 0)) (basic-block 1 1 (##.reg.2835) ((##vcore.u8vector? (bruijn ##.x.640 2 1))) (if (bruijn ##.reg.2835 0 0) ((bruijn ##.k.1583 2 0) (bruijn ##.reg.2835 0 0)) (basic-block 1 1 (##.reg.2836) ((##vcore.s16vector? (bruijn ##.x.640 3 1))) (if (bruijn ##.reg.2836 0 0) ((bruijn ##.k.1583 3 0) (bruijn ##.reg.2836 0 0)) (basic-block 1 1 (##.reg.2837) ((##vcore.u16vector? (bruijn ##.x.640 4 1))) (if (bruijn ##.reg.2837 0 0) ((bruijn ##.k.1583 4 0) (bruijn ##.reg.2837 0 0)) (basic-block 1 1 (##.reg.2838) ((##vcore.s32vector? (bruijn ##.x.640 5 1))) (if (bruijn ##.reg.2838 0 0) ((bruijn ##.k.1583 5 0) (bruijn ##.reg.2838 0 0)) (basic-block 1 1 (##.reg.2839) ((##vcore.f32vector? (bruijn ##.x.640 6 1))) (if (bruijn ##.reg.2839 0 0) ((bruijn ##.k.1583 6 0) (bruijn ##.reg.2839 0 0)) (basic-block 1 1 (##.reg.2840) ((##vcore.f64vector? (bruijn ##.x.640 7 1))) ((bruijn ##.k.1583 7 0) (bruijn ##.reg.2840 0 0)))))))))))))))
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
void _V50_V0vanity_V0core_V0vector___Glist_V10_Dloop_D643(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector___Glist_V10_Dloop_D643, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2842) ((##vcore.< (bruijn ##.i.645 1 2) 0)) (if (bruijn ##.reg.2842 0 0) ((bruijn ##.k.1591 1 0) (bruijn ##.acc.644 1 1)) (basic-block 2 2 (##.reg.2843 ##.reg.2844) ((##vcore.vector-ref (bruijn ##.vec.641 5 1) (bruijn ##.i.645 2 2)) (##vcore.- (bruijn ##.i.645 2 2) 1)) (##qualified-call (vanity core vector->list ##.loop.643) (bruijn ##.loop.643 3 0) (bruijn ##.k.1591 2 0) (##inline ##vcore.cons (bruijn ##.reg.2843 0 0) (bruijn ##.acc.644 2 1)) (bruijn ##.reg.2844 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[2],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCons2(runtime,
        self->vars[0],
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0vector___Glist_V10_Dloop_D643(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0core_V0vector___Glist(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector___Glist, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2841) ((##vcore.vector-length (bruijn ##.vec.641 1 1))) (letrec 1 ((close "_V50_V0vanity_V0core_V0vector___Glist_V10_Dloop_D643")) (basic-block 1 1 (##.reg.2845) ((##vcore.- (bruijn ##.reg.2841 2 0) 1)) (##qualified-call (vanity core vector->list ##.loop.643) (bruijn ##.loop.643 1 0) (bruijn ##.k.1590 3 0) '() (bruijn ##.reg.2845 0 0)))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector___Glist_V10_Dloop_D643, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0vector___Glist_V10_Dloop_D643(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
    }
}
void _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D649_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D649_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2849) ((##vcore.+ (bruijn ##.i.650 4 1) 1)) (##qualified-call (vanity core vector-for-each ##.loop.649) (bruijn ##.loop.649 5 0) (bruijn ##.k.1598 4 0) (bruijn ##.reg.2849 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D649(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D649(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D649, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2847) ((##vcore.< (bruijn ##.i.650 1 1) (bruijn ##.reg.2846 3 0))) (if (bruijn ##.reg.2847 0 0) (basic-block 1 1 (##.reg.2848) ((##vcore.vector-ref (bruijn ##.xs.647 5 2) (bruijn ##.i.650 2 1))) ((bruijn ##.f.646 5 1) (close _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D649_V0k111) (bruijn ##.reg.2848 0 0))) ((bruijn ##.k.1598 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D649_V0k111, self)))),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D655_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D655_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2855) ((##vcore.+ (bruijn ##.i.656 4 1) 1)) (##qualified-call (vanity core vector-for-each ##.loop.655) (bruijn ##.loop.655 5 0) (bruijn ##.k.1604 4 0) (bruijn ##.reg.2855 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D655(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D655(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D655, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2852) ((##vcore.< (bruijn ##.i.656 1 1) (bruijn ##.len.654 3 0))) (if (bruijn ##.reg.2852 0 0) (basic-block 2 2 (##.reg.2853 ##.reg.2854) ((##vcore.vector-ref (bruijn ##.xs.652 6 2) (bruijn ##.i.656 2 1)) (##vcore.vector-ref (bruijn ##.ys.653 6 3) (bruijn ##.i.656 2 1))) ((bruijn ##.f.651 6 1) (close _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D655_V0k113) (bruijn ##.reg.2853 0 0) (bruijn ##.reg.2854 0 1))) ((bruijn ##.k.1604 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D655_V0k113, self)))),
      self->vars[0],
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V10_Dvector__for__each_D266_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D266_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D655")) (##qualified-call (vanity core vector-for-each ##.loop.655) (bruijn ##.loop.655 0 0) (bruijn ##.k.1603 3 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D655, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D655(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D662_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D662_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2863) ((##vcore.+ (bruijn ##.i.663 4 1) 1)) (##qualified-call (vanity core vector-for-each ##.loop.662) (bruijn ##.loop.662 5 0) (bruijn ##.k.1613 4 0) (bruijn ##.reg.2863 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D662(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D662(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D662, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2859) ((##vcore.< (bruijn ##.i.663 1 1) (bruijn ##.len.661 3 0))) (if (bruijn ##.reg.2859 0 0) (basic-block 3 3 (##.reg.2860 ##.reg.2861 ##.reg.2862) ((##vcore.vector-ref (bruijn ##.xs.658 6 2) (bruijn ##.i.663 2 1)) (##vcore.vector-ref (bruijn ##.ys.659 6 3) (bruijn ##.i.663 2 1)) (##vcore.vector-ref (bruijn ##.zs.660 6 4) (bruijn ##.i.663 2 1))) ((bruijn ##.f.657 6 1) (close _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D662_V0k115) (bruijn ##.reg.2860 0 0) (bruijn ##.reg.2861 0 1) (bruijn ##.reg.2862 0 2))) ((bruijn ##.k.1613 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D662_V0k115, self)))),
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V10_Dvector__for__each_D266_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D266_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D662")) (##qualified-call (vanity core vector-for-each ##.loop.662) (bruijn ##.loop.662 0 0) (bruijn ##.k.1612 3 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D662, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D662(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2865) ((##vcore.+ (bruijn ##.i.668 4 1) 1)) (##qualified-call (vanity core vector-for-each ##.loop.667) (bruijn ##.loop.667 5 0) (bruijn ##.k.1624 4 0) (bruijn ##.reg.2865 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667_V0k119) (bruijn ##.f.664 6 1) (bruijn ##.x.1628 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667_V0k119, self)))),
      VGetArg(statics, 6-1, 1),
      _var0);
}
void _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2866) ((##vcore.vector-ref (bruijn ##.vec.669 1 1) (bruijn ##.i.668 3 1))) ((bruijn ##.k.1629 1 0) (bruijn ##.reg.2866 0 0)))
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
void _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2864) ((##vcore.< (bruijn ##.i.668 1 1) (bruijn ##.len.666 3 0))) (if (bruijn ##.reg.2864 0 0) (##qualified-call (vanity core map) (bruijn ##.map.238 6 75) (close _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667_V0k118) (close _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667_V0lambda4) (bruijn ##.vecs.665 5 2)) ((bruijn ##.k.1624 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 75));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667_V0k118, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667_V0lambda4, self))));
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0map(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V10_Dvector__for__each_D266_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D266_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667")) (##qualified-call (vanity core vector-for-each ##.loop.667) (bruijn ##.loop.667 0 0) (bruijn ##.k.1623 3 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D667(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V10_Dvector__for__each_D266_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D266_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dvector__for__each_D266_V0k117) (bruijn ##.min.201 2 38) (bruijn ##.x.1630 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__for__each_D266_V0k117, self)))),
      statics->up->vars[38],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0vector__for__each(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0vector__for__each" #t (3 (basic-block 1 1 (##.reg.2846) ((##vcore.vector-length (bruijn ##.xs.647 1 2))) (letrec 1 ((close "_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D649")) (##qualified-call (vanity core vector-for-each ##.loop.649) (bruijn ##.loop.649 0 0) (bruijn ##.k.1597 2 0) 0)))) (4 (basic-block 2 2 (##.reg.2850 ##.reg.2851) ((##vcore.vector-length (bruijn ##.xs.652 1 2)) (##vcore.vector-length (bruijn ##.ys.653 1 3))) (##qualified-call (vanity core min) (bruijn ##.min.201 2 38) (close _V10_Dvector__for__each_D266_V0k112) (bruijn ##.reg.2850 0 0) (bruijn ##.reg.2851 0 1)))) (5 (basic-block 3 3 (##.reg.2856 ##.reg.2857 ##.reg.2858) ((##vcore.vector-length (bruijn ##.xs.658 1 2)) (##vcore.vector-length (bruijn ##.ys.659 1 3)) (##vcore.vector-length (bruijn ##.zs.660 1 4))) (##qualified-call (vanity core min) (bruijn ##.min.201 2 38) (close _V10_Dvector__for__each_D266_V0k114) (bruijn ##.reg.2856 0 0) (bruijn ##.reg.2857 0 1) (bruijn ##.reg.2858 0 2)))) (2 + (##qualified-call (vanity core map) (bruijn ##.map.238 1 75) (close _V10_Dvector__for__each_D266_V0k116) (##intrinsic ##vcore.vector-length) (bruijn ##.vecs.665 0 2))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__for__each, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0vector__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2846) ((##vcore.vector-length (bruijn ##.xs.647 1 2))) (letrec 1 ((close "_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D649")) (##qualified-call (vanity core vector-for-each ##.loop.649) (bruijn ##.loop.649 0 0) (bruijn ##.k.1597 2 0) 0)))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D649, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__for__each_V10_Dloop_D649(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0vector__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 2 2 (##.reg.2850 ##.reg.2851) ((##vcore.vector-length (bruijn ##.xs.652 1 2)) (##vcore.vector-length (bruijn ##.ys.653 1 3))) (##qualified-call (vanity core min) (bruijn ##.min.201 2 38) (close _V10_Dvector__for__each_D266_V0k112) (bruijn ##.reg.2850 0 0) (bruijn ##.reg.2851 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[2]);
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[3]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[38]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__for__each_D266_V0k112, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0min(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0vector__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 3 3 (##.reg.2856 ##.reg.2857 ##.reg.2858) ((##vcore.vector-length (bruijn ##.xs.658 1 2)) (##vcore.vector-length (bruijn ##.ys.659 1 3)) (##vcore.vector-length (bruijn ##.zs.660 1 4))) (##qualified-call (vanity core min) (bruijn ##.min.201 2 38) (close _V10_Dvector__for__each_D266_V0k114) (bruijn ##.reg.2856 0 0) (bruijn ##.reg.2857 0 1) (bruijn ##.reg.2858 0 2)))
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[38]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__for__each_D266_V0k114, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      self->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0min(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0core_V0vector__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (##qualified-call (vanity core map) (bruijn ##.map.238 1 75) (close _V10_Dvector__for__each_D266_V0k116) (##intrinsic ##vcore.vector-length) (bruijn ##.vecs.665 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[75]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__for__each_D266_V0k116, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dvector__length;
    VWORD _arg2 = 
      _varargs;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0map(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0vector__for__each(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0vector__for__each, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0vector__for__each\n"
"_V50_V0vanity_V0core_V0vector__for__each:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0core_V0vector__for__each\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V50_V0vanity_V0core_V0vector__for__each\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V50_V0vanity_V0core_V0vector__for__each\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V50_V0vanity_V0core_V0vector__for__each\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0vector__for__each\n"
);
void _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D674_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D674_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2870) ((##vcore.+ (bruijn ##.i.675 5 1) 1)) (##qualified-call (vanity core vector-map ##.loop.674) (bruijn ##.loop.674 6 0) (bruijn ##.k.1632 5 0) (bruijn ##.reg.2870 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D674(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D674_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D674_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector-set! (close _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D674_V0k122) (bruijn ##.vec.673 5 0) (bruijn ##.i.675 3 1) (bruijn ##.x.1636 0 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D674_V0k122, self)))),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D674(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D674, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2868) ((##vcore.< (bruijn ##.i.675 1 1) (bruijn ##.reg.2867 4 0))) (if (bruijn ##.reg.2868 0 0) (basic-block 1 1 (##.reg.2869) ((##vcore.vector-ref (bruijn ##.xs.671 6 2) (bruijn ##.i.675 2 1))) ((bruijn ##.f.670 6 1) (close _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D674_V0k121) (bruijn ##.reg.2869 0 0))) ((bruijn ##.k.1632 1 0) (bruijn ##.vec.673 3 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D674_V0k121, self)))),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[0]);
}
    }
}
static void _V10_Dvector__map_D267_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D267_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D674")) (##qualified-call (vanity core vector-map ##.loop.674) (bruijn ##.loop.674 0 0) (bruijn ##.k.1631 3 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D674, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D674(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D681_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D681_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2876) ((##vcore.+ (bruijn ##.i.682 5 1) 1)) (##qualified-call (vanity core vector-map ##.loop.681) (bruijn ##.loop.681 6 0) (bruijn ##.k.1639 5 0) (bruijn ##.reg.2876 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D681(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D681_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D681_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector-set! (close _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D681_V0k126) (bruijn ##.vec.680 5 0) (bruijn ##.i.682 3 1) (bruijn ##.x.1643 0 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D681_V0k126, self)))),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D681(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D681, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2873) ((##vcore.< (bruijn ##.i.682 1 1) (bruijn ##.len.679 4 0))) (if (bruijn ##.reg.2873 0 0) (basic-block 2 2 (##.reg.2874 ##.reg.2875) ((##vcore.vector-ref (bruijn ##.xs.677 7 2) (bruijn ##.i.682 2 1)) (##vcore.vector-ref (bruijn ##.ys.678 7 3) (bruijn ##.i.682 2 1))) ((bruijn ##.f.676 7 1) (close _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D681_V0k125) (bruijn ##.reg.2874 0 0) (bruijn ##.reg.2875 0 1))) ((bruijn ##.k.1639 1 0) (bruijn ##.vec.680 3 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D681_V0k125, self)))),
      self->vars[0],
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[0]);
}
    }
}
static void _V10_Dvector__map_D267_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D267_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D681")) (##qualified-call (vanity core vector-map ##.loop.681) (bruijn ##.loop.681 0 0) (bruijn ##.k.1638 4 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D681, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D681(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V10_Dvector__map_D267_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D267_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-vector (close _V10_Dvector__map_D267_V0k124) (bruijn ##.len.679 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__map_D267_V0k124, self)))),
      _var0);
}
void _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D689_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D689_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2884) ((##vcore.+ (bruijn ##.i.690 5 1) 1)) (##qualified-call (vanity core vector-map ##.loop.689) (bruijn ##.loop.689 6 0) (bruijn ##.k.1649 5 0) (bruijn ##.reg.2884 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D689(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D689_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D689_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector-set! (close _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D689_V0k130) (bruijn ##.vec.688 5 0) (bruijn ##.i.690 3 1) (bruijn ##.x.1653 0 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D689_V0k130, self)))),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D689(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D689, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2880) ((##vcore.< (bruijn ##.i.690 1 1) (bruijn ##.len.687 4 0))) (if (bruijn ##.reg.2880 0 0) (basic-block 3 3 (##.reg.2881 ##.reg.2882 ##.reg.2883) ((##vcore.vector-ref (bruijn ##.xs.684 7 2) (bruijn ##.i.690 2 1)) (##vcore.vector-ref (bruijn ##.ys.685 7 3) (bruijn ##.i.690 2 1)) (##vcore.vector-ref (bruijn ##.zs.686 7 4) (bruijn ##.i.690 2 1))) ((bruijn ##.f.683 7 1) (close _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D689_V0k129) (bruijn ##.reg.2881 0 0) (bruijn ##.reg.2882 0 1) (bruijn ##.reg.2883 0 2))) ((bruijn ##.k.1649 1 0) (bruijn ##.vec.688 3 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D689_V0k129, self)))),
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[0]);
}
    }
}
static void _V10_Dvector__map_D267_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D267_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D689")) (##qualified-call (vanity core vector-map ##.loop.689) (bruijn ##.loop.689 0 0) (bruijn ##.k.1648 4 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D689, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D689(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V10_Dvector__map_D267_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D267_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-vector (close _V10_Dvector__map_D267_V0k128) (bruijn ##.len.687 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__map_D267_V0k128, self)))),
      _var0);
}
void _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2886) ((##vcore.+ (bruijn ##.i.696 5 1) 1)) (##qualified-call (vanity core vector-map ##.loop.695) (bruijn ##.loop.695 6 0) (bruijn ##.k.1661 5 0) (bruijn ##.reg.2886 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector-set! (close _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695_V0k136) (bruijn ##.vec.694 5 0) (bruijn ##.i.696 3 1) (bruijn ##.x.1665 0 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695_V0k136, self)))),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695_V0k135) (bruijn ##.f.691 7 1) (bruijn ##.x.1666 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695_V0k135, self)))),
      VGetArg(statics, 7-1, 1),
      _var0);
}
void _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2887) ((##vcore.vector-ref (bruijn ##.vec.697 1 1) (bruijn ##.i.696 3 1))) ((bruijn ##.k.1667 1 0) (bruijn ##.reg.2887 0 0)))
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
void _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2885) ((##vcore.< (bruijn ##.i.696 1 1) (bruijn ##.len.693 4 0))) (if (bruijn ##.reg.2885 0 0) (##qualified-call (vanity core map) (bruijn ##.map.238 7 75) (close _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695_V0k134) (close _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695_V0lambda5) (bruijn ##.vecs.692 6 2)) ((bruijn ##.k.1661 1 0) (bruijn ##.vec.694 3 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 75));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695_V0k134, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695_V0lambda5, self))));
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0map(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[0]);
}
    }
}
static void _V10_Dvector__map_D267_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D267_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695")) (##qualified-call (vanity core vector-map ##.loop.695) (bruijn ##.loop.695 0 0) (bruijn ##.k.1660 4 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__map_V10_Dloop_D695(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V10_Dvector__map_D267_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D267_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-vector (close _V10_Dvector__map_D267_V0k133) (bruijn ##.len.693 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__map_D267_V0k133, self)))),
      _var0);
}
static void _V10_Dvector__map_D267_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D267_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dvector__map_D267_V0k132) (bruijn ##.min.201 2 38) (bruijn ##.x.1668 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__map_D267_V0k132, self)))),
      statics->up->vars[38],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0vector__map(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0vector__map" #t (3 (basic-block 1 1 (##.reg.2867) ((##vcore.vector-length (bruijn ##.xs.671 1 2))) (##vcore.make-vector (close _V10_Dvector__map_D267_V0k120) (bruijn ##.reg.2867 0 0)))) (4 (basic-block 2 2 (##.reg.2871 ##.reg.2872) ((##vcore.vector-length (bruijn ##.xs.677 1 2)) (##vcore.vector-length (bruijn ##.ys.678 1 3))) (##qualified-call (vanity core min) (bruijn ##.min.201 2 38) (close _V10_Dvector__map_D267_V0k123) (bruijn ##.reg.2871 0 0) (bruijn ##.reg.2872 0 1)))) (5 (basic-block 3 3 (##.reg.2877 ##.reg.2878 ##.reg.2879) ((##vcore.vector-length (bruijn ##.xs.684 1 2)) (##vcore.vector-length (bruijn ##.ys.685 1 3)) (##vcore.vector-length (bruijn ##.zs.686 1 4))) (##qualified-call (vanity core min) (bruijn ##.min.201 2 38) (close _V10_Dvector__map_D267_V0k127) (bruijn ##.reg.2877 0 0) (bruijn ##.reg.2878 0 1) (bruijn ##.reg.2879 0 2)))) (2 + (##qualified-call (vanity core map) (bruijn ##.map.238 1 75) (close _V10_Dvector__map_D267_V0k131) (##intrinsic ##vcore.vector-length) (bruijn ##.vecs.692 0 2))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__map, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0vector__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2867) ((##vcore.vector-length (bruijn ##.xs.671 1 2))) (##vcore.make-vector (close _V10_Dvector__map_D267_V0k120) (bruijn ##.reg.2867 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[2]);
    VCallFuncWithGC(runtime, (VFunc)VMakeVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__map_D267_V0k120, self)))),
      self->vars[0]);
    }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0vector__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 2 2 (##.reg.2871 ##.reg.2872) ((##vcore.vector-length (bruijn ##.xs.677 1 2)) (##vcore.vector-length (bruijn ##.ys.678 1 3))) (##qualified-call (vanity core min) (bruijn ##.min.201 2 38) (close _V10_Dvector__map_D267_V0k123) (bruijn ##.reg.2871 0 0) (bruijn ##.reg.2872 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[2]);
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[3]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[38]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__map_D267_V0k123, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0min(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0vector__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 3 3 (##.reg.2877 ##.reg.2878 ##.reg.2879) ((##vcore.vector-length (bruijn ##.xs.684 1 2)) (##vcore.vector-length (bruijn ##.ys.685 1 3)) (##vcore.vector-length (bruijn ##.zs.686 1 4))) (##qualified-call (vanity core min) (bruijn ##.min.201 2 38) (close _V10_Dvector__map_D267_V0k127) (bruijn ##.reg.2877 0 0) (bruijn ##.reg.2878 0 1) (bruijn ##.reg.2879 0 2)))
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[38]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__map_D267_V0k127, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      self->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0min(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0core_V0vector__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (##qualified-call (vanity core map) (bruijn ##.map.238 1 75) (close _V10_Dvector__map_D267_V0k131) (##intrinsic ##vcore.vector-length) (bruijn ##.vecs.692 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[75]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__map_D267_V0k131, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dvector__length;
    VWORD _arg2 = 
      _varargs;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0map(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0vector__map(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0vector__map, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0vector__map\n"
"_V50_V0vanity_V0core_V0vector__map:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0core_V0vector__map\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V50_V0vanity_V0core_V0vector__map\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V50_V0vanity_V0core_V0vector__map\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V50_V0vanity_V0core_V0vector__map\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0vector__map\n"
);
static void _V10_Dvector__copy_D268_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__copy_D268_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core vector-copy!) (bruijn ##.vector-copy!.269 3 106) (bruijn ##.k.1673 2 0) (bruijn ##.x.1674 0 0) 0 (bruijn ##.v.701 2 1) (bruijn ##.start.702 2 2) (bruijn ##.end.703 2 3))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[106]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VEncodeInt(0l);
    VWORD _arg3 = 
      statics->up->vars[1];
    VWORD _arg4 = 
      statics->up->vars[2];
    VWORD _arg5 = 
      statics->up->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0core_V0vector__copy_B(runtime, _closure->env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0vector__copy(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0vector__copy" #t (2 (basic-block 1 1 (##.reg.2888) ((##vcore.vector-length (bruijn ##.v.698 1 1))) (##qualified-call (vanity core vector-copy) (bruijn ##.vector-copy.268 2 105) (bruijn ##.k.1669 1 0) (bruijn ##.v.698 1 1) 0 (bruijn ##.reg.2888 0 0)))) (3 (basic-block 1 1 (##.reg.2889) ((##vcore.vector-length (bruijn ##.v.699 1 1))) (##qualified-call (vanity core vector-copy) (bruijn ##.vector-copy.268 2 105) (bruijn ##.k.1671 1 0) (bruijn ##.v.699 1 1) (bruijn ##.start.700 1 2) (bruijn ##.reg.2889 0 0)))) (4 (basic-block 1 1 (##.reg.2890) ((##vcore.- (bruijn ##.end.703 1 3) (bruijn ##.start.702 1 2))) (##vcore.make-vector (close _V10_Dvector__copy_D268_V0k137) (bruijn ##.reg.2890 0 0)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__copy, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0vector__copy(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2888) ((##vcore.vector-length (bruijn ##.v.698 1 1))) (##qualified-call (vanity core vector-copy) (bruijn ##.vector-copy.268 2 105) (bruijn ##.k.1669 1 0) (bruijn ##.v.698 1 1) 0 (bruijn ##.reg.2888 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[105]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VEncodeInt(0l);
    VWORD _arg3 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0vector__copy(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0vector__copy(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2889) ((##vcore.vector-length (bruijn ##.v.699 1 1))) (##qualified-call (vanity core vector-copy) (bruijn ##.vector-copy.268 2 105) (bruijn ##.k.1671 1 0) (bruijn ##.v.699 1 1) (bruijn ##.start.700 1 2) (bruijn ##.reg.2889 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[105]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0vector__copy(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0vector__copy(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.reg.2890) ((##vcore.- (bruijn ##.end.703 1 3) (bruijn ##.start.702 1 2))) (##vcore.make-vector (close _V10_Dvector__copy_D268_V0k137) (bruijn ##.reg.2890 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[3],
      statics->vars[2]);
    VCallFuncWithGC(runtime, (VFunc)VMakeVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__copy_D268_V0k137, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0core_V0vector__copy(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0vector__copy, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0vector__copy\n"
"_V50_V0vanity_V0core_V0vector__copy:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0core_V0vector__copy\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0core_V0vector__copy\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V50_V0vanity_V0core_V0vector__copy\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0vector__copy\n"
);
void _V50_V0vanity_V0core_V0vector__copy_B_V10_Dloop_D716_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__copy_B_V10_Dloop_D716_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2897) ((##vcore.+ (bruijn ##.i.717 4 1) 1)) (##qualified-call (vanity core vector-copy! ##.loop.716) (bruijn ##.loop.716 5 0) (bruijn ##.k.1681 4 0) (bruijn ##.reg.2897 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__copy_B_V10_Dloop_D716(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0vector__copy_B_V10_Dloop_D716(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__copy_B_V10_Dloop_D716, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2893) ((##vcore.< (bruijn ##.i.717 1 1) (bruijn ##.end.715 3 5))) (if (bruijn ##.reg.2893 0 0) (basic-block 3 3 (##.reg.2894 ##.reg.2895 ##.reg.2896) ((##vcore.- (bruijn ##.start.714 4 4)) (##vcore.+ (bruijn ##.i.717 2 1) (bruijn ##.reg.2894 0 0) (bruijn ##.at.712 4 2)) (##vcore.vector-ref (bruijn ##.src.713 4 3) (bruijn ##.i.717 2 1))) (##vcore.vector-set! (close _V50_V0vanity_V0core_V0vector__copy_B_V10_Dloop_D716_V0k138) (bruijn ##.dst.711 4 1) (bruijn ##.reg.2895 0 1) (bruijn ##.reg.2896 0 2))) ((bruijn ##.k.1681 1 0) (bruijn ##.dst.711 3 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[5]);
if(VDecodeBool(
self->vars[0])) {
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__copy_B_V10_Dloop_D716_V0k138, self)))),
      statics->up->up->up->vars[1],
      self->vars[1],
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[1]);
}
    }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0vector__copy_B(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0vector__copy_B" #t (4 (basic-block 1 1 (##.reg.2891) ((##vcore.vector-length (bruijn ##.src.706 1 3))) (##qualified-call (vanity core vector-copy!) (bruijn ##.vector-copy!.269 2 106) (bruijn ##.k.1676 1 0) (bruijn ##.dst.704 1 1) (bruijn ##.at.705 1 2) (bruijn ##.src.706 1 3) 0 (bruijn ##.reg.2891 0 0)))) (5 (basic-block 1 1 (##.reg.2892) ((##vcore.vector-length (bruijn ##.src.709 1 3))) (##qualified-call (vanity core vector-copy!) (bruijn ##.vector-copy!.269 2 106) (bruijn ##.k.1678 1 0) (bruijn ##.dst.707 1 1) (bruijn ##.at.708 1 2) (bruijn ##.src.709 1 3) (bruijn ##.start.710 1 4) (bruijn ##.reg.2892 0 0)))) (6 (letrec 1 ((close "_V50_V0vanity_V0core_V0vector__copy_B_V10_Dloop_D716")) (##qualified-call (vanity core vector-copy! ##.loop.716) (bruijn ##.loop.716 0 0) (bruijn ##.k.1680 1 0) (bruijn ##.start.714 1 4)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__copy_B, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 6~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0vector__copy_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.reg.2891) ((##vcore.vector-length (bruijn ##.src.706 1 3))) (##qualified-call (vanity core vector-copy!) (bruijn ##.vector-copy!.269 2 106) (bruijn ##.k.1676 1 0) (bruijn ##.dst.704 1 1) (bruijn ##.at.705 1 2) (bruijn ##.src.706 1 3) 0 (bruijn ##.reg.2891 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[3]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[106]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->vars[3];
    VWORD _arg4 = 
      VEncodeInt(0l);
    VWORD _arg5 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0core_V0vector__copy_B(runtime, _closure->env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
    }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0vector__copy_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 1 1 (##.reg.2892) ((##vcore.vector-length (bruijn ##.src.709 1 3))) (##qualified-call (vanity core vector-copy!) (bruijn ##.vector-copy!.269 2 106) (bruijn ##.k.1678 1 0) (bruijn ##.dst.707 1 1) (bruijn ##.at.708 1 2) (bruijn ##.src.709 1 3) (bruijn ##.start.710 1 4) (bruijn ##.reg.2892 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[3]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[106]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->vars[3];
    VWORD _arg4 = 
      statics->vars[4];
    VWORD _arg5 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0core_V0vector__copy_B(runtime, _closure->env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0vector__copy_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
  struct { VEnv self; VWORD argv[6]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 6, 6, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0vector__copy_B_V10_Dloop_D716")) (##qualified-call (vanity core vector-copy! ##.loop.716) (bruijn ##.loop.716 0 0) (bruijn ##.k.1680 1 0) (bruijn ##.start.714 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__copy_B_V10_Dloop_D716, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[4];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__copy_B_V10_Dloop_D716(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0vector__copy_B(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0vector__copy_B, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0vector__copy_B\n"
"_V50_V0vanity_V0core_V0vector__copy_B:\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case0__V50_V0vanity_V0core_V0vector__copy_B\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case1__V50_V0vanity_V0core_V0vector__copy_B\n"
"    cmp " ARGC_REG ", 6\n"
"    je _V20Case2__V50_V0vanity_V0core_V0vector__copy_B\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0vector__copy_B\n"
);
static void _V10_Dvector__append_D270_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1690 5 0) (bruijn ##.v.721 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dvector__append_D270_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2901) ((##vcore.vector-length (bruijn ##.a.719 4 1))) (##qualified-call (vanity core vector-copy!) (bruijn ##.vector-copy!.269 5 106) (close _V10_Dvector__append_D270_V0k141) (bruijn ##.v.721 2 0) (bruijn ##.reg.2901 0 0) (bruijn ##.b.720 4 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 106));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0k141, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      statics->up->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0vector__copy_B(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
static void _V10_Dvector__append_D270_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core vector-copy!) (bruijn ##.vector-copy!.269 3 106) (close _V10_Dvector__append_D270_V0k140) (bruijn ##.v.721 0 0) 0 (bruijn ##.a.719 2 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[106]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0k140, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VEncodeInt(0l);
    VWORD _arg3 = 
      statics->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0vector__copy_B(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V10_Dvector__append_D270_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1697 7 0) (bruijn ##.v.725 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dvector__append_D270_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.reg.2907 ##.reg.2908 ##.reg.2909) ((##vcore.vector-length (bruijn ##.a.722 6 1)) (##vcore.vector-length (bruijn ##.b.723 6 2)) (##vcore.+ (bruijn ##.reg.2907 0 0) (bruijn ##.reg.2908 0 1))) (##qualified-call (vanity core vector-copy!) (bruijn ##.vector-copy!.269 7 106) (close _V10_Dvector__append_D270_V0k145) (bruijn ##.v.725 4 0) (bruijn ##.reg.2909 0 2) (bruijn ##.c.724 6 3)))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 106));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0k145, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      self->vars[2];
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 3);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0vector__copy_B(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
static void _V10_Dvector__append_D270_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2906) ((##vcore.vector-length (bruijn ##.a.722 4 1))) (##qualified-call (vanity core vector-copy!) (bruijn ##.vector-copy!.269 5 106) (close _V10_Dvector__append_D270_V0k144) (bruijn ##.v.725 2 0) (bruijn ##.reg.2906 0 0) (bruijn ##.b.723 4 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 106));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0k144, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      statics->up->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0vector__copy_B(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
static void _V10_Dvector__append_D270_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core vector-copy!) (bruijn ##.vector-copy!.269 3 106) (close _V10_Dvector__append_D270_V0k143) (bruijn ##.v.725 0 0) 0 (bruijn ##.a.722 2 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[106]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0k143, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VEncodeInt(0l);
    VWORD _arg3 = 
      statics->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0vector__copy_B(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V10_Dvector__append_D270_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1709 9 0) (bruijn ##.v.730 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dvector__append_D270_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.reg.2919 ##.reg.2920 ##.reg.2921 ##.reg.2922) ((##vcore.vector-length (bruijn ##.a.726 8 1)) (##vcore.vector-length (bruijn ##.b.727 8 2)) (##vcore.vector-length (bruijn ##.c.728 8 3)) (##vcore.+ (bruijn ##.reg.2919 0 0) (bruijn ##.reg.2920 0 1) (bruijn ##.reg.2921 0 2))) (##qualified-call (vanity core vector-copy!) (bruijn ##.vector-copy!.269 9 106) (close _V10_Dvector__append_D270_V0k150) (bruijn ##.v.730 6 0) (bruijn ##.reg.2922 0 3) (bruijn ##.d.729 8 4)))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 106));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0k150, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg2 = 
      self->vars[3];
    VWORD _arg3 = 
      VGetArg(statics, 8-1, 4);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0vector__copy_B(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
static void _V10_Dvector__append_D270_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.reg.2916 ##.reg.2917 ##.reg.2918) ((##vcore.vector-length (bruijn ##.a.726 6 1)) (##vcore.vector-length (bruijn ##.b.727 6 2)) (##vcore.+ (bruijn ##.reg.2916 0 0) (bruijn ##.reg.2917 0 1))) (##qualified-call (vanity core vector-copy!) (bruijn ##.vector-copy!.269 7 106) (close _V10_Dvector__append_D270_V0k149) (bruijn ##.v.730 4 0) (bruijn ##.reg.2918 0 2) (bruijn ##.c.728 6 3)))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 106));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0k149, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      self->vars[2];
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 3);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0vector__copy_B(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
static void _V10_Dvector__append_D270_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2915) ((##vcore.vector-length (bruijn ##.a.726 4 1))) (##qualified-call (vanity core vector-copy!) (bruijn ##.vector-copy!.269 5 106) (close _V10_Dvector__append_D270_V0k148) (bruijn ##.v.730 2 0) (bruijn ##.reg.2915 0 0) (bruijn ##.b.727 4 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 106));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0k148, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      statics->up->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0vector__copy_B(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
static void _V10_Dvector__append_D270_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core vector-copy!) (bruijn ##.vector-copy!.269 3 106) (close _V10_Dvector__append_D270_V0k147) (bruijn ##.v.730 0 0) 0 (bruijn ##.a.726 2 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[106]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0k147, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VEncodeInt(0l);
    VWORD _arg3 = 
      statics->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0vector__copy_B(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V10_Dvector__append_D270_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1727 5 0) (bruijn ##.x.1728 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      statics->up->vars[0]);
}
static void _V10_Dvector__append_D270_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.reg.2923 ##.reg.2924) ((##vcore.vector-length (bruijn ##.vec.734 2 1)) (##vcore.+ (bruijn ##.at.733 3 0) (bruijn ##.reg.2923 0 0))) (set! (bruijn ##.k.1730 2 0) (bruijn ##.at.733 3 0) (bruijn ##.reg.2924 0 1)))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->up->vars[0],
      VEncodeInt(3l), VEncodeInt(0l),
      self->vars[1]
    );
    }
}
static void _V10_Dvector__append_D270_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity core vector-copy!) (bruijn ##.vector-copy!.269 6 106) (close _V10_Dvector__append_D270_V0k155) (bruijn ##.x.1728 2 0) (bruijn ##.at.733 1 0) (bruijn ##.vec.734 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 106));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0k155, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0vector__copy_B(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V10_Dvector__append_D270_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core for-each) (bruijn ##.for-each.239 5 76) (close _V10_Dvector__append_D270_V0k154) (close _V10_Dvector__append_D270_V0lambda7) (bruijn ##.vecs.731 4 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 76));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0k154, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0lambda7, self))));
    VWORD _arg2 = 
      statics->up->up->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0for__each(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V10_Dvector__append_D270_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dvector__append_D270_V0lambda6) 0)
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0lambda6, self)), 1,
      VEncodeInt(0l));
}
static void _V10_Dvector__append_D270_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-vector (close _V10_Dvector__append_D270_V0k153) (bruijn ##.x.1734 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0k153, self)))),
      _var0);
}
static void _V10_Dvector__append_D270_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D270_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dvector__append_D270_V0k152) (##intrinsic ##vcore.+) (bruijn ##.x.1735 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0k152, self)))),
      _V40_V10vcore_D_P,
      _var0);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0vector__append(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0vector__append" #t (1 (##vcore.vector (bruijn ##.k.1688 0 0))) (2 ((bruijn ##.k.1689 0 0) (bruijn ##.a.718 0 1))) (3 (basic-block 3 3 (##.reg.2898 ##.reg.2899 ##.reg.2900) ((##vcore.vector-length (bruijn ##.a.719 1 1)) (##vcore.vector-length (bruijn ##.b.720 1 2)) (##vcore.+ (bruijn ##.reg.2898 0 0) (bruijn ##.reg.2899 0 1))) (##vcore.make-vector (close _V10_Dvector__append_D270_V0k139) (bruijn ##.reg.2900 0 2)))) (4 (basic-block 4 4 (##.reg.2902 ##.reg.2903 ##.reg.2904 ##.reg.2905) ((##vcore.vector-length (bruijn ##.a.722 1 1)) (##vcore.vector-length (bruijn ##.b.723 1 2)) (##vcore.vector-length (bruijn ##.c.724 1 3)) (##vcore.+ (bruijn ##.reg.2902 0 0) (bruijn ##.reg.2903 0 1) (bruijn ##.reg.2904 0 2))) (##vcore.make-vector (close _V10_Dvector__append_D270_V0k142) (bruijn ##.reg.2905 0 3)))) (5 (basic-block 5 5 (##.reg.2910 ##.reg.2911 ##.reg.2912 ##.reg.2913 ##.reg.2914) ((##vcore.vector-length (bruijn ##.a.726 1 1)) (##vcore.vector-length (bruijn ##.b.727 1 2)) (##vcore.vector-length (bruijn ##.c.728 1 3)) (##vcore.vector-length (bruijn ##.d.729 1 4)) (##vcore.+ (bruijn ##.reg.2910 0 0) (bruijn ##.reg.2911 0 1) (bruijn ##.reg.2912 0 2) (bruijn ##.reg.2913 0 3))) (##vcore.make-vector (close _V10_Dvector__append_D270_V0k146) (bruijn ##.reg.2914 0 4)))) (1 + (##qualified-call (vanity core map) (bruijn ##.map.238 1 75) (close _V10_Dvector__append_D270_V0k151) (##intrinsic ##vcore.vector-length) (bruijn ##.vecs.731 0 1))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__append, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0vector__append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // (##vcore.vector (bruijn ##.k.1688 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 1,
      _var0);
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0vector__append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1689 0 0) (bruijn ##.a.718 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0vector__append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.reg.2898 ##.reg.2899 ##.reg.2900) ((##vcore.vector-length (bruijn ##.a.719 1 1)) (##vcore.vector-length (bruijn ##.b.720 1 2)) (##vcore.+ (bruijn ##.reg.2898 0 0) (bruijn ##.reg.2899 0 1))) (##vcore.make-vector (close _V10_Dvector__append_D270_V0k139) (bruijn ##.reg.2900 0 2)))
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
    VCallFuncWithGC(runtime, (VFunc)VMakeVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0k139, self)))),
      self->vars[2]);
    }
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0core_V0vector__append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 4 4 (##.reg.2902 ##.reg.2903 ##.reg.2904 ##.reg.2905) ((##vcore.vector-length (bruijn ##.a.722 1 1)) (##vcore.vector-length (bruijn ##.b.723 1 2)) (##vcore.vector-length (bruijn ##.c.724 1 3)) (##vcore.+ (bruijn ##.reg.2902 0 0) (bruijn ##.reg.2903 0 1) (bruijn ##.reg.2904 0 2))) (##vcore.make-vector (close _V10_Dvector__append_D270_V0k142) (bruijn ##.reg.2905 0 3)))
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
    VCallFuncWithGC(runtime, (VFunc)VMakeVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0k142, self)))),
      self->vars[3]);
    }
}
__attribute__((used)) static void _V20Case4__V50_V0vanity_V0core_V0vector__append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 5 5 (##.reg.2910 ##.reg.2911 ##.reg.2912 ##.reg.2913 ##.reg.2914) ((##vcore.vector-length (bruijn ##.a.726 1 1)) (##vcore.vector-length (bruijn ##.b.727 1 2)) (##vcore.vector-length (bruijn ##.c.728 1 3)) (##vcore.vector-length (bruijn ##.d.729 1 4)) (##vcore.+ (bruijn ##.reg.2910 0 0) (bruijn ##.reg.2911 0 1) (bruijn ##.reg.2912 0 2) (bruijn ##.reg.2913 0 3))) (##vcore.make-vector (close _V10_Dvector__append_D270_V0k146) (bruijn ##.reg.2914 0 4)))
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
    VCallFuncWithGC(runtime, (VFunc)VMakeVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0k146, self)))),
      self->vars[4]);
    }
}
__attribute__((used)) static void _V20Case5__V50_V0vanity_V0core_V0vector__append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _varargs;
  // (##qualified-call (vanity core map) (bruijn ##.map.238 1 75) (close _V10_Dvector__append_D270_V0k151) (##intrinsic ##vcore.vector-length) (bruijn ##.vecs.731 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[75]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dvector__append_D270_V0k151, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dvector__length;
    VWORD _arg2 = 
      _varargs;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0map(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0vector__append(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0vector__append, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0vector__append\n"
"_V50_V0vanity_V0core_V0vector__append:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V50_V0vanity_V0core_V0vector__append\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V50_V0vanity_V0core_V0vector__append\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V50_V0vanity_V0core_V0vector__append\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V50_V0vanity_V0core_V0vector__append\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V50_V0vanity_V0core_V0vector__append\n"
"    cmp " ARGC_REG ", 1\n"
"    jge _V20Case5__V50_V0vanity_V0core_V0vector__append\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0vector__append\n"
);
void _V50_V0vanity_V0core_V0vector__fill_B_V10_Dloop_D744_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__fill_B_V10_Dloop_D744_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2928) ((##vcore.+ (bruijn ##.i.745 3 1) 1)) (##qualified-call (vanity core vector-fill! ##.loop.744) (bruijn ##.loop.744 4 0) (bruijn ##.k.1741 3 0) (bruijn ##.reg.2928 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__fill_B_V10_Dloop_D744(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0vector__fill_B_V10_Dloop_D744(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__fill_B_V10_Dloop_D744, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2927) ((##vcore.< (bruijn ##.i.745 1 1) (bruijn ##.end.743 3 4))) (if (bruijn ##.reg.2927 0 0) (##vcore.vector-set! (close _V50_V0vanity_V0core_V0vector__fill_B_V10_Dloop_D744_V0k156) (bruijn ##.v.740 3 1) (bruijn ##.i.745 1 1) (bruijn ##.fill.741 3 2)) ((bruijn ##.k.1741 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[4]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__fill_B_V10_Dloop_D744_V0k156, self)))),
      statics->up->up->vars[1],
      statics->vars[1],
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0vector__fill_B(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0vector__fill_B" #t (3 (basic-block 1 1 (##.reg.2925) ((##vcore.vector-length (bruijn ##.v.735 1 1))) (##qualified-call (vanity core vector-fill!) (bruijn ##.vector-fill!.271 2 108) (bruijn ##.k.1736 1 0) (bruijn ##.v.735 1 1) (bruijn ##.fill.736 1 2) 0 (bruijn ##.reg.2925 0 0)))) (4 (basic-block 1 1 (##.reg.2926) ((##vcore.vector-length (bruijn ##.v.737 1 1))) (##qualified-call (vanity core vector-fill!) (bruijn ##.vector-fill!.271 2 108) (bruijn ##.k.1738 1 0) (bruijn ##.v.737 1 1) (bruijn ##.fill.738 1 2) (bruijn ##.start.739 1 3) (bruijn ##.reg.2926 0 0)))) (5 (letrec 1 ((close "_V50_V0vanity_V0core_V0vector__fill_B_V10_Dloop_D744")) (##qualified-call (vanity core vector-fill! ##.loop.744) (bruijn ##.loop.744 0 0) (bruijn ##.k.1740 1 0) (bruijn ##.start.742 1 3)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0vector__fill_B, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0vector__fill_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2925) ((##vcore.vector-length (bruijn ##.v.735 1 1))) (##qualified-call (vanity core vector-fill!) (bruijn ##.vector-fill!.271 2 108) (bruijn ##.k.1736 1 0) (bruijn ##.v.735 1 1) (bruijn ##.fill.736 1 2) 0 (bruijn ##.reg.2925 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[108]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      VEncodeInt(0l);
    VWORD _arg4 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0core_V0vector__fill_B(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0vector__fill_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.reg.2926) ((##vcore.vector-length (bruijn ##.v.737 1 1))) (##qualified-call (vanity core vector-fill!) (bruijn ##.vector-fill!.271 2 108) (bruijn ##.k.1738 1 0) (bruijn ##.v.737 1 1) (bruijn ##.fill.738 1 2) (bruijn ##.start.739 1 3) (bruijn ##.reg.2926 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[108]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->vars[3];
    VWORD _arg4 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0core_V0vector__fill_B(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0vector__fill_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0vector__fill_B_V10_Dloop_D744")) (##qualified-call (vanity core vector-fill! ##.loop.744) (bruijn ##.loop.744 0 0) (bruijn ##.k.1740 1 0) (bruijn ##.start.742 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__fill_B_V10_Dloop_D744, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0vector__fill_B_V10_Dloop_D744(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0vector__fill_B(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0vector__fill_B, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0vector__fill_B\n"
"_V50_V0vanity_V0core_V0vector__fill_B:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0core_V0vector__fill_B\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V50_V0vanity_V0core_V0vector__fill_B\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V50_V0vanity_V0core_V0vector__fill_B\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0vector__fill_B\n"
);
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0make__hash__table" #t (1 (##vcore.make-hash-table (bruijn ##.k.1745 0 0) (##intrinsic ##vcore.eq?) #f 32)) (2 (##vcore.make-hash-table (bruijn ##.k.1746 0 0) (bruijn ##.eq.746 0 1) #f 32)) (3 (##vcore.make-hash-table (bruijn ##.k.1747 0 0) (bruijn ##.eq.747 0 1) (bruijn ##.hash.748 0 2) 32)) (4 (##vcore.make-hash-table (bruijn ##.k.1748 0 0) (bruijn ##.eq.749 0 1) (bruijn ##.hash.750 0 2) (bruijn ##.len.751 0 3))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0make__hash__table, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // (##vcore.make-hash-table (bruijn ##.k.1745 0 0) (##intrinsic ##vcore.eq?) #f 32)
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      _var0,
      _V40_V10vcore_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.make-hash-table (bruijn ##.k.1746 0 0) (bruijn ##.eq.746 0 1) #f 32)
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      _var0,
      _var1,
      VEncodeBool(false),
      VEncodeInt(32l));
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.make-hash-table (bruijn ##.k.1747 0 0) (bruijn ##.eq.747 0 1) (bruijn ##.hash.748 0 2) 32)
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      _var0,
      _var1,
      _var2,
      VEncodeInt(32l));
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0core_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  // (##vcore.make-hash-table (bruijn ##.k.1748 0 0) (bruijn ##.eq.749 0 1) (bruijn ##.hash.750 0 2) (bruijn ##.len.751 0 3))
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      _var0,
      _var1,
      _var2,
      _var3);
}
void _V50_V0vanity_V0core_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0make__hash__table, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0make__hash__table\n"
"_V50_V0vanity_V0core_V0make__hash__table:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V50_V0vanity_V0core_V0make__hash__table\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V50_V0vanity_V0core_V0make__hash__table\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V50_V0vanity_V0core_V0make__hash__table\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V50_V0vanity_V0core_V0make__hash__table\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0make__hash__table\n"
);
static void _V10_Dhash__table__ref_D273_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dhash__table__ref_D273_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core error) (bruijn ##.error.326 2 163) (bruijn ##.k.1750 0 0) (##string ##.string.2986) (bruijn ##.key.753 1 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[163]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D2986.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0error(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0hash__table__ref(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0hash__table__ref" #t (3 (##vcore.hash-table-ref (bruijn ##.k.1749 0 0) (bruijn ##.table.752 0 1) (bruijn ##.key.753 0 2) (close _V10_Dhash__table__ref_D273_V0lambda8))) (4 (##vcore.hash-table-ref (bruijn ##.k.1751 0 0) (bruijn ##.table.754 0 1) (bruijn ##.key.755 0 2) (bruijn ##.thunk.756 0 3))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0hash__table__ref, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0hash__table__ref(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.hash-table-ref (bruijn ##.k.1749 0 0) (bruijn ##.table.752 0 1) (bruijn ##.key.753 0 2) (close _V10_Dhash__table__ref_D273_V0lambda8))
    VCallFuncWithGC(runtime, (VFunc)VHashTableRef, 4,
      _var0,
      _var1,
      _var2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dhash__table__ref_D273_V0lambda8, self)))));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0hash__table__ref(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  // (##vcore.hash-table-ref (bruijn ##.k.1751 0 0) (bruijn ##.table.754 0 1) (bruijn ##.key.755 0 2) (bruijn ##.thunk.756 0 3))
    VCallFuncWithGC(runtime, (VFunc)VHashTableRef, 4,
      _var0,
      _var1,
      _var2,
      _var3);
}
void _V50_V0vanity_V0core_V0hash__table__ref(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0hash__table__ref, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0hash__table__ref\n"
"_V50_V0vanity_V0core_V0hash__table__ref:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0core_V0hash__table__ref\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V50_V0vanity_V0core_V0hash__table__ref\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0hash__table__ref\n"
);
void _V50_V0vanity_V0core_V0hash__table__set_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0hash__table__set_B, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  // (##vcore.hash-table-set! (bruijn ##.k.1752 0 0) (bruijn ##.table.757 0 1) (bruijn ##.key.758 0 2) (bruijn ##.val.759 0 3))
    VCallFuncWithGC(runtime, (VFunc)VHashTableSet, 4,
      _var0,
      _var1,
      _var2,
      _var3);
}
void _V50_V0vanity_V0core_V0hash__table___Galist_V10_Dloop_D762_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0hash__table___Galist_V10_Dloop_D762_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1754 4 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.reg.2934 1 0) (bruijn ##.reg.2936 1 2)) (bruijn ##.x.1759 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        statics->vars[2]),
        _var0));
}
void _V50_V0vanity_V0core_V0hash__table___Galist_V10_Dloop_D762(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0hash__table___Galist_V10_Dloop_D762, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.reg.2929 ##.reg.2930) ((##vcore.vector-length (bruijn ##.vec.761 3 0)) (##vcore.< (bruijn ##.i.763 1 1) (bruijn ##.reg.2929 0 0))) (if (bruijn ##.reg.2930 0 1) (basic-block 2 2 (##.reg.2931 ##.reg.2932) ((##vcore.vector-ref (bruijn ##.vec.761 4 0) (bruijn ##.i.763 2 1)) (##vcore.void? (bruijn ##.reg.2931 0 0))) (if (bruijn ##.reg.2932 0 1) (basic-block 1 1 (##.reg.2933) ((##vcore.+ (bruijn ##.i.763 3 1) 3)) (##qualified-call (vanity core hash-table->alist ##.loop.762) (bruijn ##.loop.762 4 0) (bruijn ##.k.1754 3 0) (bruijn ##.reg.2933 0 0))) (basic-block 4 4 (##.reg.2934 ##.reg.2935 ##.reg.2936 ##.reg.2937) ((##vcore.vector-ref (bruijn ##.vec.761 5 0) (bruijn ##.i.763 3 1)) (##vcore.+ (bruijn ##.i.763 3 1) 2) (##vcore.vector-ref (bruijn ##.vec.761 5 0) (bruijn ##.reg.2935 0 1)) (##vcore.+ (bruijn ##.i.763 3 1) 3)) (##qualified-call (vanity core hash-table->alist ##.loop.762) (bruijn ##.loop.762 4 0) (close _V50_V0vanity_V0core_V0hash__table___Galist_V10_Dloop_D762_V0k158) (bruijn ##.reg.2937 0 3))))) ((bruijn ##.k.1754 1 0) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->up->vars[1]);
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
      statics->up->up->vars[1],
      VEncodeInt(3l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0hash__table___Galist_V10_Dloop_D762(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(2l));
    self->vars[2] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(3l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0hash__table___Galist_V10_Dloop_D762_V0k158, self))));
    VWORD _arg1 = 
      self->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0hash__table___Galist_V10_Dloop_D762(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
}
    }
}
void _V50_V0vanity_V0core_V0hash__table___Galist_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0hash__table___Galist_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0hash__table___Galist_V10_Dloop_D762")) (##qualified-call (vanity core hash-table->alist ##.loop.762) (bruijn ##.loop.762 0 0) (bruijn ##.k.1753 2 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0hash__table___Galist_V10_Dloop_D762, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0hash__table___Galist_V10_Dloop_D762(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0hash__table___Galist(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0hash__table___Galist, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.hash-table-vector (close _V50_V0vanity_V0core_V0hash__table___Galist_V0k157) (bruijn ##.table.760 0 1))
    VCallFuncWithGC(runtime, (VFunc)VHashTableVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0hash__table___Galist_V0k157, self)))),
      _var1);
}
void _V50_V0vanity_V0core_V0number___Gstring(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0number___Gstring, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity core sprintf) (bruijn ##.sprintf.322 1 159) (bruijn ##.k.1766 0 0) (##string ##.string.2987) (bruijn ##.x.764 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[159]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D2987.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0sprintf(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0char__numeric_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0char__numeric_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.reg.2938 ##.reg.2939) ((##vcore.char-integer (bruijn ##.x.765 1 1)) (##vcore.<= 48 (bruijn ##.reg.2938 0 0) 57)) ((bruijn ##.k.1767 1 0) (bruijn ##.reg.2939 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCharInt2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCmpLe(runtime, NULL,
      VEncodeInt(48l),
      self->vars[0],
      VEncodeInt(57l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0core_V0char__alphabetic_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0char__alphabetic_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.reg.2940 ##.reg.2941) ((##vcore.char-integer (bruijn ##.x.766 1 1)) (##vcore.<= 65 (bruijn ##.reg.2940 0 0) 90)) (if (bruijn ##.reg.2941 0 1) ((bruijn ##.k.1769 1 0) (bruijn ##.reg.2941 0 1)) (basic-block 1 1 (##.reg.2942) ((##vcore.<= 97 (bruijn ##.reg.2940 1 0) 122)) ((bruijn ##.k.1769 2 0) (bruijn ##.reg.2942 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCharInt2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCmpLe(runtime, NULL,
      VEncodeInt(65l),
      self->vars[0],
      VEncodeInt(90l));
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLe(runtime, NULL,
      VEncodeInt(97l),
      statics->vars[0],
      VEncodeInt(122l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0core_V0try__or__gc_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0try__or__gc_V0lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (bruijn ##.ok.773 0 2) ((bruijn ##.k.1774 0 0) (bruijn ##.ret.772 0 1)) (##qualified-call (vanity core error) (bruijn ##.error.326 4 163) (bruijn ##.k.1774 0 0) (bruijn ##.msg.769 3 2)))
if(VDecodeBool(
_var2)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[163]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0error(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0core_V0try__or__gc_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0try__or__gc_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1772 1 0) (bruijn ##.thunk.768 2 1) (close _V50_V0vanity_V0core_V0try__or__gc_V0lambda10))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      statics->up->vars[1],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0try__or__gc_V0lambda10, self)))));
}
void _V50_V0vanity_V0core_V0try__or__gc_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0try__or__gc_V0lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (bruijn ##.ok.771 0 2) ((bruijn ##.k.1772 0 0) (bruijn ##.ret.770 0 1)) (##vcore.garbage-collect (close _V50_V0vanity_V0core_V0try__or__gc_V0k159) #t))
if(VDecodeBool(
_var2)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VGarbageCollect, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0try__or__gc_V0k159, self)))),
      VEncodeBool(true));
}
}
void _V50_V0vanity_V0core_V0try__or__gc(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0try__or__gc, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.k.1771 0 0) (bruijn ##.thunk.768 0 1) (close _V50_V0vanity_V0core_V0try__or__gc_V0lambda9))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      _var1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0try__or__gc_V0lambda9, self)))));
}
void _V50_V0vanity_V0core_V0close__port_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0close__port_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1776 0 0) (##vcore.finalize! (bruijn ##.k.1775 1 0) (bruijn ##.port.774 1 1)) (##vcore.close-stream (bruijn ##.k.1775 1 0) (bruijn ##.port.774 1 1)))
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
void _V50_V0vanity_V0core_V0close__port(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0close__port, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.has-finalizer? (close _V50_V0vanity_V0core_V0close__port_V0k160) (bruijn ##.port.774 0 1))
    VCallFuncWithGC(runtime, (VFunc)VHasFinalizer, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0close__port_V0k160, self)))),
      _var1);
}
void _V50_V0vanity_V0core_V0open__input__file__impl_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__input__file__impl_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.open-input-stream (bruijn ##.k.1778 0 0) (bruijn ##.path.775 1 1))
    VCallFuncWithGC(runtime, (VFunc)VOpenInputStream2, 2,
      _var0,
      statics->vars[1]);
}
void _V50_V0vanity_V0core_V0open__input__file__impl_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__input__file__impl_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.ret.776 1 1) (##vcore.set-finalizer! (bruijn ##.k.1781 0 0) (bruijn ##.ret.776 1 1) (##intrinsic ##vcore.close-stream)) ((bruijn ##.k.1781 0 0) #f))
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
void _V50_V0vanity_V0core_V0open__input__file__impl_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__input__file__impl_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core values) (bruijn ##.values.305 3 142) (bruijn ##.k.1779 1 0) (bruijn ##.ret.776 1 1) (bruijn ##.ok.777 1 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[142]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0values(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0open__input__file__impl_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__input__file__impl_V0lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0core_V0open__input__file__impl_V0k161) (close _V50_V0vanity_V0core_V0open__input__file__impl_V0k162))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__input__file__impl_V0k161, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__input__file__impl_V0k162, self)))));
}
void _V50_V0vanity_V0core_V0open__input__file__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__input__file__impl, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call-with-values (bruijn ##.k.1777 0 0) (close _V50_V0vanity_V0core_V0open__input__file__impl_V0lambda11) (close _V50_V0vanity_V0core_V0open__input__file__impl_V0lambda12))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__input__file__impl_V0lambda11, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__input__file__impl_V0lambda12, self)))));
}
void _V50_V0vanity_V0core_V0open__output__file__impl_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__output__file__impl_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.open-output-stream (bruijn ##.k.1783 0 0) (bruijn ##.path.778 1 1))
    VCallFuncWithGC(runtime, (VFunc)VOpenOutputStream2, 2,
      _var0,
      statics->vars[1]);
}
void _V50_V0vanity_V0core_V0open__output__file__impl_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__output__file__impl_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.ret.779 1 1) (##vcore.set-finalizer! (bruijn ##.k.1786 0 0) (bruijn ##.ret.779 1 1) (##intrinsic ##vcore.close-stream)) ((bruijn ##.k.1786 0 0) #f))
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
void _V50_V0vanity_V0core_V0open__output__file__impl_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__output__file__impl_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core values) (bruijn ##.values.305 3 142) (bruijn ##.k.1784 1 0) (bruijn ##.ret.779 1 1) (bruijn ##.ok.780 1 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[142]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0values(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0open__output__file__impl_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__output__file__impl_V0lambda14, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0core_V0open__output__file__impl_V0k163) (close _V50_V0vanity_V0core_V0open__output__file__impl_V0k164))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__output__file__impl_V0k163, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__output__file__impl_V0k164, self)))));
}
void _V50_V0vanity_V0core_V0open__output__file__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__output__file__impl, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call-with-values (bruijn ##.k.1782 0 0) (close _V50_V0vanity_V0core_V0open__output__file__impl_V0lambda13) (close _V50_V0vanity_V0core_V0open__output__file__impl_V0lambda14))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__output__file__impl_V0lambda13, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__output__file__impl_V0lambda14, self)))));
}
void _V50_V0vanity_V0core_V0open__output__string__impl_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__output__string__impl_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.open-output-string (bruijn ##.k.1788 0 0))
    VCallFuncWithGC(runtime, (VFunc)VOpenOutputString2, 1,
      _var0);
}
void _V50_V0vanity_V0core_V0open__output__string__impl_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__output__string__impl_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.ret.781 1 1) (##vcore.set-finalizer! (bruijn ##.k.1791 0 0) (bruijn ##.ret.781 1 1) (##intrinsic ##vcore.close-stream)) ((bruijn ##.k.1791 0 0) #f))
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
void _V50_V0vanity_V0core_V0open__output__string__impl_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__output__string__impl_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core values) (bruijn ##.values.305 3 142) (bruijn ##.k.1789 1 0) (bruijn ##.ret.781 1 1) (bruijn ##.ok.782 1 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[142]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0values(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0open__output__string__impl_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__output__string__impl_V0lambda16, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0core_V0open__output__string__impl_V0k165) (close _V50_V0vanity_V0core_V0open__output__string__impl_V0k166))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__output__string__impl_V0k165, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__output__string__impl_V0k166, self)))));
}
void _V50_V0vanity_V0core_V0open__output__string__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__output__string__impl, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1787 0 0) (close _V50_V0vanity_V0core_V0open__output__string__impl_V0lambda15) (close _V50_V0vanity_V0core_V0open__output__string__impl_V0lambda16))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__output__string__impl_V0lambda15, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__output__string__impl_V0lambda16, self)))));
}
void _V50_V0vanity_V0core_V0open__input__file_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__input__file_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core open-input-file-impl) (bruijn ##.open-input-file-impl.284 2 121) (bruijn ##.k.1793 0 0) (bruijn ##.path.783 1 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[121]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0open__input__file__impl(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0core_V0open__input__file(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__input__file, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity core try-or-gc) (bruijn ##.try-or-gc.282 1 119) (bruijn ##.k.1792 0 0) (close _V50_V0vanity_V0core_V0open__input__file_V0lambda17) (##string ##.string.2988))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[119]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__input__file_V0lambda17, self))));
    VWORD _arg2 = 
      VEncodePointer(&_V10_Dstring_D2988.sym, VPOINTER_OTHER);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0try__or__gc(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0open__output__file_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__output__file_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core open-output-file-impl) (bruijn ##.open-output-file-impl.285 2 122) (bruijn ##.k.1795 0 0) (bruijn ##.path.784 1 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[122]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0open__output__file__impl(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0core_V0open__output__file(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__output__file, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity core try-or-gc) (bruijn ##.try-or-gc.282 1 119) (bruijn ##.k.1794 0 0) (close _V50_V0vanity_V0core_V0open__output__file_V0lambda18) (##string ##.string.2989))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[119]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__output__file_V0lambda18, self))));
    VWORD _arg2 = 
      VEncodePointer(&_V10_Dstring_D2989.sym, VPOINTER_OTHER);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0try__or__gc(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0open__output__string(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0open__output__string, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core try-or-gc) (bruijn ##.try-or-gc.282 1 119) (bruijn ##.k.1796 0 0) (bruijn ##.open-output-string-impl.286 1 123) (##string ##.string.2990))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[119]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[123];
    VWORD _arg2 = 
      VEncodePointer(&_V10_Dstring_D2990.sym, VPOINTER_OTHER);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0try__or__gc(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0call__with__port_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0call__with__port_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1797 2 0) (bruijn ##.ret.787 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0core_V0call__with__port_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0call__with__port_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core close-port) (bruijn ##.close-port.283 2 120) (close _V50_V0vanity_V0core_V0call__with__port_V0k168) (bruijn ##.port.785 1 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[120]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0call__with__port_V0k168, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0close__port(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0core_V0call__with__port(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0call__with__port, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.proc.786 0 2) (close _V50_V0vanity_V0core_V0call__with__port_V0k167) (bruijn ##.port.785 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var2), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0call__with__port_V0k167, self)))),
      _var1);
}
void _V50_V0vanity_V0core_V0call__with__input__file_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0call__with__input__file_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core call-with-port) (bruijn ##.call-with-port.291 2 128) (bruijn ##.k.1799 1 0) (bruijn ##.x.1800 0 0) (bruijn ##.proc.789 1 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[128]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0call__with__port(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0call__with__input__file(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0call__with__input__file, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity core open-input-file) (bruijn ##.open-input-file.287 1 124) (close _V50_V0vanity_V0core_V0call__with__input__file_V0k169) (bruijn ##.path.788 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[124]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0call__with__input__file_V0k169, self))));
    VWORD _arg1 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0open__input__file(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0core_V0call__with__output__file_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0call__with__output__file_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core call-with-port) (bruijn ##.call-with-port.291 2 128) (bruijn ##.k.1801 1 0) (bruijn ##.x.1802 0 0) (bruijn ##.proc.791 1 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[128]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0call__with__port(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0call__with__output__file(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0call__with__output__file, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity core open-output-file) (bruijn ##.open-output-file.288 1 125) (close _V50_V0vanity_V0core_V0call__with__output__file_V0k170) (bruijn ##.path.790 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[125]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0call__with__output__file_V0k170, self))));
    VWORD _arg1 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0open__output__file(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0core_V0with__output__to__file_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0with__output__to__file_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1803 6 0) (bruijn ##.ret.798 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0core_V0with__output__to__file_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0with__output__to__file_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parameter.0.795 3 0) (close _V50_V0vanity_V0core_V0with__output__to__file_V0k175) '##vcore.pop-value (bruijn ##.keyval.1.796 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0with__output__to__file_V0k175, self)))),
      _V10vcore_Dpop__value,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0core_V0with__output__to__file_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0with__output__to__file_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core close-port) (bruijn ##.close-port.283 5 120) (close _V50_V0vanity_V0core_V0with__output__to__file_V0k174) (bruijn ##.port.794 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 120));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0with__output__to__file_V0k174, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0close__port(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0core_V0with__output__to__file_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0with__output__to__file_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.thunk.793 3 2) (close _V50_V0vanity_V0core_V0with__output__to__file_V0k173))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0with__output__to__file_V0k173, self)))));
}
void _V50_V0vanity_V0core_V0with__output__to__file_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parameter.0.795 0 0) (close _V50_V0vanity_V0core_V0with__output__to__file_V0k172) '##vcore.push-value (bruijn ##.port.794 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0with__output__to__file_V0k172, self)))),
      _V10vcore_Dpush__value,
      statics->vars[0]);
}
void _V50_V0vanity_V0core_V0with__output__to__file_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0with__output__to__file_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0core_V0with__output__to__file_V0lambda19) (bruijn ##.current-output-port.279 2 116))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0with__output__to__file_V0lambda19, self)), 1,
      statics->up->vars[116]);
}
void _V50_V0vanity_V0core_V0with__output__to__file(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0with__output__to__file, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity core open-output-file) (bruijn ##.open-output-file.288 1 125) (close _V50_V0vanity_V0core_V0with__output__to__file_V0k171) (bruijn ##.str.792 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[125]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0with__output__to__file_V0k171, self))));
    VWORD _arg1 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0open__output__file(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0core_V0with__input__from__file_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0with__input__from__file_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1806 6 0) (bruijn ##.ret.805 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0core_V0with__input__from__file_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0with__input__from__file_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parameter.3.802 3 0) (close _V50_V0vanity_V0core_V0with__input__from__file_V0k180) '##vcore.pop-value (bruijn ##.keyval.4.803 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0with__input__from__file_V0k180, self)))),
      _V10vcore_Dpop__value,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0core_V0with__input__from__file_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0with__input__from__file_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core close-port) (bruijn ##.close-port.283 5 120) (close _V50_V0vanity_V0core_V0with__input__from__file_V0k179) (bruijn ##.port.801 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 120));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0with__input__from__file_V0k179, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0close__port(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0core_V0with__input__from__file_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0with__input__from__file_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.thunk.800 3 2) (close _V50_V0vanity_V0core_V0with__input__from__file_V0k178))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0with__input__from__file_V0k178, self)))));
}
void _V50_V0vanity_V0core_V0with__input__from__file_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parameter.3.802 0 0) (close _V50_V0vanity_V0core_V0with__input__from__file_V0k177) '##vcore.push-value (bruijn ##.port.801 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0with__input__from__file_V0k177, self)))),
      _V10vcore_Dpush__value,
      statics->vars[0]);
}
void _V50_V0vanity_V0core_V0with__input__from__file_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0with__input__from__file_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0core_V0with__input__from__file_V0lambda20) (bruijn ##.current-input-port.281 2 118))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0with__input__from__file_V0lambda20, self)), 1,
      statics->up->vars[118]);
}
void _V50_V0vanity_V0core_V0with__input__from__file(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0with__input__from__file, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity core open-input-file) (bruijn ##.open-input-file.287 1 124) (close _V50_V0vanity_V0core_V0with__input__from__file_V0k176) (bruijn ##.str.799 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[124]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0with__input__from__file_V0k176, self))));
    VWORD _arg1 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0open__input__file(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
static void _V10_Dread__char_D296_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__char_D296_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2943) ((##vcore.read-char (bruijn ##.x.1810 1 0))) ((bruijn ##.k.1809 2 0) (bruijn ##.reg.2943 0 0)))
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
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0read__char(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0read__char" #t (1 ((bruijn ##.current-input-port.281 1 118) (close _V10_Dread__char_D296_V0k181))) (2 (basic-block 1 1 (##.reg.2944) ((##vcore.read-char (bruijn ##.port.806 1 1))) ((bruijn ##.k.1811 1 0) (bruijn ##.reg.2944 0 0)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0read__char, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0read__char(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-input-port.281 1 118) (close _V10_Dread__char_D296_V0k181))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[118]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dread__char_D296_V0k181, self)))));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0read__char(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2944) ((##vcore.read-char (bruijn ##.port.806 1 1))) ((bruijn ##.k.1811 1 0) (bruijn ##.reg.2944 0 0)))
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
void _V50_V0vanity_V0core_V0read__char(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0read__char, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0read__char\n"
"_V50_V0vanity_V0core_V0read__char:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V50_V0vanity_V0core_V0read__char\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V50_V0vanity_V0core_V0read__char\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0read__char\n"
);
static void _V10_Dread__line_D297_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core read-line) (bruijn ##.read-line.297 2 134) (bruijn ##.k.1812 1 0) (bruijn ##.x.1813 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[134]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0read__line(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
static void _V10_Dread__line_D297_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.2946 1 0) ((bruijn ##.k.1819 0 0) (##string ##.string.2985)) ((bruijn ##.k.1819 0 0) (bruijn ##.rest.813 2 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D2985.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
}
static void _V10_Dread__line_D297_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core string-append) (bruijn ##.string-append.253 8 90) (bruijn ##.k.1814 7 0) (bruijn ##.line.808 6 0) (bruijn ##.x.1817 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 90));
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0string__append(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V10_Dread__line_D297_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2946) ((##vcore.eof-object? (bruijn ##.rest.813 1 0))) ((close _V10_Dread__line_D297_V0k186) (close _V10_Dread__line_D297_V0k187)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEofP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dread__line_D297_V0k186, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dread__line_D297_V0k187, self)))));
    }
}
static void _V10_Dread__line_D297_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2945) ((##vcore.eof-object? (bruijn ##.line.808 3 0))) (if (bruijn ##.reg.2945 0 0) ((bruijn ##.k.1814 4 0) (bruijn ##.line.808 3 0)) (if (bruijn ##.complete.809 3 1) ((bruijn ##.k.1814 4 0) (bruijn ##.line.808 3 0)) (##qualified-call (vanity core read-line) (bruijn ##.read-line.297 5 134) (close _V10_Dread__line_D297_V0k185) (bruijn ##.port.807 4 1)))))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 134));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dread__line_D297_V0k185, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0read__line(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
    }
}
static void _V10_Dread__line_D297_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Dread__line_D297_V0k184) (bruijn ##.dummy.8.810 1 2) (bruijn ##.x.1820 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dread__line_D297_V0k184, self)))),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Dread__line_D297_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.read-line2 (bruijn ##.k.1821 0 0) (bruijn ##.port.807 2 1))
    VCallFuncWithGC(runtime, (VFunc)VReadLine3, 2,
      _var0,
      statics->up->vars[1]);
}
static void _V10_Dread__line_D297_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.1822 1 0) (bruijn ##.complete.809 2 1) (bruijn ##.complete.7.812 1 2))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      statics->vars[2]
    );
}
static void _V10_Dread__line_D297_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D297_V0lambda22, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V10_Dread__line_D297_V0k188) (bruijn ##.line.808 1 0) (bruijn ##.line.6.811 0 1))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dread__line_D297_V0k188, self)))),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0read__line(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0read__line" #t (1 ((bruijn ##.current-input-port.281 1 118) (close _V10_Dread__line_D297_V0k182))) (2 (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Dread__line_D297_V0k183) (close _V10_Dread__line_D297_V0lambda21) (close _V10_Dread__line_D297_V0lambda22)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0read__line, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0read__line(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-input-port.281 1 118) (close _V10_Dread__line_D297_V0k182))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[118]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dread__line_D297_V0k182, self)))));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0read__line(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Dread__line_D297_V0k183) (close _V10_Dread__line_D297_V0lambda21) (close _V10_Dread__line_D297_V0lambda22)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dread__line_D297_V0k183, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dread__line_D297_V0lambda21, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dread__line_D297_V0lambda22, self)))));
    }
}
void _V50_V0vanity_V0core_V0read__line(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0read__line, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0read__line\n"
"_V50_V0vanity_V0core_V0read__line:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V50_V0vanity_V0core_V0read__line\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V50_V0vanity_V0core_V0read__line\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0read__line\n"
);
static void _V10_Dread_D298_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread_D298_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.read (bruijn ##.k.1824 1 0) (bruijn ##.x.1825 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRead2, 2,
      statics->vars[0],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0read(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0read" #t (1 ((bruijn ##.current-input-port.281 1 118) (close _V10_Dread_D298_V0k189))) (2 (##vcore.read (bruijn ##.k.1826 0 0) (bruijn ##.port.814 0 1))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0read, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0read(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-input-port.281 1 118) (close _V10_Dread_D298_V0k189))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[118]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dread_D298_V0k189, self)))));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0read(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.read (bruijn ##.k.1826 0 0) (bruijn ##.port.814 0 1))
    VCallFuncWithGC(runtime, (VFunc)VRead2, 2,
      _var0,
      _var1);
}
void _V50_V0vanity_V0core_V0read(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0read, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0read\n"
"_V50_V0vanity_V0core_V0read:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V50_V0vanity_V0core_V0read\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V50_V0vanity_V0core_V0read\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0read\n"
);
static void _V10_Dnewline_D299_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dnewline_D299_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2947) ((##vcore.newline (bruijn ##.x.1828 1 0))) ((bruijn ##.k.1827 2 0) (bruijn ##.reg.2947 0 0)))
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
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0newline(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0newline" #t (1 ((bruijn ##.current-output-port.279 1 116) (close _V10_Dnewline_D299_V0k190))) (2 (basic-block 1 1 (##.reg.2948) ((##vcore.newline (bruijn ##.port.815 1 1))) ((bruijn ##.k.1829 1 0) (bruijn ##.reg.2948 0 0)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0newline, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0newline(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-output-port.279 1 116) (close _V10_Dnewline_D299_V0k190))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[116]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dnewline_D299_V0k190, self)))));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0newline(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2948) ((##vcore.newline (bruijn ##.port.815 1 1))) ((bruijn ##.k.1829 1 0) (bruijn ##.reg.2948 0 0)))
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
void _V50_V0vanity_V0core_V0newline(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0newline, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0newline\n"
"_V50_V0vanity_V0core_V0newline:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V50_V0vanity_V0core_V0newline\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V50_V0vanity_V0core_V0newline\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0newline\n"
);
void _V50_V0vanity_V0core_V0printout__list_V10_Dloop_D819_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout__list_V10_Dloop_D819_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core printout-list ##.loop.819) (bruijn ##.loop.819 3 0) (bruijn ##.k.1834 2 0) (##inline ##vcore.cdr (bruijn ##.xs.820 2 1)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0printout__list_V10_Dloop_D819(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0core_V0printout__list_V10_Dloop_D819(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout__list_V10_Dloop_D819, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.xs.820 0 1)) (basic-block 1 1 (##.reg.2950) ((##vcore.display-word (##string ##.string.2992) (bruijn ##.port.818 5 3))) (##qualified-call (vanity core printout) (bruijn ##.printout.302 6 139) (close _V50_V0vanity_V0core_V0printout__list_V10_Dloop_D819_V0k192) (##inline ##vcore.car (bruijn ##.xs.820 1 1)) (bruijn ##.write?.817 5 2) (bruijn ##.port.818 5 3))) (if (##inline ##vcore.null? (bruijn ##.xs.820 0 1)) ((bruijn ##.k.1834 0 0) 'ok) (basic-block 1 1 (##.reg.2951) ((##vcore.display-word (##string ##.string.2993) (bruijn ##.port.818 5 3))) (##qualified-call (vanity core printout) (bruijn ##.printout.302 6 139) (bruijn ##.k.1834 1 0) (bruijn ##.xs.820 1 1) (bruijn ##.write?.817 5 2) (bruijn ##.port.818 5 3)))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2992.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 3));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 139));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout__list_V10_Dloop_D819_V0k192, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 3);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0printout(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
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
      VEncodePointer(&_V10_Dstring_D2993.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 3));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 139));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 3);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0printout(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
}
}
void _V50_V0vanity_V0core_V0printout__list_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout__list_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2952) ((##vcore.display-word (##string ##.string.2994) (bruijn ##.port.818 5 3))) ((bruijn ##.k.1830 5 0) (bruijn ##.reg.2952 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2994.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0core_V0printout__list_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout__list_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0printout__list_V10_Dloop_D819")) (##qualified-call (vanity core printout-list ##.loop.819) (bruijn ##.loop.819 0 0) (close _V50_V0vanity_V0core_V0printout__list_V0k193) (##inline ##vcore.cdr (bruijn ##.x.816 3 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout__list_V10_Dloop_D819, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout__list_V0k193, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0printout__list_V10_Dloop_D819(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0printout__list(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout__list, got ~D~N"
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
  // (basic-block 1 1 (##.reg.2949) ((##vcore.display-word (##string ##.string.2991) (bruijn ##.port.818 1 3))) (##qualified-call (vanity core printout) (bruijn ##.printout.302 2 139) (close _V50_V0vanity_V0core_V0printout__list_V0k191) (##inline ##vcore.car (bruijn ##.x.816 1 1)) (bruijn ##.write?.817 1 2) (bruijn ##.port.818 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2991.sym, VPOINTER_OTHER),
      statics->vars[3]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[139]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout__list_V0k191, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0printout(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0printout__quotation_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout__quotation_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core printout) (bruijn ##.printout.302 4 139) (bruijn ##.k.1844 3 0) (bruijn ##.x.1846 0 0) (bruijn ##.write?.822 3 2) (bruijn ##.port.823 3 3))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[139]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[2];
    VWORD _arg3 = 
      statics->up->up->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0printout(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0core_V0printout__quotation_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout__quotation_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2953) ((##vcore.display-word (##inline ##vcore.cdr (bruijn ##.x.1848 1 0)) (bruijn ##.port.823 2 3))) (##qualified-call (vanity core cadr) (bruijn ##.cadr.203 3 40) (close _V50_V0vanity_V0core_V0printout__quotation_V0k195) (bruijn ##.x.821 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VInlineCdr2(runtime,
        statics->vars[0]),
      statics->up->vars[3]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[40]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout__quotation_V0k195, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0cadr(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0printout__quotation(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout__quotation, got ~D~N"
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
  // (##qualified-call (vanity core assv) (bruijn ##.assv.247 1 84) (close _V50_V0vanity_V0core_V0printout__quotation_V0k194) (##inline ##vcore.car (bruijn ##.x.821 0 1)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quote '(##string ##.string.2995)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quasiquote '(##string ##.string.2996)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote '(##string ##.string.2997)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote-splicing '(##string ##.string.2998)) '())))))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[84]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout__quotation_V0k194, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        _var1);
    VWORD _arg2 = 
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quote,
        VEncodePointer(&_V10_Dstring_D2995.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quasiquote,
        VEncodePointer(&_V10_Dstring_D2996.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unquote,
        VEncodePointer(&_V10_Dstring_D2997.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unquote__splicing,
        VEncodePointer(&_V10_Dstring_D2998.sym, VPOINTER_OTHER)),
        VNULL))));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0assv(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0printout_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1860 0 0) (##qualified-call (vanity core printout-quotation) (bruijn ##.printout-quotation.301 2 138) (bruijn ##.k.1858 1 0) (bruijn ##.x.824 1 1) (bruijn ##.write?.825 1 2) (bruijn ##.port.826 1 3)) (##qualified-call (vanity core printout-list) (bruijn ##.printout-list.300 2 137) (bruijn ##.k.1858 1 0) (bruijn ##.x.824 1 1) (bruijn ##.write?.825 1 2) (bruijn ##.port.826 1 3)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[138]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0printout__quotation(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[137]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0printout__list(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0core_V0printout_V10_Dloop_D828_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout_V10_Dloop_D828_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.i.829 1 1) 0) ((bruijn ##.k.1876 0 0) #f) (basic-block 1 1 (##.reg.2959) ((##vcore.display-word (##string ##.string.2992) (bruijn ##.port.826 6 3))) ((bruijn ##.k.1876 1 0) (bruijn ##.reg.2959 0 0))))
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
      VEncodePointer(&_V10_Dstring_D2992.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0core_V0printout_V10_Dloop_D828_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout_V10_Dloop_D828_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2958) ((##vcore.+ (bruijn ##.i.829 4 1) 1)) (##qualified-call (vanity core printout ##.loop.828) (bruijn ##.loop.828 5 0) (bruijn ##.k.1869 4 0) (bruijn ##.reg.2958 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0printout_V10_Dloop_D828(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0printout_V10_Dloop_D828_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout_V10_Dloop_D828_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2957) ((##vcore.vector-ref (bruijn ##.x.824 6 1) (bruijn ##.i.829 2 1))) (##qualified-call (vanity core printout) (bruijn ##.printout.302 7 139) (close _V50_V0vanity_V0core_V0printout_V10_Dloop_D828_V0k199) (bruijn ##.reg.2957 0 0) (bruijn ##.write?.825 6 2) (bruijn ##.port.826 6 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 139));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout_V10_Dloop_D828_V0k199, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 3);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0printout(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0printout_V10_Dloop_D828(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout_V10_Dloop_D828, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.829 0 1) (bruijn ##.reg.2955 2 0)) ((bruijn ##.k.1869 0 0) #f) ((close _V50_V0vanity_V0core_V0printout_V10_Dloop_D828_V0k197) (close _V50_V0vanity_V0core_V0printout_V10_Dloop_D828_V0k198)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout_V10_Dloop_D828_V0k197, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout_V10_Dloop_D828_V0k198, self)))));
}
}
void _V50_V0vanity_V0core_V0printout_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2960) ((##vcore.display-word (##string ##.string.2994) (bruijn ##.port.826 5 3))) ((bruijn ##.k.1858 5 0) (bruijn ##.reg.2960 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D2994.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0core_V0printout_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.eq.830 1 0) (##intrinsic ##vcore.eq?)) (basic-block 1 1 (##.reg.2962) ((##vcore.display-word (##string ##.string.3000) (bruijn ##.port.826 5 3))) ((bruijn ##.k.1881 1 0) (bruijn ##.reg.2962 0 0))) (if (##inline ##vcore.eq? (bruijn ##.eq.830 1 0) (##intrinsic ##vcore.eqv?)) (basic-block 1 1 (##.reg.2963) ((##vcore.display-word (##string ##.string.3001) (bruijn ##.port.826 5 3))) ((bruijn ##.k.1881 1 0) (bruijn ##.reg.2963 0 0))) (basic-block 1 1 (##.reg.2964) ((##vcore.display-word (##string ##.string.3002) (bruijn ##.port.826 5 3))) ((bruijn ##.k.1881 1 0) (bruijn ##.reg.2964 0 0)))))
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
      VEncodePointer(&_V10_Dstring_D3000.sym, VPOINTER_OTHER),
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
      VEncodePointer(&_V10_Dstring_D3001.sym, VPOINTER_OTHER),
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
      VEncodePointer(&_V10_Dstring_D3002.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
}
void _V50_V0vanity_V0core_V0printout_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core printout) (bruijn ##.printout.302 6 139) (bruijn ##.k.1858 5 0) (bruijn ##.x.1879 0 0) (bruijn ##.write?.825 5 2) (bruijn ##.port.826 5 3))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 139));
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 3);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0printout(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0core_V0printout_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core hash-table->alist) (bruijn ##.hash-table->alist.275 5 112) (close _V50_V0vanity_V0core_V0printout_V0k204) (bruijn ##.x.824 4 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 112));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout_V0k204, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0hash__table___Galist(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0core_V0printout_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0core_V0printout_V0k202) (close _V50_V0vanity_V0core_V0printout_V0k203))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout_V0k202, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout_V0k203, self)))));
}
void _V50_V0vanity_V0core_V0printout(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printout, got ~D~N"
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
  // (if (##inline ##vcore.pair? (bruijn ##.x.824 0 1)) (##qualified-call (vanity core memq) (bruijn ##.memq.243 1 80) (close _V50_V0vanity_V0core_V0printout_V0k196) (##inline ##vcore.car (bruijn ##.x.824 0 1)) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'quasiquote (##inline ##vcore.qcons 'unquote (##inline ##vcore.qcons 'unquote-splicing '()))))) (basic-block 1 1 (##.reg.2954) ((##vcore.vector? (bruijn ##.x.824 1 1))) (if (bruijn ##.reg.2954 0 0) (basic-block 2 2 (##.reg.2955 ##.reg.2956) ((##vcore.vector-length (bruijn ##.x.824 2 1)) (##vcore.display-word (##string ##.string.2999) (bruijn ##.port.826 2 3))) (letrec 1 ((close "_V50_V0vanity_V0core_V0printout_V10_Dloop_D828")) (##qualified-call (vanity core printout ##.loop.828) (bruijn ##.loop.828 0 0) (close _V50_V0vanity_V0core_V0printout_V0k200) 0))) (basic-block 1 1 (##.reg.2961) ((##vcore.hash-table? (bruijn ##.x.824 2 1))) (if (bruijn ##.reg.2961 0 0) (##vcore.hash-table-equivalence-function (close _V50_V0vanity_V0core_V0printout_V0k201) (bruijn ##.x.824 2 1)) (if (bruijn ##.write?.825 2 2) (basic-block 1 1 (##.reg.2965) ((##vcore.write (bruijn ##.x.824 3 1) (bruijn ##.port.826 3 3))) ((bruijn ##.k.1858 3 0) (bruijn ##.reg.2965 0 0))) (basic-block 1 1 (##.reg.2966) ((##vcore.display-word (bruijn ##.x.824 3 1) (bruijn ##.port.826 3 3))) ((bruijn ##.k.1858 3 0) (bruijn ##.reg.2966 0 0)))))))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[80]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout_V0k196, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        _var1);
    VWORD _arg2 = 
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _V0quasiquote,
        VInlineCons2(runtime,
        _V0unquote,
        VInlineCons2(runtime,
        _V0unquote__splicing,
        VNULL))));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0memq(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
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
      VEncodePointer(&_V10_Dstring_D2999.sym, VPOINTER_OTHER),
      statics->up->vars[3]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout_V10_Dloop_D828, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout_V0k200, self))));
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0printout_V10_Dloop_D828(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout_V0k201, self)))),
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
static void _V10_Ddisplay_D303_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddisplay_D303_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core printout) (bruijn ##.printout.302 2 139) (bruijn ##.k.1883 1 0) (bruijn ##.x.831 1 1) #f (bruijn ##.x.1884 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[139]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VEncodeBool(false);
    VWORD _arg3 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0printout(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0display(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0display" #t (2 ((bruijn ##.current-output-port.279 1 116) (close _V10_Ddisplay_D303_V0k205))) (3 (##qualified-call (vanity core printout) (bruijn ##.printout.302 1 139) (bruijn ##.k.1885 0 0) (bruijn ##.x.832 0 1) #f (bruijn ##.port.833 0 2))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0display, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0display(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-output-port.279 1 116) (close _V10_Ddisplay_D303_V0k205))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[116]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Ddisplay_D303_V0k205, self)))));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0display(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##qualified-call (vanity core printout) (bruijn ##.printout.302 1 139) (bruijn ##.k.1885 0 0) (bruijn ##.x.832 0 1) #f (bruijn ##.port.833 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[139]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VEncodeBool(false);
    VWORD _arg3 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0printout(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0core_V0display(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0display, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0display\n"
"_V50_V0vanity_V0core_V0display:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0core_V0display\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0core_V0display\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0display\n"
);
static void _V10_Dwrite_D304_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwrite_D304_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core printout) (bruijn ##.printout.302 2 139) (bruijn ##.k.1886 1 0) (bruijn ##.x.834 1 1) #t (bruijn ##.x.1887 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[139]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VEncodeBool(true);
    VWORD _arg3 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0printout(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0write(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0write" #t (2 ((bruijn ##.current-output-port.279 1 116) (close _V10_Dwrite_D304_V0k206))) (3 (##qualified-call (vanity core printout) (bruijn ##.printout.302 1 139) (bruijn ##.k.1888 0 0) (bruijn ##.x.835 0 1) #t (bruijn ##.port.836 0 2))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0write, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0write(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-output-port.279 1 116) (close _V10_Dwrite_D304_V0k206))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[116]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dwrite_D304_V0k206, self)))));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0write(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##qualified-call (vanity core printout) (bruijn ##.printout.302 1 139) (bruijn ##.k.1888 0 0) (bruijn ##.x.835 0 1) #t (bruijn ##.port.836 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[139]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VEncodeBool(true);
    VWORD _arg3 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0printout(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0core_V0write(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0write, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0write\n"
"_V50_V0vanity_V0core_V0write:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0core_V0write\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0core_V0write\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0write\n"
);
void _V50_V0vanity_V0core_V0values_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0values_V0lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.k.1890 0 0) (bruijn ##.k.838 0 1) (bruijn ##.args.837 1 1))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      _var0,
      _var1,
      statics->vars[1]);
}
void _V50_V0vanity_V0core_V0values(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0values, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.k.1889 0 0) (close _V50_V0vanity_V0core_V0values_V0lambda23))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0values_V0lambda23, self)))));
}
static void _V10_Dmake__parameter_D308_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_V0lambda24, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1892 0 0) (bruijn ##.x.840 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
static void _V10_Dmake__parameter_D308_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.lookup.848 0 0) ((bruijn ##.k.1897 2 0) (##inline ##vcore.cdr (bruijn ##.lookup.848 0 0))) ((bruijn ##.k.1897 2 0) (bruijn ##.x.1896 3 0)))
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
static void _V10_Dmake__parameter_D308_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core assq) (bruijn ##.assq.246 5 83) (close _V10_Dmake__parameter_D308_V0k210) (bruijn ##.x.1895 3 0) (bruijn ##.x.1898 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 83));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__parameter_D308_V0k210, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0assq(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V10_Dmake__parameter_D308_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.push-dynamic (bruijn ##.k.1899 2 0) (bruijn ##.x.1895 4 0) (bruijn ##.x.1901 0 0))
    VCallFuncWithGC(runtime, (VFunc)VPushDynamic, 3,
      statics->up->vars[0],
      statics->up->up->up->vars[0],
      _var0);
}
static void _V10_Dmake__parameter_D308_V0k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_V0k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1902 0 0) (##vcore.pop-dynamic (bruijn ##.k.1899 2 0) (bruijn ##.x.850 2 2)) (##qualified-call (vanity core error) (bruijn ##.error.326 6 163) (bruijn ##.k.1899 2 0) (##string ##.string.3003)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VPopDynamic, 2,
      statics->up->vars[0],
      statics->up->vars[2]);
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 163));
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D3003.sym, VPOINTER_OTHER);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0error(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
static void _V10_Dmake__parameter_D308_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1900 0 0) ((bruijn ##.convert.844 4 2) (close _V10_Dmake__parameter_D308_V0k212) (bruijn ##.x.850 1 2)) (##vcore.eqv? (close _V10_Dmake__parameter_D308_V0k213) (bruijn ##.action.849 1 1) '##vcore.pop-value))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__parameter_D308_V0k212, self)))),
      statics->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__parameter_D308_V0k213, self)))),
      statics->vars[1],
      _V10vcore_Dpop__value);
}
}
__attribute__((used)) static void _V20CaseError__V10_Dmake__parameter_D308_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__parameter_D308_V0lambda25 #t (1 (##vcore.get-dynamics (close _V10_Dmake__parameter_D308_V0k209))) (3 (##vcore.eqv? (close _V10_Dmake__parameter_D308_V0k211) (bruijn ##.action.849 0 1) '##vcore.push-value)))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_V0lambda25, got ~D~N"
 "-- expected 1~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__parameter_D308_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.get-dynamics (close _V10_Dmake__parameter_D308_V0k209))
    VCallFuncWithGC(runtime, (VFunc)VGetDynamics, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__parameter_D308_V0k209, self)))));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__parameter_D308_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.eqv? (close _V10_Dmake__parameter_D308_V0k211) (bruijn ##.action.849 0 1) '##vcore.push-value)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__parameter_D308_V0k211, self)))),
      _var1,
      _V10vcore_Dpush__value);
}
void _V10_Dmake__parameter_D308_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__parameter_D308_V0lambda25, @function\n"
#endif
"_V10_Dmake__parameter_D308_V0lambda25:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dmake__parameter_D308_V0lambda25\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__parameter_D308_V0lambda25\n"
"    jmp _V20CaseError__V10_Dmake__parameter_D308_V0lambda25\n"
);
static void _V10_Dmake__parameter_D308_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.k.1894 2 0) (close _V10_Dmake__parameter_D308_V0lambda25))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__parameter_D308_V0lambda25, self)))));
}
static void _V10_Dmake__parameter_D308_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D308_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.convert.844 1 2) (close _V10_Dmake__parameter_D308_V0k208) (bruijn ##.init.843 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__parameter_D308_V0k208, self)))),
      statics->vars[1]);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0make__parameter(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0make__parameter" #t (2 (##qualified-call (vanity core make-parameter) (bruijn ##.make-parameter.308 1 145) (bruijn ##.k.1891 0 0) (bruijn ##.init.839 0 1) (close _V10_Dmake__parameter_D308_V0lambda24) 'parameter)) (3 (##qualified-call (vanity core make-parameter) (bruijn ##.make-parameter.308 1 145) (bruijn ##.k.1893 0 0) (bruijn ##.init.841 0 1) (bruijn ##.convert.842 0 2) 'parameter)) (4 ((close _V10_Dmake__parameter_D308_V0k207) (##inline ##vcore.cons (bruijn ##.name.845 0 3) '()))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0make__parameter, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0make__parameter(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity core make-parameter) (bruijn ##.make-parameter.308 1 145) (bruijn ##.k.1891 0 0) (bruijn ##.init.839 0 1) (close _V10_Dmake__parameter_D308_V0lambda24) 'parameter)
  {
    VClosure * _closure = VDecodeClosure(statics->vars[145]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__parameter_D308_V0lambda24, self))));
    VWORD _arg3 = 
      _V0parameter;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0make__parameter(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0make__parameter(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##qualified-call (vanity core make-parameter) (bruijn ##.make-parameter.308 1 145) (bruijn ##.k.1893 0 0) (bruijn ##.init.841 0 1) (bruijn ##.convert.842 0 2) 'parameter)
  {
    VClosure * _closure = VDecodeClosure(statics->vars[145]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _V0parameter;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0make__parameter(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0make__parameter(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((close _V10_Dmake__parameter_D308_V0k207) (##inline ##vcore.cons (bruijn ##.name.845 0 3) '()))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__parameter_D308_V0k207, self)), 1,
      VInlineCons2(runtime,
        _var3,
        VNULL));
}
void _V50_V0vanity_V0core_V0make__parameter(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0make__parameter, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0make__parameter\n"
"_V50_V0vanity_V0core_V0make__parameter:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0core_V0make__parameter\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0core_V0make__parameter\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V50_V0vanity_V0core_V0make__parameter\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0make__parameter\n"
);
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0file__exists_Q(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0file__exists_Q" #t (2 (##vcore.access (bruijn ##.k.1903 0 0) (bruijn ##.path.852 0 1) 0)) (3 (##vcore.access (bruijn ##.k.1904 0 0) (bruijn ##.path.853 0 1) (bruijn ##.mode.854 0 2))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0file__exists_Q, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0file__exists_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.access (bruijn ##.k.1903 0 0) (bruijn ##.path.852 0 1) 0)
    VCallFuncWithGC(runtime, (VFunc)VAccess, 3,
      _var0,
      _var1,
      VEncodeInt(0l));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0file__exists_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.access (bruijn ##.k.1904 0 0) (bruijn ##.path.853 0 1) (bruijn ##.mode.854 0 2))
    VCallFuncWithGC(runtime, (VFunc)VAccess, 3,
      _var0,
      _var1,
      _var2);
}
void _V50_V0vanity_V0core_V0file__exists_Q(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0file__exists_Q, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0file__exists_Q\n"
"_V50_V0vanity_V0core_V0file__exists_Q:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0core_V0file__exists_Q\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0core_V0file__exists_Q\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0file__exists_Q\n"
);
static void _V10_Dbitwise__and_D310_V0k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__and_D310_V0k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-and (bruijn ##.k.1908 1 0) (bruijn ##.x.1909 0 0) (bruijn ##.c.860 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
static void _V10_Dbitwise__and_D310_V0k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__and_D310_V0k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-and (bruijn ##.k.1910 2 0) (bruijn ##.x.1911 0 0) (bruijn ##.d.864 2 4))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      statics->up->vars[0],
      _var0,
      statics->up->vars[4]);
}
static void _V10_Dbitwise__and_D310_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__and_D310_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.bitwise-and (close _V10_Dbitwise__and_D310_V0k216) (bruijn ##.x.1912 0 0) (bruijn ##.c.863 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dbitwise__and_D310_V0k216, self)))),
      _var0,
      statics->vars[3]);
}
void _V50_V0vanity_V0core_V0bitwise__and_V10_Dloop_D867_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0bitwise__and_V10_Dloop_D867_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core bitwise-and ##.loop.867) (bruijn ##.loop.867 2 0) (bruijn ##.k.1914 1 0) (bruijn ##.x.1916 0 0) (##inline ##vcore.cdr (bruijn ##.bs.866 3 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0bitwise__and_V10_Dloop_D867(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0bitwise__and_V10_Dloop_D867(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0bitwise__and_V10_Dloop_D867, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.bs.866 2 2)) ((bruijn ##.k.1914 0 0) (bruijn ##.ret.868 0 1)) (##vcore.bitwise-and (close _V50_V0vanity_V0core_V0bitwise__and_V10_Dloop_D867_V0k217) (bruijn ##.a.865 2 1) (##inline ##vcore.car (bruijn ##.bs.866 2 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0bitwise__and_V10_Dloop_D867_V0k217, self)))),
      statics->up->vars[1],
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0bitwise__and(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0bitwise__and" #t (1 ((bruijn ##.k.1905 0 0) -1)) (2 ((bruijn ##.k.1906 0 0) (bruijn ##.a.855 0 1))) (3 (##vcore.bitwise-and (bruijn ##.k.1907 0 0) (bruijn ##.a.856 0 1) (bruijn ##.b.857 0 2))) (4 (##vcore.bitwise-and (close _V10_Dbitwise__and_D310_V0k214) (bruijn ##.a.858 0 1) (bruijn ##.b.859 0 2))) (5 (##vcore.bitwise-and (close _V10_Dbitwise__and_D310_V0k215) (bruijn ##.a.861 0 1) (bruijn ##.b.862 0 2))) (2 + (letrec 1 ((close "_V50_V0vanity_V0core_V0bitwise__and_V10_Dloop_D867")) (##qualified-call (vanity core bitwise-and ##.loop.867) (bruijn ##.loop.867 0 0) (bruijn ##.k.1913 1 0) (bruijn ##.a.865 1 1) (bruijn ##.bs.866 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0bitwise__and, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0bitwise__and(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // ((bruijn ##.k.1905 0 0) -1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(-1l));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0bitwise__and(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1906 0 0) (bruijn ##.a.855 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0bitwise__and(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.bitwise-and (bruijn ##.k.1907 0 0) (bruijn ##.a.856 0 1) (bruijn ##.b.857 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      _var0,
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0core_V0bitwise__and(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##vcore.bitwise-and (close _V10_Dbitwise__and_D310_V0k214) (bruijn ##.a.858 0 1) (bruijn ##.b.859 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dbitwise__and_D310_V0k214, self)))),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case4__V50_V0vanity_V0core_V0bitwise__and(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##vcore.bitwise-and (close _V10_Dbitwise__and_D310_V0k215) (bruijn ##.a.861 0 1) (bruijn ##.b.862 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dbitwise__and_D310_V0k215, self)))),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case5__V50_V0vanity_V0core_V0bitwise__and(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0bitwise__and_V10_Dloop_D867")) (##qualified-call (vanity core bitwise-and ##.loop.867) (bruijn ##.loop.867 0 0) (bruijn ##.k.1913 1 0) (bruijn ##.a.865 1 1) (bruijn ##.bs.866 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0bitwise__and_V10_Dloop_D867, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0bitwise__and_V10_Dloop_D867(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0bitwise__and(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0bitwise__and, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0bitwise__and\n"
"_V50_V0vanity_V0core_V0bitwise__and:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V50_V0vanity_V0core_V0bitwise__and\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V50_V0vanity_V0core_V0bitwise__and\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V50_V0vanity_V0core_V0bitwise__and\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V50_V0vanity_V0core_V0bitwise__and\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V50_V0vanity_V0core_V0bitwise__and\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case5__V50_V0vanity_V0core_V0bitwise__and\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0bitwise__and\n"
);
static void _V10_Dbitwise__ior_D311_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__ior_D311_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-ior (bruijn ##.k.1922 1 0) (bruijn ##.x.1923 0 0) (bruijn ##.c.875 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
static void _V10_Dbitwise__ior_D311_V0k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__ior_D311_V0k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-ior (bruijn ##.k.1924 2 0) (bruijn ##.x.1925 0 0) (bruijn ##.d.879 2 4))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      statics->up->vars[0],
      _var0,
      statics->up->vars[4]);
}
static void _V10_Dbitwise__ior_D311_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__ior_D311_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.bitwise-ior (close _V10_Dbitwise__ior_D311_V0k220) (bruijn ##.x.1926 0 0) (bruijn ##.c.878 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dbitwise__ior_D311_V0k220, self)))),
      _var0,
      statics->vars[3]);
}
void _V50_V0vanity_V0core_V0bitwise__ior_V10_Dloop_D882_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0bitwise__ior_V10_Dloop_D882_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core bitwise-ior ##.loop.882) (bruijn ##.loop.882 2 0) (bruijn ##.k.1928 1 0) (bruijn ##.x.1930 0 0) (##inline ##vcore.cdr (bruijn ##.bs.881 3 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0bitwise__ior_V10_Dloop_D882(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0bitwise__ior_V10_Dloop_D882(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0bitwise__ior_V10_Dloop_D882, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.bs.881 2 2)) ((bruijn ##.k.1928 0 0) (bruijn ##.ret.883 0 1)) (##vcore.bitwise-ior (close _V50_V0vanity_V0core_V0bitwise__ior_V10_Dloop_D882_V0k221) (bruijn ##.a.880 2 1) (##inline ##vcore.car (bruijn ##.bs.881 2 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0bitwise__ior_V10_Dloop_D882_V0k221, self)))),
      statics->up->vars[1],
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0bitwise__ior(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0bitwise__ior" #t (1 ((bruijn ##.k.1919 0 0) 0)) (2 ((bruijn ##.k.1920 0 0) (bruijn ##.a.870 0 1))) (3 (##vcore.bitwise-ior (bruijn ##.k.1921 0 0) (bruijn ##.a.871 0 1) (bruijn ##.b.872 0 2))) (4 (##vcore.bitwise-ior (close _V10_Dbitwise__ior_D311_V0k218) (bruijn ##.a.873 0 1) (bruijn ##.b.874 0 2))) (5 (##vcore.bitwise-ior (close _V10_Dbitwise__ior_D311_V0k219) (bruijn ##.a.876 0 1) (bruijn ##.b.877 0 2))) (2 + (letrec 1 ((close "_V50_V0vanity_V0core_V0bitwise__ior_V10_Dloop_D882")) (##qualified-call (vanity core bitwise-ior ##.loop.882) (bruijn ##.loop.882 0 0) (bruijn ##.k.1927 1 0) (bruijn ##.a.880 1 1) (bruijn ##.bs.881 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0bitwise__ior, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0bitwise__ior(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // ((bruijn ##.k.1919 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0bitwise__ior(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1920 0 0) (bruijn ##.a.870 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0bitwise__ior(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.bitwise-ior (bruijn ##.k.1921 0 0) (bruijn ##.a.871 0 1) (bruijn ##.b.872 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      _var0,
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0core_V0bitwise__ior(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##vcore.bitwise-ior (close _V10_Dbitwise__ior_D311_V0k218) (bruijn ##.a.873 0 1) (bruijn ##.b.874 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dbitwise__ior_D311_V0k218, self)))),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case4__V50_V0vanity_V0core_V0bitwise__ior(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##vcore.bitwise-ior (close _V10_Dbitwise__ior_D311_V0k219) (bruijn ##.a.876 0 1) (bruijn ##.b.877 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dbitwise__ior_D311_V0k219, self)))),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case5__V50_V0vanity_V0core_V0bitwise__ior(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0bitwise__ior_V10_Dloop_D882")) (##qualified-call (vanity core bitwise-ior ##.loop.882) (bruijn ##.loop.882 0 0) (bruijn ##.k.1927 1 0) (bruijn ##.a.880 1 1) (bruijn ##.bs.881 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0bitwise__ior_V10_Dloop_D882, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0bitwise__ior_V10_Dloop_D882(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0bitwise__ior(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0bitwise__ior, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0bitwise__ior\n"
"_V50_V0vanity_V0core_V0bitwise__ior:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V50_V0vanity_V0core_V0bitwise__ior\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V50_V0vanity_V0core_V0bitwise__ior\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V50_V0vanity_V0core_V0bitwise__ior\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V50_V0vanity_V0core_V0bitwise__ior\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V50_V0vanity_V0core_V0bitwise__ior\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case5__V50_V0vanity_V0core_V0bitwise__ior\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0bitwise__ior\n"
);
static void _V10_Dbitwise__xor_D312_V0k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xor_D312_V0k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-xor (bruijn ##.k.1936 1 0) (bruijn ##.x.1937 0 0) (bruijn ##.c.890 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
static void _V10_Dbitwise__xor_D312_V0k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xor_D312_V0k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-xor (bruijn ##.k.1938 2 0) (bruijn ##.x.1939 0 0) (bruijn ##.d.894 2 4))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      statics->up->vars[0],
      _var0,
      statics->up->vars[4]);
}
static void _V10_Dbitwise__xor_D312_V0k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xor_D312_V0k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.bitwise-xor (close _V10_Dbitwise__xor_D312_V0k224) (bruijn ##.x.1940 0 0) (bruijn ##.c.893 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dbitwise__xor_D312_V0k224, self)))),
      _var0,
      statics->vars[3]);
}
void _V50_V0vanity_V0core_V0bitwise__xor_V10_Dloop_D897_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0bitwise__xor_V10_Dloop_D897_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core bitwise-xor ##.loop.897) (bruijn ##.loop.897 2 0) (bruijn ##.k.1942 1 0) (bruijn ##.x.1944 0 0) (##inline ##vcore.cdr (bruijn ##.bs.896 3 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0bitwise__xor_V10_Dloop_D897(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0bitwise__xor_V10_Dloop_D897(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0bitwise__xor_V10_Dloop_D897, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.bs.896 2 2)) ((bruijn ##.k.1942 0 0) (bruijn ##.ret.898 0 1)) (##vcore.bitwise-xor (close _V50_V0vanity_V0core_V0bitwise__xor_V10_Dloop_D897_V0k225) (bruijn ##.a.895 2 1) (##inline ##vcore.car (bruijn ##.bs.896 2 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0bitwise__xor_V10_Dloop_D897_V0k225, self)))),
      statics->up->vars[1],
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0bitwise__xor(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0bitwise__xor" #t (1 ((bruijn ##.k.1933 0 0) 0)) (2 ((bruijn ##.k.1934 0 0) (bruijn ##.a.885 0 1))) (3 (##vcore.bitwise-xor (bruijn ##.k.1935 0 0) (bruijn ##.a.886 0 1) (bruijn ##.b.887 0 2))) (4 (##vcore.bitwise-xor (close _V10_Dbitwise__xor_D312_V0k222) (bruijn ##.a.888 0 1) (bruijn ##.b.889 0 2))) (5 (##vcore.bitwise-xor (close _V10_Dbitwise__xor_D312_V0k223) (bruijn ##.a.891 0 1) (bruijn ##.b.892 0 2))) (2 + (letrec 1 ((close "_V50_V0vanity_V0core_V0bitwise__xor_V10_Dloop_D897")) (##qualified-call (vanity core bitwise-xor ##.loop.897) (bruijn ##.loop.897 0 0) (bruijn ##.k.1941 1 0) (bruijn ##.a.895 1 1) (bruijn ##.bs.896 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0bitwise__xor, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0bitwise__xor(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // ((bruijn ##.k.1933 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0bitwise__xor(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1934 0 0) (bruijn ##.a.885 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0bitwise__xor(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.bitwise-xor (bruijn ##.k.1935 0 0) (bruijn ##.a.886 0 1) (bruijn ##.b.887 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      _var0,
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0core_V0bitwise__xor(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##vcore.bitwise-xor (close _V10_Dbitwise__xor_D312_V0k222) (bruijn ##.a.888 0 1) (bruijn ##.b.889 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dbitwise__xor_D312_V0k222, self)))),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case4__V50_V0vanity_V0core_V0bitwise__xor(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##vcore.bitwise-xor (close _V10_Dbitwise__xor_D312_V0k223) (bruijn ##.a.891 0 1) (bruijn ##.b.892 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dbitwise__xor_D312_V0k223, self)))),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case5__V50_V0vanity_V0core_V0bitwise__xor(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0bitwise__xor_V10_Dloop_D897")) (##qualified-call (vanity core bitwise-xor ##.loop.897) (bruijn ##.loop.897 0 0) (bruijn ##.k.1941 1 0) (bruijn ##.a.895 1 1) (bruijn ##.bs.896 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0bitwise__xor_V10_Dloop_D897, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0bitwise__xor_V10_Dloop_D897(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0bitwise__xor(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0bitwise__xor, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0bitwise__xor\n"
"_V50_V0vanity_V0core_V0bitwise__xor:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V50_V0vanity_V0core_V0bitwise__xor\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V50_V0vanity_V0core_V0bitwise__xor\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V50_V0vanity_V0core_V0bitwise__xor\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V50_V0vanity_V0core_V0bitwise__xor\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V50_V0vanity_V0core_V0bitwise__xor\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case5__V50_V0vanity_V0core_V0bitwise__xor\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0bitwise__xor\n"
);
static void _V10_Dbitwise__xnor_D313_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xnor_D313_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-xnor (bruijn ##.k.1950 1 0) (bruijn ##.x.1951 0 0) (bruijn ##.c.905 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
static void _V10_Dbitwise__xnor_D313_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xnor_D313_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-xnor (bruijn ##.k.1952 2 0) (bruijn ##.x.1953 0 0) (bruijn ##.d.909 2 4))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      statics->up->vars[0],
      _var0,
      statics->up->vars[4]);
}
static void _V10_Dbitwise__xnor_D313_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xnor_D313_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.bitwise-xnor (close _V10_Dbitwise__xnor_D313_V0k228) (bruijn ##.x.1954 0 0) (bruijn ##.c.908 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dbitwise__xnor_D313_V0k228, self)))),
      _var0,
      statics->vars[3]);
}
void _V50_V0vanity_V0core_V0bitwise__xnor_V10_Dloop_D912_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0bitwise__xnor_V10_Dloop_D912_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core bitwise-xnor ##.loop.912) (bruijn ##.loop.912 2 0) (bruijn ##.k.1956 1 0) (bruijn ##.x.1958 0 0) (##inline ##vcore.cdr (bruijn ##.bs.911 3 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0bitwise__xnor_V10_Dloop_D912(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0bitwise__xnor_V10_Dloop_D912(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0bitwise__xnor_V10_Dloop_D912, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.bs.911 2 2)) ((bruijn ##.k.1956 0 0) (bruijn ##.ret.913 0 1)) (##vcore.bitwise-xnor (close _V50_V0vanity_V0core_V0bitwise__xnor_V10_Dloop_D912_V0k229) (bruijn ##.a.910 2 1) (##inline ##vcore.car (bruijn ##.bs.911 2 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0bitwise__xnor_V10_Dloop_D912_V0k229, self)))),
      statics->up->vars[1],
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0bitwise__xnor(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0bitwise__xnor" #t (1 ((bruijn ##.k.1947 0 0) -1)) (2 ((bruijn ##.k.1948 0 0) (bruijn ##.a.900 0 1))) (3 (##vcore.bitwise-xnor (bruijn ##.k.1949 0 0) (bruijn ##.a.901 0 1) (bruijn ##.b.902 0 2))) (4 (##vcore.bitwise-xnor (close _V10_Dbitwise__xnor_D313_V0k226) (bruijn ##.a.903 0 1) (bruijn ##.b.904 0 2))) (5 (##vcore.bitwise-xnor (close _V10_Dbitwise__xnor_D313_V0k227) (bruijn ##.a.906 0 1) (bruijn ##.b.907 0 2))) (2 + (letrec 1 ((close "_V50_V0vanity_V0core_V0bitwise__xnor_V10_Dloop_D912")) (##qualified-call (vanity core bitwise-xnor ##.loop.912) (bruijn ##.loop.912 0 0) (bruijn ##.k.1955 1 0) (bruijn ##.a.910 1 1) (bruijn ##.bs.911 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0bitwise__xnor, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0bitwise__xnor(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // ((bruijn ##.k.1947 0 0) -1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(-1l));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0bitwise__xnor(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1948 0 0) (bruijn ##.a.900 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0bitwise__xnor(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.bitwise-xnor (bruijn ##.k.1949 0 0) (bruijn ##.a.901 0 1) (bruijn ##.b.902 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      _var0,
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0core_V0bitwise__xnor(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##vcore.bitwise-xnor (close _V10_Dbitwise__xnor_D313_V0k226) (bruijn ##.a.903 0 1) (bruijn ##.b.904 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dbitwise__xnor_D313_V0k226, self)))),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case4__V50_V0vanity_V0core_V0bitwise__xnor(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##vcore.bitwise-xnor (close _V10_Dbitwise__xnor_D313_V0k227) (bruijn ##.a.906 0 1) (bruijn ##.b.907 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dbitwise__xnor_D313_V0k227, self)))),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case5__V50_V0vanity_V0core_V0bitwise__xnor(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0core_V0bitwise__xnor_V10_Dloop_D912")) (##qualified-call (vanity core bitwise-xnor ##.loop.912) (bruijn ##.loop.912 0 0) (bruijn ##.k.1955 1 0) (bruijn ##.a.910 1 1) (bruijn ##.bs.911 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0bitwise__xnor_V10_Dloop_D912, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0bitwise__xnor_V10_Dloop_D912(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0bitwise__xnor(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0bitwise__xnor, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0bitwise__xnor\n"
"_V50_V0vanity_V0core_V0bitwise__xnor:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V50_V0vanity_V0core_V0bitwise__xnor\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V50_V0vanity_V0core_V0bitwise__xnor\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V50_V0vanity_V0core_V0bitwise__xnor\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V50_V0vanity_V0core_V0bitwise__xnor\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V50_V0vanity_V0core_V0bitwise__xnor\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case5__V50_V0vanity_V0core_V0bitwise__xnor\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0bitwise__xnor\n"
);
void _V50_V0vanity_V0core_V0atom_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0atom_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1961 0 0) (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.x.915 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineNot2(runtime,
        VInlinePairP2(runtime,
        _var1)));
}
static void _V10_Ddisplayln_D317_V0k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddisplayln_D317_V0k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core displayln) (bruijn ##.displayln.317 2 154) (bruijn ##.k.1963 1 0) (bruijn ##.x.916 1 1) (bruijn ##.x.1964 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[154]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0displayln(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V10_Ddisplayln_D317_V0k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddisplayln_D317_V0k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core newline) (bruijn ##.newline.299 2 136) (bruijn ##.k.1965 1 0) (bruijn ##.port.918 1 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[136]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0newline(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0displayln(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0displayln" #t (2 ((bruijn ##.current-output-port.279 1 116) (close _V10_Ddisplayln_D317_V0k230))) (3 (##qualified-call (vanity core display) (bruijn ##.display.303 1 140) (close _V10_Ddisplayln_D317_V0k231) (bruijn ##.x.917 0 1) (bruijn ##.port.918 0 2))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0displayln, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0displayln(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-output-port.279 1 116) (close _V10_Ddisplayln_D317_V0k230))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[116]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Ddisplayln_D317_V0k230, self)))));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0displayln(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity core display) (bruijn ##.display.303 1 140) (close _V10_Ddisplayln_D317_V0k231) (bruijn ##.x.917 0 1) (bruijn ##.port.918 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[140]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Ddisplayln_D317_V0k231, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0display(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0displayln(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0displayln, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0displayln\n"
"_V50_V0vanity_V0core_V0displayln:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0core_V0displayln\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0core_V0displayln\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0displayln\n"
);
static void _V10_Dwriteln_D318_V0k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwriteln_D318_V0k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core writeln) (bruijn ##.writeln.318 2 155) (bruijn ##.k.1967 1 0) (bruijn ##.x.919 1 1) (bruijn ##.x.1968 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[155]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0writeln(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V10_Dwriteln_D318_V0k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwriteln_D318_V0k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core newline) (bruijn ##.newline.299 2 136) (bruijn ##.k.1969 1 0) (bruijn ##.port.921 1 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[136]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0newline(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0writeln(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0writeln" #t (2 ((bruijn ##.current-output-port.279 1 116) (close _V10_Dwriteln_D318_V0k232))) (3 (##qualified-call (vanity core write) (bruijn ##.write.304 1 141) (close _V10_Dwriteln_D318_V0k233) (bruijn ##.x.920 0 1) (bruijn ##.port.921 0 2))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0writeln, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0writeln(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-output-port.279 1 116) (close _V10_Dwriteln_D318_V0k232))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[116]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dwriteln_D318_V0k232, self)))));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0writeln(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity core write) (bruijn ##.write.304 1 141) (close _V10_Dwriteln_D318_V0k233) (bruijn ##.x.920 0 1) (bruijn ##.port.921 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[141]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dwriteln_D318_V0k233, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0write(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0writeln(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0writeln, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0writeln\n"
"_V50_V0vanity_V0core_V0writeln:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0core_V0writeln\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0core_V0writeln\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0writeln\n"
);
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.2971 1 1) (##qualified-call (vanity core error) (bruijn ##.error.326 8 163) (bruijn ##.k.2008 0 0) (##string ##.string.3004) (bruijn ##.fmt.923 7 2)) ((bruijn ##.k.2008 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 163));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D3004.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0error(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.2004 1 0) ((bruijn ##.k.2005 0 0) (bruijn ##.p.2004 1 0)) (##vcore.eqv? (bruijn ##.k.2005 0 0) (bruijn ##.reg.2973 3 1) '#\N))
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
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.2002 1 0) ((bruijn ##.k.2003 0 0) (bruijn ##.p.2002 1 0)) (##vcore.eqv? (bruijn ##.k.2003 0 0) (bruijn ##.reg.2973 5 1) '#\A))
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
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.null? (bruijn ##.args.928 11 2)) (##qualified-call (vanity core error) (bruijn ##.error.326 15 163) (bruijn ##.k.1989 0 0) (##string ##.string.3005) (bruijn ##.fmt.923 14 2)) ((bruijn ##.k.1989 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VGetArg(statics, 11-1, 2)))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 163));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D3005.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0error(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2978) ((##vcore.+ (bruijn ##.i.927 13 1) 2)) (##qualified-call (vanity core format-printf ##.loop.926) (bruijn ##.loop.926 14 0) (bruijn ##.k.1972 13 0) (bruijn ##.reg.2978 0 0) (##inline ##vcore.cdr (bruijn ##.args.928 13 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 13-1, 1),
      VEncodeInt(2l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 13-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 2));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core display) (bruijn ##.display.303 15 140) (close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k245) (##inline ##vcore.car (bruijn ##.args.928 11 2)) (bruijn ##.port.922 14 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 140));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k245, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 2));
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0display(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.2000 1 0) ((bruijn ##.k.2001 0 0) (bruijn ##.p.2000 1 0)) (##vcore.eqv? (bruijn ##.k.2001 0 0) (bruijn ##.reg.2973 7 1) '#\S))
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
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.null? (bruijn ##.args.928 13 2)) (##qualified-call (vanity core error) (bruijn ##.error.326 17 163) (bruijn ##.k.1997 0 0) (##string ##.string.3005) (bruijn ##.fmt.923 16 2)) ((bruijn ##.k.1997 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VGetArg(statics, 13-1, 2)))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 163));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D3005.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 16-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0error(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2979) ((##vcore.+ (bruijn ##.i.927 15 1) 2)) (##qualified-call (vanity core format-printf ##.loop.926) (bruijn ##.loop.926 16 0) (bruijn ##.k.1972 15 0) (bruijn ##.reg.2979 0 0) (##inline ##vcore.cdr (bruijn ##.args.928 15 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 15-1, 1),
      VEncodeInt(2l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 15-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 15-1, 2));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core write) (bruijn ##.write.304 17 141) (close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k251) (##inline ##vcore.car (bruijn ##.args.928 13 2)) (bruijn ##.port.922 16 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 141));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k251, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 13-1, 2));
    VWORD _arg2 = 
      VGetArg(statics, 16-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0write(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core error) (bruijn ##.error.326 18 163) (bruijn ##.k.1972 14 0) (##string ##.string.3006) (bruijn ##.x.1998 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 163));
    VWORD _arg0 = 
      VGetArg(statics, 14-1, 0);
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D3006.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0error(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1990 0 0) ((close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k249) (close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k250)) (basic-block 1 1 (##.reg.2980) ((##vcore.+ (bruijn ##.i.927 13 1) 2)) (##vcore.substring (close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k252) (bruijn ##.fmt.923 16 2) (bruijn ##.i.927 13 1) (bruijn ##.reg.2980 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k249, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k250, self)))));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 13-1, 1),
      VEncodeInt(2l));
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k252, self)))),
      VGetArg(statics, 16-1, 2),
      VGetArg(statics, 13-1, 1),
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k247) (close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k248))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k247, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k248, self)))));
}
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1982 0 0) ((close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k243) (close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k244)) (##vcore.eqv? (close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k246) (bruijn ##.reg.2973 5 1) '#\s))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k243, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k244, self)))));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k246, self)))),
      VGetArg(statics, 5-1, 1),
      VEncodeChar('s'));
}
}
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k241) (close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k242))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k241, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k242, self)))));
}
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1979 0 0) (basic-block 2 2 (##.reg.2976 ##.reg.2977) ((##vcore.display-word #\newline (bruijn ##.port.922 12 1)) (##vcore.+ (bruijn ##.i.927 9 1) 2)) (##qualified-call (vanity core format-printf ##.loop.926) (bruijn ##.loop.926 10 0) (bruijn ##.k.1972 9 0) (bruijn ##.reg.2977 0 1) (bruijn ##.args.928 9 2))) (##vcore.eqv? (close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k240) (bruijn ##.reg.2973 3 1) '#\a))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodeChar('\n'),
      VGetArg(statics, 12-1, 1));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      VEncodeInt(2l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k240, self)))),
      statics->up->up->vars[1],
      VEncodeChar('a'));
}
}
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k238) (close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k239))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k238, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k239, self)))));
}
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1976 0 0) (basic-block 2 2 (##.reg.2974 ##.reg.2975) ((##vcore.display-word #\~ (bruijn ##.port.922 10 1)) (##vcore.+ (bruijn ##.i.927 7 1) 2)) (##qualified-call (vanity core format-printf ##.loop.926) (bruijn ##.loop.926 8 0) (bruijn ##.k.1972 7 0) (bruijn ##.reg.2975 0 1) (bruijn ##.args.928 7 2))) (##vcore.eqv? (close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k237) (bruijn ##.reg.2973 1 1) '#\n))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodeChar('~'),
      VGetArg(statics, 10-1, 1));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      VEncodeInt(2l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k237, self)))),
      statics->vars[1],
      VEncodeChar('n'));
}
}
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.reg.2972 ##.reg.2973) ((##vcore.+ (bruijn ##.i.927 5 1) 1) (##vcore.string-ref (bruijn ##.fmt.923 8 2) (bruijn ##.reg.2972 0 0))) (##vcore.eqv? (close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k236) (bruijn ##.reg.2973 0 1) '#\~))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 8-1, 2),
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k236, self)))),
      self->vars[1],
      VEncodeChar('~'));
    }
}
void _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2968) ((##vcore.< (bruijn ##.i.927 1 1) (bruijn ##.reg.2967 3 0))) (if (bruijn ##.reg.2968 0 0) (basic-block 1 1 (##.reg.2969) ((##vcore.string-ref (bruijn ##.fmt.923 5 2) (bruijn ##.i.927 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2969 0 0) #\~) (basic-block 2 2 (##.reg.2970 ##.reg.2971) ((##vcore.+ (bruijn ##.i.927 3 1) 1) (##vcore.= (bruijn ##.reg.2970 0 0) (bruijn ##.reg.2967 5 0))) ((close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k234) (close _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k235))) (basic-block 2 2 (##.reg.2981 ##.reg.2982) ((##vcore.display-word (bruijn ##.reg.2969 1 0) (bruijn ##.port.922 6 1)) (##vcore.+ (bruijn ##.i.927 3 1) 1)) (##qualified-call (vanity core format-printf ##.loop.926) (bruijn ##.loop.926 4 0) (bruijn ##.k.1972 3 0) (bruijn ##.reg.2982 0 1) (bruijn ##.args.928 3 2))))) ((bruijn ##.k.1972 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k234, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926_V0k235, self)))));
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0core_V0format__printf(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__printf, got ~D~N"
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
  // (basic-block 1 1 (##.reg.2967) ((##vcore.string-length (bruijn ##.fmt.923 1 2))) (letrec 1 ((close "_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926")) (##qualified-call (vanity core format-printf ##.loop.926) (bruijn ##.loop.926 0 0) (bruijn ##.k.1971 2 0) 0 (bruijn ##.args.924 2 3))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      statics->up->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0format__printf_V10_Dloop_D926(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
void _V50_V0vanity_V0core_V0format__sprintf_V0k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__sprintf_V0k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2012 4 0) (bruijn ##.ret.934 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0core_V0format__sprintf_V0k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__sprintf_V0k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core close-port) (bruijn ##.close-port.283 4 120) (close _V50_V0vanity_V0core_V0format__sprintf_V0k256) (bruijn ##.strport.933 2 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[120]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__sprintf_V0k256, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0close__port(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0core_V0format__sprintf_V0k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__sprintf_V0k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-output-string.290 3 127) (close _V50_V0vanity_V0core_V0format__sprintf_V0k255) (bruijn ##.strport.933 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[127]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__sprintf_V0k255, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0core_V0format__sprintf_V0k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__sprintf_V0k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core format-printf) (bruijn ##.format-printf.319 2 156) (close _V50_V0vanity_V0core_V0format__sprintf_V0k254) (bruijn ##.strport.933 0 0) (bruijn ##.fmt.931 1 1) (bruijn ##.args.932 1 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[156]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__sprintf_V0k254, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->vars[1];
    VWORD _arg3 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0format__printf(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0core_V0format__sprintf(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format__sprintf, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity core open-output-string) (bruijn ##.open-output-string.289 1 126) (close _V50_V0vanity_V0core_V0format__sprintf_V0k253))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[126]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__sprintf_V0k253, self))));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 1, _arg0);
    } else {
       _V50_V0vanity_V0core_V0open__output__string(runtime, _closure->env, 1, _arg0);
    }
  }
}
static void _V10_Dprintf_D321_V0k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintf_D321_V0k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core format-printf) (bruijn ##.format-printf.319 2 156) (bruijn ##.k.2015 1 0) (bruijn ##.x.2016 0 0) (bruijn ##.fmt.935 1 1) '())
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[156]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->vars[1];
    VWORD _arg3 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0format__printf(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V10_Dprintf_D321_V0k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintf_D321_V0k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core format-printf) (bruijn ##.format-printf.319 3 156) (bruijn ##.k.2017 2 0) (bruijn ##.x.2019 0 0) (bruijn ##.a.936 2 1) (##inline ##vcore.cons (bruijn ##.b.937 2 2) (bruijn ##.args.938 2 3)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[156]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      VInlineCons2(runtime,
        statics->up->vars[2],
        statics->up->vars[3]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0format__printf(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0printf(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0printf" #t (2 ((bruijn ##.current-output-port.279 1 116) (close _V10_Dprintf_D321_V0k257))) (3 + (basic-block 1 1 (##.reg.2983) ((##vcore.string? (bruijn ##.a.936 1 1))) (if (bruijn ##.reg.2983 0 0) ((bruijn ##.current-output-port.279 2 116) (close _V10_Dprintf_D321_V0k258)) (##qualified-call (vanity core format-printf) (bruijn ##.format-printf.319 2 156) (bruijn ##.k.2017 1 0) (bruijn ##.a.936 1 1) (bruijn ##.b.937 1 2) (bruijn ##.args.938 1 3))))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0printf, got ~D~N"
 "-- expected 2~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0printf(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-output-port.279 1 116) (close _V10_Dprintf_D321_V0k257))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[116]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dprintf_D321_V0k257, self)))));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0printf(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (basic-block 1 1 (##.reg.2983) ((##vcore.string? (bruijn ##.a.936 1 1))) (if (bruijn ##.reg.2983 0 0) ((bruijn ##.current-output-port.279 2 116) (close _V10_Dprintf_D321_V0k258)) (##qualified-call (vanity core format-printf) (bruijn ##.format-printf.319 2 156) (bruijn ##.k.2017 1 0) (bruijn ##.a.936 1 1) (bruijn ##.b.937 1 2) (bruijn ##.args.938 1 3))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[116]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dprintf_D321_V0k258, self)))));
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[156]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0format__printf(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
    }
}
void _V50_V0vanity_V0core_V0printf(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0printf, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0printf\n"
"_V50_V0vanity_V0core_V0printf:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0core_V0printf\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case1__V50_V0vanity_V0core_V0printf\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0printf\n"
);
void _V50_V0vanity_V0core_V0sprintf_V0k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0sprintf_V0k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2021 4 0) (bruijn ##.ret.942 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0core_V0sprintf_V0k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0sprintf_V0k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core close-port) (bruijn ##.close-port.283 4 120) (close _V50_V0vanity_V0core_V0sprintf_V0k262) (bruijn ##.strport.941 2 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[120]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0sprintf_V0k262, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0close__port(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0core_V0sprintf_V0k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0sprintf_V0k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-output-string.290 3 127) (close _V50_V0vanity_V0core_V0sprintf_V0k261) (bruijn ##.strport.941 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[127]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0sprintf_V0k261, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0core_V0sprintf_V0k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0sprintf_V0k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core format-printf) (bruijn ##.format-printf.319 2 156) (close _V50_V0vanity_V0core_V0sprintf_V0k260) (bruijn ##.strport.941 0 0) (bruijn ##.fmt.939 1 1) (bruijn ##.args.940 1 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[156]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0sprintf_V0k260, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->vars[1];
    VWORD _arg3 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0format__printf(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0core_V0sprintf(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0sprintf, got ~D~N"
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
  // (##qualified-call (vanity core open-output-string) (bruijn ##.open-output-string.289 1 126) (close _V50_V0vanity_V0core_V0sprintf_V0k259))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[126]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0sprintf_V0k259, self))));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 1, _arg0);
    } else {
       _V50_V0vanity_V0core_V0open__output__string(runtime, _closure->env, 1, _arg0);
    }
  }
}
static void _V10_Dformat_D323_V0k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat_D323_V0k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity core format-printf) (bruijn ##.format-printf.319 3 156) (bruijn ##.k.2025 2 0) (bruijn ##.x.2029 0 0) (bruijn ##.b.945 2 2) (bruijn ##.args.946 2 3))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[156]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->vars[2];
    VWORD _arg3 = 
      statics->up->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0format__printf(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0format(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0format" #t (2 (##qualified-call (vanity core sprintf) (bruijn ##.sprintf.322 1 159) (bruijn ##.k.2024 0 0) (bruijn ##.fmt.943 0 1))) (3 + (basic-block 1 1 (##.reg.2984) ((##vcore.string? (bruijn ##.a.944 1 1))) (if (bruijn ##.reg.2984 0 0) (##qualified-call (vanity core format-sprintf) (bruijn ##.format-sprintf.320 2 157) (bruijn ##.k.2025 1 0) (bruijn ##.a.944 1 1) (##inline ##vcore.cons (bruijn ##.b.945 1 2) (bruijn ##.args.946 1 3))) (if (##inline ##vcore.eq? (bruijn ##.a.944 1 1) #t) ((bruijn ##.current-output-port.279 2 116) (close _V10_Dformat_D323_V0k263)) (if (##inline ##vcore.eq? (bruijn ##.a.944 1 1) #f) (##qualified-call (vanity core format-sprintf) (bruijn ##.format-sprintf.320 2 157) (bruijn ##.k.2025 1 0) (bruijn ##.b.945 1 2) (bruijn ##.args.946 1 3)) (##qualified-call (vanity core format-printf) (bruijn ##.format-printf.319 2 156) (bruijn ##.k.2025 1 0) (bruijn ##.a.944 1 1) (bruijn ##.b.945 1 2) (bruijn ##.args.946 1 3))))))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0format, got ~D~N"
 "-- expected 2~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0format(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##qualified-call (vanity core sprintf) (bruijn ##.sprintf.322 1 159) (bruijn ##.k.2024 0 0) (bruijn ##.fmt.943 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[159]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0sprintf(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0format(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (basic-block 1 1 (##.reg.2984) ((##vcore.string? (bruijn ##.a.944 1 1))) (if (bruijn ##.reg.2984 0 0) (##qualified-call (vanity core format-sprintf) (bruijn ##.format-sprintf.320 2 157) (bruijn ##.k.2025 1 0) (bruijn ##.a.944 1 1) (##inline ##vcore.cons (bruijn ##.b.945 1 2) (bruijn ##.args.946 1 3))) (if (##inline ##vcore.eq? (bruijn ##.a.944 1 1) #t) ((bruijn ##.current-output-port.279 2 116) (close _V10_Dformat_D323_V0k263)) (if (##inline ##vcore.eq? (bruijn ##.a.944 1 1) #f) (##qualified-call (vanity core format-sprintf) (bruijn ##.format-sprintf.320 2 157) (bruijn ##.k.2025 1 0) (bruijn ##.b.945 1 2) (bruijn ##.args.946 1 3)) (##qualified-call (vanity core format-printf) (bruijn ##.format-printf.319 2 156) (bruijn ##.k.2025 1 0) (bruijn ##.a.944 1 1) (bruijn ##.b.945 1 2) (bruijn ##.args.946 1 3))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[157]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCons2(runtime,
        statics->vars[2],
        statics->vars[3]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0format__sprintf(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[1],
        VEncodeBool(true)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[116]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dformat_D323_V0k263, self)))));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[1],
        VEncodeBool(false)))) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[157]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0format__sprintf(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[156]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0format__printf(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
}
    }
}
void _V50_V0vanity_V0core_V0format(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0format, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0format\n"
"_V50_V0vanity_V0core_V0format:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0core_V0format\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case1__V50_V0vanity_V0core_V0format\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0format\n"
);
void _V50_V0vanity_V0core_V0raise__continuable_V0k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0raise__continuable_V0k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2031 3 0) (bruijn ##.ret.949 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0core_V0raise__continuable_V0k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0raise__continuable_V0k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.push-exception-handler (close _V50_V0vanity_V0core_V0raise__continuable_V0k266) (bruijn ##.handler.948 1 0))
    VCallFuncWithGC(runtime, (VFunc)VPushExceptionHandler, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0raise__continuable_V0k266, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0core_V0raise__continuable_V0k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0raise__continuable_V0k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.handler.948 0 0) (close _V50_V0vanity_V0core_V0raise__continuable_V0k265) (bruijn ##.x.947 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0raise__continuable_V0k265, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0core_V0raise__continuable(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0raise__continuable, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.get-exception-handler (close _V50_V0vanity_V0core_V0raise__continuable_V0k264))
    VCallFuncWithGC(runtime, (VFunc)VGetExceptionHandler, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0raise__continuable_V0k264, self)))));
}
void _V50_V0vanity_V0core_V0with__exception__handler_V0k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0with__exception__handler_V0k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.k.2035 1 0) (bruijn ##.values.305 4 142) (bruijn ##.rets.952 1 1))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      statics->vars[0],
      statics->up->up->up->vars[142],
      statics->vars[1]);
}
void _V50_V0vanity_V0core_V0with__exception__handler_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0with__exception__handler_V0lambda26, got ~D~N"
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
  // (##vcore.pop-exception-handler (close _V50_V0vanity_V0core_V0with__exception__handler_V0k268) (bruijn ##.handler.950 2 1))
    VCallFuncWithGC(runtime, (VFunc)VPopExceptionHandler, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0with__exception__handler_V0k268, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0core_V0with__exception__handler_V0k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0with__exception__handler_V0k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.2033 1 0) (bruijn ##.thunk.951 1 2) (close _V50_V0vanity_V0core_V0with__exception__handler_V0lambda26))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      statics->vars[2],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0with__exception__handler_V0lambda26, self)))));
}
void _V50_V0vanity_V0core_V0with__exception__handler(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0with__exception__handler, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.push-exception-handler (close _V50_V0vanity_V0core_V0with__exception__handler_V0k267) (bruijn ##.handler.950 0 1))
    VCallFuncWithGC(runtime, (VFunc)VPushExceptionHandler, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0with__exception__handler_V0k267, self)))),
      _var1);
}
void _V50_V0vanity_V0core_V0error_V0k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0error_V0k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.k.2037 1 0) (bruijn ##.x.2038 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0core_V0error(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0error, got ~D~N"
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
  // (##vcore.record (close _V50_V0vanity_V0core_V0error_V0k269) #f 'error (bruijn ##.msg.953 0 1) (bruijn ##.irritants.954 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0error_V0k269, self)))),
      VEncodeBool(false),
      _V0error,
      _var1,
      _varargs);
}
void _V50_V0vanity_V0core_V0fiber__fork(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0fiber__fork, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.fiber-fork-list (bruijn ##.k.2039 0 0) (bruijn ##.args.955 0 1))
    VCallFuncWithGC(runtime, (VFunc)VFiberForkList, 2,
      _var0,
      _varargs);
}
static void _V10_Dfiber__map_D328_V0k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_V0k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.fiber-fork-list (bruijn ##.k.2040 1 0) (bruijn ##.x.2041 0 0))
    VCallFuncWithGC(runtime, (VFunc)VFiberForkList, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dfiber__map_D328_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.f.956 2 1) (bruijn ##.k.2043 0 0) (bruijn ##.e.958 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      _var0,
      statics->vars[1]);
}
static void _V10_Dfiber__map_D328_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_V0lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.k.2042 0 0) (close _V10_Dfiber__map_D328_V0lambda28))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfiber__map_D328_V0lambda28, self)))));
}
static void _V10_Dfiber__map_D328_V0k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_V0k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.fiber-fork-list (bruijn ##.k.2044 1 0) (bruijn ##.x.2045 0 0))
    VCallFuncWithGC(runtime, (VFunc)VFiberForkList, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dfiber__map_D328_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.f.959 2 1) (bruijn ##.k.2047 0 0) (bruijn ##.a.962 1 1) (bruijn ##.b.963 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 3,
      _var0,
      statics->vars[1],
      statics->vars[2]);
}
static void _V10_Dfiber__map_D328_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_V0lambda29, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.k.2046 0 0) (close _V10_Dfiber__map_D328_V0lambda30))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfiber__map_D328_V0lambda30, self)))));
}
static void _V10_Dfiber__map_D328_V0k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_V0k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.fiber-fork-list (bruijn ##.k.2048 1 0) (bruijn ##.x.2049 0 0))
    VCallFuncWithGC(runtime, (VFunc)VFiberForkList, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dfiber__map_D328_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.f.964 2 1) (bruijn ##.k.2051 0 0) (bruijn ##.a.968 1 1) (bruijn ##.b.969 1 2) (bruijn ##.c.970 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 4,
      _var0,
      statics->vars[1],
      statics->vars[2],
      statics->vars[3]);
}
static void _V10_Dfiber__map_D328_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_V0lambda31, got ~D~N"
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
  // ((bruijn ##.k.2050 0 0) (close _V10_Dfiber__map_D328_V0lambda32))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfiber__map_D328_V0lambda32, self)))));
}
static void _V10_Dfiber__map_D328_V0k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_V0k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.fiber-fork-list (bruijn ##.k.2052 1 0) (bruijn ##.x.2053 0 0))
    VCallFuncWithGC(runtime, (VFunc)VFiberForkList, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dfiber__map_D328_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.k.2055 0 0) (bruijn ##.f.971 2 1) (bruijn ##.args.974 1 1))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      _var0,
      statics->up->vars[1],
      statics->vars[1]);
}
static void _V10_Dfiber__map_D328_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D328_V0lambda33, got ~D~N"
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
  // ((bruijn ##.k.2054 0 0) (close _V10_Dfiber__map_D328_V0lambda34))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfiber__map_D328_V0lambda34, self)))));
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0core_V0fiber__map(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0core_V0fiber__map" #t (3 (##qualified-call (vanity core map) (bruijn ##.map.238 1 75) (close _V10_Dfiber__map_D328_V0k270) (close _V10_Dfiber__map_D328_V0lambda27) (bruijn ##.lst.957 0 2))) (4 (##qualified-call (vanity core map) (bruijn ##.map.238 1 75) (close _V10_Dfiber__map_D328_V0k271) (close _V10_Dfiber__map_D328_V0lambda29) (bruijn ##.as.960 0 2) (bruijn ##.bs.961 0 3))) (5 (##qualified-call (vanity core map) (bruijn ##.map.238 1 75) (close _V10_Dfiber__map_D328_V0k272) (close _V10_Dfiber__map_D328_V0lambda31) (bruijn ##.as.965 0 2) (bruijn ##.bs.966 0 3) (bruijn ##.cs.967 0 4))) (3 + (##vcore.apply (close _V10_Dfiber__map_D328_V0k273) (bruijn ##.map.238 1 75) (close _V10_Dfiber__map_D328_V0lambda33) (bruijn ##.as.972 0 2) (bruijn ##.args.973 0 3))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0core_V0fiber__map, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0core_V0fiber__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity core map) (bruijn ##.map.238 1 75) (close _V10_Dfiber__map_D328_V0k270) (close _V10_Dfiber__map_D328_V0lambda27) (bruijn ##.lst.957 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[75]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfiber__map_D328_V0k270, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfiber__map_D328_V0lambda27, self))));
    VWORD _arg2 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0core_V0map(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0core_V0fiber__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##qualified-call (vanity core map) (bruijn ##.map.238 1 75) (close _V10_Dfiber__map_D328_V0k271) (close _V10_Dfiber__map_D328_V0lambda29) (bruijn ##.as.960 0 2) (bruijn ##.bs.961 0 3))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[75]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfiber__map_D328_V0k271, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfiber__map_D328_V0lambda29, self))));
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _var3;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0core_V0map(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0core_V0fiber__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##qualified-call (vanity core map) (bruijn ##.map.238 1 75) (close _V10_Dfiber__map_D328_V0k272) (close _V10_Dfiber__map_D328_V0lambda31) (bruijn ##.as.965 0 2) (bruijn ##.bs.966 0 3) (bruijn ##.cs.967 0 4))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[75]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfiber__map_D328_V0k272, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfiber__map_D328_V0lambda31, self))));
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _var3;
    VWORD _arg4 = 
      _var4;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0core_V0map(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0core_V0fiber__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##vcore.apply (close _V10_Dfiber__map_D328_V0k273) (bruijn ##.map.238 1 75) (close _V10_Dfiber__map_D328_V0lambda33) (bruijn ##.as.972 0 2) (bruijn ##.args.973 0 3))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfiber__map_D328_V0k273, self)))),
      statics->vars[75],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfiber__map_D328_V0lambda33, self)))),
      _var2,
      _varargs);
}
void _V50_V0vanity_V0core_V0fiber__map(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0core_V0fiber__map, @function\n"
#endif
".globl _V50_V0vanity_V0core_V0fiber__map\n"
"_V50_V0vanity_V0core_V0fiber__map:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0core_V0fiber__map\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V50_V0vanity_V0core_V0fiber__map\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V50_V0vanity_V0core_V0fiber__map\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case3__V50_V0vanity_V0core_V0fiber__map\n"
"    jmp _V20CaseError__V50_V0vanity_V0core_V0fiber__map\n"
);
static void _V0vanity_V0core_V20_V0k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.976 20 0) (##inline ##vcore.cons (##inline ##vcore.cons 'null? (##intrinsic ##vcore.null?)) (##inline ##vcore.cons (##inline ##vcore.cons 'eof-object? (##intrinsic ##vcore.eof-object?)) (##inline ##vcore.cons (##inline ##vcore.cons 'boolean? (bruijn ##.boolean?.163 15 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'pair? (##intrinsic ##vcore.pair?)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector? (##intrinsic ##vcore.vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table? (##intrinsic ##vcore.hash-table?)) (##inline ##vcore.cons (##inline ##vcore.cons 'record? (##intrinsic ##vcore.record?)) (##inline ##vcore.cons (##inline ##vcore.cons 'procedure? (##intrinsic ##vcore.procedure?)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol? (##intrinsic ##vcore.symbol?)) (##inline ##vcore.cons (##inline ##vcore.cons 'string? (##intrinsic ##vcore.string?)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact? (##intrinsic ##vcore.int?)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact-integer? (##intrinsic ##vcore.int?)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact? (##intrinsic ##vcore.double?)) (##inline ##vcore.cons (##inline ##vcore.cons 'real? (##intrinsic ##vcore.double?)) (##inline ##vcore.cons (##inline ##vcore.cons 'integer? (##intrinsic ##vcore.int?)) (##inline ##vcore.cons (##inline ##vcore.cons 'char? (##intrinsic ##vcore.char?)) (##inline ##vcore.cons (##inline ##vcore.cons 'nullptr? (##intrinsic ##vcore.nullptr?)) (##inline ##vcore.cons (##inline ##vcore.cons 'foreign-pointer? (##intrinsic ##vcore.foreign-pointer?)) (##inline ##vcore.cons (##inline ##vcore.cons 'eq? (##intrinsic ##vcore.eq?)) (##inline ##vcore.cons (##inline ##vcore.cons 'eqv? (##intrinsic ##vcore.eqv?)) (##inline ##vcore.cons (##inline ##vcore.cons 'equal? (bruijn ##.equal?.174 15 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'boolean=? (##intrinsic ##vcore.eq?)) (##inline ##vcore.cons (##inline ##vcore.cons 'char=? (##intrinsic ##vcore.eq?)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol=? (bruijn ##.symbol=?.164 15 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'string=? (##intrinsic ##vcore.blob=?)) (##inline ##vcore.cons (##inline ##vcore.cons 'not (##intrinsic ##vcore.not)) (##inline ##vcore.cons (##inline ##vcore.cons '< (##intrinsic ##vcore.<)) (##inline ##vcore.cons (##inline ##vcore.cons '= (##intrinsic ##vcore.=)) (##inline ##vcore.cons (##inline ##vcore.cons '> (##intrinsic ##vcore.>)) (##inline ##vcore.cons (##inline ##vcore.cons '<= (##intrinsic ##vcore.<=)) (##inline ##vcore.cons (##inline ##vcore.cons '>= (##intrinsic ##vcore.>=)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact (##intrinsic ##vcore.exact)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact->exact (##intrinsic ##vcore.exact)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact (##intrinsic ##vcore.inexact)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact->inexact (##intrinsic ##vcore.inexact)) (##inline ##vcore.cons (##inline ##vcore.cons 'number? (bruijn ##.number?.175 15 12)) (##inline ##vcore.cons (##inline ##vcore.cons 'complex? (bruijn ##.complex?.176 15 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'rational? (bruijn ##.rational?.177 15 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'positive? (bruijn ##.positive?.178 15 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'negative? (bruijn ##.negative?.180 15 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'zero? (bruijn ##.zero?.179 15 16)) (##inline ##vcore.cons (##inline ##vcore.cons '+ (##intrinsic ##vcore.+)) (##inline ##vcore.cons (##inline ##vcore.cons '- (##intrinsic ##vcore.-)) (##inline ##vcore.cons (##inline ##vcore.cons '* (##intrinsic ##vcore.*)) (##inline ##vcore.cons (##inline ##vcore.cons '/ (##intrinsic ##vcore./)) (##inline ##vcore.cons (##inline ##vcore.cons 'quotient (##intrinsic ##vcore.quotient)) (##inline ##vcore.cons (##inline ##vcore.cons 'remainder (##intrinsic ##vcore.remainder)) (##inline ##vcore.cons (##inline ##vcore.cons 'max (bruijn ##.max.200 15 37)) (##inline ##vcore.cons (##inline ##vcore.cons 'min (bruijn ##.min.201 15 38)) (##inline ##vcore.cons (##inline ##vcore.cons 'abs (bruijn ##.abs.181 15 18)) (##inline ##vcore.cons (##inline ##vcore.cons 'square (bruijn ##.square.185 15 22)) (##inline ##vcore.cons (##inline ##vcore.cons 'sqrt (bruijn ##.sqrt.186 15 23)) (##inline ##vcore.cons (##inline ##vcore.cons 'ceiling (bruijn ##.ceiling.182 15 19)) (##inline ##vcore.cons (##inline ##vcore.cons 'floor (bruijn ##.floor.183 15 20)) (##inline ##vcore.cons (##inline ##vcore.cons 'round (bruijn ##.round.184 15 21)) (##inline ##vcore.cons (##inline ##vcore.cons 'sin (bruijn ##.sin.187 15 24)) (##inline ##vcore.cons (##inline ##vcore.cons 'cos (bruijn ##.cos.188 15 25)) (##inline ##vcore.cons (##inline ##vcore.cons 'tan (bruijn ##.tan.189 15 26)) (##inline ##vcore.cons (##inline ##vcore.cons 'asin (bruijn ##.asin.190 15 27)) (##inline ##vcore.cons (##inline ##vcore.cons 'acos (bruijn ##.acos.191 15 28)) (##inline ##vcore.cons (##inline ##vcore.cons 'atan (bruijn ##.atan.194 15 31)) (##inline ##vcore.cons (##inline ##vcore.cons 'exp (bruijn ##.exp.195 15 32)) (##inline ##vcore.cons (##inline ##vcore.cons 'log (bruijn ##.log.197 15 34)) (##inline ##vcore.cons (##inline ##vcore.cons 'expt (bruijn ##.expt.199 15 36)) (##inline ##vcore.cons (##inline ##vcore.cons 'pow (bruijn ##.pow.198 15 35)) (##inline ##vcore.cons (##inline ##vcore.cons 'cons (##intrinsic ##vcore.cons)) (##inline ##vcore.cons (##inline ##vcore.cons 'car (##intrinsic ##vcore.car)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdr (##intrinsic ##vcore.cdr)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-car! (##intrinsic ##vcore.set-car!)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-cdr! (##intrinsic ##vcore.set-cdr!)) (##inline ##vcore.cons (##inline ##vcore.cons 'caar (bruijn ##.caar.202 15 39)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadr (bruijn ##.cadr.203 15 40)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdar (bruijn ##.cdar.204 15 41)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddr (bruijn ##.cddr.205 15 42)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaar (bruijn ##.caaar.206 15 43)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadr (bruijn ##.caadr.207 15 44)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadar (bruijn ##.cadar.208 15 45)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddr (bruijn ##.caddr.209 15 46)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaar (bruijn ##.cdaar.210 15 47)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadr (bruijn ##.cdadr.211 15 48)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddar (bruijn ##.cddar.212 15 49)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddr (bruijn ##.cdddr.213 15 50)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaaar (bruijn ##.caaaar.214 15 51)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaadr (bruijn ##.caaadr.215 15 52)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadar (bruijn ##.caadar.216 15 53)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaddr (bruijn ##.caaddr.217 15 54)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadaar (bruijn ##.cadaar.218 15 55)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadadr (bruijn ##.cadadr.219 15 56)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddar (bruijn ##.caddar.220 15 57)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadddr (bruijn ##.cadddr.221 15 58)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaaar (bruijn ##.cdaaar.222 15 59)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaadr (bruijn ##.cdaadr.223 15 60)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadar (bruijn ##.cdadar.224 15 61)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaddr (bruijn ##.cdaddr.225 15 62)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddaar (bruijn ##.cddaar.226 15 63)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddadr (bruijn ##.cddadr.227 15 64)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddar (bruijn ##.cdddar.228 15 65)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddddr (bruijn ##.cddddr.229 15 66)) (##inline ##vcore.cons (##inline ##vcore.cons 'list (bruijn ##.list.230 15 67)) (##inline ##vcore.cons (##inline ##vcore.cons 'list? (bruijn ##.list?.231 15 68)) (##inline ##vcore.cons (##inline ##vcore.cons 'length (bruijn ##.length.232 15 69)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-tail (bruijn ##.list-tail.233 15 70)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-ref (bruijn ##.list-ref.234 15 71)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-set! (bruijn ##.list-set!.235 15 72)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-copy (bruijn ##.list-copy.236 15 73)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-list (bruijn ##.make-list.237 15 74)) (##inline ##vcore.cons (##inline ##vcore.cons 'map (bruijn ##.map.238 15 75)) (##inline ##vcore.cons (##inline ##vcore.cons 'for-each (bruijn ##.for-each.239 15 76)) (##inline ##vcore.cons (##inline ##vcore.cons 'append (bruijn ##.append.241 15 78)) (##inline ##vcore.cons (##inline ##vcore.cons 'reverse (bruijn ##.reverse.242 15 79)) (##inline ##vcore.cons (##inline ##vcore.cons 'memq (bruijn ##.memq.243 15 80)) (##inline ##vcore.cons (##inline ##vcore.cons 'memv (bruijn ##.memv.244 15 81)) (##inline ##vcore.cons (##inline ##vcore.cons 'member (bruijn ##.member.245 15 82)) (##inline ##vcore.cons (##inline ##vcore.cons 'assq (bruijn ##.assq.246 15 83)) (##inline ##vcore.cons (##inline ##vcore.cons 'assv (bruijn ##.assv.247 15 84)) (##inline ##vcore.cons (##inline ##vcore.cons 'assoc (bruijn ##.assoc.248 15 85)) (##inline ##vcore.cons (##inline ##vcore.cons 'num-pairs (bruijn ##.num-pairs.249 15 86)) (##inline ##vcore.cons (##inline ##vcore.cons 'split-at-right (bruijn ##.split-at-right.250 15 87)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->list (bruijn ##.string->list.252 15 89)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->string (bruijn ##.list->string.251 15 88)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-string (##intrinsic ##vcore.make-string)) (##inline ##vcore.cons (##inline ##vcore.cons 'substring (##intrinsic ##vcore.substring)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-copy (##intrinsic ##vcore.substring)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-copy! (##intrinsic ##vcore.string-copy!)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-ref (##intrinsic ##vcore.string-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-set! (##intrinsic ##vcore.string-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-length (##intrinsic ##vcore.string-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->symbol (##intrinsic ##vcore.string->symbol)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->number (##intrinsic ##vcore.string->number)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-append (bruijn ##.string-append.253 15 90)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol->string (##intrinsic ##vcore.symbol->string)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->vector (##intrinsic ##vcore.list->vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector->list (bruijn ##.vector->list.265 15 102)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-vector (##intrinsic ##vcore.make-vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-copy (bruijn ##.vector-copy.268 15 105)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-copy! (bruijn ##.vector-copy!.269 15 106)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector (##intrinsic ##vcore.vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-ref (##intrinsic ##vcore.vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-set! (##intrinsic ##vcore.vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-length (##intrinsic ##vcore.vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-map (bruijn ##.vector-map.267 15 104)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-for-each (bruijn ##.vector-for-each.266 15 103)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-append (bruijn ##.vector-append.270 15 107)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-fill! (bruijn ##.vector-fill!.271 15 108)) (##inline ##vcore.cons (##inline ##vcore.cons 'f64vector? (##intrinsic ##vcore.f64vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->f64vector (##intrinsic ##vcore.list->f64vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'f64vector->list (bruijn ##.f64vector->list.255 15 92)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-f64vector (##intrinsic ##vcore.make-f64vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'f64vector (##intrinsic ##vcore.f64vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'f64vector-ref (##intrinsic ##vcore.f64vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'f64vector-set! (##intrinsic ##vcore.f64vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'f64vector-length (##intrinsic ##vcore.f64vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'f32vector? (##intrinsic ##vcore.f32vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->f32vector (##intrinsic ##vcore.list->f32vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'f32vector->list (bruijn ##.f32vector->list.254 15 91)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-f32vector (##intrinsic ##vcore.make-f32vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'f32vector (##intrinsic ##vcore.f32vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'f32vector-ref (##intrinsic ##vcore.f32vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'f32vector-set! (##intrinsic ##vcore.f32vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'f32vector-length (##intrinsic ##vcore.f32vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 's32vector? (##intrinsic ##vcore.s32vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->s32vector (##intrinsic ##vcore.list->s32vector)) (##inline ##vcore.cons (##inline ##vcore.cons 's32vector->list (bruijn ##.s32vector->list.256 15 93)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-s32vector (##intrinsic ##vcore.make-s32vector)) (##inline ##vcore.cons (##inline ##vcore.cons 's32vector (##intrinsic ##vcore.s32vector)) (##inline ##vcore.cons (##inline ##vcore.cons 's32vector-ref (##intrinsic ##vcore.s32vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 's32vector-set! (##intrinsic ##vcore.s32vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 's32vector-length (##intrinsic ##vcore.s32vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'u16vector? (##intrinsic ##vcore.u16vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->u16vector (##intrinsic ##vcore.list->u16vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'u16vector->list (bruijn ##.u16vector->list.257 15 94)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-u16vector (##intrinsic ##vcore.make-u16vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'u16vector (##intrinsic ##vcore.u16vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'u16vector-ref (##intrinsic ##vcore.u16vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'u16vector-set! (##intrinsic ##vcore.u16vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'u16vector-length (##intrinsic ##vcore.u16vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 's16vector? (##intrinsic ##vcore.s16vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->s16vector (##intrinsic ##vcore.list->s16vector)) (##inline ##vcore.cons (##inline ##vcore.cons 's16vector->list (bruijn ##.s16vector->list.258 15 95)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-s16vector (##intrinsic ##vcore.make-s16vector)) (##inline ##vcore.cons (##inline ##vcore.cons 's16vector (##intrinsic ##vcore.s16vector)) (##inline ##vcore.cons (##inline ##vcore.cons 's16vector-ref (##intrinsic ##vcore.s16vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 's16vector-set! (##intrinsic ##vcore.s16vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 's16vector-length (##intrinsic ##vcore.s16vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'u8vector? (##intrinsic ##vcore.u8vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->u8vector (##intrinsic ##vcore.list->u8vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'u8vector->list (bruijn ##.u8vector->list.259 15 96)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-u8vector (##intrinsic ##vcore.make-u8vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'u8vector (##intrinsic ##vcore.u8vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'u8vector-ref (##intrinsic ##vcore.u8vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'u8vector-set! (##intrinsic ##vcore.u8vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'u8vector-length (##intrinsic ##vcore.u8vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 's8vector? (##intrinsic ##vcore.s8vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->s8vector (##intrinsic ##vcore.list->s8vector)) (##inline ##vcore.cons (##inline ##vcore.cons 's8vector->list (bruijn ##.s8vector->list.263 15 100)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-s8vector (##intrinsic ##vcore.make-s8vector)) (##inline ##vcore.cons (##inline ##vcore.cons 's8vector (##intrinsic ##vcore.make-s8vector)) (##inline ##vcore.cons (##inline ##vcore.cons 's8vector-ref (##intrinsic ##vcore.s8vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 's8vector-set! (##intrinsic ##vcore.s8vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 's8vector-length (##intrinsic ##vcore.s8vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'bytevector? (##intrinsic ##vcore.u8vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->bytevector (##intrinsic ##vcore.list->u8vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'bytevector->list (bruijn ##.bytevector->list.260 15 97)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-bytevector (##intrinsic ##vcore.make-u8vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'bytevector (##intrinsic ##vcore.u8vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'bytevector-u8-ref (##intrinsic ##vcore.u8vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'bytevector-u8-set! (##intrinsic ##vcore.u8vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'bytevector-length (##intrinsic ##vcore.u8vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-u8vector (bruijn ##.read-u8vector.261 15 98)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-bytevector (bruijn ##.read-bytevector.262 15 99)) (##inline ##vcore.cons (##inline ##vcore.cons 'typevector? (bruijn ##.typevector?.264 15 101)) (##inline ##vcore.cons (##inline ##vcore.cons 'record (##intrinsic ##vcore.record)) (##inline ##vcore.cons (##inline ##vcore.cons 'record-ref (##intrinsic ##vcore.record-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'record-set! (##intrinsic ##vcore.record-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'record-length (##intrinsic ##vcore.record-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-hash-table (bruijn ##.make-hash-table.272 15 109)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table-ref (bruijn ##.hash-table-ref.273 15 110)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table-set! (bruijn ##.hash-table-set!.274 15 111)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table-delete! (##intrinsic ##vcore.hash-table-delete!)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table->alist (bruijn ##.hash-table->alist.275 15 112)) (##inline ##vcore.cons (##inline ##vcore.cons 'char->integer (##intrinsic ##vcore.char-integer)) (##inline ##vcore.cons (##inline ##vcore.cons 'integer->char (##intrinsic ##vcore.integer->char)) (##inline ##vcore.cons (##inline ##vcore.cons 'number->string (bruijn ##.number->string.276 15 113)) (##inline ##vcore.cons (##inline ##vcore.cons 'char-numeric? (bruijn ##.char-numeric?.277 15 114)) (##inline ##vcore.cons (##inline ##vcore.cons 'char-alphabetic? (bruijn ##.char-alphabetic?.278 15 115)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-output-port (bruijn ##.current-output-port.279 15 116)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-error-port (bruijn ##.current-error-port.280 15 117)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-input-port (bruijn ##.current-input-port.281 15 118)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-input-file (bruijn ##.open-input-file.287 15 124)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-file (bruijn ##.open-output-file.288 15 125)) (##inline ##vcore.cons (##inline ##vcore.cons 'close-port (bruijn ##.close-port.283 15 120)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-string (bruijn ##.open-output-string.289 15 126)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-output-string (bruijn ##.get-output-string.290 15 127)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-output-to-file (bruijn ##.with-output-to-file.294 15 131)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-input-from-file (bruijn ##.with-input-from-file.295 15 132)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-port (bruijn ##.call-with-port.291 15 128)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-input-file (bruijn ##.call-with-input-file.292 15 129)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-output-file (bruijn ##.call-with-output-file.293 15 130)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-char (bruijn ##.read-char.296 15 133)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-line (bruijn ##.read-line.297 15 134)) (##inline ##vcore.cons (##inline ##vcore.cons 'read (bruijn ##.read.298 15 135)) (##inline ##vcore.cons (##inline ##vcore.cons 'newline (bruijn ##.newline.299 15 136)) (##inline ##vcore.cons (##inline ##vcore.cons 'display (bruijn ##.display.303 15 140)) (##inline ##vcore.cons (##inline ##vcore.cons 'write (bruijn ##.write.304 15 141)) (##inline ##vcore.cons (##inline ##vcore.cons 'call/cc (##intrinsic ##vcore.call/cc)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-current-continuation (##intrinsic ##vcore.call/cc)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-values (##intrinsic ##vcore.call-with-values)) (##inline ##vcore.cons (##inline ##vcore.cons 'apply (##intrinsic ##vcore.apply)) (##inline ##vcore.cons (##inline ##vcore.cons 'values (bruijn ##.values.305 15 142)) (##inline ##vcore.cons (##inline ##vcore.cons 'setter (bruijn ##.setter.306 15 143)) (##inline ##vcore.cons (##inline ##vcore.cons 'mutator (bruijn ##.mutator.307 15 144)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.setter (bruijn ##.x.977 17 0)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.mutator (bruijn ##.x.978 16 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-parameter (bruijn ##.make-parameter.308 15 145)) (##inline ##vcore.cons (##inline ##vcore.cons 'raise (##intrinsic ##vcore.raise)) (##inline ##vcore.cons (##inline ##vcore.cons 'raise-continuable (bruijn ##.raise-continuable.324 15 161)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-exception-handler (bruijn ##.with-exception-handler.325 15 162)) (##inline ##vcore.cons (##inline ##vcore.cons 'command-line (##intrinsic ##vcore.command-line)) (##inline ##vcore.cons (##inline ##vcore.cons 'system (##intrinsic ##vcore.system)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-input-process (##intrinsic ##vcore.open-input-process)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-process (##intrinsic ##vcore.open-output-process)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-temporary-file (##intrinsic ##vcore.make-temporary-file)) (##inline ##vcore.cons (##inline ##vcore.cons 'file-exists? (bruijn ##.file-exists?.309 15 146)) (##inline ##vcore.cons (##inline ##vcore.cons 'exit (##intrinsic ##vcore.exit)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-jiffy (##intrinsic ##vcore.current-jiffy)) (##inline ##vcore.cons (##inline ##vcore.cons 'jiffies-per-second (##intrinsic ##vcore.jiffies-per-second)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-not (##intrinsic ##vcore.bitwise-not)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-and (bruijn ##.bitwise-and.310 15 147)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-or (bruijn ##.bitwise-or.315 15 152)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-ior (bruijn ##.bitwise-ior.311 15 148)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-xor (bruijn ##.bitwise-xor.312 15 149)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-xnor (bruijn ##.bitwise-xnor.313 15 150)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-eqv (bruijn ##.bitwise-eqv.314 15 151)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-nand (##intrinsic ##vcore.bitwise-nand)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-nor (##intrinsic ##vcore.bitwise-nor)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-andc1 (##intrinsic ##vcore.bitwise-andc1)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-andc2 (##intrinsic ##vcore.bitwise-andc2)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-orc1 (##intrinsic ##vcore.bitwise-orc1)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-orc2 (##intrinsic ##vcore.bitwise-orc2)) (##inline ##vcore.cons (##inline ##vcore.cons 'arithmetic-shift (##intrinsic ##vcore.arithmetic-shift)) (##inline ##vcore.cons (##inline ##vcore.cons 'bit-count (##intrinsic ##vcore.bit-count)) (##inline ##vcore.cons (##inline ##vcore.cons 'fiber-fork (bruijn ##.fiber-fork.327 15 164)) (##inline ##vcore.cons (##inline ##vcore.cons 'fiber-fork-list (##intrinsic ##vcore.fiber-fork-list)) (##inline ##vcore.cons (##inline ##vcore.cons 'fiber-map (bruijn ##.fiber-map.328 15 165)) (##inline ##vcore.cons (##inline ##vcore.cons 'async (##intrinsic ##vcore.async)) (##inline ##vcore.cons (##inline ##vcore.cons 'await (##intrinsic ##vcore.await)) (##inline ##vcore.cons (##inline ##vcore.cons 'atom? (bruijn ##.atom?.316 15 153)) (##inline ##vcore.cons (##inline ##vcore.cons 'displayln (bruijn ##.displayln.317 15 154)) (##inline ##vcore.cons (##inline ##vcore.cons 'writeln (bruijn ##.writeln.318 15 155)) (##inline ##vcore.cons (##inline ##vcore.cons 'format (bruijn ##.format.323 15 160)) (##inline ##vcore.cons (##inline ##vcore.cons 'printf (bruijn ##.printf.321 15 158)) (##inline ##vcore.cons (##inline ##vcore.cons 'sprintf (bruijn ##.sprintf.322 15 159)) (##inline ##vcore.cons (##inline ##vcore.cons 'error (bruijn ##.error.326 15 163)) '()))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
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
        VGetArg(statics, 15-1, 0)),
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
        VGetArg(statics, 15-1, 11)),
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
        VGetArg(statics, 15-1, 1)),
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
        VGetArg(statics, 15-1, 12)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0complex_Q,
        VGetArg(statics, 15-1, 13)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0rational_Q,
        VGetArg(statics, 15-1, 14)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0positive_Q,
        VGetArg(statics, 15-1, 15)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0negative_Q,
        VGetArg(statics, 15-1, 17)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0zero_Q,
        VGetArg(statics, 15-1, 16)),
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
        VGetArg(statics, 15-1, 37)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0min,
        VGetArg(statics, 15-1, 38)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0abs,
        VGetArg(statics, 15-1, 18)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0square,
        VGetArg(statics, 15-1, 22)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0sqrt,
        VGetArg(statics, 15-1, 23)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0ceiling,
        VGetArg(statics, 15-1, 19)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0floor,
        VGetArg(statics, 15-1, 20)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0round,
        VGetArg(statics, 15-1, 21)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0sin,
        VGetArg(statics, 15-1, 24)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cos,
        VGetArg(statics, 15-1, 25)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0tan,
        VGetArg(statics, 15-1, 26)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0asin,
        VGetArg(statics, 15-1, 27)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0acos,
        VGetArg(statics, 15-1, 28)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0atan,
        VGetArg(statics, 15-1, 31)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exp,
        VGetArg(statics, 15-1, 32)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0log,
        VGetArg(statics, 15-1, 34)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0expt,
        VGetArg(statics, 15-1, 36)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0pow,
        VGetArg(statics, 15-1, 35)),
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
        VGetArg(statics, 15-1, 39)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadr,
        VGetArg(statics, 15-1, 40)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdar,
        VGetArg(statics, 15-1, 41)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddr,
        VGetArg(statics, 15-1, 42)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaar,
        VGetArg(statics, 15-1, 43)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caadr,
        VGetArg(statics, 15-1, 44)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadar,
        VGetArg(statics, 15-1, 45)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caddr,
        VGetArg(statics, 15-1, 46)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaar,
        VGetArg(statics, 15-1, 47)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdadr,
        VGetArg(statics, 15-1, 48)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddar,
        VGetArg(statics, 15-1, 49)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdddr,
        VGetArg(statics, 15-1, 50)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaaar,
        VGetArg(statics, 15-1, 51)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaadr,
        VGetArg(statics, 15-1, 52)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caadar,
        VGetArg(statics, 15-1, 53)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaddr,
        VGetArg(statics, 15-1, 54)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadaar,
        VGetArg(statics, 15-1, 55)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadadr,
        VGetArg(statics, 15-1, 56)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caddar,
        VGetArg(statics, 15-1, 57)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadddr,
        VGetArg(statics, 15-1, 58)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaaar,
        VGetArg(statics, 15-1, 59)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaadr,
        VGetArg(statics, 15-1, 60)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdadar,
        VGetArg(statics, 15-1, 61)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaddr,
        VGetArg(statics, 15-1, 62)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddaar,
        VGetArg(statics, 15-1, 63)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddadr,
        VGetArg(statics, 15-1, 64)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdddar,
        VGetArg(statics, 15-1, 65)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddddr,
        VGetArg(statics, 15-1, 66)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list,
        VGetArg(statics, 15-1, 67)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list_Q,
        VGetArg(statics, 15-1, 68)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0length,
        VGetArg(statics, 15-1, 69)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__tail,
        VGetArg(statics, 15-1, 70)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__ref,
        VGetArg(statics, 15-1, 71)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__set_B,
        VGetArg(statics, 15-1, 72)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__copy,
        VGetArg(statics, 15-1, 73)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__list,
        VGetArg(statics, 15-1, 74)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0map,
        VGetArg(statics, 15-1, 75)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0for__each,
        VGetArg(statics, 15-1, 76)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append,
        VGetArg(statics, 15-1, 78)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0reverse,
        VGetArg(statics, 15-1, 79)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0memq,
        VGetArg(statics, 15-1, 80)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0memv,
        VGetArg(statics, 15-1, 81)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0member,
        VGetArg(statics, 15-1, 82)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assq,
        VGetArg(statics, 15-1, 83)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assv,
        VGetArg(statics, 15-1, 84)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assoc,
        VGetArg(statics, 15-1, 85)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0num__pairs,
        VGetArg(statics, 15-1, 86)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0split__at__right,
        VGetArg(statics, 15-1, 87)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Glist,
        VGetArg(statics, 15-1, 89)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gstring,
        VGetArg(statics, 15-1, 88)),
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
        VGetArg(statics, 15-1, 90)),
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
        VGetArg(statics, 15-1, 102)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__vector,
        _V40_V10vcore_Dmake__vector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__copy,
        VGetArg(statics, 15-1, 105)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__copy_B,
        VGetArg(statics, 15-1, 106)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector,
        _V40_V10vcore_Dvector),
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
        VGetArg(statics, 15-1, 104)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__for__each,
        VGetArg(statics, 15-1, 103)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__append,
        VGetArg(statics, 15-1, 107)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__fill_B,
        VGetArg(statics, 15-1, 108)),
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
        VGetArg(statics, 15-1, 92)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__f64vector,
        _V40_V10vcore_Dmake__f64vector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0f64vector,
        _V40_V10vcore_Df64vector),
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
        VGetArg(statics, 15-1, 91)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__f32vector,
        _V40_V10vcore_Dmake__f32vector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0f32vector,
        _V40_V10vcore_Df32vector),
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
        VGetArg(statics, 15-1, 93)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__s32vector,
        _V40_V10vcore_Dmake__s32vector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s32vector,
        _V40_V10vcore_Ds32vector),
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
        VGetArg(statics, 15-1, 94)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__u16vector,
        _V40_V10vcore_Dmake__u16vector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0u16vector,
        _V40_V10vcore_Du16vector),
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
        VGetArg(statics, 15-1, 95)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__s16vector,
        _V40_V10vcore_Dmake__s16vector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s16vector,
        _V40_V10vcore_Ds16vector),
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
        VGetArg(statics, 15-1, 96)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__u8vector,
        _V40_V10vcore_Dmake__u8vector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0u8vector,
        _V40_V10vcore_Du8vector),
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
        VGetArg(statics, 15-1, 100)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__s8vector,
        _V40_V10vcore_Dmake__s8vector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s8vector,
        _V40_V10vcore_Dmake__s8vector),
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
        VGetArg(statics, 15-1, 97)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__bytevector,
        _V40_V10vcore_Dmake__u8vector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bytevector,
        _V40_V10vcore_Du8vector),
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
        VGetArg(statics, 15-1, 98)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__bytevector,
        VGetArg(statics, 15-1, 99)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0typevector_Q,
        VGetArg(statics, 15-1, 101)),
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
        VGetArg(statics, 15-1, 109)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table__ref,
        VGetArg(statics, 15-1, 110)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table__set_B,
        VGetArg(statics, 15-1, 111)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table__delete_B,
        _V40_V10vcore_Dhash__table__delete_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table___Galist,
        VGetArg(statics, 15-1, 112)),
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
        VGetArg(statics, 15-1, 113)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char__numeric_Q,
        VGetArg(statics, 15-1, 114)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char__alphabetic_Q,
        VGetArg(statics, 15-1, 115)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__output__port,
        VGetArg(statics, 15-1, 116)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__error__port,
        VGetArg(statics, 15-1, 117)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__input__port,
        VGetArg(statics, 15-1, 118)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__input__file,
        VGetArg(statics, 15-1, 124)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__file,
        VGetArg(statics, 15-1, 125)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0close__port,
        VGetArg(statics, 15-1, 120)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__string,
        VGetArg(statics, 15-1, 126)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__output__string,
        VGetArg(statics, 15-1, 127)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__output__to__file,
        VGetArg(statics, 15-1, 131)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__input__from__file,
        VGetArg(statics, 15-1, 132)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__port,
        VGetArg(statics, 15-1, 128)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__input__file,
        VGetArg(statics, 15-1, 129)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__output__file,
        VGetArg(statics, 15-1, 130)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__char,
        VGetArg(statics, 15-1, 133)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__line,
        VGetArg(statics, 15-1, 134)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read,
        VGetArg(statics, 15-1, 135)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0newline,
        VGetArg(statics, 15-1, 136)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0display,
        VGetArg(statics, 15-1, 140)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0write,
        VGetArg(statics, 15-1, 141)),
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
        VGetArg(statics, 15-1, 142)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0setter,
        VGetArg(statics, 15-1, 143)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mutator,
        VGetArg(statics, 15-1, 144)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dsetter,
        VGetArg(statics, 17-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dmutator,
        VGetArg(statics, 16-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__parameter,
        VGetArg(statics, 15-1, 145)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0raise,
        _V40_V10vcore_Draise),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0raise__continuable,
        VGetArg(statics, 15-1, 161)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__exception__handler,
        VGetArg(statics, 15-1, 162)),
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
        VGetArg(statics, 15-1, 146)),
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
        VGetArg(statics, 15-1, 147)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__or,
        VGetArg(statics, 15-1, 152)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__ior,
        VGetArg(statics, 15-1, 148)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__xor,
        VGetArg(statics, 15-1, 149)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__xnor,
        VGetArg(statics, 15-1, 150)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__eqv,
        VGetArg(statics, 15-1, 151)),
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
        VGetArg(statics, 15-1, 164)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fiber__fork__list,
        _V40_V10vcore_Dfiber__fork__list),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fiber__map,
        VGetArg(statics, 15-1, 165)),
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
        VGetArg(statics, 15-1, 153)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0displayln,
        VGetArg(statics, 15-1, 154)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0writeln,
        VGetArg(statics, 15-1, 155)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0format,
        VGetArg(statics, 15-1, 160)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0printf,
        VGetArg(statics, 15-1, 158)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0sprintf,
        VGetArg(statics, 15-1, 159)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0error,
        VGetArg(statics, 15-1, 163)),
        VNULL))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}
static void _V0vanity_V0core_V20_V0k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_V0k288) (bruijn ##.bitwise-or.315 14 152) (bruijn ##.bitwise-ior.311 14 148))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k288, self)))),
      VEncodeInt(14l), VEncodeInt(152l),
      VGetArg(statics, 14-1, 148)
    );
}
static void _V0vanity_V0core_V20_V0k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_V0k287) (bruijn ##.bitwise-eqv.314 13 151) (bruijn ##.bitwise-xnor.313 13 150))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k287, self)))),
      VEncodeInt(13l), VEncodeInt(151l),
      VGetArg(statics, 13-1, 150)
    );
}
static void _V0vanity_V0core_V20_V0k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_V0k286) (bruijn ##.current-input-port.281 12 118) (bruijn ##.x.2650 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k286, self)))),
      VEncodeInt(12l), VEncodeInt(118l),
      _var0
    );
}
static void _V0vanity_V0core_V20_V0k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core make-parameter) (bruijn ##.make-parameter.308 11 145) (close _V0vanity_V0core_V20_V0k285) (bruijn ##.x.2651 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 145));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k285, self))));
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0make__parameter(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
static void _V0vanity_V0core_V20_V0k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.stdin->port (close _V0vanity_V0core_V20_V0k284))
    VCallFuncWithGC(runtime, (VFunc)VStdinPort, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k284, self)))));
}
static void _V0vanity_V0core_V20_V0k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_V0k283) (bruijn ##.current-error-port.280 9 117) (bruijn ##.x.2652 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k283, self)))),
      VEncodeInt(9l), VEncodeInt(117l),
      _var0
    );
}
static void _V0vanity_V0core_V20_V0k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core make-parameter) (bruijn ##.make-parameter.308 8 145) (close _V0vanity_V0core_V20_V0k282) (bruijn ##.x.2653 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 145));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k282, self))));
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0make__parameter(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
static void _V0vanity_V0core_V20_V0k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.stderr->port (close _V0vanity_V0core_V20_V0k281))
    VCallFuncWithGC(runtime, (VFunc)VStderrPort, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k281, self)))));
}
static void _V0vanity_V0core_V20_V0k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_V0k280) (bruijn ##.current-output-port.279 6 116) (bruijn ##.x.2654 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k280, self)))),
      VEncodeInt(6l), VEncodeInt(116l),
      _var0
    );
}
static void _V0vanity_V0core_V20_V0k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity core make-parameter) (bruijn ##.make-parameter.308 5 145) (close _V0vanity_V0core_V20_V0k279) (bruijn ##.x.2655 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 145));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k279, self))));
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0core_V0make__parameter(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
static void _V0vanity_V0core_V20_V0k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.stdout->port (close _V0vanity_V0core_V20_V0k278))
    VCallFuncWithGC(runtime, (VFunc)VStdoutPort, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k278, self)))));
}
static void _V0vanity_V0core_V20_V0k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_V0k277) (bruijn ##.read-bytevector.262 3 99) (bruijn ##.read-u8vector.261 3 98))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k277, self)))),
      VEncodeInt(3l), VEncodeInt(99l),
      statics->up->up->vars[98]
    );
}
static void _V0vanity_V0core_V20_V0k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_V0k276) (bruijn ##.bytevector->list.260 2 97) (bruijn ##.u8vector->list.259 2 96))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k276, self)))),
      VEncodeInt(2l), VEncodeInt(97l),
      statics->up->vars[96]
    );
}
static void _V0vanity_V0core_V20_V0k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_V0k275) (bruijn ##.expt.199 1 36) (bruijn ##.pow.198 1 35))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k275, self)))),
      VEncodeInt(1l), VEncodeInt(36l),
      statics->vars[35]
    );
}
static void _V0vanity_V0core_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 166 ((close "_V50_V0vanity_V0core_V0boolean_Q") (close "_V50_V0vanity_V0core_V0symbol_E_Q") (close "_V50_V0vanity_V0core_V0vector_E_Q") (close "_V50_V0vanity_V0core_V0f32vector_E_Q") (close "_V50_V0vanity_V0core_V0f64vector_E_Q") (close "_V50_V0vanity_V0core_V0s32vector_E_Q") (close "_V50_V0vanity_V0core_V0u16vector_E_Q") (close "_V50_V0vanity_V0core_V0s16vector_E_Q") (close "_V50_V0vanity_V0core_V0u8vector_E_Q") (close "_V50_V0vanity_V0core_V0s8vector_E_Q") (close "_V50_V0vanity_V0core_V0record_E_Q") (close "_V50_V0vanity_V0core_V0equal_Q") (close "_V50_V0vanity_V0core_V0number_Q") #f (##intrinsic ##vcore.int?) (close "_V50_V0vanity_V0core_V0positive_Q") (close "_V50_V0vanity_V0core_V0zero_Q") (close "_V50_V0vanity_V0core_V0negative_Q") (close "_V50_V0vanity_V0core_V0abs") (##foreign.function "_V30ceil_shim") (##foreign.function "_V30floor_shim") (##foreign.function "_V30round_shim") (close "_V50_V0vanity_V0core_V0square") (##foreign.function "_V30sqrt_shim") (##foreign.function "_V30sin_shim") (##foreign.function "_V30cos_shim") (##foreign.function "_V30tan_shim") (##foreign.function "_V30asin_shim") (##foreign.function "_V30acos_shim") (##foreign.function "_V30atan_shim") (##foreign.function "_V30atan2_shim") (close "_V50_V0vanity_V0core_V0atan") (##foreign.function "_V30exp_shim") (##foreign.function "_V30log_shim") (close "_V50_V0vanity_V0core_V0log") (##foreign.function "_V30pow_shim") #f (close "_V50_V0vanity_V0core_V0max") (close "_V50_V0vanity_V0core_V0min") (close "_V50_V0vanity_V0core_V0caar") (close "_V50_V0vanity_V0core_V0cadr") (close "_V50_V0vanity_V0core_V0cdar") (close "_V50_V0vanity_V0core_V0cddr") (close "_V50_V0vanity_V0core_V0caaar") (close "_V50_V0vanity_V0core_V0caadr") (close "_V50_V0vanity_V0core_V0cadar") (close "_V50_V0vanity_V0core_V0caddr") (close "_V50_V0vanity_V0core_V0cdaar") (close "_V50_V0vanity_V0core_V0cdadr") (close "_V50_V0vanity_V0core_V0cddar") (close "_V50_V0vanity_V0core_V0cdddr") (close "_V50_V0vanity_V0core_V0caaaar") (close "_V50_V0vanity_V0core_V0caaadr") (close "_V50_V0vanity_V0core_V0caadar") (close "_V50_V0vanity_V0core_V0caaddr") (close "_V50_V0vanity_V0core_V0cadaar") (close "_V50_V0vanity_V0core_V0cadadr") (close "_V50_V0vanity_V0core_V0caddar") (close "_V50_V0vanity_V0core_V0cadddr") (close "_V50_V0vanity_V0core_V0cdaaar") (close "_V50_V0vanity_V0core_V0cdaadr") (close "_V50_V0vanity_V0core_V0cdadar") (close "_V50_V0vanity_V0core_V0cdaddr") (close "_V50_V0vanity_V0core_V0cddaar") (close "_V50_V0vanity_V0core_V0cddadr") (close "_V50_V0vanity_V0core_V0cdddar") (close "_V50_V0vanity_V0core_V0cddddr") (close "_V50_V0vanity_V0core_V0list") (close "_V50_V0vanity_V0core_V0list_Q") (close "_V50_V0vanity_V0core_V0length") (close "_V50_V0vanity_V0core_V0list__tail") (close "_V50_V0vanity_V0core_V0list__ref") (close "_V50_V0vanity_V0core_V0list__set_B") (close "_V50_V0vanity_V0core_V0list__copy") (close "_V50_V0vanity_V0core_V0make__list") (close "_V50_V0vanity_V0core_V0map") (close "_V50_V0vanity_V0core_V0for__each") (close "_V50_V0vanity_V0core_V0fold__right") (close "_V50_V0vanity_V0core_V0append") (close "_V50_V0vanity_V0core_V0reverse") (close "_V50_V0vanity_V0core_V0memq") (close "_V50_V0vanity_V0core_V0memv") (close "_V50_V0vanity_V0core_V0member") (close "_V50_V0vanity_V0core_V0assq") (close "_V50_V0vanity_V0core_V0assv") (close "_V50_V0vanity_V0core_V0assoc") (close "_V50_V0vanity_V0core_V0num__pairs") (close "_V50_V0vanity_V0core_V0split__at__right") (close "_V50_V0vanity_V0core_V0list___Gstring") (close "_V50_V0vanity_V0core_V0string___Glist") (close "_V50_V0vanity_V0core_V0string__append") (close "_V50_V0vanity_V0core_V0f32vector___Glist") (close "_V50_V0vanity_V0core_V0f64vector___Glist") (close "_V50_V0vanity_V0core_V0s32vector___Glist") (close "_V50_V0vanity_V0core_V0u16vector___Glist") (close "_V50_V0vanity_V0core_V0s16vector___Glist") (close "_V50_V0vanity_V0core_V0u8vector___Glist") #f (close "_V50_V0vanity_V0core_V0read__u8vector") #f (close "_V50_V0vanity_V0core_V0s8vector___Glist") (close "_V50_V0vanity_V0core_V0typevector_Q") (close "_V50_V0vanity_V0core_V0vector___Glist") (close "_V50_V0vanity_V0core_V0vector__for__each") (close "_V50_V0vanity_V0core_V0vector__map") (close "_V50_V0vanity_V0core_V0vector__copy") (close "_V50_V0vanity_V0core_V0vector__copy_B") (close "_V50_V0vanity_V0core_V0vector__append") (close "_V50_V0vanity_V0core_V0vector__fill_B") (close "_V50_V0vanity_V0core_V0make__hash__table") (close "_V50_V0vanity_V0core_V0hash__table__ref") (close "_V50_V0vanity_V0core_V0hash__table__set_B") (close "_V50_V0vanity_V0core_V0hash__table___Galist") (close "_V50_V0vanity_V0core_V0number___Gstring") (close "_V50_V0vanity_V0core_V0char__numeric_Q") (close "_V50_V0vanity_V0core_V0char__alphabetic_Q") #f #f #f (close "_V50_V0vanity_V0core_V0try__or__gc") (close "_V50_V0vanity_V0core_V0close__port") (close "_V50_V0vanity_V0core_V0open__input__file__impl") (close "_V50_V0vanity_V0core_V0open__output__file__impl") (close "_V50_V0vanity_V0core_V0open__output__string__impl") (close "_V50_V0vanity_V0core_V0open__input__file") (close "_V50_V0vanity_V0core_V0open__output__file") (close "_V50_V0vanity_V0core_V0open__output__string") (##intrinsic ##vcore.get-output-string) (close "_V50_V0vanity_V0core_V0call__with__port") (close "_V50_V0vanity_V0core_V0call__with__input__file") (close "_V50_V0vanity_V0core_V0call__with__output__file") (close "_V50_V0vanity_V0core_V0with__output__to__file") (close "_V50_V0vanity_V0core_V0with__input__from__file") (close "_V50_V0vanity_V0core_V0read__char") (close "_V50_V0vanity_V0core_V0read__line") (close "_V50_V0vanity_V0core_V0read") (close "_V50_V0vanity_V0core_V0newline") (close "_V50_V0vanity_V0core_V0printout__list") (close "_V50_V0vanity_V0core_V0printout__quotation") (close "_V50_V0vanity_V0core_V0printout") (close "_V50_V0vanity_V0core_V0display") (close "_V50_V0vanity_V0core_V0write") (close "_V50_V0vanity_V0core_V0values") (bruijn ##.x.977 2 0) (bruijn ##.x.978 1 0) (close "_V50_V0vanity_V0core_V0make__parameter") (close "_V50_V0vanity_V0core_V0file__exists_Q") (close "_V50_V0vanity_V0core_V0bitwise__and") (close "_V50_V0vanity_V0core_V0bitwise__ior") (close "_V50_V0vanity_V0core_V0bitwise__xor") (close "_V50_V0vanity_V0core_V0bitwise__xnor") #f #f (close "_V50_V0vanity_V0core_V0atom_Q") (close "_V50_V0vanity_V0core_V0displayln") (close "_V50_V0vanity_V0core_V0writeln") (close "_V50_V0vanity_V0core_V0format__printf") (close "_V50_V0vanity_V0core_V0format__sprintf") (close "_V50_V0vanity_V0core_V0printf") (close "_V50_V0vanity_V0core_V0sprintf") (close "_V50_V0vanity_V0core_V0format") (close "_V50_V0vanity_V0core_V0raise__continuable") (close "_V50_V0vanity_V0core_V0with__exception__handler") (close "_V50_V0vanity_V0core_V0error") (close "_V50_V0vanity_V0core_V0fiber__fork") (close "_V50_V0vanity_V0core_V0fiber__map")) (set! (close _V0vanity_V0core_V20_V0k274) (bruijn ##.complex?.176 0 13) (bruijn ##.number?.175 0 12)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[166]; } container;
    self = &container.self;
    VInitEnv(self, 166, 166, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0boolean_Q, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0symbol_E_Q, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector_E_Q, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0f32vector_E_Q, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0f64vector_E_Q, self))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0s32vector_E_Q, self))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0u16vector_E_Q, self))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0s16vector_E_Q, self))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0u8vector_E_Q, self))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0s8vector_E_Q, self))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0record_E_Q, self))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0equal_Q, self))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0number_Q, self))));
    self->vars[13] = VEncodeBool(false);
    self->vars[14] = _V40_V10vcore_Dint_Q;
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0positive_Q, self))));
    self->vars[16] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0zero_Q, self))));
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0negative_Q, self))));
    self->vars[18] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0abs, self))));
    self->vars[19] = (VEncodeClosure((V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V30ceil_shim, NULL)))));
    self->vars[20] = (VEncodeClosure((V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V30floor_shim, NULL)))));
    self->vars[21] = (VEncodeClosure((V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V30round_shim, NULL)))));
    self->vars[22] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0square, self))));
    self->vars[23] = (VEncodeClosure((V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V30sqrt_shim, NULL)))));
    self->vars[24] = (VEncodeClosure((V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V30sin_shim, NULL)))));
    self->vars[25] = (VEncodeClosure((V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V30cos_shim, NULL)))));
    self->vars[26] = (VEncodeClosure((V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V30tan_shim, NULL)))));
    self->vars[27] = (VEncodeClosure((V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V30asin_shim, NULL)))));
    self->vars[28] = (VEncodeClosure((V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V30acos_shim, NULL)))));
    self->vars[29] = (VEncodeClosure((V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V30atan_shim, NULL)))));
    self->vars[30] = (VEncodeClosure((V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V30atan2_shim, NULL)))));
    self->vars[31] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0atan, self))));
    self->vars[32] = (VEncodeClosure((V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V30exp_shim, NULL)))));
    self->vars[33] = (VEncodeClosure((V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V30log_shim, NULL)))));
    self->vars[34] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0log, self))));
    self->vars[35] = (VEncodeClosure((V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V30pow_shim, NULL)))));
    self->vars[36] = VEncodeBool(false);
    self->vars[37] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0max, self))));
    self->vars[38] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0min, self))));
    self->vars[39] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0caar, self))));
    self->vars[40] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cadr, self))));
    self->vars[41] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cdar, self))));
    self->vars[42] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cddr, self))));
    self->vars[43] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0caaar, self))));
    self->vars[44] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0caadr, self))));
    self->vars[45] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cadar, self))));
    self->vars[46] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0caddr, self))));
    self->vars[47] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cdaar, self))));
    self->vars[48] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cdadr, self))));
    self->vars[49] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cddar, self))));
    self->vars[50] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cdddr, self))));
    self->vars[51] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0caaaar, self))));
    self->vars[52] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0caaadr, self))));
    self->vars[53] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0caadar, self))));
    self->vars[54] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0caaddr, self))));
    self->vars[55] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cadaar, self))));
    self->vars[56] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cadadr, self))));
    self->vars[57] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0caddar, self))));
    self->vars[58] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cadddr, self))));
    self->vars[59] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cdaaar, self))));
    self->vars[60] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cdaadr, self))));
    self->vars[61] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cdadar, self))));
    self->vars[62] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cdaddr, self))));
    self->vars[63] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cddaar, self))));
    self->vars[64] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cddadr, self))));
    self->vars[65] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cdddar, self))));
    self->vars[66] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0cddddr, self))));
    self->vars[67] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0list, self))));
    self->vars[68] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0list_Q, self))));
    self->vars[69] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0length, self))));
    self->vars[70] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0list__tail, self))));
    self->vars[71] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0list__ref, self))));
    self->vars[72] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0list__set_B, self))));
    self->vars[73] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0list__copy, self))));
    self->vars[74] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0make__list, self))));
    self->vars[75] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0map, self))));
    self->vars[76] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0for__each, self))));
    self->vars[77] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0fold__right, self))));
    self->vars[78] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0append, self))));
    self->vars[79] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0reverse, self))));
    self->vars[80] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0memq, self))));
    self->vars[81] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0memv, self))));
    self->vars[82] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0member, self))));
    self->vars[83] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0assq, self))));
    self->vars[84] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0assv, self))));
    self->vars[85] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0assoc, self))));
    self->vars[86] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0num__pairs, self))));
    self->vars[87] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0split__at__right, self))));
    self->vars[88] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0list___Gstring, self))));
    self->vars[89] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0string___Glist, self))));
    self->vars[90] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0string__append, self))));
    self->vars[91] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0f32vector___Glist, self))));
    self->vars[92] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0f64vector___Glist, self))));
    self->vars[93] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0s32vector___Glist, self))));
    self->vars[94] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0u16vector___Glist, self))));
    self->vars[95] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0s16vector___Glist, self))));
    self->vars[96] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0u8vector___Glist, self))));
    self->vars[97] = VEncodeBool(false);
    self->vars[98] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0read__u8vector, self))));
    self->vars[99] = VEncodeBool(false);
    self->vars[100] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0s8vector___Glist, self))));
    self->vars[101] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0typevector_Q, self))));
    self->vars[102] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector___Glist, self))));
    self->vars[103] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__for__each, self))));
    self->vars[104] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__map, self))));
    self->vars[105] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__copy, self))));
    self->vars[106] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__copy_B, self))));
    self->vars[107] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__append, self))));
    self->vars[108] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0vector__fill_B, self))));
    self->vars[109] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0make__hash__table, self))));
    self->vars[110] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0hash__table__ref, self))));
    self->vars[111] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0hash__table__set_B, self))));
    self->vars[112] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0hash__table___Galist, self))));
    self->vars[113] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0number___Gstring, self))));
    self->vars[114] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0char__numeric_Q, self))));
    self->vars[115] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0char__alphabetic_Q, self))));
    self->vars[116] = VEncodeBool(false);
    self->vars[117] = VEncodeBool(false);
    self->vars[118] = VEncodeBool(false);
    self->vars[119] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0try__or__gc, self))));
    self->vars[120] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0close__port, self))));
    self->vars[121] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__input__file__impl, self))));
    self->vars[122] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__output__file__impl, self))));
    self->vars[123] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__output__string__impl, self))));
    self->vars[124] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__input__file, self))));
    self->vars[125] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__output__file, self))));
    self->vars[126] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0open__output__string, self))));
    self->vars[127] = _V40_V10vcore_Dget__output__string;
    self->vars[128] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0call__with__port, self))));
    self->vars[129] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0call__with__input__file, self))));
    self->vars[130] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0call__with__output__file, self))));
    self->vars[131] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0with__output__to__file, self))));
    self->vars[132] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0with__input__from__file, self))));
    self->vars[133] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0read__char, self))));
    self->vars[134] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0read__line, self))));
    self->vars[135] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0read, self))));
    self->vars[136] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0newline, self))));
    self->vars[137] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout__list, self))));
    self->vars[138] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout__quotation, self))));
    self->vars[139] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printout, self))));
    self->vars[140] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0display, self))));
    self->vars[141] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0write, self))));
    self->vars[142] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0values, self))));
    self->vars[143] = statics->up->vars[0];
    self->vars[144] = statics->vars[0];
    self->vars[145] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0make__parameter, self))));
    self->vars[146] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0file__exists_Q, self))));
    self->vars[147] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0bitwise__and, self))));
    self->vars[148] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0bitwise__ior, self))));
    self->vars[149] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0bitwise__xor, self))));
    self->vars[150] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0bitwise__xnor, self))));
    self->vars[151] = VEncodeBool(false);
    self->vars[152] = VEncodeBool(false);
    self->vars[153] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0atom_Q, self))));
    self->vars[154] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0displayln, self))));
    self->vars[155] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0writeln, self))));
    self->vars[156] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__printf, self))));
    self->vars[157] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format__sprintf, self))));
    self->vars[158] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0printf, self))));
    self->vars[159] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0sprintf, self))));
    self->vars[160] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0format, self))));
    self->vars[161] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0raise__continuable, self))));
    self->vars[162] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0with__exception__handler, self))));
    self->vars[163] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0error, self))));
    self->vars[164] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0fiber__fork, self))));
    self->vars[165] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0core_V0fiber__map, self))));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k274, self)))),
      VEncodeInt(0l), VEncodeInt(13l),
      self->vars[12]
    );
    }
}
static void _V0vanity_V0core_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.11 1 0) (close _V0vanity_V0core_V20_V0k4) '##vcore.mutator)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k4, self)))),
      _V10vcore_Dmutator);
}
static void _V0vanity_V0core_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.11 0 0) (close _V0vanity_V0core_V20_V0k3) '##vcore.setter)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k3, self)))),
      _V10vcore_Dsetter);
}
static void _V0vanity_V0core_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0core_V20_V0k2) (##string ##.string.3007) (bruijn ##.x.2656 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D3007.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0core_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0core_V20_V0k1) (##string ##.string.3008))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0core_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D3008.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0core_V20 = (VFunc)_V0vanity_V0core_V20_V0lambda1;
