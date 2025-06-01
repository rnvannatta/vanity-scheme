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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D3097 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0seed_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D3096 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
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
VWEAK VWORD _V0_G_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_G_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, ">=" };
VWEAK VWORD _V0_L_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "<=" };
VWEAK VWORD _V0_G;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, ">" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
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
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D3095 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "printf: unknown format" };
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D3094 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "printf: not enough args for format string" };
static struct { VBlob sym; char bytes[41]; } _V10_Dstring_D3093 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "printf: format string has trailing tilde" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D3092 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "parameter object expects zero arguments" };
VWEAK VWORD _V0parameter;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0parameter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "parameter" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D3091 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "#hash" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D3090 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "#hasheqv" };
VWEAK VWORD _V40_V10vcore_Deqv_Q;VWEAK VClosure _VW_V40_V10vcore_Deqv_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEqv, NULL };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D3089 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "#hasheq" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D3088 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "#(" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D3087 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ",@" };
VWEAK VWORD _V0unquote__splicing;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0unquote__splicing = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "unquote-splicing" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D3086 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "," };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D3085 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "`" };
VWEAK VWORD _V0quasiquote;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quasiquote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D3084 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "'" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D3083 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D3082 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " . " };
VWEAK VWORD _V0ok;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0ok = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "ok" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D3081 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D3080 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "(" };
VWEAK VWORD _V10vcore_Dpush__value;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dpush__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.push-value" };
VWEAK VWORD _V10vcore_Dpop__value;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dpop__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.pop-value" };
VWEAK VWORD _V40_V10vcore_Dget__output__string;VWEAK VClosure _VW_V40_V10vcore_Dget__output__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetOutputString2, NULL };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D3079 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "open-output-string: failed" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D3078 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "open-output-file: failed" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D3077 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "open-input-file: failed" };
VWEAK VWORD _V40_V10vcore_Dclose__stream;VWEAK VClosure _VW_V40_V10vcore_Dclose__stream = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCloseStream2, NULL };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D3076 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "~A" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D3075 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "No such key in hash table" };
VWEAK VWORD _V40_V10vcore_Deq_Q;VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V40_V10vcore_D_P;VWEAK VClosure _VW_V40_V10vcore_D_P = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAdd2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__length;VWEAK VClosure _VW_V40_V10vcore_Dvector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorLength2, NULL };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D3074 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
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
  _V0_G_E = VEncodePointer(VLookupConstant("_V0_G_E", &_VW_V0_G_E), VPOINTER_OTHER);
  _V0_L_E = VEncodePointer(VLookupConstant("_V0_L_E", &_VW_V0_L_E), VPOINTER_OTHER);
  _V0_G = VEncodePointer(VLookupConstant("_V0_G", &_VW_V0_G), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
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
static void _V10_Dboolean_Q_D139_k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dboolean_Q_D139_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1036 0 0) ((bruijn ##.k.1035 1 0) (bruijn ##.p.1036 0 0)) ((bruijn ##.k.1035 1 0) (##inline ##vcore.eq? (bruijn ##.x.328 1 1) #f)))
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
static void _V10_Dboolean_Q_D139_lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dboolean_Q_D139_lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dboolean_Q_D139_k5) (##inline ##vcore.eq? (bruijn ##.x.328 0 1) #t))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dboolean_Q_D139_k5, .env = self }, }, 1,
      VInlineEq2(runtime,
        _var1,
        VEncodeBool(true)));
}
static void _V10_Dsymbol_E_Q_D140_k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsymbol_E_Q_D140_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1039 0 0) (##vcore.symbol=? (bruijn ##.k.1038 1 0) (bruijn ##.y.332 1 2) (bruijn ##.z.333 1 3)) ((bruijn ##.k.1038 1 0) #f))
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
static void _V10_Dsymbol_E_Q_D140_k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsymbol_E_Q_D140_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1042 0 0) (##vcore.symbol=? (bruijn ##.k.1040 2 0) (bruijn ##.z.336 2 3) (bruijn ##.w.337 2 4)) ((bruijn ##.k.1040 2 0) #f))
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
static void _V10_Dsymbol_E_Q_D140_k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsymbol_E_Q_D140_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1041 0 0) (##vcore.symbol=? (close _V10_Dsymbol_E_Q_D140_k8) (bruijn ##.y.335 1 2) (bruijn ##.z.336 1 3)) ((bruijn ##.k.1040 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSymbolEqv2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsymbol_E_Q_D140_k8, self)})),
      statics->vars[2],
      statics->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D341_k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D341_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.1048 0 0)) ((bruijn ##.k.1044 1 0) #f) ((bruijn ##.loop.341 2 0) (bruijn ##.k.1044 1 0) (##inline ##vcore.cdr (bruijn ##.xs.342 1 1))))
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
static void _V10_Dloop_D341_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D341_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.xs.342 0 1)) ((bruijn ##.k.1044 0 0) #t) (##vcore.symbol=? (close _V10_Dloop_D341_k9) (bruijn ##.x.338 2 1) (##inline ##vcore.car (bruijn ##.xs.342 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
    VCallFuncWithGC(runtime, (VFunc)VSymbolEqv2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D341_k9, self)})),
      statics->up->vars[1],
      VInlineCar2(runtime,
        _var1));
}
}
__attribute__((used)) static void _V20CaseError__V10_Dsymbol_E_Q_D140_lambda3(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dsymbol_E_Q_D140_lambda3 #t (3 (##vcore.symbol=? (bruijn ##.k.1037 0 0) (bruijn ##.x.329 0 1) (bruijn ##.y.330 0 2))) (4 (##vcore.symbol=? (close _V10_Dsymbol_E_Q_D140_k6) (bruijn ##.x.331 0 1) (bruijn ##.y.332 0 2))) (5 (##vcore.symbol=? (close _V10_Dsymbol_E_Q_D140_k7) (bruijn ##.x.334 0 1) (bruijn ##.y.335 0 2))) (3 + (letrec 1 ((close _V10_Dloop_D341_lambda4)) ((bruijn ##.loop.341 0 0) (bruijn ##.k.1043 1 0) (##inline ##vcore.cons (bruijn ##.y.339 1 2) (bruijn ##.xs.340 1 3))))))
 VErrorC(runtime, "Not enough arguments to _V10_Dsymbol_E_Q_D140_lambda3, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dsymbol_E_Q_D140_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.symbol=? (bruijn ##.k.1037 0 0) (bruijn ##.x.329 0 1) (bruijn ##.y.330 0 2))
    VCallFuncWithGC(runtime, (VFunc)VSymbolEqv2, 3,
      _var0,
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case1__V10_Dsymbol_E_Q_D140_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##vcore.symbol=? (close _V10_Dsymbol_E_Q_D140_k6) (bruijn ##.x.331 0 1) (bruijn ##.y.332 0 2))
    VCallFuncWithGC(runtime, (VFunc)VSymbolEqv2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsymbol_E_Q_D140_k6, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case2__V10_Dsymbol_E_Q_D140_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##vcore.symbol=? (close _V10_Dsymbol_E_Q_D140_k7) (bruijn ##.x.334 0 1) (bruijn ##.y.335 0 2))
    VCallFuncWithGC(runtime, (VFunc)VSymbolEqv2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsymbol_E_Q_D140_k7, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V10_Dsymbol_E_Q_D140_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D341_lambda4)) ((bruijn ##.loop.341 0 0) (bruijn ##.k.1043 1 0) (##inline ##vcore.cons (bruijn ##.y.339 1 2) (bruijn ##.xs.340 1 3))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D341_lambda4, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      VInlineCons2(runtime,
        statics->vars[2],
        statics->vars[3]));
    }
}
void _V10_Dsymbol_E_Q_D140_lambda3(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dsymbol_E_Q_D140_lambda3, @function\n"
#endif
"_V10_Dsymbol_E_Q_D140_lambda3:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dsymbol_E_Q_D140_lambda3\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dsymbol_E_Q_D140_lambda3\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dsymbol_E_Q_D140_lambda3\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case3__V10_Dsymbol_E_Q_D140_lambda3\n"
"    jmp _V20CaseError__V10_Dsymbol_E_Q_D140_lambda3\n"
);
static void _V10_Dloop_D345_k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D345_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1055 0 0) (basic-block 1 1 (##.reg.2798) ((##vcore.+ (bruijn ##.i.346 4 1) 1)) ((bruijn ##.loop.345 5 0) (bruijn ##.k.1053 4 0) (bruijn ##.reg.2798 0 0) (bruijn ##.len.347 4 2))) ((bruijn ##.k.1053 3 0) #f))
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
static void _V10_Dloop_D345_k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D345_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1054 0 0) ((bruijn ##.k.1053 1 0) #t) (basic-block 2 2 (##.reg.2796 ##.reg.2797) ((##vcore.vector-ref (bruijn ##.x.343 6 1) (bruijn ##.i.346 2 1)) (##vcore.vector-ref (bruijn ##.y.344 6 2) (bruijn ##.i.346 2 1))) ((bruijn ##.equal?.150 7 11) (close _V10_Dloop_D345_k12) (bruijn ##.reg.2796 0 0) (bruijn ##.reg.2797 0 1))))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D345_k12, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
}
static void _V10_Dloop_D345_lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D345_lambda6, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.=.152 5 13) (close _V10_Dloop_D345_k11) (bruijn ##.i.346 0 1) (bruijn ##.len.347 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 13)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D345_k11, self)})),
      _var1,
      _var2);
}
static void _V10_Dvector_E_Q_D141_k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector_E_Q_D141_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1060 0 0)) ((bruijn ##.k.1051 2 0) #f) (letrec 1 ((close _V10_Dloop_D345_lambda6)) (basic-block 1 1 (##.reg.2799) ((##vcore.vector-length (bruijn ##.x.343 4 1))) ((bruijn ##.loop.345 1 0) (bruijn ##.k.1051 4 0) 0 (bruijn ##.reg.2799 0 0)))))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D345_lambda6, self)}));
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
static void _V10_Dvector_E_Q_D141_lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector_E_Q_D141_lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.2794 ##.reg.2795) ((##vcore.vector-length (bruijn ##.x.343 1 1)) (##vcore.vector-length (bruijn ##.y.344 1 2))) ((bruijn ##.=.152 2 13) (close _V10_Dvector_E_Q_D141_k10) (bruijn ##.reg.2794 0 0) (bruijn ##.reg.2795 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector_E_Q_D141_k10, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Dloop_D350_k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D350_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1066 0 0) ((bruijn ##.k.1065 1 0) #t) (basic-block 2 2 (##.reg.2802 ##.reg.2803) ((##vcore.f32vector-ref (bruijn ##.x.348 6 1) (bruijn ##.i.351 2 1)) (##vcore.f32vector-ref (bruijn ##.y.349 6 2) (bruijn ##.i.351 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2802 0 0) (bruijn ##.reg.2803 0 1)) (basic-block 1 1 (##.reg.2804) ((##vcore.+ (bruijn ##.i.351 3 1) 1)) ((bruijn ##.loop.350 4 0) (bruijn ##.k.1065 3 0) (bruijn ##.reg.2804 0 0) (bruijn ##.len.352 3 2))) ((bruijn ##.k.1065 2 0) #f))))
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
static void _V10_Dloop_D350_lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D350_lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.=.152 5 13) (close _V10_Dloop_D350_k14) (bruijn ##.i.351 0 1) (bruijn ##.len.352 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 13)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D350_k14, self)})),
      _var1,
      _var2);
}
static void _V10_Df32vector_E_Q_D142_k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Df32vector_E_Q_D142_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1072 0 0)) ((bruijn ##.k.1063 2 0) #f) (letrec 1 ((close _V10_Dloop_D350_lambda8)) (basic-block 1 1 (##.reg.2805) ((##vcore.f32vector-length (bruijn ##.x.348 4 1))) ((bruijn ##.loop.350 1 0) (bruijn ##.k.1063 4 0) 0 (bruijn ##.reg.2805 0 0)))))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D350_lambda8, self)}));
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
static void _V10_Df32vector_E_Q_D142_lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Df32vector_E_Q_D142_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.2800 ##.reg.2801) ((##vcore.f32vector-length (bruijn ##.x.348 1 1)) (##vcore.f32vector-length (bruijn ##.y.349 1 2))) ((bruijn ##.=.152 2 13) (close _V10_Df32vector_E_Q_D142_k13) (bruijn ##.reg.2800 0 0) (bruijn ##.reg.2801 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VF32VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VF32VectorLength(runtime, NULL,
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Df32vector_E_Q_D142_k13, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Dloop_D355_k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D355_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1078 0 0) ((bruijn ##.k.1077 1 0) #t) (basic-block 2 2 (##.reg.2808 ##.reg.2809) ((##vcore.f64vector-ref (bruijn ##.x.353 6 1) (bruijn ##.i.356 2 1)) (##vcore.f64vector-ref (bruijn ##.y.354 6 2) (bruijn ##.i.356 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2808 0 0) (bruijn ##.reg.2809 0 1)) (basic-block 1 1 (##.reg.2810) ((##vcore.+ (bruijn ##.i.356 3 1) 1)) ((bruijn ##.loop.355 4 0) (bruijn ##.k.1077 3 0) (bruijn ##.reg.2810 0 0) (bruijn ##.len.357 3 2))) ((bruijn ##.k.1077 2 0) #f))))
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
static void _V10_Dloop_D355_lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D355_lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.=.152 5 13) (close _V10_Dloop_D355_k16) (bruijn ##.i.356 0 1) (bruijn ##.len.357 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 13)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D355_k16, self)})),
      _var1,
      _var2);
}
static void _V10_Df64vector_E_Q_D143_k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Df64vector_E_Q_D143_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1084 0 0)) ((bruijn ##.k.1075 2 0) #f) (letrec 1 ((close _V10_Dloop_D355_lambda10)) (basic-block 1 1 (##.reg.2811) ((##vcore.f64vector-length (bruijn ##.x.353 4 1))) ((bruijn ##.loop.355 1 0) (bruijn ##.k.1075 4 0) 0 (bruijn ##.reg.2811 0 0)))))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D355_lambda10, self)}));
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
static void _V10_Df64vector_E_Q_D143_lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Df64vector_E_Q_D143_lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.2806 ##.reg.2807) ((##vcore.f64vector-length (bruijn ##.x.353 1 1)) (##vcore.f64vector-length (bruijn ##.y.354 1 2))) ((bruijn ##.=.152 2 13) (close _V10_Df64vector_E_Q_D143_k15) (bruijn ##.reg.2806 0 0) (bruijn ##.reg.2807 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VF64VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VF64VectorLength(runtime, NULL,
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Df64vector_E_Q_D143_k15, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Dloop_D360_k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D360_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1090 0 0) ((bruijn ##.k.1089 1 0) #t) (basic-block 2 2 (##.reg.2814 ##.reg.2815) ((##vcore.s32vector-ref (bruijn ##.x.358 6 1) (bruijn ##.i.361 2 1)) (##vcore.s32vector-ref (bruijn ##.y.359 6 2) (bruijn ##.i.361 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2814 0 0) (bruijn ##.reg.2815 0 1)) (basic-block 1 1 (##.reg.2816) ((##vcore.+ (bruijn ##.i.361 3 1) 1)) ((bruijn ##.loop.360 4 0) (bruijn ##.k.1089 3 0) (bruijn ##.reg.2816 0 0) (bruijn ##.len.362 3 2))) ((bruijn ##.k.1089 2 0) #f))))
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
static void _V10_Dloop_D360_lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D360_lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.=.152 5 13) (close _V10_Dloop_D360_k18) (bruijn ##.i.361 0 1) (bruijn ##.len.362 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 13)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D360_k18, self)})),
      _var1,
      _var2);
}
static void _V10_Ds32vector_E_Q_D144_k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds32vector_E_Q_D144_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1096 0 0)) ((bruijn ##.k.1087 2 0) #f) (letrec 1 ((close _V10_Dloop_D360_lambda12)) (basic-block 1 1 (##.reg.2817) ((##vcore.s32vector-length (bruijn ##.x.358 4 1))) ((bruijn ##.loop.360 1 0) (bruijn ##.k.1087 4 0) 0 (bruijn ##.reg.2817 0 0)))))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D360_lambda12, self)}));
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
static void _V10_Ds32vector_E_Q_D144_lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds32vector_E_Q_D144_lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.2812 ##.reg.2813) ((##vcore.s32vector-length (bruijn ##.x.358 1 1)) (##vcore.s32vector-length (bruijn ##.y.359 1 2))) ((bruijn ##.=.152 2 13) (close _V10_Ds32vector_E_Q_D144_k17) (bruijn ##.reg.2812 0 0) (bruijn ##.reg.2813 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VS32VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VS32VectorLength(runtime, NULL,
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds32vector_E_Q_D144_k17, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Dloop_D365_k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D365_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1102 0 0) ((bruijn ##.k.1101 1 0) #t) (basic-block 2 2 (##.reg.2820 ##.reg.2821) ((##vcore.u16vector-ref (bruijn ##.x.363 6 1) (bruijn ##.i.366 2 1)) (##vcore.u16vector-ref (bruijn ##.y.364 6 2) (bruijn ##.i.366 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2820 0 0) (bruijn ##.reg.2821 0 1)) (basic-block 1 1 (##.reg.2822) ((##vcore.+ (bruijn ##.i.366 3 1) 1)) ((bruijn ##.loop.365 4 0) (bruijn ##.k.1101 3 0) (bruijn ##.reg.2822 0 0) (bruijn ##.len.367 3 2))) ((bruijn ##.k.1101 2 0) #f))))
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
static void _V10_Dloop_D365_lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D365_lambda14, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.=.152 5 13) (close _V10_Dloop_D365_k20) (bruijn ##.i.366 0 1) (bruijn ##.len.367 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 13)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D365_k20, self)})),
      _var1,
      _var2);
}
static void _V10_Du16vector_E_Q_D145_k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du16vector_E_Q_D145_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1108 0 0)) ((bruijn ##.k.1099 2 0) #f) (letrec 1 ((close _V10_Dloop_D365_lambda14)) (basic-block 1 1 (##.reg.2823) ((##vcore.u16vector-length (bruijn ##.x.363 4 1))) ((bruijn ##.loop.365 1 0) (bruijn ##.k.1099 4 0) 0 (bruijn ##.reg.2823 0 0)))))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D365_lambda14, self)}));
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
static void _V10_Du16vector_E_Q_D145_lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Du16vector_E_Q_D145_lambda13, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.2818 ##.reg.2819) ((##vcore.u16vector-length (bruijn ##.x.363 1 1)) (##vcore.u16vector-length (bruijn ##.y.364 1 2))) ((bruijn ##.=.152 2 13) (close _V10_Du16vector_E_Q_D145_k19) (bruijn ##.reg.2818 0 0) (bruijn ##.reg.2819 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VU16VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VU16VectorLength(runtime, NULL,
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Du16vector_E_Q_D145_k19, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Dloop_D370_k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D370_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1114 0 0) ((bruijn ##.k.1113 1 0) #t) (basic-block 2 2 (##.reg.2826 ##.reg.2827) ((##vcore.s16vector-ref (bruijn ##.x.368 6 1) (bruijn ##.i.371 2 1)) (##vcore.s16vector-ref (bruijn ##.y.369 6 2) (bruijn ##.i.371 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2826 0 0) (bruijn ##.reg.2827 0 1)) (basic-block 1 1 (##.reg.2828) ((##vcore.+ (bruijn ##.i.371 3 1) 1)) ((bruijn ##.loop.370 4 0) (bruijn ##.k.1113 3 0) (bruijn ##.reg.2828 0 0) (bruijn ##.len.372 3 2))) ((bruijn ##.k.1113 2 0) #f))))
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
static void _V10_Dloop_D370_lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D370_lambda16, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.=.152 5 13) (close _V10_Dloop_D370_k22) (bruijn ##.i.371 0 1) (bruijn ##.len.372 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 13)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D370_k22, self)})),
      _var1,
      _var2);
}
static void _V10_Ds16vector_E_Q_D146_k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds16vector_E_Q_D146_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1120 0 0)) ((bruijn ##.k.1111 2 0) #f) (letrec 1 ((close _V10_Dloop_D370_lambda16)) (basic-block 1 1 (##.reg.2829) ((##vcore.s16vector-length (bruijn ##.x.368 4 1))) ((bruijn ##.loop.370 1 0) (bruijn ##.k.1111 4 0) 0 (bruijn ##.reg.2829 0 0)))))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D370_lambda16, self)}));
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
static void _V10_Ds16vector_E_Q_D146_lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds16vector_E_Q_D146_lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.2824 ##.reg.2825) ((##vcore.s16vector-length (bruijn ##.x.368 1 1)) (##vcore.s16vector-length (bruijn ##.y.369 1 2))) ((bruijn ##.=.152 2 13) (close _V10_Ds16vector_E_Q_D146_k21) (bruijn ##.reg.2824 0 0) (bruijn ##.reg.2825 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VS16VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VS16VectorLength(runtime, NULL,
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds16vector_E_Q_D146_k21, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Dloop_D375_k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1126 0 0) ((bruijn ##.k.1125 1 0) #t) (basic-block 2 2 (##.reg.2832 ##.reg.2833) ((##vcore.u8vector-ref (bruijn ##.x.373 6 1) (bruijn ##.i.376 2 1)) (##vcore.u8vector-ref (bruijn ##.y.374 6 2) (bruijn ##.i.376 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2832 0 0) (bruijn ##.reg.2833 0 1)) (basic-block 1 1 (##.reg.2834) ((##vcore.+ (bruijn ##.i.376 3 1) 1)) ((bruijn ##.loop.375 4 0) (bruijn ##.k.1125 3 0) (bruijn ##.reg.2834 0 0) (bruijn ##.len.377 3 2))) ((bruijn ##.k.1125 2 0) #f))))
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
static void _V10_Dloop_D375_lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_lambda18, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.=.152 5 13) (close _V10_Dloop_D375_k24) (bruijn ##.i.376 0 1) (bruijn ##.len.377 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 13)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k24, self)})),
      _var1,
      _var2);
}
static void _V10_Du8vector_E_Q_D147_k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector_E_Q_D147_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1132 0 0)) ((bruijn ##.k.1123 2 0) #f) (letrec 1 ((close _V10_Dloop_D375_lambda18)) (basic-block 1 1 (##.reg.2835) ((##vcore.u8vector-length (bruijn ##.x.373 4 1))) ((bruijn ##.loop.375 1 0) (bruijn ##.k.1123 4 0) 0 (bruijn ##.reg.2835 0 0)))))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_lambda18, self)}));
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
static void _V10_Du8vector_E_Q_D147_lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector_E_Q_D147_lambda17, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.2830 ##.reg.2831) ((##vcore.u8vector-length (bruijn ##.x.373 1 1)) (##vcore.u8vector-length (bruijn ##.y.374 1 2))) ((bruijn ##.=.152 2 13) (close _V10_Du8vector_E_Q_D147_k23) (bruijn ##.reg.2830 0 0) (bruijn ##.reg.2831 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VU8VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VU8VectorLength(runtime, NULL,
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Du8vector_E_Q_D147_k23, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Dloop_D380_k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D380_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1138 0 0) ((bruijn ##.k.1137 1 0) #t) (basic-block 2 2 (##.reg.2838 ##.reg.2839) ((##vcore.s8vector-ref (bruijn ##.x.378 6 1) (bruijn ##.i.381 2 1)) (##vcore.s8vector-ref (bruijn ##.y.379 6 2) (bruijn ##.i.381 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.2838 0 0) (bruijn ##.reg.2839 0 1)) (basic-block 1 1 (##.reg.2840) ((##vcore.+ (bruijn ##.i.381 3 1) 1)) ((bruijn ##.loop.380 4 0) (bruijn ##.k.1137 3 0) (bruijn ##.reg.2840 0 0) (bruijn ##.len.382 3 2))) ((bruijn ##.k.1137 2 0) #f))))
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
static void _V10_Dloop_D380_lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D380_lambda20, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.=.152 5 13) (close _V10_Dloop_D380_k26) (bruijn ##.i.381 0 1) (bruijn ##.len.382 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 13)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D380_k26, self)})),
      _var1,
      _var2);
}
static void _V10_Ds8vector_E_Q_D148_k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds8vector_E_Q_D148_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1144 0 0)) ((bruijn ##.k.1135 2 0) #f) (letrec 1 ((close _V10_Dloop_D380_lambda20)) (basic-block 1 1 (##.reg.2841) ((##vcore.s8vector-length (bruijn ##.x.378 4 1))) ((bruijn ##.loop.380 1 0) (bruijn ##.k.1135 4 0) 0 (bruijn ##.reg.2841 0 0)))))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D380_lambda20, self)}));
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
static void _V10_Ds8vector_E_Q_D148_lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds8vector_E_Q_D148_lambda19, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.2836 ##.reg.2837) ((##vcore.s8vector-length (bruijn ##.x.378 1 1)) (##vcore.s8vector-length (bruijn ##.y.379 1 2))) ((bruijn ##.=.152 2 13) (close _V10_Ds8vector_E_Q_D148_k25) (bruijn ##.reg.2836 0 0) (bruijn ##.reg.2837 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VS8VectorLength(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VS8VectorLength(runtime, NULL,
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds8vector_E_Q_D148_k25, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Drecord_E_Q_D149_k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecord_E_Q_D149_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1157 1 0) (basic-block 2 2 (##.reg.2848 ##.reg.2849) ((##vcore.record-ref (bruijn ##.x.383 4 1) 0) (##vcore.record-ref (bruijn ##.y.384 4 2) 0)) (##vcore.eqv? (bruijn ##.k.1158 1 0) (bruijn ##.reg.2848 0 0) (bruijn ##.reg.2849 0 1))) ((bruijn ##.k.1158 0 0) #f))
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
static void _V10_Dloop_D385_k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D385_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1151 0 0) (basic-block 1 1 (##.reg.2846) ((##vcore.+ (bruijn ##.i.386 4 1) 1)) ((bruijn ##.loop.385 5 0) (bruijn ##.k.1149 4 0) (bruijn ##.reg.2846 0 0) (bruijn ##.len.387 4 2))) ((bruijn ##.k.1149 3 0) #f))
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
static void _V10_Dloop_D385_k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D385_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1150 0 0) ((bruijn ##.k.1149 1 0) #t) (basic-block 2 2 (##.reg.2844 ##.reg.2845) ((##vcore.record-ref (bruijn ##.x.383 7 1) (bruijn ##.i.386 2 1)) (##vcore.record-ref (bruijn ##.y.384 7 2) (bruijn ##.i.386 2 1))) ((bruijn ##.equal?.150 8 11) (close _V10_Dloop_D385_k31) (bruijn ##.reg.2844 0 0) (bruijn ##.reg.2845 0 1))))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D385_k31, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
}
static void _V10_Dloop_D385_lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D385_lambda22, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.=.152 6 13) (close _V10_Dloop_D385_k30) (bruijn ##.i.386 0 1) (bruijn ##.len.387 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 13)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D385_k30, self)})),
      _var1,
      _var2);
}
static void _V10_Drecord_E_Q_D149_k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecord_E_Q_D149_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1156 0 0)) ((bruijn ##.k.1147 3 0) #f) (letrec 1 ((close _V10_Dloop_D385_lambda22)) (basic-block 1 1 (##.reg.2847) ((##vcore.record-length (bruijn ##.x.383 5 1))) ((bruijn ##.loop.385 1 0) (bruijn ##.k.1147 5 0) 1 (bruijn ##.reg.2847 0 0)))))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D385_lambda22, self)}));
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
static void _V10_Drecord_E_Q_D149_k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecord_E_Q_D149_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Drecord_E_Q_D149_k28) (close _V10_Drecord_E_Q_D149_k29))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Drecord_E_Q_D149_k28, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Drecord_E_Q_D149_k29, self)})));
}
static void _V10_Drecord_E_Q_D149_lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecord_E_Q_D149_lambda21, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.2842 ##.reg.2843) ((##vcore.record-length (bruijn ##.x.383 1 1)) (##vcore.record-length (bruijn ##.y.384 1 2))) ((bruijn ##.=.152 2 13) (close _V10_Drecord_E_Q_D149_k27) (bruijn ##.reg.2842 0 0) (bruijn ##.reg.2843 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VRecordLength2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VRecordLength2(runtime, NULL,
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Drecord_E_Q_D149_k27, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Dequal_Q_D150_k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2850 1 0) (basic-block 1 1 (##.reg.2869) ((##vcore.blob? (bruijn ##.y.389 4 2))) (if (bruijn ##.reg.2869 0 0) (##vcore.blob=? (bruijn ##.k.1210 1 0) (bruijn ##.x.388 4 1) (bruijn ##.y.389 4 2)) ((bruijn ##.k.1210 1 0) #f))) ((bruijn ##.k.1210 0 0) #f))
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
static void _V10_Dequal_Q_D150_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1204 0 0) ((bruijn ##.equal?.150 6 11) (bruijn ##.k.1202 1 0) (##inline ##vcore.cdr (bruijn ##.x.388 5 1)) (##inline ##vcore.cdr (bruijn ##.y.389 5 2))) ((bruijn ##.k.1202 1 0) #f))
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
static void _V10_Dequal_Q_D150_k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.388 4 1)) (if (##inline ##vcore.pair? (bruijn ##.y.389 4 2)) ((bruijn ##.equal?.150 5 11) (close _V10_Dequal_Q_D150_k36) (##inline ##vcore.car (bruijn ##.x.388 4 1)) (##inline ##vcore.car (bruijn ##.y.389 4 2))) ((bruijn ##.k.1202 0 0) #f)) ((bruijn ##.k.1202 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D150_k36, self)})),
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
static void _V10_Dequal_Q_D150_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2851 1 0) (basic-block 1 1 (##.reg.2868) ((##vcore.vector? (bruijn ##.y.389 7 2))) (if (bruijn ##.reg.2868 0 0) ((bruijn ##.vector=?.141 8 2) (bruijn ##.k.1199 1 0) (bruijn ##.x.388 7 1) (bruijn ##.y.389 7 2)) ((bruijn ##.k.1199 1 0) #f))) ((bruijn ##.k.1199 0 0) #f))
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
static void _V10_Dequal_Q_D150_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2852 1 0) (basic-block 1 1 (##.reg.2867) ((##vcore.f32vector? (bruijn ##.y.389 9 2))) (if (bruijn ##.reg.2867 0 0) ((bruijn ##.f32vector=?.142 10 3) (bruijn ##.k.1196 1 0) (bruijn ##.x.388 9 1) (bruijn ##.y.389 9 2)) ((bruijn ##.k.1196 1 0) #f))) ((bruijn ##.k.1196 0 0) #f))
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
static void _V10_Dequal_Q_D150_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2853 1 0) (basic-block 1 1 (##.reg.2866) ((##vcore.f64vector? (bruijn ##.y.389 11 2))) (if (bruijn ##.reg.2866 0 0) ((bruijn ##.f64vector=?.143 12 4) (bruijn ##.k.1193 1 0) (bruijn ##.x.388 11 1) (bruijn ##.y.389 11 2)) ((bruijn ##.k.1193 1 0) #f))) ((bruijn ##.k.1193 0 0) #f))
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
static void _V10_Dequal_Q_D150_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2854 1 0) (basic-block 1 1 (##.reg.2865) ((##vcore.s32vector? (bruijn ##.y.389 13 2))) (if (bruijn ##.reg.2865 0 0) ((bruijn ##.s32vector=?.144 14 5) (bruijn ##.k.1190 1 0) (bruijn ##.x.388 13 1) (bruijn ##.y.389 13 2)) ((bruijn ##.k.1190 1 0) #f))) ((bruijn ##.k.1190 0 0) #f))
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
static void _V10_Dequal_Q_D150_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2855 1 0) (basic-block 1 1 (##.reg.2864) ((##vcore.u16vector? (bruijn ##.y.389 15 2))) (if (bruijn ##.reg.2864 0 0) ((bruijn ##.u16vector=?.145 16 6) (bruijn ##.k.1187 1 0) (bruijn ##.x.388 15 1) (bruijn ##.y.389 15 2)) ((bruijn ##.k.1187 1 0) #f))) ((bruijn ##.k.1187 0 0) #f))
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
static void _V10_Dequal_Q_D150_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2856 1 0) (basic-block 1 1 (##.reg.2863) ((##vcore.s16vector? (bruijn ##.y.389 17 2))) (if (bruijn ##.reg.2863 0 0) ((bruijn ##.s16vector=?.146 18 7) (bruijn ##.k.1184 1 0) (bruijn ##.x.388 17 1) (bruijn ##.y.389 17 2)) ((bruijn ##.k.1184 1 0) #f))) ((bruijn ##.k.1184 0 0) #f))
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
static void _V10_Dequal_Q_D150_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2857 1 0) (basic-block 1 1 (##.reg.2862) ((##vcore.u8vector? (bruijn ##.y.389 19 2))) (if (bruijn ##.reg.2862 0 0) ((bruijn ##.u8vector=?.147 20 8) (bruijn ##.k.1181 1 0) (bruijn ##.x.388 19 1) (bruijn ##.y.389 19 2)) ((bruijn ##.k.1181 1 0) #f))) ((bruijn ##.k.1181 0 0) #f))
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
static void _V10_Dequal_Q_D150_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.2858 1 0) (basic-block 1 1 (##.reg.2861) ((##vcore.s8vector? (bruijn ##.y.389 21 2))) (if (bruijn ##.reg.2861 0 0) ((bruijn ##.s8vector=?.148 22 9) (bruijn ##.k.1178 1 0) (bruijn ##.x.388 21 1) (bruijn ##.y.389 21 2)) ((bruijn ##.k.1178 1 0) #f))) ((bruijn ##.k.1178 0 0) #f))
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
static void _V10_Dequal_Q_D150_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1174 0 0) ((bruijn ##.k.1163 20 0) (bruijn ##.p.1174 0 0)) (basic-block 1 1 (##.reg.2859) ((##vcore.record? (bruijn ##.x.388 21 1))) (if (bruijn ##.reg.2859 0 0) (basic-block 1 1 (##.reg.2860) ((##vcore.record? (bruijn ##.y.389 22 2))) (if (bruijn ##.reg.2860 0 0) ((bruijn ##.record=?.149 23 10) (bruijn ##.k.1163 22 0) (bruijn ##.x.388 22 1) (bruijn ##.y.389 22 2)) ((bruijn ##.k.1163 22 0) #f))) ((bruijn ##.k.1163 21 0) #f))))
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
static void _V10_Dequal_Q_D150_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1173 0 0) ((bruijn ##.k.1163 18 0) (bruijn ##.p.1173 0 0)) (basic-block 1 1 (##.reg.2858) ((##vcore.s8vector? (bruijn ##.x.388 19 1))) ((close _V10_Dequal_Q_D150_k52) (close _V10_Dequal_Q_D150_k53))))
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
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D150_k52, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D150_k53, self)})));
    }
}
}
static void _V10_Dequal_Q_D150_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1172 0 0) ((bruijn ##.k.1163 16 0) (bruijn ##.p.1172 0 0)) (basic-block 1 1 (##.reg.2857) ((##vcore.u8vector? (bruijn ##.x.388 17 1))) ((close _V10_Dequal_Q_D150_k50) (close _V10_Dequal_Q_D150_k51))))
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
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D150_k50, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D150_k51, self)})));
    }
}
}
static void _V10_Dequal_Q_D150_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1171 0 0) ((bruijn ##.k.1163 14 0) (bruijn ##.p.1171 0 0)) (basic-block 1 1 (##.reg.2856) ((##vcore.s16vector? (bruijn ##.x.388 15 1))) ((close _V10_Dequal_Q_D150_k48) (close _V10_Dequal_Q_D150_k49))))
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
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D150_k48, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D150_k49, self)})));
    }
}
}
static void _V10_Dequal_Q_D150_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1170 0 0) ((bruijn ##.k.1163 12 0) (bruijn ##.p.1170 0 0)) (basic-block 1 1 (##.reg.2855) ((##vcore.u16vector? (bruijn ##.x.388 13 1))) ((close _V10_Dequal_Q_D150_k46) (close _V10_Dequal_Q_D150_k47))))
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
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D150_k46, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D150_k47, self)})));
    }
}
}
static void _V10_Dequal_Q_D150_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1169 0 0) ((bruijn ##.k.1163 10 0) (bruijn ##.p.1169 0 0)) (basic-block 1 1 (##.reg.2854) ((##vcore.s32vector? (bruijn ##.x.388 11 1))) ((close _V10_Dequal_Q_D150_k44) (close _V10_Dequal_Q_D150_k45))))
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
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D150_k44, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D150_k45, self)})));
    }
}
}
static void _V10_Dequal_Q_D150_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1168 0 0) ((bruijn ##.k.1163 8 0) (bruijn ##.p.1168 0 0)) (basic-block 1 1 (##.reg.2853) ((##vcore.f64vector? (bruijn ##.x.388 9 1))) ((close _V10_Dequal_Q_D150_k42) (close _V10_Dequal_Q_D150_k43))))
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
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D150_k42, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D150_k43, self)})));
    }
}
}
static void _V10_Dequal_Q_D150_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1167 0 0) ((bruijn ##.k.1163 6 0) (bruijn ##.p.1167 0 0)) (basic-block 1 1 (##.reg.2852) ((##vcore.f32vector? (bruijn ##.x.388 7 1))) ((close _V10_Dequal_Q_D150_k40) (close _V10_Dequal_Q_D150_k41))))
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
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D150_k40, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D150_k41, self)})));
    }
}
}
static void _V10_Dequal_Q_D150_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1166 0 0) ((bruijn ##.k.1163 4 0) (bruijn ##.p.1166 0 0)) (basic-block 1 1 (##.reg.2851) ((##vcore.vector? (bruijn ##.x.388 5 1))) ((close _V10_Dequal_Q_D150_k38) (close _V10_Dequal_Q_D150_k39))))
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
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D150_k38, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D150_k39, self)})));
    }
}
}
static void _V10_Dequal_Q_D150_k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1165 0 0) ((bruijn ##.k.1163 3 0) (bruijn ##.p.1165 0 0)) ((close _V10_Dequal_Q_D150_k35) (close _V10_Dequal_Q_D150_k37)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D150_k35, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D150_k37, self)})));
}
}
static void _V10_Dequal_Q_D150_k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1164 0 0) ((bruijn ##.k.1163 1 0) (bruijn ##.p.1164 0 0)) (basic-block 1 1 (##.reg.2850) ((##vcore.blob? (bruijn ##.x.388 2 1))) ((close _V10_Dequal_Q_D150_k33) (close _V10_Dequal_Q_D150_k34))))
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
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D150_k33, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D150_k34, self)})));
    }
}
}
static void _V10_Dequal_Q_D150_lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D150_lambda23, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dequal_Q_D150_k32) (##inline ##vcore.eq? (bruijn ##.x.388 0 1) (bruijn ##.y.389 0 2)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dequal_Q_D150_k32, .env = self }, }, 1,
      VInlineEq2(runtime,
        _var1,
        _var2));
}
static void _V10_Dloop_D393_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D393_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (bruijn ##.x.1217 0 0) -1) ((bruijn ##.loop.393 3 0) (bruijn ##.k.1213 2 0) (##inline ##vcore.cdr (bruijn ##.xs.394 2 1))) ((bruijn ##.k.1213 2 0) #f))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(-1l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      statics->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D393_k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D393_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.cmp (close _V10_Dloop_D393_k55) (##inline ##vcore.car (bruijn ##.xs.394 1 1)) (bruijn ##.x.1219 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCmp2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D393_k55, self)})),
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
static void _V10_Dloop_D393_lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D393_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.xs.394 0 1))) ((bruijn ##.k.1213 0 0) #t) ((bruijn ##.cadr.184 3 45) (close _V10_Dloop_D393_k54) (bruijn ##.xs.394 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[45]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D393_k54, self)})),
      _var1);
}
}
static void _V10_D_L_D151_lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V10_D_L_D151_lambda24, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D393_lambda25)) ((bruijn ##.loop.393 0 0) (bruijn ##.k.1212 1 0) (##inline ##vcore.cons (bruijn ##.x0.390 1 1) (##inline ##vcore.cons (bruijn ##.x1.391 1 2) (bruijn ##.xs.392 1 3)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D393_lambda25, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      VInlineCons2(runtime,
        statics->vars[1],
        VInlineCons2(runtime,
        statics->vars[2],
        statics->vars[3])));
    }
}
static void _V10_Dloop_D398_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D398_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (bruijn ##.x.1228 0 0) 0) ((bruijn ##.loop.398 3 0) (bruijn ##.k.1224 2 0) (##inline ##vcore.cdr (bruijn ##.xs.399 2 1))) ((bruijn ##.k.1224 2 0) #f))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(0l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      statics->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D398_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D398_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.cmp (close _V10_Dloop_D398_k57) (##inline ##vcore.car (bruijn ##.xs.399 1 1)) (bruijn ##.x.1230 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCmp2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D398_k57, self)})),
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
static void _V10_Dloop_D398_lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D398_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.xs.399 0 1))) ((bruijn ##.k.1224 0 0) #t) ((bruijn ##.cadr.184 3 45) (close _V10_Dloop_D398_k56) (bruijn ##.xs.399 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[45]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D398_k56, self)})),
      _var1);
}
}
static void _V10_D_E_D152_lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V10_D_E_D152_lambda26, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D398_lambda27)) ((bruijn ##.loop.398 0 0) (bruijn ##.k.1223 1 0) (##inline ##vcore.cons (bruijn ##.x0.395 1 1) (##inline ##vcore.cons (bruijn ##.x1.396 1 2) (bruijn ##.xs.397 1 3)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D398_lambda27, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      VInlineCons2(runtime,
        statics->vars[1],
        VInlineCons2(runtime,
        statics->vars[2],
        statics->vars[3])));
    }
}
static void _V10_Dloop_D403_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D403_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (bruijn ##.x.1239 0 0) 1) ((bruijn ##.loop.403 3 0) (bruijn ##.k.1235 2 0) (##inline ##vcore.cdr (bruijn ##.xs.404 2 1))) ((bruijn ##.k.1235 2 0) #f))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(1l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      statics->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D403_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D403_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.cmp (close _V10_Dloop_D403_k59) (##inline ##vcore.car (bruijn ##.xs.404 1 1)) (bruijn ##.x.1241 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCmp2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D403_k59, self)})),
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
static void _V10_Dloop_D403_lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D403_lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.xs.404 0 1))) ((bruijn ##.k.1235 0 0) #t) ((bruijn ##.cadr.184 3 45) (close _V10_Dloop_D403_k58) (bruijn ##.xs.404 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[45]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D403_k58, self)})),
      _var1);
}
}
static void _V10_D_G_D153_lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V10_D_G_D153_lambda28, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D403_lambda29)) ((bruijn ##.loop.403 0 0) (bruijn ##.k.1234 1 0) (##inline ##vcore.cons (bruijn ##.x0.400 1 1) (##inline ##vcore.cons (bruijn ##.x1.401 1 2) (bruijn ##.xs.402 1 3)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D403_lambda29, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      VInlineCons2(runtime,
        statics->vars[1],
        VInlineCons2(runtime,
        statics->vars[2],
        statics->vars[3])));
    }
}
static void _V10_Dloop_D408_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D408_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (bruijn ##.x.1250 0 0) 1) ((bruijn ##.k.1246 2 0) #f) ((bruijn ##.loop.408 3 0) (bruijn ##.k.1246 2 0) (##inline ##vcore.cdr (bruijn ##.xs.409 2 1))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(1l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      statics->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]));
}
}
static void _V10_Dloop_D408_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D408_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.cmp (close _V10_Dloop_D408_k61) (##inline ##vcore.car (bruijn ##.xs.409 1 1)) (bruijn ##.x.1252 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCmp2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D408_k61, self)})),
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
static void _V10_Dloop_D408_lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D408_lambda31, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.xs.409 0 1))) ((bruijn ##.k.1246 0 0) #t) ((bruijn ##.cadr.184 3 45) (close _V10_Dloop_D408_k60) (bruijn ##.xs.409 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[45]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D408_k60, self)})),
      _var1);
}
}
static void _V10_D_L_E_D154_lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V10_D_L_E_D154_lambda30, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D408_lambda31)) ((bruijn ##.loop.408 0 0) (bruijn ##.k.1245 1 0) (##inline ##vcore.cons (bruijn ##.x0.405 1 1) (##inline ##vcore.cons (bruijn ##.x1.406 1 2) (bruijn ##.xs.407 1 3)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D408_lambda31, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      VInlineCons2(runtime,
        statics->vars[1],
        VInlineCons2(runtime,
        statics->vars[2],
        statics->vars[3])));
    }
}
static void _V10_Dloop_D413_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D413_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (bruijn ##.x.1261 0 0) -1) ((bruijn ##.k.1257 2 0) #f) ((bruijn ##.loop.413 3 0) (bruijn ##.k.1257 2 0) (##inline ##vcore.cdr (bruijn ##.xs.414 2 1))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(-1l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      statics->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]));
}
}
static void _V10_Dloop_D413_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D413_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.cmp (close _V10_Dloop_D413_k63) (##inline ##vcore.car (bruijn ##.xs.414 1 1)) (bruijn ##.x.1263 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCmp2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D413_k63, self)})),
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
static void _V10_Dloop_D413_lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D413_lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.xs.414 0 1))) ((bruijn ##.k.1257 0 0) #t) ((bruijn ##.cadr.184 3 45) (close _V10_Dloop_D413_k62) (bruijn ##.xs.414 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[45]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D413_k62, self)})),
      _var1);
}
}
static void _V10_D_G_E_D155_lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V10_D_G_E_D155_lambda32, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D413_lambda33)) ((bruijn ##.loop.413 0 0) (bruijn ##.k.1256 1 0) (##inline ##vcore.cons (bruijn ##.x0.410 1 1) (##inline ##vcore.cons (bruijn ##.x1.411 1 2) (bruijn ##.xs.412 1 3)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D413_lambda33, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      VInlineCons2(runtime,
        statics->vars[1],
        VInlineCons2(runtime,
        statics->vars[2],
        statics->vars[3])));
    }
}
static void _V10_Dnumber_Q_D156_lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dnumber_Q_D156_lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2870) ((##vcore.double? (bruijn ##.x.415 1 1))) (if (bruijn ##.reg.2870 0 0) ((bruijn ##.k.1267 1 0) (bruijn ##.reg.2870 0 0)) (basic-block 1 1 (##.reg.2871) ((##vcore.int? (bruijn ##.x.415 2 1))) ((bruijn ##.k.1267 2 0) (bruijn ##.reg.2871 0 0)))))
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
static void _V10_Dpositive_Q_D159_lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpositive_Q_D159_lambda35, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.>.153 1 14) (bruijn ##.k.1269 0 0) (bruijn ##.x.416 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[14]), 3,
      _var0,
      _var1,
      VEncodeInt(0l));
}
static void _V10_Dzero_Q_D160_lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dzero_Q_D160_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.=.152 1 13) (bruijn ##.k.1270 0 0) (bruijn ##.x.417 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[13]), 3,
      _var0,
      _var1,
      VEncodeInt(0l));
}
static void _V10_Dnegative_Q_D161_lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dnegative_Q_D161_lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.<.151 1 12) (bruijn ##.k.1271 0 0) (bruijn ##.x.418 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[12]), 3,
      _var0,
      _var1,
      VEncodeInt(0l));
}
static void _V10_Dabs_D162_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dabs_D162_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1273 0 0) (basic-block 1 1 (##.reg.2872) ((##vcore.- (bruijn ##.x.419 2 1))) ((bruijn ##.k.1272 2 0) (bruijn ##.reg.2872 0 0))) ((bruijn ##.k.1272 1 0) (bruijn ##.x.419 1 1)))
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
static void _V10_Dabs_D162_lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dabs_D162_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.<.151 1 12) (close _V10_Dabs_D162_k64) (bruijn ##.x.419 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[12]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dabs_D162_k64, self)})),
      _var1,
      VEncodeInt(0l));
}
static void _V10_Dsquare_D166_lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsquare_D166_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2873) ((##vcore.* (bruijn ##.x.420 1 1) (bruijn ##.x.420 1 1))) ((bruijn ##.k.1274 1 0) (bruijn ##.reg.2873 0 0)))
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
__attribute__((used)) static void _V20CaseError__V10_Datan_D175_lambda40(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Datan_D175_lambda40 #t (2 ((bruijn ##.atan-impl.173 1 34) (bruijn ##.k.1275 0 0) (bruijn ##.x.421 0 1))) (3 ((bruijn ##.atan2-impl.174 1 35) (bruijn ##.k.1276 0 0) (bruijn ##.y.422 0 1) (bruijn ##.x.423 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Datan_D175_lambda40, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Datan_D175_lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.atan-impl.173 1 34) (bruijn ##.k.1275 0 0) (bruijn ##.x.421 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[34]), 2,
      _var0,
      _var1);
}
__attribute__((used)) static void _V20Case1__V10_Datan_D175_lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // ((bruijn ##.atan2-impl.174 1 35) (bruijn ##.k.1276 0 0) (bruijn ##.y.422 0 1) (bruijn ##.x.423 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[35]), 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Datan_D175_lambda40(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Datan_D175_lambda40, @function\n"
#endif
"_V10_Datan_D175_lambda40:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Datan_D175_lambda40\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Datan_D175_lambda40\n"
"    jmp _V20CaseError__V10_Datan_D175_lambda40\n"
);
static void _V10_Dlog_D178_k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlog_D178_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2874) ((##vcore./ (bruijn ##.x.1279 2 0) (bruijn ##.x.1280 1 0))) ((bruijn ##.k.1278 3 0) (bruijn ##.reg.2874 0 0)))
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
static void _V10_Dlog_D178_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlog_D178_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.log-impl.177 2 38) (close _V10_Dlog_D178_k66) (bruijn ##.base.426 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[38]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlog_D178_k66, self)})),
      statics->vars[2]);
}
__attribute__((used)) static void _V20CaseError__V10_Dlog_D178_lambda41(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dlog_D178_lambda41 #t (2 ((bruijn ##.log-impl.177 1 38) (bruijn ##.k.1277 0 0) (bruijn ##.x.424 0 1))) (3 ((bruijn ##.log-impl.177 1 38) (close _V10_Dlog_D178_k65) (bruijn ##.x.425 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dlog_D178_lambda41, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dlog_D178_lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.log-impl.177 1 38) (bruijn ##.k.1277 0 0) (bruijn ##.x.424 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[38]), 2,
      _var0,
      _var1);
}
__attribute__((used)) static void _V20Case1__V10_Dlog_D178_lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.log-impl.177 1 38) (close _V10_Dlog_D178_k65) (bruijn ##.x.425 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[38]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlog_D178_k65, self)})),
      _var1);
}
void _V10_Dlog_D178_lambda41(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dlog_D178_lambda41, @function\n"
#endif
"_V10_Dlog_D178_lambda41:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dlog_D178_lambda41\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dlog_D178_lambda41\n"
"    jmp _V20CaseError__V10_Dlog_D178_lambda41\n"
);
static void _V10_Dmax_D181_k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmax_D181_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1283 0 0) ((bruijn ##.k.1282 1 0) (bruijn ##.a.428 1 1)) ((bruijn ##.k.1282 1 0) (bruijn ##.b.429 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
}
}
static void _V10_Dmax_D181_k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmax_D181_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.max.181 2 42) (bruijn ##.k.1284 1 0) (bruijn ##.x.1285 0 0) (bruijn ##.c.432 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[42]), 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
static void _V10_Dmax_D181_k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmax_D181_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.max.181 3 42) (bruijn ##.k.1286 2 0) (bruijn ##.x.1287 0 0) (bruijn ##.d.436 2 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[42]), 3,
      statics->up->vars[0],
      _var0,
      statics->up->vars[4]);
}
static void _V10_Dmax_D181_k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmax_D181_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.max.181 2 42) (close _V10_Dmax_D181_k70) (bruijn ##.x.1288 0 0) (bruijn ##.c.435 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[42]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmax_D181_k70, self)})),
      _var0,
      statics->vars[3]);
}
static void _V10_Dloop_D439_k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D439_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.439 2 0) (bruijn ##.k.1290 1 0) (bruijn ##.x.1292 0 0) (##inline ##vcore.cdr (bruijn ##.bs.438 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      _var0,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D439_lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D439_lambda43, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.bs.438 2 2)) ((bruijn ##.k.1290 0 0) (bruijn ##.ret.440 0 1)) ((bruijn ##.max.181 3 42) (close _V10_Dloop_D439_k71) (bruijn ##.a.437 2 1) (##inline ##vcore.car (bruijn ##.bs.438 2 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[42]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D439_k71, self)})),
      statics->up->vars[1],
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
__attribute__((used)) static void _V20CaseError__V10_Dmax_D181_lambda42(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmax_D181_lambda42 #t (2 ((bruijn ##.k.1281 0 0) (bruijn ##.a.427 0 1))) (3 ((bruijn ##.>.153 1 14) (close _V10_Dmax_D181_k67) (bruijn ##.a.428 0 1) (bruijn ##.b.429 0 2))) (4 ((bruijn ##.max.181 1 42) (close _V10_Dmax_D181_k68) (bruijn ##.a.430 0 1) (bruijn ##.b.431 0 2))) (5 ((bruijn ##.max.181 1 42) (close _V10_Dmax_D181_k69) (bruijn ##.a.433 0 1) (bruijn ##.b.434 0 2))) (2 + (letrec 1 ((close _V10_Dloop_D439_lambda43)) ((bruijn ##.loop.439 0 0) (bruijn ##.k.1289 1 0) (bruijn ##.a.437 1 1) (bruijn ##.bs.438 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmax_D181_lambda42, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmax_D181_lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1281 0 0) (bruijn ##.a.427 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case1__V10_Dmax_D181_lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.>.153 1 14) (close _V10_Dmax_D181_k67) (bruijn ##.a.428 0 1) (bruijn ##.b.429 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[14]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmax_D181_k67, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case2__V10_Dmax_D181_lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((bruijn ##.max.181 1 42) (close _V10_Dmax_D181_k68) (bruijn ##.a.430 0 1) (bruijn ##.b.431 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[42]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmax_D181_k68, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V10_Dmax_D181_lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // ((bruijn ##.max.181 1 42) (close _V10_Dmax_D181_k69) (bruijn ##.a.433 0 1) (bruijn ##.b.434 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[42]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmax_D181_k69, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case4__V10_Dmax_D181_lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D439_lambda43)) ((bruijn ##.loop.439 0 0) (bruijn ##.k.1289 1 0) (bruijn ##.a.437 1 1) (bruijn ##.bs.438 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D439_lambda43, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
    }
}
void _V10_Dmax_D181_lambda42(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmax_D181_lambda42, @function\n"
#endif
"_V10_Dmax_D181_lambda42:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmax_D181_lambda42\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmax_D181_lambda42\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V10_Dmax_D181_lambda42\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case3__V10_Dmax_D181_lambda42\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case4__V10_Dmax_D181_lambda42\n"
"    jmp _V20CaseError__V10_Dmax_D181_lambda42\n"
);
static void _V10_Dmin_D182_k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmin_D182_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1297 0 0) ((bruijn ##.k.1296 1 0) (bruijn ##.a.443 1 1)) ((bruijn ##.k.1296 1 0) (bruijn ##.b.444 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
}
}
static void _V10_Dmin_D182_k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmin_D182_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.min.182 2 43) (bruijn ##.k.1298 1 0) (bruijn ##.x.1299 0 0) (bruijn ##.c.447 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[43]), 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
static void _V10_Dmin_D182_k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmin_D182_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.min.182 3 43) (bruijn ##.k.1300 2 0) (bruijn ##.x.1301 0 0) (bruijn ##.d.451 2 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[43]), 3,
      statics->up->vars[0],
      _var0,
      statics->up->vars[4]);
}
static void _V10_Dmin_D182_k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmin_D182_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.min.182 2 43) (close _V10_Dmin_D182_k75) (bruijn ##.x.1302 0 0) (bruijn ##.c.450 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[43]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmin_D182_k75, self)})),
      _var0,
      statics->vars[3]);
}
static void _V10_Dloop_D454_k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.454 2 0) (bruijn ##.k.1304 1 0) (bruijn ##.x.1306 0 0) (##inline ##vcore.cdr (bruijn ##.bs.453 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      _var0,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D454_lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_lambda45, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.bs.453 2 2)) ((bruijn ##.k.1304 0 0) (bruijn ##.ret.455 0 1)) ((bruijn ##.min.182 3 43) (close _V10_Dloop_D454_k76) (bruijn ##.a.452 2 1) (##inline ##vcore.car (bruijn ##.bs.453 2 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[43]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D454_k76, self)})),
      statics->up->vars[1],
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
__attribute__((used)) static void _V20CaseError__V10_Dmin_D182_lambda44(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmin_D182_lambda44 #t (2 ((bruijn ##.k.1295 0 0) (bruijn ##.a.442 0 1))) (3 ((bruijn ##.<.151 1 12) (close _V10_Dmin_D182_k72) (bruijn ##.a.443 0 1) (bruijn ##.b.444 0 2))) (4 ((bruijn ##.min.182 1 43) (close _V10_Dmin_D182_k73) (bruijn ##.a.445 0 1) (bruijn ##.b.446 0 2))) (5 ((bruijn ##.min.182 1 43) (close _V10_Dmin_D182_k74) (bruijn ##.a.448 0 1) (bruijn ##.b.449 0 2))) (2 + (letrec 1 ((close _V10_Dloop_D454_lambda45)) ((bruijn ##.loop.454 0 0) (bruijn ##.k.1303 1 0) (bruijn ##.a.452 1 1) (bruijn ##.bs.453 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmin_D182_lambda44, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmin_D182_lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1295 0 0) (bruijn ##.a.442 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case1__V10_Dmin_D182_lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.<.151 1 12) (close _V10_Dmin_D182_k72) (bruijn ##.a.443 0 1) (bruijn ##.b.444 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[12]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmin_D182_k72, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case2__V10_Dmin_D182_lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((bruijn ##.min.182 1 43) (close _V10_Dmin_D182_k73) (bruijn ##.a.445 0 1) (bruijn ##.b.446 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[43]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmin_D182_k73, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V10_Dmin_D182_lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // ((bruijn ##.min.182 1 43) (close _V10_Dmin_D182_k74) (bruijn ##.a.448 0 1) (bruijn ##.b.449 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[43]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmin_D182_k74, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case4__V10_Dmin_D182_lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D454_lambda45)) ((bruijn ##.loop.454 0 0) (bruijn ##.k.1303 1 0) (bruijn ##.a.452 1 1) (bruijn ##.bs.453 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D454_lambda45, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
    }
}
void _V10_Dmin_D182_lambda44(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmin_D182_lambda44, @function\n"
#endif
"_V10_Dmin_D182_lambda44:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmin_D182_lambda44\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmin_D182_lambda44\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V10_Dmin_D182_lambda44\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case3__V10_Dmin_D182_lambda44\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case4__V10_Dmin_D182_lambda44\n"
"    jmp _V20CaseError__V10_Dmin_D182_lambda44\n"
);
static void _V10_Dcaar_D183_lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaar_D183_lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1309 0 0) (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.457 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)));
}
static void _V10_Dcadr_D184_lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcadr_D184_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1311 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.458 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)));
}
static void _V10_Dcdar_D185_lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdar_D185_lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1313 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.459 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)));
}
static void _V10_Dcddr_D186_lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcddr_D186_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1315 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.460 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)));
}
static void _V10_Dcaaar_D187_lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaaar_D187_lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1317 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.461 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1))));
}
static void _V10_Dcaadr_D188_lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaadr_D188_lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1320 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.462 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1))));
}
static void _V10_Dcadar_D189_lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcadar_D189_lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1323 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.463 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1))));
}
static void _V10_Dcaddr_D190_lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaddr_D190_lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1326 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.464 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1))));
}
static void _V10_Dcdaar_D191_lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdaar_D191_lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1329 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.465 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1))));
}
static void _V10_Dcdadr_D192_lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdadr_D192_lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1332 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.466 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1))));
}
static void _V10_Dcddar_D193_lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcddar_D193_lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1335 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.467 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1))));
}
static void _V10_Dcdddr_D194_lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdddr_D194_lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1338 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.468 0 1)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1))));
}
static void _V10_Dcaaaar_D195_lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaaaar_D195_lambda58, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1341 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.469 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
static void _V10_Dcaaadr_D196_lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaaadr_D196_lambda59, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1345 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.470 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
static void _V10_Dcaadar_D197_lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaadar_D197_lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1349 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.471 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
static void _V10_Dcaaddr_D198_lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaaddr_D198_lambda61, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1353 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.472 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
static void _V10_Dcadaar_D199_lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcadaar_D199_lambda62, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1357 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.473 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
static void _V10_Dcadadr_D200_lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcadadr_D200_lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1361 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.474 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
static void _V10_Dcaddar_D201_lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaddar_D201_lambda64, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1365 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.475 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
static void _V10_Dcadddr_D202_lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcadddr_D202_lambda65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1369 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.476 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
static void _V10_Dcdaaar_D203_lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdaaar_D203_lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1373 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.477 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
static void _V10_Dcdaadr_D204_lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdaadr_D204_lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1377 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.478 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
static void _V10_Dcdadar_D205_lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdadar_D205_lambda68, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1381 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.479 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
static void _V10_Dcdaddr_D206_lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdaddr_D206_lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1385 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.480 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
static void _V10_Dcddaar_D207_lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcddaar_D207_lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1389 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.481 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
static void _V10_Dcddadr_D208_lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcddadr_D208_lambda71, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1393 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.482 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
static void _V10_Dcdddar_D209_lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdddar_D209_lambda72, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1397 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.483 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
}
static void _V10_Dcddddr_D210_lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcddddr_D210_lambda73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1401 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.484 0 1))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
}
static void _V10_Dlist_D211_lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist_D211_lambda74, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // ((bruijn ##.k.1405 0 0) (bruijn ##.args.485 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _varargs);
}
static void _V10_Dlist_Q_D212_k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist_Q_D212_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1407 0 0) ((bruijn ##.k.1406 1 0) (bruijn ##.p.1407 0 0)) (if (##inline ##vcore.pair? (bruijn ##.lst.486 1 1)) ((bruijn ##.list?.212 2 73) (bruijn ##.k.1406 1 0) (##inline ##vcore.cdr (bruijn ##.lst.486 1 1))) ((bruijn ##.k.1406 1 0) #f)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[73]), 2,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
}
static void _V10_Dlist_Q_D212_lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist_Q_D212_lambda75, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dlist_Q_D212_k77) (##inline ##vcore.null? (bruijn ##.lst.486 0 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dlist_Q_D212_k77, .env = self }, }, 1,
      VInlineNullP2(runtime,
        _var1));
}
static void _V10_Dloop_D488_lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D488_lambda77, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.lst.489 0 1)) ((bruijn ##.k.1411 0 0) (bruijn ##.i.490 0 2)) (basic-block 1 1 (##.reg.2875) ((##vcore.+ (bruijn ##.i.490 1 2) 1)) ((bruijn ##.loop.488 2 0) (bruijn ##.k.1411 1 0) (##inline ##vcore.cdr (bruijn ##.lst.489 1 1)) (bruijn ##.reg.2875 0 0))))
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
static void _V10_Dlength_D213_lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlength_D213_lambda76, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D488_lambda77)) ((bruijn ##.loop.488 0 0) (bruijn ##.k.1410 1 0) (bruijn ##.lst.487 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D488_lambda77, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(0l));
    }
}
static void _V10_Dlist__tail_D214_lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__tail_D214_lambda78, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.x.492 0 2) 0) ((bruijn ##.k.1415 0 0) (bruijn ##.lst.491 0 1)) (basic-block 1 1 (##.reg.2876) ((##vcore.- (bruijn ##.x.492 1 2) 1)) ((bruijn ##.list-tail.214 2 75) (bruijn ##.k.1415 1 0) (##inline ##vcore.cdr (bruijn ##.lst.491 1 1)) (bruijn ##.reg.2876 0 0))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[75]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      self->vars[0]);
    }
}
}
static void _V10_Dlist__ref_D215_lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__ref_D215_lambda79, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.x.494 0 2) 0) ((bruijn ##.k.1419 0 0) (##inline ##vcore.car (bruijn ##.lst.493 0 1))) (basic-block 1 1 (##.reg.2877) ((##vcore.- (bruijn ##.x.494 1 2) 1)) ((bruijn ##.list-ref.215 2 76) (bruijn ##.k.1419 1 0) (##inline ##vcore.cdr (bruijn ##.lst.493 1 1)) (bruijn ##.reg.2877 0 0))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[76]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      self->vars[0]);
    }
}
}
static void _V10_Dlist__set_B_D216_k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__set_B_D216_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-car! (bruijn ##.k.1423 1 0) (bruijn ##.x.1424 0 0) (bruijn ##.val.497 1 3))
    VCallFuncWithGC(runtime, (VFunc)VSetCar2, 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
static void _V10_Dlist__set_B_D216_lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__set_B_D216_lambda80, got ~D~N"
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
  // ((bruijn ##.list-tail.214 1 75) (close _V10_Dlist__set_B_D216_k78) (bruijn ##.lst.495 0 1) (bruijn ##.i.496 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[75]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__set_B_D216_k78, self)})),
      _var1,
      _var2);
}
static void _V10_Dlist__copy_D217_k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__copy_D217_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1425 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.498 1 1)) (bruijn ##.x.1428 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
static void _V10_Dlist__copy_D217_lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__copy_D217_lambda81, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.lst.498 0 1)) ((bruijn ##.k.1425 0 0) '()) ((bruijn ##.list-copy.217 1 78) (close _V10_Dlist__copy_D217_k79) (##inline ##vcore.cdr (bruijn ##.lst.498 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[78]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__copy_D217_k79, self)})),
      VInlineCdr2(runtime,
        _var1));
}
}
static void _V10_Dloop_D502_lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D502_lambda83, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.k.503 0 1) 0) ((bruijn ##.k.1432 0 0) (bruijn ##.ret.504 0 2)) (basic-block 1 1 (##.reg.2878) ((##vcore.- (bruijn ##.k.503 1 1) 1)) ((bruijn ##.loop.502 2 0) (bruijn ##.k.1432 1 0) (bruijn ##.reg.2878 0 0) (##inline ##vcore.cons (bruijn ##.val.501 3 2) (bruijn ##.ret.504 1 2)))))
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
__attribute__((used)) static void _V20CaseError__V10_Dmake__list_D218_lambda82(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__list_D218_lambda82 #t (2 ((bruijn ##.make-list.218 1 79) (bruijn ##.k.1430 0 0) (bruijn ##.k.499 0 1) #f)) (3 (letrec 1 ((close _V10_Dloop_D502_lambda83)) ((bruijn ##.loop.502 0 0) (bruijn ##.k.1431 1 0) (bruijn ##.k.500 1 1) '()))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__list_D218_lambda82, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__list_D218_lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.make-list.218 1 79) (bruijn ##.k.1430 0 0) (bruijn ##.k.499 0 1) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[79]), 3,
      _var0,
      _var1,
      VEncodeBool(false));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__list_D218_lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D502_lambda83)) ((bruijn ##.loop.502 0 0) (bruijn ##.k.1431 1 0) (bruijn ##.k.500 1 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D502_lambda83, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      VNULL);
    }
}
void _V10_Dmake__list_D218_lambda82(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__list_D218_lambda82, @function\n"
#endif
"_V10_Dmake__list_D218_lambda82:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__list_D218_lambda82\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__list_D218_lambda82\n"
"    jmp _V20CaseError__V10_Dmake__list_D218_lambda82\n"
);
static void _V10_Dloop_D507_k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D507_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1437 2 0) (##inline ##vcore.cons (bruijn ##.x.1439 1 0) (bruijn ##.x.1440 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Dloop_D507_k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D507_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.507 2 0) (close _V10_Dloop_D507_k81) (##inline ##vcore.cdr (bruijn ##.xs.508 1 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D507_k81, self)})),
      VInlineCdr2(runtime,
        statics->vars[1]));
}
static void _V10_Dloop_D507_lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D507_lambda85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.xs.508 0 1)) ((bruijn ##.k.1437 0 0) '()) ((bruijn ##.f.505 2 1) (close _V10_Dloop_D507_k80) (##inline ##vcore.car (bruijn ##.xs.508 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D507_k80, self)})),
      VInlineCar2(runtime,
        _var1));
}
}
static void _V10_Dloop_D512_k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D512_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1452 1 0) ((bruijn ##.k.1453 0 0) (bruijn ##.p.1452 1 0)) ((bruijn ##.k.1453 0 0) (##inline ##vcore.null? (bruijn ##.ys.514 2 2))))
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
static void _V10_Dloop_D512_k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D512_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1444 4 0) (##inline ##vcore.cons (bruijn ##.x.1446 1 0) (bruijn ##.x.1447 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Dloop_D512_k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D512_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.512 4 0) (close _V10_Dloop_D512_k86) (##inline ##vcore.cdr (bruijn ##.xs.513 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.514 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D512_k86, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D512_k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D512_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1445 0 0) ((bruijn ##.k.1444 2 0) '()) ((bruijn ##.f.509 4 1) (close _V10_Dloop_D512_k85) (##inline ##vcore.car (bruijn ##.xs.513 2 1)) (##inline ##vcore.car (bruijn ##.ys.514 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D512_k85, self)})),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dloop_D512_k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D512_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D512_k83) (close _V10_Dloop_D512_k84))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D512_k83, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D512_k84, self)})));
}
static void _V10_Dloop_D512_lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D512_lambda86, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D512_k82) (##inline ##vcore.null? (bruijn ##.xs.513 0 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D512_k82, .env = self }, }, 1,
      VInlineNullP2(runtime,
        _var1));
}
static void _V10_Dloop_D519_k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D519_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1467 0 0) ((bruijn ##.k.1466 1 0) (bruijn ##.p.1467 0 0)) ((bruijn ##.k.1466 1 0) (##inline ##vcore.null? (bruijn ##.zs.522 3 3))))
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
static void _V10_Dloop_D519_k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D519_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1465 1 0) ((bruijn ##.k.1466 0 0) (bruijn ##.p.1465 1 0)) ((close _V10_Dloop_D519_k89) (##inline ##vcore.null? (bruijn ##.ys.521 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D519_k89, .env = self }, }, 1,
      VInlineNullP2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dloop_D519_k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D519_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1455 4 0) (##inline ##vcore.cons (bruijn ##.x.1457 1 0) (bruijn ##.x.1458 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Dloop_D519_k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D519_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.519 4 0) (close _V10_Dloop_D519_k92) (##inline ##vcore.cdr (bruijn ##.xs.520 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.521 3 2)) (##inline ##vcore.cdr (bruijn ##.zs.522 3 3)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D519_k92, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->up->vars[2]),
      VInlineCdr2(runtime,
        statics->up->up->vars[3]));
}
static void _V10_Dloop_D519_k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D519_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1456 0 0) ((bruijn ##.k.1455 2 0) '()) ((bruijn ##.f.515 4 1) (close _V10_Dloop_D519_k91) (##inline ##vcore.car (bruijn ##.xs.520 2 1)) (##inline ##vcore.car (bruijn ##.ys.521 2 2)) (##inline ##vcore.car (bruijn ##.zs.522 2 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D519_k91, self)})),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]),
      VInlineCar2(runtime,
        statics->up->vars[3]));
}
}
static void _V10_Dloop_D519_k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D519_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D519_k88) (close _V10_Dloop_D519_k90))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D519_k88, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D519_k90, self)})));
}
static void _V10_Dloop_D519_lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D519_lambda87, got ~D~N"
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
  // ((close _V10_Dloop_D519_k87) (##inline ##vcore.null? (bruijn ##.xs.520 0 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D519_k87, .env = self }, }, 1,
      VInlineNullP2(runtime,
        _var1));
}
static void _V10_Dloop_D525_k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D525_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1469 6 0) (##inline ##vcore.cons (bruijn ##.x.1471 2 0) (bruijn ##.x.1472 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
static void _V10_Dloop_D525_k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D525_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.525 6 0) (close _V10_Dloop_D525_k98) (bruijn ##.x.1473 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D525_k98, self)})),
      _var0);
}
static void _V10_Dloop_D525_k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D525_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.219 7 80) (close _V10_Dloop_D525_k97) (##intrinsic ##vcore.cdr) (bruijn ##.lsts.526 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 80)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D525_k97, self)})),
      _V40_V10vcore_Dcdr,
      statics->up->up->up->vars[1]);
}
static void _V10_Dloop_D525_k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D525_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dloop_D525_k96) (bruijn ##.f.523 5 1) (bruijn ##.x.1474 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D525_k96, self)})),
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D525_k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D525_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1470 0 0) ((bruijn ##.k.1469 2 0) '()) ((bruijn ##.map.219 5 80) (close _V10_Dloop_D525_k95) (##intrinsic ##vcore.car) (bruijn ##.lsts.526 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 80)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D525_k95, self)})),
      _V40_V10vcore_Dcar,
      statics->up->vars[1]);
}
}
static void _V10_Dloop_D525_k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D525_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.memq.224 4 85) (close _V10_Dloop_D525_k94) #t (bruijn ##.x.1475 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[85]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D525_k94, self)})),
      VEncodeBool(true),
      _var0);
}
static void _V10_Dloop_D525_lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D525_lambda88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.map.219 3 80) (close _V10_Dloop_D525_k93) (##intrinsic ##vcore.null?) (bruijn ##.lsts.526 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[80]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D525_k93, self)})),
      _V40_V10vcore_Dnull_Q,
      _var1);
}
__attribute__((used)) static void _V20CaseError__V10_Dmap_D219_lambda84(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmap_D219_lambda84 #t (3 (letrec 1 ((close _V10_Dloop_D507_lambda85)) ((bruijn ##.loop.507 0 0) (bruijn ##.k.1436 1 0) (bruijn ##.xs.506 1 2)))) (4 (letrec 1 ((close _V10_Dloop_D512_lambda86)) ((bruijn ##.loop.512 0 0) (bruijn ##.k.1443 1 0) (bruijn ##.xs.510 1 2) (bruijn ##.ys.511 1 3)))) (5 (letrec 1 ((close _V10_Dloop_D519_lambda87)) ((bruijn ##.loop.519 0 0) (bruijn ##.k.1454 1 0) (bruijn ##.xs.516 1 2) (bruijn ##.ys.517 1 3) (bruijn ##.zs.518 1 4)))) (2 + (letrec 1 ((close _V10_Dloop_D525_lambda88)) ((bruijn ##.loop.525 0 0) (bruijn ##.k.1468 1 0) (bruijn ##.lsts.524 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmap_D219_lambda84, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmap_D219_lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D507_lambda85)) ((bruijn ##.loop.507 0 0) (bruijn ##.k.1436 1 0) (bruijn ##.xs.506 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D507_lambda85, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
__attribute__((used)) static void _V20Case1__V10_Dmap_D219_lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (letrec 1 ((close _V10_Dloop_D512_lambda86)) ((bruijn ##.loop.512 0 0) (bruijn ##.k.1443 1 0) (bruijn ##.xs.510 1 2) (bruijn ##.ys.511 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D512_lambda86, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[2],
      statics->vars[3]);
    }
}
__attribute__((used)) static void _V20Case2__V10_Dmap_D219_lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (letrec 1 ((close _V10_Dloop_D519_lambda87)) ((bruijn ##.loop.519 0 0) (bruijn ##.k.1454 1 0) (bruijn ##.xs.516 1 2) (bruijn ##.ys.517 1 3) (bruijn ##.zs.518 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D519_lambda87, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      statics->vars[2],
      statics->vars[3],
      statics->vars[4]);
    }
}
__attribute__((used)) static void _V20Case3__V10_Dmap_D219_lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D525_lambda88)) ((bruijn ##.loop.525 0 0) (bruijn ##.k.1468 1 0) (bruijn ##.lsts.524 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D525_lambda88, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
void _V10_Dmap_D219_lambda84(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmap_D219_lambda84, @function\n"
#endif
"_V10_Dmap_D219_lambda84:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dmap_D219_lambda84\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dmap_D219_lambda84\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dmap_D219_lambda84\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V10_Dmap_D219_lambda84\n"
"    jmp _V20CaseError__V10_Dmap_D219_lambda84\n"
);
static void _V10_Dloop_D529_k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D529_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.529 2 0) (bruijn ##.k.1477 1 0) (##inline ##vcore.cdr (bruijn ##.xs.530 1 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]));
}
static void _V10_Dloop_D529_lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D529_lambda90, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.xs.530 0 1))) ((bruijn ##.f.527 2 1) (close _V10_Dloop_D529_k99) (##inline ##vcore.car (bruijn ##.xs.530 0 1))) ((bruijn ##.k.1477 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineNullP2(runtime,
        _var1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D529_k99, self)})),
      VInlineCar2(runtime,
        _var1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D534_k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D534_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1492 1 0) ((bruijn ##.k.1493 0 0) (bruijn ##.p.1492 1 0)) ((bruijn ##.k.1493 0 0) (##inline ##vcore.null? (bruijn ##.ys.536 2 2))))
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
static void _V10_Dloop_D534_k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D534_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.534 4 0) (bruijn ##.k.1484 3 0) (##inline ##vcore.cdr (bruijn ##.xs.535 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.536 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D534_k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D534_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1491 0 0)) ((bruijn ##.f.531 4 1) (close _V10_Dloop_D534_k103) (##inline ##vcore.car (bruijn ##.xs.535 2 1)) (##inline ##vcore.car (bruijn ##.ys.536 2 2))) ((bruijn ##.k.1484 2 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D534_k103, self)})),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D534_k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D534_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D534_k101) (close _V10_Dloop_D534_k102))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D534_k101, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D534_k102, self)})));
}
static void _V10_Dloop_D534_lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D534_lambda91, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D534_k100) (##inline ##vcore.null? (bruijn ##.xs.535 0 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D534_k100, .env = self }, }, 1,
      VInlineNullP2(runtime,
        _var1));
}
static void _V10_Dloop_D541_k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D541_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1507 0 0) ((bruijn ##.k.1506 1 0) (bruijn ##.p.1507 0 0)) ((bruijn ##.k.1506 1 0) (##inline ##vcore.null? (bruijn ##.zs.544 3 3))))
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
static void _V10_Dloop_D541_k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D541_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1505 1 0) ((bruijn ##.k.1506 0 0) (bruijn ##.p.1505 1 0)) ((close _V10_Dloop_D541_k106) (##inline ##vcore.null? (bruijn ##.ys.543 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D541_k106, .env = self }, }, 1,
      VInlineNullP2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dloop_D541_k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D541_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.541 4 0) (bruijn ##.k.1495 3 0) (##inline ##vcore.cdr (bruijn ##.xs.542 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.543 3 2)) (##inline ##vcore.cdr (bruijn ##.zs.544 3 3)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 4,
      statics->up->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->up->vars[2]),
      VInlineCdr2(runtime,
        statics->up->up->vars[3]));
}
static void _V10_Dloop_D541_k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D541_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1504 0 0)) ((bruijn ##.f.537 4 1) (close _V10_Dloop_D541_k108) (##inline ##vcore.car (bruijn ##.xs.542 2 1)) (##inline ##vcore.car (bruijn ##.ys.543 2 2)) (##inline ##vcore.car (bruijn ##.zs.544 2 3))) ((bruijn ##.k.1495 2 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D541_k108, self)})),
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
static void _V10_Dloop_D541_k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D541_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D541_k105) (close _V10_Dloop_D541_k107))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D541_k105, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D541_k107, self)})));
}
static void _V10_Dloop_D541_lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D541_lambda92, got ~D~N"
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
  // ((close _V10_Dloop_D541_k104) (##inline ##vcore.null? (bruijn ##.xs.542 0 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D541_k104, .env = self }, }, 1,
      VInlineNullP2(runtime,
        _var1));
}
static void _V10_Dloop_D547_k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D547_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.547 6 0) (bruijn ##.k.1509 5 0) (bruijn ##.x.1512 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      _var0);
}
static void _V10_Dloop_D547_k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D547_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.219 7 80) (close _V10_Dloop_D547_k113) (##intrinsic ##vcore.cdr) (bruijn ##.lsts.548 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 80)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D547_k113, self)})),
      _V40_V10vcore_Dcdr,
      statics->up->up->up->vars[1]);
}
static void _V10_Dloop_D547_k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D547_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dloop_D547_k112) (bruijn ##.f.545 5 1) (bruijn ##.x.1513 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D547_k112, self)})),
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D547_k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D547_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1514 0 0)) ((bruijn ##.map.219 5 80) (close _V10_Dloop_D547_k111) (##intrinsic ##vcore.car) (bruijn ##.lsts.548 2 1)) ((bruijn ##.k.1509 2 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 80)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D547_k111, self)})),
      _V40_V10vcore_Dcar,
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D547_k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D547_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.memq.224 4 85) (close _V10_Dloop_D547_k110) #t (bruijn ##.x.1515 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[85]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D547_k110, self)})),
      VEncodeBool(true),
      _var0);
}
static void _V10_Dloop_D547_lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D547_lambda93, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.map.219 3 80) (close _V10_Dloop_D547_k109) (##intrinsic ##vcore.null?) (bruijn ##.lsts.548 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[80]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D547_k109, self)})),
      _V40_V10vcore_Dnull_Q,
      _var1);
}
__attribute__((used)) static void _V20CaseError__V10_Dfor__each_D220_lambda89(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dfor__each_D220_lambda89 #t (3 (letrec 1 ((close _V10_Dloop_D529_lambda90)) ((bruijn ##.loop.529 0 0) (bruijn ##.k.1476 1 0) (bruijn ##.xs.528 1 2)))) (4 (letrec 1 ((close _V10_Dloop_D534_lambda91)) ((bruijn ##.loop.534 0 0) (bruijn ##.k.1483 1 0) (bruijn ##.xs.532 1 2) (bruijn ##.ys.533 1 3)))) (5 (letrec 1 ((close _V10_Dloop_D541_lambda92)) ((bruijn ##.loop.541 0 0) (bruijn ##.k.1494 1 0) (bruijn ##.xs.538 1 2) (bruijn ##.ys.539 1 3) (bruijn ##.zs.540 1 4)))) (2 + (letrec 1 ((close _V10_Dloop_D547_lambda93)) ((bruijn ##.loop.547 0 0) (bruijn ##.k.1508 1 0) (bruijn ##.lsts.546 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dfor__each_D220_lambda89, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dfor__each_D220_lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D529_lambda90)) ((bruijn ##.loop.529 0 0) (bruijn ##.k.1476 1 0) (bruijn ##.xs.528 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D529_lambda90, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
__attribute__((used)) static void _V20Case1__V10_Dfor__each_D220_lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (letrec 1 ((close _V10_Dloop_D534_lambda91)) ((bruijn ##.loop.534 0 0) (bruijn ##.k.1483 1 0) (bruijn ##.xs.532 1 2) (bruijn ##.ys.533 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D534_lambda91, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[2],
      statics->vars[3]);
    }
}
__attribute__((used)) static void _V20Case2__V10_Dfor__each_D220_lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (letrec 1 ((close _V10_Dloop_D541_lambda92)) ((bruijn ##.loop.541 0 0) (bruijn ##.k.1494 1 0) (bruijn ##.xs.538 1 2) (bruijn ##.ys.539 1 3) (bruijn ##.zs.540 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D541_lambda92, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      statics->vars[2],
      statics->vars[3],
      statics->vars[4]);
    }
}
__attribute__((used)) static void _V20Case3__V10_Dfor__each_D220_lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D547_lambda93)) ((bruijn ##.loop.547 0 0) (bruijn ##.k.1508 1 0) (bruijn ##.lsts.546 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D547_lambda93, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
void _V10_Dfor__each_D220_lambda89(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dfor__each_D220_lambda89, @function\n"
#endif
"_V10_Dfor__each_D220_lambda89:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dfor__each_D220_lambda89\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dfor__each_D220_lambda89\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dfor__each_D220_lambda89\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V10_Dfor__each_D220_lambda89\n"
"    jmp _V20CaseError__V10_Dfor__each_D220_lambda89\n"
);
static void _V10_Dloop_D552_k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D552_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kons.549 3 1) (bruijn ##.k.1517 1 0) (##inline ##vcore.car (bruijn ##.ks.553 1 1)) (bruijn ##.x.1520 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
static void _V10_Dloop_D552_lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D552_lambda95, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.ks.553 0 1)) ((bruijn ##.k.1517 0 0) (bruijn ##.knil.550 2 2)) ((bruijn ##.loop.552 1 0) (close _V10_Dloop_D552_k114) (##inline ##vcore.cdr (bruijn ##.ks.553 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D552_k114, self)})),
      VInlineCdr2(runtime,
        _var1));
}
}
static void _V10_Dfold__right_D221_lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold__right_D221_lambda94, got ~D~N"
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
  // (letrec 1 ((close _V10_Dloop_D552_lambda95)) ((bruijn ##.loop.552 0 0) (bruijn ##.k.1516 1 0) (bruijn ##.ks.551 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D552_lambda95, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[3]);
    }
}
static void _V10_Dloop_D557_k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1525 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.a.558 1 1)) (bruijn ##.x.1528 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
static void _V10_Dloop_D557_lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_lambda97, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.a.558 0 1)) ((bruijn ##.k.1525 0 0) (bruijn ##.b.556 2 2)) ((bruijn ##.loop.557 1 0) (close _V10_Dloop_D557_k115) (##inline ##vcore.cdr (bruijn ##.a.558 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D557_k115, self)})),
      VInlineCdr2(runtime,
        _var1));
}
}
static void _V10_Dappend_D222_k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_D222_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.222 2 83) (bruijn ##.k.1530 1 0) (bruijn ##.a.559 1 1) (bruijn ##.x.1531 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[83]), 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
static void _V10_Dappend_D222_k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_D222_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.222 3 83) (bruijn ##.k.1532 2 0) (bruijn ##.a.562 2 1) (bruijn ##.x.1533 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[83]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dappend_D222_k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_D222_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.222 2 83) (close _V10_Dappend_D222_k118) (bruijn ##.b.563 1 2) (bruijn ##.x.1534 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[83]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dappend_D222_k118, self)})),
      statics->vars[2],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dappend_D222_lambda96(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dappend_D222_lambda96 #t (1 ((bruijn ##.k.1522 0 0) '())) (2 ((bruijn ##.k.1523 0 0) (bruijn ##.a.554 0 1))) (3 (letrec 1 ((close _V10_Dloop_D557_lambda97)) ((bruijn ##.loop.557 0 0) (bruijn ##.k.1524 1 0) (bruijn ##.a.555 1 1)))) (4 ((bruijn ##.append.222 1 83) (close _V10_Dappend_D222_k116) (bruijn ##.b.560 0 2) (bruijn ##.c.561 0 3))) (5 ((bruijn ##.append.222 1 83) (close _V10_Dappend_D222_k117) (bruijn ##.c.564 0 3) (bruijn ##.d.565 0 4))) (1 + ((bruijn ##.fold-right.221 1 82) (bruijn ##.k.1535 0 0) (bruijn ##.append.222 1 83) '() (bruijn ##.lsts.566 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dappend_D222_lambda96, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dappend_D222_lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // ((bruijn ##.k.1522 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
__attribute__((used)) static void _V20Case1__V10_Dappend_D222_lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1523 0 0) (bruijn ##.a.554 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V10_Dappend_D222_lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D557_lambda97)) ((bruijn ##.loop.557 0 0) (bruijn ##.k.1524 1 0) (bruijn ##.a.555 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D557_lambda97, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[1]);
    }
}
__attribute__((used)) static void _V20Case3__V10_Dappend_D222_lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((bruijn ##.append.222 1 83) (close _V10_Dappend_D222_k116) (bruijn ##.b.560 0 2) (bruijn ##.c.561 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[83]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dappend_D222_k116, self)})),
      _var2,
      _var3);
}
__attribute__((used)) static void _V20Case4__V10_Dappend_D222_lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // ((bruijn ##.append.222 1 83) (close _V10_Dappend_D222_k117) (bruijn ##.c.564 0 3) (bruijn ##.d.565 0 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[83]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dappend_D222_k117, self)})),
      _var3,
      _var4);
}
__attribute__((used)) static void _V20Case5__V10_Dappend_D222_lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // ((bruijn ##.fold-right.221 1 82) (bruijn ##.k.1535 0 0) (bruijn ##.append.222 1 83) '() (bruijn ##.lsts.566 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[82]), 4,
      _var0,
      statics->vars[83],
      VNULL,
      _varargs);
}
void _V10_Dappend_D222_lambda96(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dappend_D222_lambda96, @function\n"
#endif
"_V10_Dappend_D222_lambda96:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dappend_D222_lambda96\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dappend_D222_lambda96\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dappend_D222_lambda96\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dappend_D222_lambda96\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V10_Dappend_D222_lambda96\n"
"    cmp " ARGC_REG ", 1\n"
"    jge _V20Case5__V10_Dappend_D222_lambda96\n"
"    jmp _V20CaseError__V10_Dappend_D222_lambda96\n"
);
static void _V10_Diter_D568_lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D568_lambda99, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (##inline ##vcore.null? (bruijn ##.rest.570 0 2)) ((bruijn ##.k.1537 0 0) (bruijn ##.acc.569 0 1)) ((bruijn ##.iter.568 1 0) (bruijn ##.k.1537 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.rest.570 0 2)) (bruijn ##.acc.569 0 1)) (##inline ##vcore.cdr (bruijn ##.rest.570 0 2))))
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
static void _V10_Dreverse_D223_lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreverse_D223_lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Diter_D568_lambda99)) ((bruijn ##.iter.568 0 0) (bruijn ##.k.1536 1 0) '() (bruijn ##.lst.567 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D568_lambda99, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VNULL,
      statics->vars[1]);
    }
}
static void _V10_Dmemq_D224_lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemq_D224_lambda100, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (##inline ##vcore.null? (bruijn ##.lst.572 0 2)) ((bruijn ##.k.1542 0 0) #f) (if (##inline ##vcore.eq? (bruijn ##.x.571 0 1) (##inline ##vcore.car (bruijn ##.lst.572 0 2))) ((bruijn ##.k.1542 0 0) (bruijn ##.lst.572 0 2)) ((bruijn ##.memq.224 1 85) (bruijn ##.k.1542 0 0) (bruijn ##.x.571 0 1) (##inline ##vcore.cdr (bruijn ##.lst.572 0 2)))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[85]), 3,
      _var0,
      _var1,
      VInlineCdr2(runtime,
        _var2));
}
}
}
static void _V10_Dmemv_D225_k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemv_D225_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1549 0 0) ((bruijn ##.k.1547 1 0) (bruijn ##.lst.574 1 2)) ((bruijn ##.memv.225 2 86) (bruijn ##.k.1547 1 0) (bruijn ##.x.573 1 1) (##inline ##vcore.cdr (bruijn ##.lst.574 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[86]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dmemv_D225_lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemv_D225_lambda101, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.lst.574 0 2)) ((bruijn ##.k.1547 0 0) #f) (##vcore.eqv? (close _V10_Dmemv_D225_k119) (bruijn ##.x.573 0 1) (##inline ##vcore.car (bruijn ##.lst.574 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemv_D225_k119, self)})),
      _var1,
      VInlineCar2(runtime,
        _var2));
}
}
static void _V10_Dmember_D226_k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmember_D226_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1555 0 0) ((bruijn ##.k.1553 1 0) (bruijn ##.lst.578 1 2)) ((bruijn ##.member.226 2 87) (bruijn ##.k.1553 1 0) (bruijn ##.x.577 1 1) (##inline ##vcore.cdr (bruijn ##.lst.578 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[87]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
}
__attribute__((used)) static void _V20CaseError__V10_Dmember_D226_lambda102(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmember_D226_lambda102 #t (3 ((bruijn ##.member.226 1 87) (bruijn ##.k.1552 0 0) (bruijn ##.x.575 0 1) (bruijn ##.lst.576 0 2) (bruijn ##.equal?.150 1 11))) (4 (if (##inline ##vcore.null? (bruijn ##.lst.578 0 2)) ((bruijn ##.k.1553 0 0) #f) ((bruijn ##.=.579 0 3) (close _V10_Dmember_D226_k120) (bruijn ##.x.577 0 1) (##inline ##vcore.car (bruijn ##.lst.578 0 2))))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmember_D226_lambda102, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmember_D226_lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // ((bruijn ##.member.226 1 87) (bruijn ##.k.1552 0 0) (bruijn ##.x.575 0 1) (bruijn ##.lst.576 0 2) (bruijn ##.equal?.150 1 11))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[87]), 4,
      _var0,
      _var1,
      _var2,
      statics->vars[11]);
}
__attribute__((used)) static void _V20Case1__V10_Dmember_D226_lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.lst.578 0 2)) ((bruijn ##.k.1553 0 0) #f) ((bruijn ##.=.579 0 3) (close _V10_Dmember_D226_k120) (bruijn ##.x.577 0 1) (##inline ##vcore.car (bruijn ##.lst.578 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var3), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmember_D226_k120, self)})),
      _var1,
      VInlineCar2(runtime,
        _var2));
}
}
void _V10_Dmember_D226_lambda102(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmember_D226_lambda102, @function\n"
#endif
"_V10_Dmember_D226_lambda102:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dmember_D226_lambda102\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dmember_D226_lambda102\n"
"    jmp _V20CaseError__V10_Dmember_D226_lambda102\n"
);
static void _V10_Dassq_D227_k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq_D227_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (bruijn ##.x.580 1 1) (bruijn ##.x.1562 0 0)) ((bruijn ##.k.1558 1 0) (##inline ##vcore.car (bruijn ##.alst.581 1 2))) ((bruijn ##.assq.227 2 88) (bruijn ##.k.1558 1 0) (bruijn ##.x.580 1 1) (##inline ##vcore.cdr (bruijn ##.alst.581 1 2))))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[1],
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCar2(runtime,
        statics->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[88]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dassq_D227_lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq_D227_lambda103, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.alst.581 0 2)) ((bruijn ##.k.1558 0 0) #f) ((bruijn ##.caar.183 1 44) (close _V10_Dassq_D227_k121) (bruijn ##.alst.581 0 2)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[44]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq_D227_k121, self)})),
      _var2);
}
}
static void _V10_Dassv_D228_k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv_D228_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1565 0 0) ((bruijn ##.k.1563 2 0) (##inline ##vcore.car (bruijn ##.alst.583 2 2))) ((bruijn ##.assv.228 3 89) (bruijn ##.k.1563 2 0) (bruijn ##.x.582 2 1) (##inline ##vcore.cdr (bruijn ##.alst.583 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[89]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dassv_D228_k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv_D228_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V10_Dassv_D228_k123) (bruijn ##.x.582 1 1) (bruijn ##.x.1567 0 0))
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv_D228_k123, self)})),
      statics->vars[1],
      _var0);
}
static void _V10_Dassv_D228_lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv_D228_lambda104, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.alst.583 0 2)) ((bruijn ##.k.1563 0 0) #f) ((bruijn ##.caar.183 1 44) (close _V10_Dassv_D228_k122) (bruijn ##.alst.583 0 2)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[44]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv_D228_k122, self)})),
      _var2);
}
}
static void _V10_Dassoc_D229_k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc_D229_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1571 0 0) ((bruijn ##.k.1569 2 0) (##inline ##vcore.car (bruijn ##.alst.587 2 2))) ((bruijn ##.assoc.229 3 90) (bruijn ##.k.1569 2 0) (bruijn ##.x.586 2 1) (##inline ##vcore.cdr (bruijn ##.alst.587 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[90]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dassoc_D229_k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc_D229_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.=.588 1 3) (close _V10_Dassoc_D229_k125) (bruijn ##.x.586 1 1) (bruijn ##.x.1573 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[3]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc_D229_k125, self)})),
      statics->vars[1],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dassoc_D229_lambda105(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dassoc_D229_lambda105 #t (3 ((bruijn ##.assoc.229 1 90) (bruijn ##.k.1568 0 0) (bruijn ##.x.584 0 1) (bruijn ##.alst.585 0 2) (bruijn ##.equal?.150 1 11))) (4 (if (##inline ##vcore.null? (bruijn ##.alst.587 0 2)) ((bruijn ##.k.1569 0 0) #f) ((bruijn ##.caar.183 1 44) (close _V10_Dassoc_D229_k124) (bruijn ##.alst.587 0 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dassoc_D229_lambda105, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dassoc_D229_lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // ((bruijn ##.assoc.229 1 90) (bruijn ##.k.1568 0 0) (bruijn ##.x.584 0 1) (bruijn ##.alst.585 0 2) (bruijn ##.equal?.150 1 11))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[90]), 4,
      _var0,
      _var1,
      _var2,
      statics->vars[11]);
}
__attribute__((used)) static void _V20Case1__V10_Dassoc_D229_lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.alst.587 0 2)) ((bruijn ##.k.1569 0 0) #f) ((bruijn ##.caar.183 1 44) (close _V10_Dassoc_D229_k124) (bruijn ##.alst.587 0 2)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[44]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc_D229_k124, self)})),
      _var2);
}
}
void _V10_Dassoc_D229_lambda105(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dassoc_D229_lambda105, @function\n"
#endif
"_V10_Dassoc_D229_lambda105:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dassoc_D229_lambda105\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dassoc_D229_lambda105\n"
"    jmp _V20CaseError__V10_Dassoc_D229_lambda105\n"
);
static void _V10_Dloop_D590_lambda107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D590_lambda107, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.lst.592 0 2)) (basic-block 1 1 (##.reg.2879) ((##vcore.+ (bruijn ##.n.591 1 1) 1)) ((bruijn ##.loop.590 2 0) (bruijn ##.k.1575 1 0) (bruijn ##.reg.2879 0 0) (##inline ##vcore.cdr (bruijn ##.lst.592 1 2)))) ((bruijn ##.k.1575 0 0) (bruijn ##.n.591 0 1)))
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
static void _V10_Dnum__pairs_D230_lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dnum__pairs_D230_lambda106, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D590_lambda107)) ((bruijn ##.loop.590 0 0) (bruijn ##.k.1574 1 0) 0 (bruijn ##.lst.589 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D590_lambda107, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VEncodeInt(0l),
      statics->vars[1]);
    }
}
static void _V10_Dloop_D595_lambda110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D595_lambda110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2880) ((##vcore.- (bruijn ##.len.597 2 2) 1)) ((bruijn ##.loop.595 3 0) (bruijn ##.k.1582 1 0) (##inline ##vcore.cdr (bruijn ##.lst.596 2 1)) (bruijn ##.reg.2880 0 0)))
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
static void _V10_Dloop_D595_lambda111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D595_lambda111, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.values.304 4 165) (bruijn ##.k.1585 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.596 1 1)) (bruijn ##.d.598 0 1)) (bruijn ##.t.599 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[165]), 3,
      _var0,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var1),
      _var2);
}
static void _V10_Dloop_D595_lambda109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D595_lambda109, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.len.597 0 2) (bruijn ##.n.594 2 2)) ((bruijn ##.values.304 3 165) (bruijn ##.k.1580 0 0) '() (bruijn ##.lst.596 0 1)) (##vcore.call-with-values (bruijn ##.k.1580 0 0) (close _V10_Dloop_D595_lambda110) (close _V10_Dloop_D595_lambda111)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var2,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[165]), 3,
      _var0,
      VNULL,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D595_lambda110, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D595_lambda111, self)})));
}
}
static void _V10_Dsplit__at__right_D231_k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at__right_D231_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.595 1 0) (bruijn ##.k.1579 2 0) (bruijn ##.lst.593 2 1) (bruijn ##.x.1588 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dsplit__at__right_D231_lambda108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at__right_D231_lambda108, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D595_lambda109)) ((bruijn ##.num-pairs.230 2 91) (close _V10_Dsplit__at__right_D231_k126) (bruijn ##.lst.593 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D595_lambda109, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[91]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at__right_D231_k126, self)})),
      statics->vars[1]);
    }
}
static void _V10_Dloop_D602_lambda113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D602_lambda113, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.lst.603 0 1)) ((bruijn ##.k.1590 0 0) (bruijn ##.str.601 2 0)) (basic-block 2 2 (##.reg.2881 ##.reg.2882) ((##vcore.string-set! (bruijn ##.str.601 3 0) (bruijn ##.i.604 1 2) (##inline ##vcore.car (bruijn ##.lst.603 1 1))) (##vcore.+ (bruijn ##.i.604 1 2) 1)) ((bruijn ##.loop.602 2 0) (bruijn ##.k.1590 1 0) (##inline ##vcore.cdr (bruijn ##.lst.603 1 1)) (bruijn ##.reg.2882 0 1))))
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
static void _V10_Dlist___Gstring_D232_k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist___Gstring_D232_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D602_lambda113)) ((bruijn ##.loop.602 0 0) (bruijn ##.k.1589 3 0) (bruijn ##.lst.600 3 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D602_lambda113, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      VEncodeInt(0l));
    }
}
static void _V10_Dlist___Gstring_D232_k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist___Gstring_D232_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-string (close _V10_Dlist___Gstring_D232_k128) (bruijn ##.x.1596 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeString2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist___Gstring_D232_k128, self)})),
      _var0);
}
static void _V10_Dlist___Gstring_D232_lambda112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist___Gstring_D232_lambda112, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.length.213 1 74) (close _V10_Dlist___Gstring_D232_k127) (bruijn ##.lst.600 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[74]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist___Gstring_D232_k127, self)})),
      _var1);
}
static void _V10_Dloop_D606_lambda115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D606_lambda115, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.i.607 0 1) -1) ((bruijn ##.k.1598 0 0) (bruijn ##.acc.608 0 2)) (basic-block 2 2 (##.reg.2883 ##.reg.2884) ((##vcore.- (bruijn ##.i.607 1 1) 1) (##vcore.string-ref (bruijn ##.str.605 3 1) (bruijn ##.i.607 1 1))) ((bruijn ##.loop.606 2 0) (bruijn ##.k.1598 1 0) (bruijn ##.reg.2883 0 0) (##inline ##vcore.cons (bruijn ##.reg.2884 0 1) (bruijn ##.acc.608 1 2)))))
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
static void _V10_Dstring___Glist_D233_lambda114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring___Glist_D233_lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D606_lambda115)) (basic-block 2 2 (##.reg.2885 ##.reg.2886) ((##vcore.string-length (bruijn ##.str.605 2 1)) (##vcore.- (bruijn ##.reg.2885 0 0) 1)) ((bruijn ##.loop.606 1 0) (bruijn ##.k.1597 2 0) (bruijn ##.reg.2886 0 1) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D606_lambda115, self)}));
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
static void _V10_Dstring__append_D234_k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D234_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1607 5 0) (bruijn ##.str.613 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dstring__append_D234_k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D234_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2890) ((##vcore.string-length (bruijn ##.a.610 4 1))) (##vcore.string-copy! (close _V10_Dstring__append_D234_k131) (bruijn ##.str.613 2 0) (bruijn ##.reg.2890 0 0) (bruijn ##.b.611 4 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D234_k131, self)})),
      statics->up->vars[0],
      self->vars[0],
      statics->up->up->up->vars[2]);
    }
}
static void _V10_Dstring__append_D234_k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D234_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string-copy! (close _V10_Dstring__append_D234_k130) (bruijn ##.str.613 0 0) 0 (bruijn ##.a.610 2 1))
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D234_k130, self)})),
      _var0,
      VEncodeInt(0l),
      statics->up->vars[1]);
}
static void _V10_Dstring__append_D234_k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D234_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1613 7 0) (bruijn ##.str.618 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dstring__append_D234_k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D234_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.reg.2896 ##.reg.2897 ##.reg.2898) ((##vcore.string-length (bruijn ##.a.614 6 1)) (##vcore.string-length (bruijn ##.b.615 6 2)) (##vcore.+ (bruijn ##.reg.2896 0 0) (bruijn ##.reg.2897 0 1))) (##vcore.string-copy! (close _V10_Dstring__append_D234_k135) (bruijn ##.str.618 4 0) (bruijn ##.reg.2898 0 2) (bruijn ##.c.616 6 3)))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D234_k135, self)})),
      statics->up->up->up->vars[0],
      self->vars[2],
      VGetArg(statics, 6-1, 3));
    }
}
static void _V10_Dstring__append_D234_k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D234_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2895) ((##vcore.string-length (bruijn ##.a.614 4 1))) (##vcore.string-copy! (close _V10_Dstring__append_D234_k134) (bruijn ##.str.618 2 0) (bruijn ##.reg.2895 0 0) (bruijn ##.b.615 4 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D234_k134, self)})),
      statics->up->vars[0],
      self->vars[0],
      statics->up->up->up->vars[2]);
    }
}
static void _V10_Dstring__append_D234_k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D234_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string-copy! (close _V10_Dstring__append_D234_k133) (bruijn ##.str.618 0 0) 0 (bruijn ##.a.614 2 1))
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D234_k133, self)})),
      _var0,
      VEncodeInt(0l),
      statics->up->vars[1]);
}
static void _V10_Dstring__append_D234_k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D234_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1624 9 0) (bruijn ##.str.624 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dstring__append_D234_k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D234_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.reg.2908 ##.reg.2909 ##.reg.2910 ##.reg.2911) ((##vcore.string-length (bruijn ##.a.619 8 1)) (##vcore.string-length (bruijn ##.b.620 8 2)) (##vcore.string-length (bruijn ##.c.621 8 3)) (##vcore.+ (bruijn ##.reg.2908 0 0) (bruijn ##.reg.2909 0 1) (bruijn ##.reg.2910 0 2))) (##vcore.string-copy! (close _V10_Dstring__append_D234_k140) (bruijn ##.str.624 6 0) (bruijn ##.reg.2911 0 3) (bruijn ##.d.622 8 4)))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D234_k140, self)})),
      VGetArg(statics, 6-1, 0),
      self->vars[3],
      VGetArg(statics, 8-1, 4));
    }
}
static void _V10_Dstring__append_D234_k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D234_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.reg.2905 ##.reg.2906 ##.reg.2907) ((##vcore.string-length (bruijn ##.a.619 6 1)) (##vcore.string-length (bruijn ##.b.620 6 2)) (##vcore.+ (bruijn ##.reg.2905 0 0) (bruijn ##.reg.2906 0 1))) (##vcore.string-copy! (close _V10_Dstring__append_D234_k139) (bruijn ##.str.624 4 0) (bruijn ##.reg.2907 0 2) (bruijn ##.c.621 6 3)))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D234_k139, self)})),
      statics->up->up->up->vars[0],
      self->vars[2],
      VGetArg(statics, 6-1, 3));
    }
}
static void _V10_Dstring__append_D234_k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D234_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2904) ((##vcore.string-length (bruijn ##.a.619 4 1))) (##vcore.string-copy! (close _V10_Dstring__append_D234_k138) (bruijn ##.str.624 2 0) (bruijn ##.reg.2904 0 0) (bruijn ##.b.620 4 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D234_k138, self)})),
      statics->up->vars[0],
      self->vars[0],
      statics->up->up->up->vars[2]);
    }
}
static void _V10_Dstring__append_D234_k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D234_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string-copy! (close _V10_Dstring__append_D234_k137) (bruijn ##.str.624 0 0) 0 (bruijn ##.a.619 2 1))
    VCallFuncWithGC(runtime, (VFunc)VStringCopy2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D234_k137, self)})),
      _var0,
      VEncodeInt(0l),
      statics->up->vars[1]);
}
__attribute__((used)) static void _V20CaseError__V10_Dstring__append_D234_lambda116(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dstring__append_D234_lambda116 #t (1 (##vcore.substring (bruijn ##.k.1605 0 0) (##string ##.string.3074))) (2 (##vcore.substring (bruijn ##.k.1606 0 0) (bruijn ##.a.609 0 1))) (3 (basic-block 3 3 (##.reg.2887 ##.reg.2888 ##.reg.2889) ((##vcore.string-length (bruijn ##.a.610 1 1)) (##vcore.string-length (bruijn ##.b.611 1 2)) (##vcore.+ (bruijn ##.reg.2887 0 0) (bruijn ##.reg.2888 0 1))) (##vcore.make-string (close _V10_Dstring__append_D234_k129) (bruijn ##.reg.2889 0 2)))) (4 (basic-block 4 4 (##.reg.2891 ##.reg.2892 ##.reg.2893 ##.reg.2894) ((##vcore.string-length (bruijn ##.a.614 1 1)) (##vcore.string-length (bruijn ##.b.615 1 2)) (##vcore.string-length (bruijn ##.c.616 1 3)) (##vcore.+ (bruijn ##.reg.2891 0 0) (bruijn ##.reg.2892 0 1) (bruijn ##.reg.2893 0 2))) (##vcore.make-string (close _V10_Dstring__append_D234_k132) (bruijn ##.reg.2894 0 3)))) (5 (basic-block 5 5 (##.reg.2899 ##.reg.2900 ##.reg.2901 ##.reg.2902 ##.reg.2903) ((##vcore.string-length (bruijn ##.a.619 1 1)) (##vcore.string-length (bruijn ##.b.620 1 2)) (##vcore.string-length (bruijn ##.c.621 1 3)) (##vcore.string-length (bruijn ##.d.622 1 4)) (##vcore.+ (bruijn ##.reg.2899 0 0) (bruijn ##.reg.2900 0 1) (bruijn ##.reg.2901 0 2) (bruijn ##.reg.2902 0 3))) (##vcore.make-string (close _V10_Dstring__append_D234_k136) (bruijn ##.reg.2903 0 4)))) (1 + ((bruijn ##.fold-right.221 1 82) (bruijn ##.k.1641 0 0) (bruijn ##.string-append.234 1 95) (##string ##.string.3074) (bruijn ##.strs.625 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D234_lambda116, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dstring__append_D234_lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // (##vcore.substring (bruijn ##.k.1605 0 0) (##string ##.string.3074))
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D3074.sym, VPOINTER_OTHER));
}
__attribute__((used)) static void _V20Case1__V10_Dstring__append_D234_lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.substring (bruijn ##.k.1606 0 0) (bruijn ##.a.609 0 1))
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 2,
      _var0,
      _var1);
}
__attribute__((used)) static void _V20Case2__V10_Dstring__append_D234_lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.reg.2887 ##.reg.2888 ##.reg.2889) ((##vcore.string-length (bruijn ##.a.610 1 1)) (##vcore.string-length (bruijn ##.b.611 1 2)) (##vcore.+ (bruijn ##.reg.2887 0 0) (bruijn ##.reg.2888 0 1))) (##vcore.make-string (close _V10_Dstring__append_D234_k129) (bruijn ##.reg.2889 0 2)))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D234_k129, self)})),
      self->vars[2]);
    }
}
__attribute__((used)) static void _V20Case3__V10_Dstring__append_D234_lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 4 4 (##.reg.2891 ##.reg.2892 ##.reg.2893 ##.reg.2894) ((##vcore.string-length (bruijn ##.a.614 1 1)) (##vcore.string-length (bruijn ##.b.615 1 2)) (##vcore.string-length (bruijn ##.c.616 1 3)) (##vcore.+ (bruijn ##.reg.2891 0 0) (bruijn ##.reg.2892 0 1) (bruijn ##.reg.2893 0 2))) (##vcore.make-string (close _V10_Dstring__append_D234_k132) (bruijn ##.reg.2894 0 3)))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D234_k132, self)})),
      self->vars[3]);
    }
}
__attribute__((used)) static void _V20Case4__V10_Dstring__append_D234_lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 5 5 (##.reg.2899 ##.reg.2900 ##.reg.2901 ##.reg.2902 ##.reg.2903) ((##vcore.string-length (bruijn ##.a.619 1 1)) (##vcore.string-length (bruijn ##.b.620 1 2)) (##vcore.string-length (bruijn ##.c.621 1 3)) (##vcore.string-length (bruijn ##.d.622 1 4)) (##vcore.+ (bruijn ##.reg.2899 0 0) (bruijn ##.reg.2900 0 1) (bruijn ##.reg.2901 0 2) (bruijn ##.reg.2902 0 3))) (##vcore.make-string (close _V10_Dstring__append_D234_k136) (bruijn ##.reg.2903 0 4)))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D234_k136, self)})),
      self->vars[4]);
    }
}
__attribute__((used)) static void _V20Case5__V10_Dstring__append_D234_lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // ((bruijn ##.fold-right.221 1 82) (bruijn ##.k.1641 0 0) (bruijn ##.string-append.234 1 95) (##string ##.string.3074) (bruijn ##.strs.625 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[82]), 4,
      _var0,
      statics->vars[95],
      VEncodePointer(&_V10_Dstring_D3074.sym, VPOINTER_OTHER),
      _varargs);
}
void _V10_Dstring__append_D234_lambda116(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dstring__append_D234_lambda116, @function\n"
#endif
"_V10_Dstring__append_D234_lambda116:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dstring__append_D234_lambda116\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dstring__append_D234_lambda116\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dstring__append_D234_lambda116\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dstring__append_D234_lambda116\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V10_Dstring__append_D234_lambda116\n"
"    cmp " ARGC_REG ", 1\n"
"    jge _V20Case5__V10_Dstring__append_D234_lambda116\n"
"    jmp _V20CaseError__V10_Dstring__append_D234_lambda116\n"
);
static void _V10_Dvector_D235_lambda117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector_D235_lambda117, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.list->vector (bruijn ##.k.1642 0 0) (bruijn ##.args.626 0 1))
    VCallFuncWithGC(runtime, (VFunc)VListVector2, 2,
      _var0,
      _varargs);
}
__attribute__((used)) static void _V20CaseError__V10_Dmake__f32vector_D236_lambda118(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__f32vector_D236_lambda118 #t (2 (##vcore.make-f32vector (bruijn ##.k.1643 0 0) (bruijn ##.len.627 0 1) #f)) (3 (##vcore.make-f32vector (bruijn ##.k.1644 0 0) (bruijn ##.len.628 0 1) (bruijn ##.fill.629 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__f32vector_D236_lambda118, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__f32vector_D236_lambda118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.make-f32vector (bruijn ##.k.1643 0 0) (bruijn ##.len.627 0 1) #f)
    VCallFuncWithGC(runtime, (VFunc)VMakeF32Vector, 3,
      _var0,
      _var1,
      VEncodeBool(false));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__f32vector_D236_lambda118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.make-f32vector (bruijn ##.k.1644 0 0) (bruijn ##.len.628 0 1) (bruijn ##.fill.629 0 2))
    VCallFuncWithGC(runtime, (VFunc)VMakeF32Vector, 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Dmake__f32vector_D236_lambda118(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__f32vector_D236_lambda118, @function\n"
#endif
"_V10_Dmake__f32vector_D236_lambda118:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__f32vector_D236_lambda118\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__f32vector_D236_lambda118\n"
"    jmp _V20CaseError__V10_Dmake__f32vector_D236_lambda118\n"
);
static void _V10_Df32vector_D237_lambda119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Df32vector_D237_lambda119, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.list->f32vector (bruijn ##.k.1645 0 0) (bruijn ##.args.630 0 1))
    VCallFuncWithGC(runtime, (VFunc)VListF32Vector, 2,
      _var0,
      _varargs);
}
static void _V10_Dloop_D633_k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D633_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1648 0 0) ((bruijn ##.k.1647 1 0) (bruijn ##.acc.634 1 1)) (basic-block 2 2 (##.reg.2913 ##.reg.2914) ((##vcore.f32vector-ref (bruijn ##.vec.631 5 1) (bruijn ##.i.635 2 2)) (##vcore.- (bruijn ##.i.635 2 2) 1)) ((bruijn ##.loop.633 3 0) (bruijn ##.k.1647 2 0) (##inline ##vcore.cons (bruijn ##.reg.2913 0 0) (bruijn ##.acc.634 2 1)) (bruijn ##.reg.2914 0 1))))
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
static void _V10_Dloop_D633_lambda121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D633_lambda121, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.<.151 4 12) (close _V10_Dloop_D633_k141) (bruijn ##.i.635 0 2) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[12]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D633_k141, self)})),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Df32vector___Glist_D238_lambda120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Df32vector___Glist_D238_lambda120, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2912) ((##vcore.f32vector-length (bruijn ##.vec.631 1 1))) (letrec 1 ((close _V10_Dloop_D633_lambda121)) (basic-block 1 1 (##.reg.2915) ((##vcore.- (bruijn ##.reg.2912 2 0) 1)) ((bruijn ##.loop.633 1 0) (bruijn ##.k.1646 3 0) '() (bruijn ##.reg.2915 0 0)))))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D633_lambda121, self)}));
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
__attribute__((used)) static void _V20CaseError__V10_Dmake__f64vector_D239_lambda122(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__f64vector_D239_lambda122 #t (2 (##vcore.make-f64vector (bruijn ##.k.1653 0 0) (bruijn ##.len.636 0 1) #f)) (3 (##vcore.make-f64vector (bruijn ##.k.1654 0 0) (bruijn ##.len.637 0 1) (bruijn ##.fill.638 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__f64vector_D239_lambda122, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__f64vector_D239_lambda122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.make-f64vector (bruijn ##.k.1653 0 0) (bruijn ##.len.636 0 1) #f)
    VCallFuncWithGC(runtime, (VFunc)VMakeF64Vector, 3,
      _var0,
      _var1,
      VEncodeBool(false));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__f64vector_D239_lambda122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.make-f64vector (bruijn ##.k.1654 0 0) (bruijn ##.len.637 0 1) (bruijn ##.fill.638 0 2))
    VCallFuncWithGC(runtime, (VFunc)VMakeF64Vector, 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Dmake__f64vector_D239_lambda122(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__f64vector_D239_lambda122, @function\n"
#endif
"_V10_Dmake__f64vector_D239_lambda122:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__f64vector_D239_lambda122\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__f64vector_D239_lambda122\n"
"    jmp _V20CaseError__V10_Dmake__f64vector_D239_lambda122\n"
);
static void _V10_Df64vector_D240_lambda123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Df64vector_D240_lambda123, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.list->f64vector (bruijn ##.k.1655 0 0) (bruijn ##.args.639 0 1))
    VCallFuncWithGC(runtime, (VFunc)VListF64Vector, 2,
      _var0,
      _varargs);
}
static void _V10_Dloop_D642_k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D642_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1658 0 0) ((bruijn ##.k.1657 1 0) (bruijn ##.acc.643 1 1)) (basic-block 2 2 (##.reg.2917 ##.reg.2918) ((##vcore.f64vector-ref (bruijn ##.vec.640 5 1) (bruijn ##.i.644 2 2)) (##vcore.- (bruijn ##.i.644 2 2) 1)) ((bruijn ##.loop.642 3 0) (bruijn ##.k.1657 2 0) (##inline ##vcore.cons (bruijn ##.reg.2917 0 0) (bruijn ##.acc.643 2 1)) (bruijn ##.reg.2918 0 1))))
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
static void _V10_Dloop_D642_lambda125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D642_lambda125, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.<.151 4 12) (close _V10_Dloop_D642_k142) (bruijn ##.i.644 0 2) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[12]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D642_k142, self)})),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Df64vector___Glist_D241_lambda124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Df64vector___Glist_D241_lambda124, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2916) ((##vcore.f64vector-length (bruijn ##.vec.640 1 1))) (letrec 1 ((close _V10_Dloop_D642_lambda125)) (basic-block 1 1 (##.reg.2919) ((##vcore.- (bruijn ##.reg.2916 2 0) 1)) ((bruijn ##.loop.642 1 0) (bruijn ##.k.1656 3 0) '() (bruijn ##.reg.2919 0 0)))))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D642_lambda125, self)}));
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
__attribute__((used)) static void _V20CaseError__V10_Dmake__s32vector_D242_lambda126(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__s32vector_D242_lambda126 #t (2 (##vcore.make-s32vector (bruijn ##.k.1663 0 0) (bruijn ##.len.645 0 1) #f)) (3 (##vcore.make-s32vector (bruijn ##.k.1664 0 0) (bruijn ##.len.646 0 1) (bruijn ##.fill.647 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__s32vector_D242_lambda126, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__s32vector_D242_lambda126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.make-s32vector (bruijn ##.k.1663 0 0) (bruijn ##.len.645 0 1) #f)
    VCallFuncWithGC(runtime, (VFunc)VMakeS32Vector, 3,
      _var0,
      _var1,
      VEncodeBool(false));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__s32vector_D242_lambda126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.make-s32vector (bruijn ##.k.1664 0 0) (bruijn ##.len.646 0 1) (bruijn ##.fill.647 0 2))
    VCallFuncWithGC(runtime, (VFunc)VMakeS32Vector, 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Dmake__s32vector_D242_lambda126(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__s32vector_D242_lambda126, @function\n"
#endif
"_V10_Dmake__s32vector_D242_lambda126:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__s32vector_D242_lambda126\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__s32vector_D242_lambda126\n"
"    jmp _V20CaseError__V10_Dmake__s32vector_D242_lambda126\n"
);
static void _V10_Ds32vector_D243_lambda127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds32vector_D243_lambda127, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.list->s32vector (bruijn ##.k.1665 0 0) (bruijn ##.args.648 0 1))
    VCallFuncWithGC(runtime, (VFunc)VListS32Vector, 2,
      _var0,
      _varargs);
}
static void _V10_Dloop_D651_k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D651_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1668 0 0) ((bruijn ##.k.1667 1 0) (bruijn ##.acc.652 1 1)) (basic-block 2 2 (##.reg.2921 ##.reg.2922) ((##vcore.s32vector-ref (bruijn ##.vec.649 5 1) (bruijn ##.i.653 2 2)) (##vcore.- (bruijn ##.i.653 2 2) 1)) ((bruijn ##.loop.651 3 0) (bruijn ##.k.1667 2 0) (##inline ##vcore.cons (bruijn ##.reg.2921 0 0) (bruijn ##.acc.652 2 1)) (bruijn ##.reg.2922 0 1))))
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
static void _V10_Dloop_D651_lambda129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D651_lambda129, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.<.151 4 12) (close _V10_Dloop_D651_k143) (bruijn ##.i.653 0 2) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[12]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D651_k143, self)})),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Ds32vector___Glist_D244_lambda128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds32vector___Glist_D244_lambda128, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2920) ((##vcore.s32vector-length (bruijn ##.vec.649 1 1))) (letrec 1 ((close _V10_Dloop_D651_lambda129)) (basic-block 1 1 (##.reg.2923) ((##vcore.- (bruijn ##.reg.2920 2 0) 1)) ((bruijn ##.loop.651 1 0) (bruijn ##.k.1666 3 0) '() (bruijn ##.reg.2923 0 0)))))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D651_lambda129, self)}));
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
__attribute__((used)) static void _V20CaseError__V10_Dmake__u16vector_D245_lambda130(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__u16vector_D245_lambda130 #t (2 (##vcore.make-u16vector (bruijn ##.k.1673 0 0) (bruijn ##.len.654 0 1) #f)) (3 (##vcore.make-u16vector (bruijn ##.k.1674 0 0) (bruijn ##.len.655 0 1) (bruijn ##.fill.656 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__u16vector_D245_lambda130, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__u16vector_D245_lambda130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.make-u16vector (bruijn ##.k.1673 0 0) (bruijn ##.len.654 0 1) #f)
    VCallFuncWithGC(runtime, (VFunc)VMakeU16Vector, 3,
      _var0,
      _var1,
      VEncodeBool(false));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__u16vector_D245_lambda130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.make-u16vector (bruijn ##.k.1674 0 0) (bruijn ##.len.655 0 1) (bruijn ##.fill.656 0 2))
    VCallFuncWithGC(runtime, (VFunc)VMakeU16Vector, 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Dmake__u16vector_D245_lambda130(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__u16vector_D245_lambda130, @function\n"
#endif
"_V10_Dmake__u16vector_D245_lambda130:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__u16vector_D245_lambda130\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__u16vector_D245_lambda130\n"
"    jmp _V20CaseError__V10_Dmake__u16vector_D245_lambda130\n"
);
static void _V10_Du16vector_D246_lambda131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du16vector_D246_lambda131, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.list->u16vector (bruijn ##.k.1675 0 0) (bruijn ##.args.657 0 1))
    VCallFuncWithGC(runtime, (VFunc)VListU16Vector, 2,
      _var0,
      _varargs);
}
static void _V10_Dloop_D660_k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D660_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1678 0 0) ((bruijn ##.k.1677 1 0) (bruijn ##.acc.661 1 1)) (basic-block 2 2 (##.reg.2925 ##.reg.2926) ((##vcore.u16vector-ref (bruijn ##.vec.658 5 1) (bruijn ##.i.662 2 2)) (##vcore.- (bruijn ##.i.662 2 2) 1)) ((bruijn ##.loop.660 3 0) (bruijn ##.k.1677 2 0) (##inline ##vcore.cons (bruijn ##.reg.2925 0 0) (bruijn ##.acc.661 2 1)) (bruijn ##.reg.2926 0 1))))
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
static void _V10_Dloop_D660_lambda133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D660_lambda133, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.<.151 4 12) (close _V10_Dloop_D660_k144) (bruijn ##.i.662 0 2) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[12]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D660_k144, self)})),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Du16vector___Glist_D247_lambda132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Du16vector___Glist_D247_lambda132, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2924) ((##vcore.u16vector-length (bruijn ##.vec.658 1 1))) (letrec 1 ((close _V10_Dloop_D660_lambda133)) (basic-block 1 1 (##.reg.2927) ((##vcore.- (bruijn ##.reg.2924 2 0) 1)) ((bruijn ##.loop.660 1 0) (bruijn ##.k.1676 3 0) '() (bruijn ##.reg.2927 0 0)))))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D660_lambda133, self)}));
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
__attribute__((used)) static void _V20CaseError__V10_Dmake__s16vector_D248_lambda134(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__s16vector_D248_lambda134 #t (2 (##vcore.make-s16vector (bruijn ##.k.1683 0 0) (bruijn ##.len.663 0 1) #f)) (3 (##vcore.make-s16vector (bruijn ##.k.1684 0 0) (bruijn ##.len.664 0 1) (bruijn ##.fill.665 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__s16vector_D248_lambda134, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__s16vector_D248_lambda134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.make-s16vector (bruijn ##.k.1683 0 0) (bruijn ##.len.663 0 1) #f)
    VCallFuncWithGC(runtime, (VFunc)VMakeS16Vector, 3,
      _var0,
      _var1,
      VEncodeBool(false));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__s16vector_D248_lambda134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.make-s16vector (bruijn ##.k.1684 0 0) (bruijn ##.len.664 0 1) (bruijn ##.fill.665 0 2))
    VCallFuncWithGC(runtime, (VFunc)VMakeS16Vector, 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Dmake__s16vector_D248_lambda134(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__s16vector_D248_lambda134, @function\n"
#endif
"_V10_Dmake__s16vector_D248_lambda134:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__s16vector_D248_lambda134\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__s16vector_D248_lambda134\n"
"    jmp _V20CaseError__V10_Dmake__s16vector_D248_lambda134\n"
);
static void _V10_Ds16vector_D249_lambda135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds16vector_D249_lambda135, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.list->s16vector (bruijn ##.k.1685 0 0) (bruijn ##.args.666 0 1))
    VCallFuncWithGC(runtime, (VFunc)VListS16Vector, 2,
      _var0,
      _varargs);
}
static void _V10_Dloop_D669_k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D669_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1688 0 0) ((bruijn ##.k.1687 1 0) (bruijn ##.acc.670 1 1)) (basic-block 2 2 (##.reg.2929 ##.reg.2930) ((##vcore.s16vector-ref (bruijn ##.vec.667 5 1) (bruijn ##.i.671 2 2)) (##vcore.- (bruijn ##.i.671 2 2) 1)) ((bruijn ##.loop.669 3 0) (bruijn ##.k.1687 2 0) (##inline ##vcore.cons (bruijn ##.reg.2929 0 0) (bruijn ##.acc.670 2 1)) (bruijn ##.reg.2930 0 1))))
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
static void _V10_Dloop_D669_lambda137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D669_lambda137, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.<.151 4 12) (close _V10_Dloop_D669_k145) (bruijn ##.i.671 0 2) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[12]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D669_k145, self)})),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Ds16vector___Glist_D250_lambda136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds16vector___Glist_D250_lambda136, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2928) ((##vcore.s16vector-length (bruijn ##.vec.667 1 1))) (letrec 1 ((close _V10_Dloop_D669_lambda137)) (basic-block 1 1 (##.reg.2931) ((##vcore.- (bruijn ##.reg.2928 2 0) 1)) ((bruijn ##.loop.669 1 0) (bruijn ##.k.1686 3 0) '() (bruijn ##.reg.2931 0 0)))))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D669_lambda137, self)}));
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
__attribute__((used)) static void _V20CaseError__V10_Dmake__u8vector_D251_lambda138(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__u8vector_D251_lambda138 #t (2 (##vcore.make-u8vector (bruijn ##.k.1693 0 0) (bruijn ##.len.672 0 1) #f)) (3 (##vcore.make-u8vector (bruijn ##.k.1694 0 0) (bruijn ##.len.673 0 1) (bruijn ##.fill.674 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__u8vector_D251_lambda138, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__u8vector_D251_lambda138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.make-u8vector (bruijn ##.k.1693 0 0) (bruijn ##.len.672 0 1) #f)
    VCallFuncWithGC(runtime, (VFunc)VMakeU8Vector, 3,
      _var0,
      _var1,
      VEncodeBool(false));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__u8vector_D251_lambda138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.make-u8vector (bruijn ##.k.1694 0 0) (bruijn ##.len.673 0 1) (bruijn ##.fill.674 0 2))
    VCallFuncWithGC(runtime, (VFunc)VMakeU8Vector, 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Dmake__u8vector_D251_lambda138(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__u8vector_D251_lambda138, @function\n"
#endif
"_V10_Dmake__u8vector_D251_lambda138:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__u8vector_D251_lambda138\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__u8vector_D251_lambda138\n"
"    jmp _V20CaseError__V10_Dmake__u8vector_D251_lambda138\n"
);
static void _V10_Du8vector_D252_lambda139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector_D252_lambda139, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.list->u8vector (bruijn ##.k.1695 0 0) (bruijn ##.args.675 0 1))
    VCallFuncWithGC(runtime, (VFunc)VListU8Vector, 2,
      _var0,
      _varargs);
}
static void _V10_Dloop_D678_k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D678_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1698 0 0) ((bruijn ##.k.1697 1 0) (bruijn ##.acc.679 1 1)) (basic-block 2 2 (##.reg.2933 ##.reg.2934) ((##vcore.u8vector-ref (bruijn ##.vec.676 5 1) (bruijn ##.i.680 2 2)) (##vcore.- (bruijn ##.i.680 2 2) 1)) ((bruijn ##.loop.678 3 0) (bruijn ##.k.1697 2 0) (##inline ##vcore.cons (bruijn ##.reg.2933 0 0) (bruijn ##.acc.679 2 1)) (bruijn ##.reg.2934 0 1))))
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
static void _V10_Dloop_D678_lambda141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D678_lambda141, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.<.151 4 12) (close _V10_Dloop_D678_k146) (bruijn ##.i.680 0 2) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[12]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D678_k146, self)})),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Du8vector___Glist_D253_lambda140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Du8vector___Glist_D253_lambda140, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2932) ((##vcore.u8vector-length (bruijn ##.vec.676 1 1))) (letrec 1 ((close _V10_Dloop_D678_lambda141)) (basic-block 1 1 (##.reg.2935) ((##vcore.- (bruijn ##.reg.2932 2 0) 1)) ((bruijn ##.loop.678 1 0) (bruijn ##.k.1696 3 0) '() (bruijn ##.reg.2935 0 0)))))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D678_lambda141, self)}));
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
static void _V10_Dread__u8vector_D257_k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__u8vector_D257_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.read-u8vector (bruijn ##.k.1703 1 0) (bruijn ##.n.681 1 1) (bruijn ##.x.1704 0 0))
    VCallFuncWithGC(runtime, (VFunc)VReadU8Vector, 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dread__u8vector_D257_lambda142(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dread__u8vector_D257_lambda142 #t (2 ((bruijn ##.current-input-port.280 1 141) (close _V10_Dread__u8vector_D257_k147))) (3 (##vcore.read-u8vector (bruijn ##.k.1705 0 0) (bruijn ##.n.682 0 1) (bruijn ##.port.683 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dread__u8vector_D257_lambda142, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dread__u8vector_D257_lambda142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-input-port.280 1 141) (close _V10_Dread__u8vector_D257_k147))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[141]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__u8vector_D257_k147, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dread__u8vector_D257_lambda142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.read-u8vector (bruijn ##.k.1705 0 0) (bruijn ##.n.682 0 1) (bruijn ##.port.683 0 2))
    VCallFuncWithGC(runtime, (VFunc)VReadU8Vector, 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Dread__u8vector_D257_lambda142(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dread__u8vector_D257_lambda142, @function\n"
#endif
"_V10_Dread__u8vector_D257_lambda142:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dread__u8vector_D257_lambda142\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dread__u8vector_D257_lambda142\n"
"    jmp _V20CaseError__V10_Dread__u8vector_D257_lambda142\n"
);
__attribute__((used)) static void _V20CaseError__V10_Dmake__s8vector_D259_lambda143(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__s8vector_D259_lambda143 #t (2 (##vcore.make-s8vector (bruijn ##.k.1706 0 0) (bruijn ##.len.684 0 1) #f)) (3 (##vcore.make-s8vector (bruijn ##.k.1707 0 0) (bruijn ##.len.685 0 1) (bruijn ##.fill.686 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__s8vector_D259_lambda143, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__s8vector_D259_lambda143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.make-s8vector (bruijn ##.k.1706 0 0) (bruijn ##.len.684 0 1) #f)
    VCallFuncWithGC(runtime, (VFunc)VMakeS8Vector, 3,
      _var0,
      _var1,
      VEncodeBool(false));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__s8vector_D259_lambda143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.make-s8vector (bruijn ##.k.1707 0 0) (bruijn ##.len.685 0 1) (bruijn ##.fill.686 0 2))
    VCallFuncWithGC(runtime, (VFunc)VMakeS8Vector, 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Dmake__s8vector_D259_lambda143(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__s8vector_D259_lambda143, @function\n"
#endif
"_V10_Dmake__s8vector_D259_lambda143:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__s8vector_D259_lambda143\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__s8vector_D259_lambda143\n"
"    jmp _V20CaseError__V10_Dmake__s8vector_D259_lambda143\n"
);
static void _V10_Ds8vector_D260_lambda144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds8vector_D260_lambda144, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.list->s8vector (bruijn ##.k.1708 0 0) (bruijn ##.args.687 0 1))
    VCallFuncWithGC(runtime, (VFunc)VListS8Vector, 2,
      _var0,
      _varargs);
}
static void _V10_Dloop_D690_k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D690_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1711 0 0) ((bruijn ##.k.1710 1 0) (bruijn ##.acc.691 1 1)) (basic-block 2 2 (##.reg.2937 ##.reg.2938) ((##vcore.s8vector-ref (bruijn ##.vec.688 5 1) (bruijn ##.i.692 2 2)) (##vcore.- (bruijn ##.i.692 2 2) 1)) ((bruijn ##.loop.690 3 0) (bruijn ##.k.1710 2 0) (##inline ##vcore.cons (bruijn ##.reg.2937 0 0) (bruijn ##.acc.691 2 1)) (bruijn ##.reg.2938 0 1))))
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
static void _V10_Dloop_D690_lambda146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D690_lambda146, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.<.151 4 12) (close _V10_Dloop_D690_k148) (bruijn ##.i.692 0 2) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[12]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D690_k148, self)})),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Ds8vector___Glist_D261_lambda145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ds8vector___Glist_D261_lambda145, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2936) ((##vcore.s8vector-length (bruijn ##.vec.688 1 1))) (letrec 1 ((close _V10_Dloop_D690_lambda146)) (basic-block 1 1 (##.reg.2939) ((##vcore.- (bruijn ##.reg.2936 2 0) 1)) ((bruijn ##.loop.690 1 0) (bruijn ##.k.1709 3 0) '() (bruijn ##.reg.2939 0 0)))))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D690_lambda146, self)}));
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
static void _V10_Dtypevector_Q_D262_lambda147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtypevector_Q_D262_lambda147, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2940) ((##vcore.s8vector? (bruijn ##.x.693 1 1))) (if (bruijn ##.reg.2940 0 0) ((bruijn ##.k.1716 1 0) (bruijn ##.reg.2940 0 0)) (basic-block 1 1 (##.reg.2941) ((##vcore.u8vector? (bruijn ##.x.693 2 1))) (if (bruijn ##.reg.2941 0 0) ((bruijn ##.k.1716 2 0) (bruijn ##.reg.2941 0 0)) (basic-block 1 1 (##.reg.2942) ((##vcore.s16vector? (bruijn ##.x.693 3 1))) (if (bruijn ##.reg.2942 0 0) ((bruijn ##.k.1716 3 0) (bruijn ##.reg.2942 0 0)) (basic-block 1 1 (##.reg.2943) ((##vcore.u16vector? (bruijn ##.x.693 4 1))) (if (bruijn ##.reg.2943 0 0) ((bruijn ##.k.1716 4 0) (bruijn ##.reg.2943 0 0)) (basic-block 1 1 (##.reg.2944) ((##vcore.s32vector? (bruijn ##.x.693 5 1))) (if (bruijn ##.reg.2944 0 0) ((bruijn ##.k.1716 5 0) (bruijn ##.reg.2944 0 0)) (basic-block 1 1 (##.reg.2945) ((##vcore.f32vector? (bruijn ##.x.693 6 1))) (if (bruijn ##.reg.2945 0 0) ((bruijn ##.k.1716 6 0) (bruijn ##.reg.2945 0 0)) (basic-block 1 1 (##.reg.2946) ((##vcore.f64vector? (bruijn ##.x.693 7 1))) ((bruijn ##.k.1716 7 0) (bruijn ##.reg.2946 0 0)))))))))))))))
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
static void _V10_Dloop_D696_k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D696_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1725 0 0) ((bruijn ##.k.1724 1 0) (bruijn ##.acc.697 1 1)) (basic-block 2 2 (##.reg.2948 ##.reg.2949) ((##vcore.vector-ref (bruijn ##.vec.694 5 1) (bruijn ##.i.698 2 2)) (##vcore.- (bruijn ##.i.698 2 2) 1)) ((bruijn ##.loop.696 3 0) (bruijn ##.k.1724 2 0) (##inline ##vcore.cons (bruijn ##.reg.2948 0 0) (bruijn ##.acc.697 2 1)) (bruijn ##.reg.2949 0 1))))
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
static void _V10_Dloop_D696_lambda149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D696_lambda149, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.<.151 4 12) (close _V10_Dloop_D696_k149) (bruijn ##.i.698 0 2) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[12]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D696_k149, self)})),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Dvector___Glist_D263_lambda148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector___Glist_D263_lambda148, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2947) ((##vcore.vector-length (bruijn ##.vec.694 1 1))) (letrec 1 ((close _V10_Dloop_D696_lambda149)) (basic-block 1 1 (##.reg.2950) ((##vcore.- (bruijn ##.reg.2947 2 0) 1)) ((bruijn ##.loop.696 1 0) (bruijn ##.k.1723 3 0) '() (bruijn ##.reg.2950 0 0)))))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D696_lambda149, self)}));
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
static void _V10_Dmake__vector_D264_k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__vector_D264_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.list->vector (bruijn ##.k.1730 1 0) (bruijn ##.x.1731 0 0))
    VCallFuncWithGC(runtime, (VFunc)VListVector2, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dmake__vector_D264_k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__vector_D264_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.list->vector (bruijn ##.k.1732 1 0) (bruijn ##.x.1733 0 0))
    VCallFuncWithGC(runtime, (VFunc)VListVector2, 2,
      statics->vars[0],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dmake__vector_D264_lambda150(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__vector_D264_lambda150 #t (2 ((bruijn ##.make-list.218 1 79) (close _V10_Dmake__vector_D264_k150) (bruijn ##.n.699 0 1))) (3 ((bruijn ##.make-list.218 1 79) (close _V10_Dmake__vector_D264_k151) (bruijn ##.n.700 0 1) (bruijn ##.fill.701 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__vector_D264_lambda150, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__vector_D264_lambda150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.make-list.218 1 79) (close _V10_Dmake__vector_D264_k150) (bruijn ##.n.699 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[79]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__vector_D264_k150, self)})),
      _var1);
}
__attribute__((used)) static void _V20Case1__V10_Dmake__vector_D264_lambda150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.make-list.218 1 79) (close _V10_Dmake__vector_D264_k151) (bruijn ##.n.700 0 1) (bruijn ##.fill.701 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[79]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__vector_D264_k151, self)})),
      _var1,
      _var2);
}
void _V10_Dmake__vector_D264_lambda150(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__vector_D264_lambda150, @function\n"
#endif
"_V10_Dmake__vector_D264_lambda150:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__vector_D264_lambda150\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__vector_D264_lambda150\n"
"    jmp _V20CaseError__V10_Dmake__vector_D264_lambda150\n"
);
static void _V10_Dloop_D705_k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D705_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2953) ((##vcore.+ (bruijn ##.i.706 4 1) 1)) ((bruijn ##.loop.705 5 0) (bruijn ##.k.1735 4 0) (bruijn ##.reg.2953 0 0)))
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
static void _V10_Dloop_D705_k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D705_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1736 0 0) (basic-block 1 1 (##.reg.2952) ((##vcore.vector-ref (bruijn ##.xs.703 5 2) (bruijn ##.i.706 2 1))) ((bruijn ##.f.702 5 1) (close _V10_Dloop_D705_k153) (bruijn ##.reg.2952 0 0))) ((bruijn ##.k.1735 1 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D705_k153, self)})),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D705_lambda152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D705_lambda152, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.<.151 4 12) (close _V10_Dloop_D705_k152) (bruijn ##.i.706 0 1) (bruijn ##.reg.2951 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[12]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D705_k152, self)})),
      _var1,
      statics->up->vars[0]);
}
static void _V10_Dloop_D711_k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D711_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2958) ((##vcore.+ (bruijn ##.i.712 4 1) 1)) ((bruijn ##.loop.711 5 0) (bruijn ##.k.1741 4 0) (bruijn ##.reg.2958 0 0)))
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
static void _V10_Dloop_D711_k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D711_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1742 0 0) (basic-block 2 2 (##.reg.2956 ##.reg.2957) ((##vcore.vector-ref (bruijn ##.xs.708 6 2) (bruijn ##.i.712 2 1)) (##vcore.vector-ref (bruijn ##.ys.709 6 3) (bruijn ##.i.712 2 1))) ((bruijn ##.f.707 6 1) (close _V10_Dloop_D711_k156) (bruijn ##.reg.2956 0 0) (bruijn ##.reg.2957 0 1))) ((bruijn ##.k.1741 1 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D711_k156, self)})),
      self->vars[0],
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D711_lambda153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D711_lambda153, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.<.151 5 12) (close _V10_Dloop_D711_k155) (bruijn ##.i.712 0 1) (bruijn ##.len.710 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 12)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D711_k155, self)})),
      _var1,
      statics->up->vars[0]);
}
static void _V10_Dvector__for__each_D265_k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D265_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D711_lambda153)) ((bruijn ##.loop.711 0 0) (bruijn ##.k.1740 3 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D711_lambda153, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dloop_D718_k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D718_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2965) ((##vcore.+ (bruijn ##.i.719 4 1) 1)) ((bruijn ##.loop.718 5 0) (bruijn ##.k.1750 4 0) (bruijn ##.reg.2965 0 0)))
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
static void _V10_Dloop_D718_k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D718_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1751 0 0) (basic-block 3 3 (##.reg.2962 ##.reg.2963 ##.reg.2964) ((##vcore.vector-ref (bruijn ##.xs.714 6 2) (bruijn ##.i.719 2 1)) (##vcore.vector-ref (bruijn ##.ys.715 6 3) (bruijn ##.i.719 2 1)) (##vcore.vector-ref (bruijn ##.zs.716 6 4) (bruijn ##.i.719 2 1))) ((bruijn ##.f.713 6 1) (close _V10_Dloop_D718_k159) (bruijn ##.reg.2962 0 0) (bruijn ##.reg.2963 0 1) (bruijn ##.reg.2964 0 2))) ((bruijn ##.k.1750 1 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D718_k159, self)})),
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D718_lambda154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D718_lambda154, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.<.151 5 12) (close _V10_Dloop_D718_k158) (bruijn ##.i.719 0 1) (bruijn ##.len.717 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 12)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D718_k158, self)})),
      _var1,
      statics->up->vars[0]);
}
static void _V10_Dvector__for__each_D265_k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D265_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D718_lambda154)) ((bruijn ##.loop.718 0 0) (bruijn ##.k.1749 3 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D718_lambda154, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dloop_D723_k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D723_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2966) ((##vcore.+ (bruijn ##.i.724 4 1) 1)) ((bruijn ##.loop.723 5 0) (bruijn ##.k.1761 4 0) (bruijn ##.reg.2966 0 0)))
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
static void _V10_Dloop_D723_k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D723_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dloop_D723_k164) (bruijn ##.f.720 6 1) (bruijn ##.x.1765 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D723_k164, self)})),
      VGetArg(statics, 6-1, 1),
      _var0);
}
static void _V10_Dloop_D723_lambda156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D723_lambda156, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2967) ((##vcore.vector-ref (bruijn ##.vec.725 1 1) (bruijn ##.i.724 3 1))) ((bruijn ##.k.1766 1 0) (bruijn ##.reg.2967 0 0)))
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
static void _V10_Dloop_D723_k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D723_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1762 0 0) ((bruijn ##.map.219 6 80) (close _V10_Dloop_D723_k163) (close _V10_Dloop_D723_lambda156) (bruijn ##.vecs.721 5 2)) ((bruijn ##.k.1761 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 80)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D723_k163, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D723_lambda156, self)})),
      VGetArg(statics, 5-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D723_lambda155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D723_lambda155, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.<.151 5 12) (close _V10_Dloop_D723_k162) (bruijn ##.i.724 0 1) (bruijn ##.len.722 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 12)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D723_k162, self)})),
      _var1,
      statics->up->vars[0]);
}
static void _V10_Dvector__for__each_D265_k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D265_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D723_lambda155)) ((bruijn ##.loop.723 0 0) (bruijn ##.k.1760 3 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D723_lambda155, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dvector__for__each_D265_k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D265_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dvector__for__each_D265_k161) (bruijn ##.min.182 2 43) (bruijn ##.x.1767 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__for__each_D265_k161, self)})),
      statics->up->vars[43],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dvector__for__each_D265_lambda151(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dvector__for__each_D265_lambda151 #t (3 (basic-block 1 1 (##.reg.2951) ((##vcore.vector-length (bruijn ##.xs.703 1 2))) (letrec 1 ((close _V10_Dloop_D705_lambda152)) ((bruijn ##.loop.705 0 0) (bruijn ##.k.1734 2 0) 0)))) (4 (basic-block 2 2 (##.reg.2954 ##.reg.2955) ((##vcore.vector-length (bruijn ##.xs.708 1 2)) (##vcore.vector-length (bruijn ##.ys.709 1 3))) ((bruijn ##.min.182 2 43) (close _V10_Dvector__for__each_D265_k154) (bruijn ##.reg.2954 0 0) (bruijn ##.reg.2955 0 1)))) (5 (basic-block 3 3 (##.reg.2959 ##.reg.2960 ##.reg.2961) ((##vcore.vector-length (bruijn ##.xs.714 1 2)) (##vcore.vector-length (bruijn ##.ys.715 1 3)) (##vcore.vector-length (bruijn ##.zs.716 1 4))) ((bruijn ##.min.182 2 43) (close _V10_Dvector__for__each_D265_k157) (bruijn ##.reg.2959 0 0) (bruijn ##.reg.2960 0 1) (bruijn ##.reg.2961 0 2)))) (2 + ((bruijn ##.map.219 1 80) (close _V10_Dvector__for__each_D265_k160) (##intrinsic ##vcore.vector-length) (bruijn ##.vecs.721 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D265_lambda151, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dvector__for__each_D265_lambda151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2951) ((##vcore.vector-length (bruijn ##.xs.703 1 2))) (letrec 1 ((close _V10_Dloop_D705_lambda152)) ((bruijn ##.loop.705 0 0) (bruijn ##.k.1734 2 0) 0)))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D705_lambda152, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->vars[0],
      VEncodeInt(0l));
    }
    }
}
__attribute__((used)) static void _V20Case1__V10_Dvector__for__each_D265_lambda151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 2 2 (##.reg.2954 ##.reg.2955) ((##vcore.vector-length (bruijn ##.xs.708 1 2)) (##vcore.vector-length (bruijn ##.ys.709 1 3))) ((bruijn ##.min.182 2 43) (close _V10_Dvector__for__each_D265_k154) (bruijn ##.reg.2954 0 0) (bruijn ##.reg.2955 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[2]);
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[43]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__for__each_D265_k154, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
__attribute__((used)) static void _V20Case2__V10_Dvector__for__each_D265_lambda151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 3 3 (##.reg.2959 ##.reg.2960 ##.reg.2961) ((##vcore.vector-length (bruijn ##.xs.714 1 2)) (##vcore.vector-length (bruijn ##.ys.715 1 3)) (##vcore.vector-length (bruijn ##.zs.716 1 4))) ((bruijn ##.min.182 2 43) (close _V10_Dvector__for__each_D265_k157) (bruijn ##.reg.2959 0 0) (bruijn ##.reg.2960 0 1) (bruijn ##.reg.2961 0 2)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[43]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__for__each_D265_k157, self)})),
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
}
__attribute__((used)) static void _V20Case3__V10_Dvector__for__each_D265_lambda151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // ((bruijn ##.map.219 1 80) (close _V10_Dvector__for__each_D265_k160) (##intrinsic ##vcore.vector-length) (bruijn ##.vecs.721 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__for__each_D265_k160, self)})),
      _V40_V10vcore_Dvector__length,
      _varargs);
}
void _V10_Dvector__for__each_D265_lambda151(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dvector__for__each_D265_lambda151, @function\n"
#endif
"_V10_Dvector__for__each_D265_lambda151:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dvector__for__each_D265_lambda151\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dvector__for__each_D265_lambda151\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dvector__for__each_D265_lambda151\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V10_Dvector__for__each_D265_lambda151\n"
"    jmp _V20CaseError__V10_Dvector__for__each_D265_lambda151\n"
);
static void _V10_Dloop_D730_k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D730_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2970) ((##vcore.+ (bruijn ##.i.731 5 1) 1)) ((bruijn ##.loop.730 6 0) (bruijn ##.k.1769 5 0) (bruijn ##.reg.2970 0 0)))
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
static void _V10_Dloop_D730_k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D730_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector-set! (close _V10_Dloop_D730_k168) (bruijn ##.vec.729 5 0) (bruijn ##.i.731 3 1) (bruijn ##.x.1773 0 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D730_k168, self)})),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D730_k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D730_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1770 0 0) (basic-block 1 1 (##.reg.2969) ((##vcore.vector-ref (bruijn ##.xs.727 6 2) (bruijn ##.i.731 2 1))) ((bruijn ##.f.726 6 1) (close _V10_Dloop_D730_k167) (bruijn ##.reg.2969 0 0))) ((bruijn ##.k.1769 1 0) (bruijn ##.vec.729 3 0)))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D730_k167, self)})),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[0]);
}
}
static void _V10_Dloop_D730_lambda158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D730_lambda158, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.<.151 5 12) (close _V10_Dloop_D730_k166) (bruijn ##.i.731 0 1) (bruijn ##.reg.2968 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 12)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D730_k166, self)})),
      _var1,
      statics->up->up->vars[0]);
}
static void _V10_Dvector__map_D266_k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D266_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D730_lambda158)) ((bruijn ##.loop.730 0 0) (bruijn ##.k.1768 3 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D730_lambda158, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dloop_D737_k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D737_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2975) ((##vcore.+ (bruijn ##.i.738 5 1) 1)) ((bruijn ##.loop.737 6 0) (bruijn ##.k.1776 5 0) (bruijn ##.reg.2975 0 0)))
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
static void _V10_Dloop_D737_k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D737_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector-set! (close _V10_Dloop_D737_k173) (bruijn ##.vec.736 5 0) (bruijn ##.i.738 3 1) (bruijn ##.x.1780 0 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D737_k173, self)})),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D737_k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D737_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1777 0 0) (basic-block 2 2 (##.reg.2973 ##.reg.2974) ((##vcore.vector-ref (bruijn ##.xs.733 7 2) (bruijn ##.i.738 2 1)) (##vcore.vector-ref (bruijn ##.ys.734 7 3) (bruijn ##.i.738 2 1))) ((bruijn ##.f.732 7 1) (close _V10_Dloop_D737_k172) (bruijn ##.reg.2973 0 0) (bruijn ##.reg.2974 0 1))) ((bruijn ##.k.1776 1 0) (bruijn ##.vec.736 3 0)))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D737_k172, self)})),
      self->vars[0],
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[0]);
}
}
static void _V10_Dloop_D737_lambda159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D737_lambda159, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.<.151 6 12) (close _V10_Dloop_D737_k171) (bruijn ##.i.738 0 1) (bruijn ##.len.735 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 12)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D737_k171, self)})),
      _var1,
      statics->up->up->vars[0]);
}
static void _V10_Dvector__map_D266_k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D266_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D737_lambda159)) ((bruijn ##.loop.737 0 0) (bruijn ##.k.1775 4 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D737_lambda159, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->up->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dvector__map_D266_k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D266_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-vector.264 3 125) (close _V10_Dvector__map_D266_k170) (bruijn ##.len.735 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[125]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__map_D266_k170, self)})),
      _var0);
}
static void _V10_Dloop_D745_k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D745_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2982) ((##vcore.+ (bruijn ##.i.746 5 1) 1)) ((bruijn ##.loop.745 6 0) (bruijn ##.k.1786 5 0) (bruijn ##.reg.2982 0 0)))
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
static void _V10_Dloop_D745_k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D745_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector-set! (close _V10_Dloop_D745_k178) (bruijn ##.vec.744 5 0) (bruijn ##.i.746 3 1) (bruijn ##.x.1790 0 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D745_k178, self)})),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D745_k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D745_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1787 0 0) (basic-block 3 3 (##.reg.2979 ##.reg.2980 ##.reg.2981) ((##vcore.vector-ref (bruijn ##.xs.740 7 2) (bruijn ##.i.746 2 1)) (##vcore.vector-ref (bruijn ##.ys.741 7 3) (bruijn ##.i.746 2 1)) (##vcore.vector-ref (bruijn ##.zs.742 7 4) (bruijn ##.i.746 2 1))) ((bruijn ##.f.739 7 1) (close _V10_Dloop_D745_k177) (bruijn ##.reg.2979 0 0) (bruijn ##.reg.2980 0 1) (bruijn ##.reg.2981 0 2))) ((bruijn ##.k.1786 1 0) (bruijn ##.vec.744 3 0)))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D745_k177, self)})),
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[0]);
}
}
static void _V10_Dloop_D745_lambda160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D745_lambda160, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.<.151 6 12) (close _V10_Dloop_D745_k176) (bruijn ##.i.746 0 1) (bruijn ##.len.743 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 12)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D745_k176, self)})),
      _var1,
      statics->up->up->vars[0]);
}
static void _V10_Dvector__map_D266_k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D266_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D745_lambda160)) ((bruijn ##.loop.745 0 0) (bruijn ##.k.1785 4 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D745_lambda160, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->up->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dvector__map_D266_k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D266_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-vector.264 3 125) (close _V10_Dvector__map_D266_k175) (bruijn ##.len.743 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[125]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__map_D266_k175, self)})),
      _var0);
}
static void _V10_Dloop_D751_k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D751_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2983) ((##vcore.+ (bruijn ##.i.752 5 1) 1)) ((bruijn ##.loop.751 6 0) (bruijn ##.k.1798 5 0) (bruijn ##.reg.2983 0 0)))
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
static void _V10_Dloop_D751_k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D751_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector-set! (close _V10_Dloop_D751_k185) (bruijn ##.vec.750 5 0) (bruijn ##.i.752 3 1) (bruijn ##.x.1802 0 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D751_k185, self)})),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D751_k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D751_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dloop_D751_k184) (bruijn ##.f.747 7 1) (bruijn ##.x.1803 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D751_k184, self)})),
      VGetArg(statics, 7-1, 1),
      _var0);
}
static void _V10_Dloop_D751_lambda162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D751_lambda162, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2984) ((##vcore.vector-ref (bruijn ##.vec.753 1 1) (bruijn ##.i.752 3 1))) ((bruijn ##.k.1804 1 0) (bruijn ##.reg.2984 0 0)))
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
static void _V10_Dloop_D751_k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D751_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1799 0 0) ((bruijn ##.map.219 7 80) (close _V10_Dloop_D751_k183) (close _V10_Dloop_D751_lambda162) (bruijn ##.vecs.748 6 2)) ((bruijn ##.k.1798 1 0) (bruijn ##.vec.750 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 80)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D751_k183, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D751_lambda162, self)})),
      VGetArg(statics, 6-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[0]);
}
}
static void _V10_Dloop_D751_lambda161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D751_lambda161, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.<.151 6 12) (close _V10_Dloop_D751_k182) (bruijn ##.i.752 0 1) (bruijn ##.len.749 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 12)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D751_k182, self)})),
      _var1,
      statics->up->up->vars[0]);
}
static void _V10_Dvector__map_D266_k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D266_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D751_lambda161)) ((bruijn ##.loop.751 0 0) (bruijn ##.k.1797 4 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D751_lambda161, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->up->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dvector__map_D266_k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D266_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-vector.264 3 125) (close _V10_Dvector__map_D266_k181) (bruijn ##.len.749 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[125]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__map_D266_k181, self)})),
      _var0);
}
static void _V10_Dvector__map_D266_k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D266_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dvector__map_D266_k180) (bruijn ##.min.182 2 43) (bruijn ##.x.1805 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__map_D266_k180, self)})),
      statics->up->vars[43],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dvector__map_D266_lambda157(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dvector__map_D266_lambda157 #t (3 (basic-block 1 1 (##.reg.2968) ((##vcore.vector-length (bruijn ##.xs.727 1 2))) ((bruijn ##.make-vector.264 2 125) (close _V10_Dvector__map_D266_k165) (bruijn ##.reg.2968 0 0)))) (4 (basic-block 2 2 (##.reg.2971 ##.reg.2972) ((##vcore.vector-length (bruijn ##.xs.733 1 2)) (##vcore.vector-length (bruijn ##.ys.734 1 3))) ((bruijn ##.min.182 2 43) (close _V10_Dvector__map_D266_k169) (bruijn ##.reg.2971 0 0) (bruijn ##.reg.2972 0 1)))) (5 (basic-block 3 3 (##.reg.2976 ##.reg.2977 ##.reg.2978) ((##vcore.vector-length (bruijn ##.xs.740 1 2)) (##vcore.vector-length (bruijn ##.ys.741 1 3)) (##vcore.vector-length (bruijn ##.zs.742 1 4))) ((bruijn ##.min.182 2 43) (close _V10_Dvector__map_D266_k174) (bruijn ##.reg.2976 0 0) (bruijn ##.reg.2977 0 1) (bruijn ##.reg.2978 0 2)))) (2 + ((bruijn ##.map.219 1 80) (close _V10_Dvector__map_D266_k179) (##intrinsic ##vcore.vector-length) (bruijn ##.vecs.748 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dvector__map_D266_lambda157, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dvector__map_D266_lambda157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2968) ((##vcore.vector-length (bruijn ##.xs.727 1 2))) ((bruijn ##.make-vector.264 2 125) (close _V10_Dvector__map_D266_k165) (bruijn ##.reg.2968 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[125]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__map_D266_k165, self)})),
      self->vars[0]);
    }
}
__attribute__((used)) static void _V20Case1__V10_Dvector__map_D266_lambda157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 2 2 (##.reg.2971 ##.reg.2972) ((##vcore.vector-length (bruijn ##.xs.733 1 2)) (##vcore.vector-length (bruijn ##.ys.734 1 3))) ((bruijn ##.min.182 2 43) (close _V10_Dvector__map_D266_k169) (bruijn ##.reg.2971 0 0) (bruijn ##.reg.2972 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[2]);
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[43]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__map_D266_k169, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
__attribute__((used)) static void _V20Case2__V10_Dvector__map_D266_lambda157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 3 3 (##.reg.2976 ##.reg.2977 ##.reg.2978) ((##vcore.vector-length (bruijn ##.xs.740 1 2)) (##vcore.vector-length (bruijn ##.ys.741 1 3)) (##vcore.vector-length (bruijn ##.zs.742 1 4))) ((bruijn ##.min.182 2 43) (close _V10_Dvector__map_D266_k174) (bruijn ##.reg.2976 0 0) (bruijn ##.reg.2977 0 1) (bruijn ##.reg.2978 0 2)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[43]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__map_D266_k174, self)})),
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
}
__attribute__((used)) static void _V20Case3__V10_Dvector__map_D266_lambda157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // ((bruijn ##.map.219 1 80) (close _V10_Dvector__map_D266_k179) (##intrinsic ##vcore.vector-length) (bruijn ##.vecs.748 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__map_D266_k179, self)})),
      _V40_V10vcore_Dvector__length,
      _varargs);
}
void _V10_Dvector__map_D266_lambda157(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dvector__map_D266_lambda157, @function\n"
#endif
"_V10_Dvector__map_D266_lambda157:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dvector__map_D266_lambda157\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dvector__map_D266_lambda157\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dvector__map_D266_lambda157\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V10_Dvector__map_D266_lambda157\n"
"    jmp _V20CaseError__V10_Dvector__map_D266_lambda157\n"
);
static void _V10_Dvector__copy_D267_k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__copy_D267_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.vector-copy!.268 3 129) (bruijn ##.k.1810 2 0) (bruijn ##.x.1811 0 0) 0 (bruijn ##.v.757 2 1) (bruijn ##.start.758 2 2) (bruijn ##.end.759 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[129]), 6,
      statics->up->vars[0],
      _var0,
      VEncodeInt(0l),
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3]);
}
__attribute__((used)) static void _V20CaseError__V10_Dvector__copy_D267_lambda163(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dvector__copy_D267_lambda163 #t (2 (basic-block 1 1 (##.reg.2985) ((##vcore.vector-length (bruijn ##.v.754 1 1))) ((bruijn ##.vector-copy.267 2 128) (bruijn ##.k.1806 1 0) (bruijn ##.v.754 1 1) 0 (bruijn ##.reg.2985 0 0)))) (3 (basic-block 1 1 (##.reg.2986) ((##vcore.vector-length (bruijn ##.v.755 1 1))) ((bruijn ##.vector-copy.267 2 128) (bruijn ##.k.1808 1 0) (bruijn ##.v.755 1 1) (bruijn ##.start.756 1 2) (bruijn ##.reg.2986 0 0)))) (4 (basic-block 1 1 (##.reg.2987) ((##vcore.- (bruijn ##.end.759 1 3) (bruijn ##.start.758 1 2))) ((bruijn ##.make-vector.264 2 125) (close _V10_Dvector__copy_D267_k186) (bruijn ##.reg.2987 0 0)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dvector__copy_D267_lambda163, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dvector__copy_D267_lambda163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2985) ((##vcore.vector-length (bruijn ##.v.754 1 1))) ((bruijn ##.vector-copy.267 2 128) (bruijn ##.k.1806 1 0) (bruijn ##.v.754 1 1) 0 (bruijn ##.reg.2985 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[128]), 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(0l),
      self->vars[0]);
    }
}
__attribute__((used)) static void _V20Case1__V10_Dvector__copy_D267_lambda163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.2986) ((##vcore.vector-length (bruijn ##.v.755 1 1))) ((bruijn ##.vector-copy.267 2 128) (bruijn ##.k.1808 1 0) (bruijn ##.v.755 1 1) (bruijn ##.start.756 1 2) (bruijn ##.reg.2986 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[128]), 4,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      self->vars[0]);
    }
}
__attribute__((used)) static void _V20Case2__V10_Dvector__copy_D267_lambda163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.reg.2987) ((##vcore.- (bruijn ##.end.759 1 3) (bruijn ##.start.758 1 2))) ((bruijn ##.make-vector.264 2 125) (close _V10_Dvector__copy_D267_k186) (bruijn ##.reg.2987 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[3],
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[125]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__copy_D267_k186, self)})),
      self->vars[0]);
    }
}
void _V10_Dvector__copy_D267_lambda163(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dvector__copy_D267_lambda163, @function\n"
#endif
"_V10_Dvector__copy_D267_lambda163:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dvector__copy_D267_lambda163\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dvector__copy_D267_lambda163\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V10_Dvector__copy_D267_lambda163\n"
"    jmp _V20CaseError__V10_Dvector__copy_D267_lambda163\n"
);
static void _V10_Dloop_D772_k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D772_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2993) ((##vcore.+ (bruijn ##.i.773 4 1) 1)) ((bruijn ##.loop.772 5 0) (bruijn ##.k.1818 4 0) (bruijn ##.reg.2993 0 0)))
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
static void _V10_Dloop_D772_k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D772_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1819 0 0) (basic-block 3 3 (##.reg.2990 ##.reg.2991 ##.reg.2992) ((##vcore.- (bruijn ##.start.770 4 4)) (##vcore.+ (bruijn ##.i.773 2 1) (bruijn ##.reg.2990 0 0) (bruijn ##.at.768 4 2)) (##vcore.vector-ref (bruijn ##.src.769 4 3) (bruijn ##.i.773 2 1))) (##vcore.vector-set! (close _V10_Dloop_D772_k188) (bruijn ##.dst.767 4 1) (bruijn ##.reg.2991 0 1) (bruijn ##.reg.2992 0 2))) ((bruijn ##.k.1818 1 0) (bruijn ##.dst.767 3 1)))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D772_k188, self)})),
      statics->up->up->up->vars[1],
      self->vars[1],
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[1]);
}
}
static void _V10_Dloop_D772_lambda165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D772_lambda165, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.<.151 3 12) (close _V10_Dloop_D772_k187) (bruijn ##.i.773 0 1) (bruijn ##.end.771 2 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[12]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D772_k187, self)})),
      _var1,
      statics->up->vars[5]);
}
__attribute__((used)) static void _V20CaseError__V10_Dvector__copy_B_D268_lambda164(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dvector__copy_B_D268_lambda164 #t (4 (basic-block 1 1 (##.reg.2988) ((##vcore.vector-length (bruijn ##.src.762 1 3))) ((bruijn ##.vector-copy!.268 2 129) (bruijn ##.k.1813 1 0) (bruijn ##.dst.760 1 1) (bruijn ##.at.761 1 2) (bruijn ##.src.762 1 3) 0 (bruijn ##.reg.2988 0 0)))) (5 (basic-block 1 1 (##.reg.2989) ((##vcore.vector-length (bruijn ##.src.765 1 3))) ((bruijn ##.vector-copy!.268 2 129) (bruijn ##.k.1815 1 0) (bruijn ##.dst.763 1 1) (bruijn ##.at.764 1 2) (bruijn ##.src.765 1 3) (bruijn ##.start.766 1 4) (bruijn ##.reg.2989 0 0)))) (6 (letrec 1 ((close _V10_Dloop_D772_lambda165)) ((bruijn ##.loop.772 0 0) (bruijn ##.k.1817 1 0) (bruijn ##.start.770 1 4)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dvector__copy_B_D268_lambda164, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 6~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dvector__copy_B_D268_lambda164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.reg.2988) ((##vcore.vector-length (bruijn ##.src.762 1 3))) ((bruijn ##.vector-copy!.268 2 129) (bruijn ##.k.1813 1 0) (bruijn ##.dst.760 1 1) (bruijn ##.at.761 1 2) (bruijn ##.src.762 1 3) 0 (bruijn ##.reg.2988 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[129]), 6,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      statics->vars[3],
      VEncodeInt(0l),
      self->vars[0]);
    }
}
__attribute__((used)) static void _V20Case1__V10_Dvector__copy_B_D268_lambda164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 1 1 (##.reg.2989) ((##vcore.vector-length (bruijn ##.src.765 1 3))) ((bruijn ##.vector-copy!.268 2 129) (bruijn ##.k.1815 1 0) (bruijn ##.dst.763 1 1) (bruijn ##.at.764 1 2) (bruijn ##.src.765 1 3) (bruijn ##.start.766 1 4) (bruijn ##.reg.2989 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[129]), 6,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      statics->vars[3],
      statics->vars[4],
      self->vars[0]);
    }
}
__attribute__((used)) static void _V20Case2__V10_Dvector__copy_B_D268_lambda164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
  struct { VEnv self; VWORD argv[6]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 6, 6, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  // (letrec 1 ((close _V10_Dloop_D772_lambda165)) ((bruijn ##.loop.772 0 0) (bruijn ##.k.1817 1 0) (bruijn ##.start.770 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D772_lambda165, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[4]);
    }
}
void _V10_Dvector__copy_B_D268_lambda164(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dvector__copy_B_D268_lambda164, @function\n"
#endif
"_V10_Dvector__copy_B_D268_lambda164:\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case0__V10_Dvector__copy_B_D268_lambda164\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case1__V10_Dvector__copy_B_D268_lambda164\n"
"    cmp " ARGC_REG ", 6\n"
"    je _V20Case2__V10_Dvector__copy_B_D268_lambda164\n"
"    jmp _V20CaseError__V10_Dvector__copy_B_D268_lambda164\n"
);
static void _V10_Dvector__append_D269_k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1827 5 0) (bruijn ##.v.777 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dvector__append_D269_k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2997) ((##vcore.vector-length (bruijn ##.a.775 4 1))) ((bruijn ##.vector-copy!.268 5 129) (close _V10_Dvector__append_D269_k191) (bruijn ##.v.777 2 0) (bruijn ##.reg.2997 0 0) (bruijn ##.b.776 4 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 129)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_k191, self)})),
      statics->up->vars[0],
      self->vars[0],
      statics->up->up->up->vars[2]);
    }
}
static void _V10_Dvector__append_D269_k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.vector-copy!.268 3 129) (close _V10_Dvector__append_D269_k190) (bruijn ##.v.777 0 0) 0 (bruijn ##.a.775 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[129]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_k190, self)})),
      _var0,
      VEncodeInt(0l),
      statics->up->vars[1]);
}
static void _V10_Dvector__append_D269_k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1834 7 0) (bruijn ##.v.781 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dvector__append_D269_k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.reg.3003 ##.reg.3004 ##.reg.3005) ((##vcore.vector-length (bruijn ##.a.778 6 1)) (##vcore.vector-length (bruijn ##.b.779 6 2)) (##vcore.+ (bruijn ##.reg.3003 0 0) (bruijn ##.reg.3004 0 1))) ((bruijn ##.vector-copy!.268 7 129) (close _V10_Dvector__append_D269_k195) (bruijn ##.v.781 4 0) (bruijn ##.reg.3005 0 2) (bruijn ##.c.780 6 3)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 129)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_k195, self)})),
      statics->up->up->up->vars[0],
      self->vars[2],
      VGetArg(statics, 6-1, 3));
    }
}
static void _V10_Dvector__append_D269_k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.3002) ((##vcore.vector-length (bruijn ##.a.778 4 1))) ((bruijn ##.vector-copy!.268 5 129) (close _V10_Dvector__append_D269_k194) (bruijn ##.v.781 2 0) (bruijn ##.reg.3002 0 0) (bruijn ##.b.779 4 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 129)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_k194, self)})),
      statics->up->vars[0],
      self->vars[0],
      statics->up->up->up->vars[2]);
    }
}
static void _V10_Dvector__append_D269_k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.vector-copy!.268 3 129) (close _V10_Dvector__append_D269_k193) (bruijn ##.v.781 0 0) 0 (bruijn ##.a.778 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[129]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_k193, self)})),
      _var0,
      VEncodeInt(0l),
      statics->up->vars[1]);
}
static void _V10_Dvector__append_D269_k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1846 9 0) (bruijn ##.v.786 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dvector__append_D269_k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.reg.3015 ##.reg.3016 ##.reg.3017 ##.reg.3018) ((##vcore.vector-length (bruijn ##.a.782 8 1)) (##vcore.vector-length (bruijn ##.b.783 8 2)) (##vcore.vector-length (bruijn ##.c.784 8 3)) (##vcore.+ (bruijn ##.reg.3015 0 0) (bruijn ##.reg.3016 0 1) (bruijn ##.reg.3017 0 2))) ((bruijn ##.vector-copy!.268 9 129) (close _V10_Dvector__append_D269_k200) (bruijn ##.v.786 6 0) (bruijn ##.reg.3018 0 3) (bruijn ##.d.785 8 4)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 129)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_k200, self)})),
      VGetArg(statics, 6-1, 0),
      self->vars[3],
      VGetArg(statics, 8-1, 4));
    }
}
static void _V10_Dvector__append_D269_k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.reg.3012 ##.reg.3013 ##.reg.3014) ((##vcore.vector-length (bruijn ##.a.782 6 1)) (##vcore.vector-length (bruijn ##.b.783 6 2)) (##vcore.+ (bruijn ##.reg.3012 0 0) (bruijn ##.reg.3013 0 1))) ((bruijn ##.vector-copy!.268 7 129) (close _V10_Dvector__append_D269_k199) (bruijn ##.v.786 4 0) (bruijn ##.reg.3014 0 2) (bruijn ##.c.784 6 3)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 129)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_k199, self)})),
      statics->up->up->up->vars[0],
      self->vars[2],
      VGetArg(statics, 6-1, 3));
    }
}
static void _V10_Dvector__append_D269_k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.3011) ((##vcore.vector-length (bruijn ##.a.782 4 1))) ((bruijn ##.vector-copy!.268 5 129) (close _V10_Dvector__append_D269_k198) (bruijn ##.v.786 2 0) (bruijn ##.reg.3011 0 0) (bruijn ##.b.783 4 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 129)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_k198, self)})),
      statics->up->vars[0],
      self->vars[0],
      statics->up->up->up->vars[2]);
    }
}
static void _V10_Dvector__append_D269_k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.vector-copy!.268 3 129) (close _V10_Dvector__append_D269_k197) (bruijn ##.v.786 0 0) 0 (bruijn ##.a.782 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[129]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_k197, self)})),
      _var0,
      VEncodeInt(0l),
      statics->up->vars[1]);
}
static void _V10_Dvector__append_D269_k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1864 5 0) (bruijn ##.x.1865 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      statics->up->vars[0]);
}
static void _V10_Dvector__append_D269_k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.reg.3019 ##.reg.3020) ((##vcore.vector-length (bruijn ##.vec.790 2 1)) (##vcore.+ (bruijn ##.at.789 3 0) (bruijn ##.reg.3019 0 0))) (set! (bruijn ##.k.1867 2 0) (bruijn ##.at.789 3 0) (bruijn ##.reg.3020 0 1)))
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
static void _V10_Dvector__append_D269_lambda168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_lambda168, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.vector-copy!.268 6 129) (close _V10_Dvector__append_D269_k205) (bruijn ##.x.1865 2 0) (bruijn ##.at.789 1 0) (bruijn ##.vec.790 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 129)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_k205, self)})),
      statics->up->vars[0],
      statics->vars[0],
      _var1);
}
static void _V10_Dvector__append_D269_lambda167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.for-each.220 5 81) (close _V10_Dvector__append_D269_k204) (close _V10_Dvector__append_D269_lambda168) (bruijn ##.vecs.787 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 81)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_k204, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_lambda168, self)})),
      statics->up->up->up->vars[1]);
}
static void _V10_Dvector__append_D269_k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dvector__append_D269_lambda167) 0)
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvector__append_D269_lambda167, .env = self }, }, 1,
      VEncodeInt(0l));
}
static void _V10_Dvector__append_D269_k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-vector.264 3 125) (close _V10_Dvector__append_D269_k203) (bruijn ##.x.1871 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[125]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_k203, self)})),
      _var0);
}
static void _V10_Dvector__append_D269_k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dvector__append_D269_k202) (##intrinsic ##vcore.+) (bruijn ##.x.1872 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_k202, self)})),
      _V40_V10vcore_D_P,
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dvector__append_D269_lambda166(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dvector__append_D269_lambda166 #t (1 ((bruijn ##.vector.235 1 96) (bruijn ##.k.1825 0 0))) (2 ((bruijn ##.k.1826 0 0) (bruijn ##.a.774 0 1))) (3 (basic-block 3 3 (##.reg.2994 ##.reg.2995 ##.reg.2996) ((##vcore.vector-length (bruijn ##.a.775 1 1)) (##vcore.vector-length (bruijn ##.b.776 1 2)) (##vcore.+ (bruijn ##.reg.2994 0 0) (bruijn ##.reg.2995 0 1))) ((bruijn ##.make-vector.264 2 125) (close _V10_Dvector__append_D269_k189) (bruijn ##.reg.2996 0 2)))) (4 (basic-block 4 4 (##.reg.2998 ##.reg.2999 ##.reg.3000 ##.reg.3001) ((##vcore.vector-length (bruijn ##.a.778 1 1)) (##vcore.vector-length (bruijn ##.b.779 1 2)) (##vcore.vector-length (bruijn ##.c.780 1 3)) (##vcore.+ (bruijn ##.reg.2998 0 0) (bruijn ##.reg.2999 0 1) (bruijn ##.reg.3000 0 2))) ((bruijn ##.make-vector.264 2 125) (close _V10_Dvector__append_D269_k192) (bruijn ##.reg.3001 0 3)))) (5 (basic-block 5 5 (##.reg.3006 ##.reg.3007 ##.reg.3008 ##.reg.3009 ##.reg.3010) ((##vcore.vector-length (bruijn ##.a.782 1 1)) (##vcore.vector-length (bruijn ##.b.783 1 2)) (##vcore.vector-length (bruijn ##.c.784 1 3)) (##vcore.vector-length (bruijn ##.d.785 1 4)) (##vcore.+ (bruijn ##.reg.3006 0 0) (bruijn ##.reg.3007 0 1) (bruijn ##.reg.3008 0 2) (bruijn ##.reg.3009 0 3))) ((bruijn ##.make-vector.264 2 125) (close _V10_Dvector__append_D269_k196) (bruijn ##.reg.3010 0 4)))) (1 + ((bruijn ##.map.219 1 80) (close _V10_Dvector__append_D269_k201) (##intrinsic ##vcore.vector-length) (bruijn ##.vecs.787 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dvector__append_D269_lambda166, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dvector__append_D269_lambda166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // ((bruijn ##.vector.235 1 96) (bruijn ##.k.1825 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[96]), 1,
      _var0);
}
__attribute__((used)) static void _V20Case1__V10_Dvector__append_D269_lambda166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.1826 0 0) (bruijn ##.a.774 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V10_Dvector__append_D269_lambda166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.reg.2994 ##.reg.2995 ##.reg.2996) ((##vcore.vector-length (bruijn ##.a.775 1 1)) (##vcore.vector-length (bruijn ##.b.776 1 2)) (##vcore.+ (bruijn ##.reg.2994 0 0) (bruijn ##.reg.2995 0 1))) ((bruijn ##.make-vector.264 2 125) (close _V10_Dvector__append_D269_k189) (bruijn ##.reg.2996 0 2)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[125]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_k189, self)})),
      self->vars[2]);
    }
}
__attribute__((used)) static void _V20Case3__V10_Dvector__append_D269_lambda166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 4 4 (##.reg.2998 ##.reg.2999 ##.reg.3000 ##.reg.3001) ((##vcore.vector-length (bruijn ##.a.778 1 1)) (##vcore.vector-length (bruijn ##.b.779 1 2)) (##vcore.vector-length (bruijn ##.c.780 1 3)) (##vcore.+ (bruijn ##.reg.2998 0 0) (bruijn ##.reg.2999 0 1) (bruijn ##.reg.3000 0 2))) ((bruijn ##.make-vector.264 2 125) (close _V10_Dvector__append_D269_k192) (bruijn ##.reg.3001 0 3)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[125]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_k192, self)})),
      self->vars[3]);
    }
}
__attribute__((used)) static void _V20Case4__V10_Dvector__append_D269_lambda166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 5 5 (##.reg.3006 ##.reg.3007 ##.reg.3008 ##.reg.3009 ##.reg.3010) ((##vcore.vector-length (bruijn ##.a.782 1 1)) (##vcore.vector-length (bruijn ##.b.783 1 2)) (##vcore.vector-length (bruijn ##.c.784 1 3)) (##vcore.vector-length (bruijn ##.d.785 1 4)) (##vcore.+ (bruijn ##.reg.3006 0 0) (bruijn ##.reg.3007 0 1) (bruijn ##.reg.3008 0 2) (bruijn ##.reg.3009 0 3))) ((bruijn ##.make-vector.264 2 125) (close _V10_Dvector__append_D269_k196) (bruijn ##.reg.3010 0 4)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[125]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_k196, self)})),
      self->vars[4]);
    }
}
__attribute__((used)) static void _V20Case5__V10_Dvector__append_D269_lambda166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _varargs;
  // ((bruijn ##.map.219 1 80) (close _V10_Dvector__append_D269_k201) (##intrinsic ##vcore.vector-length) (bruijn ##.vecs.787 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_k201, self)})),
      _V40_V10vcore_Dvector__length,
      _varargs);
}
void _V10_Dvector__append_D269_lambda166(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dvector__append_D269_lambda166, @function\n"
#endif
"_V10_Dvector__append_D269_lambda166:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dvector__append_D269_lambda166\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dvector__append_D269_lambda166\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dvector__append_D269_lambda166\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dvector__append_D269_lambda166\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V10_Dvector__append_D269_lambda166\n"
"    cmp " ARGC_REG ", 1\n"
"    jge _V20Case5__V10_Dvector__append_D269_lambda166\n"
"    jmp _V20CaseError__V10_Dvector__append_D269_lambda166\n"
);
static void _V10_Dloop_D800_k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D800_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.3023) ((##vcore.+ (bruijn ##.i.801 3 1) 1)) ((bruijn ##.loop.800 4 0) (bruijn ##.k.1878 3 0) (bruijn ##.reg.3023 0 0)))
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
static void _V10_Dloop_D800_k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D800_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1879 0 0) (##vcore.vector-set! (close _V10_Dloop_D800_k207) (bruijn ##.v.796 3 1) (bruijn ##.i.801 1 1) (bruijn ##.fill.797 3 2)) ((bruijn ##.k.1878 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D800_k207, self)})),
      statics->up->up->vars[1],
      statics->vars[1],
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D800_lambda170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D800_lambda170, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.<.151 3 12) (close _V10_Dloop_D800_k206) (bruijn ##.i.801 0 1) (bruijn ##.end.799 2 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[12]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D800_k206, self)})),
      _var1,
      statics->up->vars[4]);
}
__attribute__((used)) static void _V20CaseError__V10_Dvector__fill_B_D270_lambda169(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dvector__fill_B_D270_lambda169 #t (3 (basic-block 1 1 (##.reg.3021) ((##vcore.vector-length (bruijn ##.v.791 1 1))) ((bruijn ##.vector-fill!.270 2 131) (bruijn ##.k.1873 1 0) (bruijn ##.v.791 1 1) (bruijn ##.fill.792 1 2) 0 (bruijn ##.reg.3021 0 0)))) (4 (basic-block 1 1 (##.reg.3022) ((##vcore.vector-length (bruijn ##.v.793 1 1))) ((bruijn ##.vector-fill!.270 2 131) (bruijn ##.k.1875 1 0) (bruijn ##.v.793 1 1) (bruijn ##.fill.794 1 2) (bruijn ##.start.795 1 3) (bruijn ##.reg.3022 0 0)))) (5 (letrec 1 ((close _V10_Dloop_D800_lambda170)) ((bruijn ##.loop.800 0 0) (bruijn ##.k.1877 1 0) (bruijn ##.start.798 1 3)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dvector__fill_B_D270_lambda169, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dvector__fill_B_D270_lambda169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.3021) ((##vcore.vector-length (bruijn ##.v.791 1 1))) ((bruijn ##.vector-fill!.270 2 131) (bruijn ##.k.1873 1 0) (bruijn ##.v.791 1 1) (bruijn ##.fill.792 1 2) 0 (bruijn ##.reg.3021 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[131]), 5,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      VEncodeInt(0l),
      self->vars[0]);
    }
}
__attribute__((used)) static void _V20Case1__V10_Dvector__fill_B_D270_lambda169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.reg.3022) ((##vcore.vector-length (bruijn ##.v.793 1 1))) ((bruijn ##.vector-fill!.270 2 131) (bruijn ##.k.1875 1 0) (bruijn ##.v.793 1 1) (bruijn ##.fill.794 1 2) (bruijn ##.start.795 1 3) (bruijn ##.reg.3022 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[131]), 5,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      statics->vars[3],
      self->vars[0]);
    }
}
__attribute__((used)) static void _V20Case2__V10_Dvector__fill_B_D270_lambda169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (letrec 1 ((close _V10_Dloop_D800_lambda170)) ((bruijn ##.loop.800 0 0) (bruijn ##.k.1877 1 0) (bruijn ##.start.798 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D800_lambda170, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[3]);
    }
}
void _V10_Dvector__fill_B_D270_lambda169(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dvector__fill_B_D270_lambda169, @function\n"
#endif
"_V10_Dvector__fill_B_D270_lambda169:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dvector__fill_B_D270_lambda169\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dvector__fill_B_D270_lambda169\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dvector__fill_B_D270_lambda169\n"
"    jmp _V20CaseError__V10_Dvector__fill_B_D270_lambda169\n"
);
__attribute__((used)) static void _V20CaseError__V10_Dmake__hash__table_D271_lambda171(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__hash__table_D271_lambda171 #t (1 (##vcore.make-hash-table (bruijn ##.k.1882 0 0) (##intrinsic ##vcore.eq?) #f 32)) (2 (##vcore.make-hash-table (bruijn ##.k.1883 0 0) (bruijn ##.eq.802 0 1) #f 32)) (3 (##vcore.make-hash-table (bruijn ##.k.1884 0 0) (bruijn ##.eq.803 0 1) (bruijn ##.hash.804 0 2) 32)) (4 (##vcore.make-hash-table (bruijn ##.k.1885 0 0) (bruijn ##.eq.805 0 1) (bruijn ##.hash.806 0 2) (bruijn ##.len.807 0 3))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__hash__table_D271_lambda171, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__hash__table_D271_lambda171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // (##vcore.make-hash-table (bruijn ##.k.1882 0 0) (##intrinsic ##vcore.eq?) #f 32)
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      _var0,
      _V40_V10vcore_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__hash__table_D271_lambda171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.make-hash-table (bruijn ##.k.1883 0 0) (bruijn ##.eq.802 0 1) #f 32)
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      _var0,
      _var1,
      VEncodeBool(false),
      VEncodeInt(32l));
}
__attribute__((used)) static void _V20Case2__V10_Dmake__hash__table_D271_lambda171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.make-hash-table (bruijn ##.k.1884 0 0) (bruijn ##.eq.803 0 1) (bruijn ##.hash.804 0 2) 32)
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      _var0,
      _var1,
      _var2,
      VEncodeInt(32l));
}
__attribute__((used)) static void _V20Case3__V10_Dmake__hash__table_D271_lambda171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  // (##vcore.make-hash-table (bruijn ##.k.1885 0 0) (bruijn ##.eq.805 0 1) (bruijn ##.hash.806 0 2) (bruijn ##.len.807 0 3))
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      _var0,
      _var1,
      _var2,
      _var3);
}
void _V10_Dmake__hash__table_D271_lambda171(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__hash__table_D271_lambda171, @function\n"
#endif
"_V10_Dmake__hash__table_D271_lambda171:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dmake__hash__table_D271_lambda171\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dmake__hash__table_D271_lambda171\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dmake__hash__table_D271_lambda171\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dmake__hash__table_D271_lambda171\n"
"    jmp _V20CaseError__V10_Dmake__hash__table_D271_lambda171\n"
);
static void _V10_Dhash__table__ref_D272_lambda173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dhash__table__ref_D272_lambda173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.325 2 186) (bruijn ##.k.1887 0 0) (##string ##.string.3075) (bruijn ##.key.809 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[186]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D3075.sym, VPOINTER_OTHER),
      statics->vars[2]);
}
__attribute__((used)) static void _V20CaseError__V10_Dhash__table__ref_D272_lambda172(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dhash__table__ref_D272_lambda172 #t (3 (##vcore.hash-table-ref (bruijn ##.k.1886 0 0) (bruijn ##.table.808 0 1) (bruijn ##.key.809 0 2) (close _V10_Dhash__table__ref_D272_lambda173))) (4 (##vcore.hash-table-ref (bruijn ##.k.1888 0 0) (bruijn ##.table.810 0 1) (bruijn ##.key.811 0 2) (bruijn ##.thunk.812 0 3))))
 VErrorC(runtime, "Not enough arguments to _V10_Dhash__table__ref_D272_lambda172, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dhash__table__ref_D272_lambda172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.hash-table-ref (bruijn ##.k.1886 0 0) (bruijn ##.table.808 0 1) (bruijn ##.key.809 0 2) (close _V10_Dhash__table__ref_D272_lambda173))
    VCallFuncWithGC(runtime, (VFunc)VHashTableRef, 4,
      _var0,
      _var1,
      _var2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dhash__table__ref_D272_lambda173, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dhash__table__ref_D272_lambda172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  // (##vcore.hash-table-ref (bruijn ##.k.1888 0 0) (bruijn ##.table.810 0 1) (bruijn ##.key.811 0 2) (bruijn ##.thunk.812 0 3))
    VCallFuncWithGC(runtime, (VFunc)VHashTableRef, 4,
      _var0,
      _var1,
      _var2,
      _var3);
}
void _V10_Dhash__table__ref_D272_lambda172(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dhash__table__ref_D272_lambda172, @function\n"
#endif
"_V10_Dhash__table__ref_D272_lambda172:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dhash__table__ref_D272_lambda172\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dhash__table__ref_D272_lambda172\n"
"    jmp _V20CaseError__V10_Dhash__table__ref_D272_lambda172\n"
);
static void _V10_Dhash__table__set_B_D273_lambda174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dhash__table__set_B_D273_lambda174, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  // (##vcore.hash-table-set! (bruijn ##.k.1889 0 0) (bruijn ##.table.813 0 1) (bruijn ##.key.814 0 2) (bruijn ##.val.815 0 3))
    VCallFuncWithGC(runtime, (VFunc)VHashTableSet, 4,
      _var0,
      _var1,
      _var2,
      _var3);
}
static void _V10_Dloop_D818_k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D818_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1891 5 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.reg.3028 1 0) (bruijn ##.reg.3030 1 2)) (bruijn ##.x.1896 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        statics->vars[2]),
        _var0));
}
static void _V10_Dloop_D818_k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D818_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1892 0 0) (basic-block 2 2 (##.reg.3025 ##.reg.3026) ((##vcore.vector-ref (bruijn ##.vec.817 5 0) (bruijn ##.i.819 3 1)) (##vcore.void? (bruijn ##.reg.3025 0 0))) (if (bruijn ##.reg.3026 0 1) (basic-block 1 1 (##.reg.3027) ((##vcore.+ (bruijn ##.i.819 4 1) 3)) ((bruijn ##.loop.818 5 0) (bruijn ##.k.1891 4 0) (bruijn ##.reg.3027 0 0))) (basic-block 4 4 (##.reg.3028 ##.reg.3029 ##.reg.3030 ##.reg.3031) ((##vcore.vector-ref (bruijn ##.vec.817 6 0) (bruijn ##.i.819 4 1)) (##vcore.+ (bruijn ##.i.819 4 1) 2) (##vcore.vector-ref (bruijn ##.vec.817 6 0) (bruijn ##.reg.3029 0 1)) (##vcore.+ (bruijn ##.i.819 4 1) 3)) ((bruijn ##.loop.818 5 0) (close _V10_Dloop_D818_k210) (bruijn ##.reg.3031 0 3))))) ((bruijn ##.k.1891 2 0) '()))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D818_k210, self)})),
      self->vars[3]);
    }
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
}
}
static void _V10_Dloop_D818_lambda176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D818_lambda176, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.3024) ((##vcore.vector-length (bruijn ##.vec.817 3 0))) ((bruijn ##.<.151 5 12) (close _V10_Dloop_D818_k209) (bruijn ##.i.819 1 1) (bruijn ##.reg.3024 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 12)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D818_k209, self)})),
      statics->vars[1],
      self->vars[0]);
    }
}
static void _V10_Dhash__table___Galist_D274_k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dhash__table___Galist_D274_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D818_lambda176)) ((bruijn ##.loop.818 0 0) (bruijn ##.k.1890 2 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D818_lambda176, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dhash__table___Galist_D274_lambda175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dhash__table___Galist_D274_lambda175, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.hash-table-vector (close _V10_Dhash__table___Galist_D274_k208) (bruijn ##.table.816 0 1))
    VCallFuncWithGC(runtime, (VFunc)VHashTableVector, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dhash__table___Galist_D274_k208, self)})),
      _var1);
}
static void _V10_Dnumber___Gstring_D275_lambda177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dnumber___Gstring_D275_lambda177, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.sprintf.321 1 182) (bruijn ##.k.1903 0 0) (##string ##.string.3076) (bruijn ##.x.820 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[182]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D3076.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dchar__numeric_Q_D276_lambda178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dchar__numeric_Q_D276_lambda178, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.3032) ((##vcore.char-integer (bruijn ##.x.821 1 1))) ((bruijn ##.<=.154 2 15) (bruijn ##.k.1904 1 0) 48 (bruijn ##.reg.3032 0 0) 57))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCharInt2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[15]), 4,
      statics->vars[0],
      VEncodeInt(48l),
      self->vars[0],
      VEncodeInt(57l));
    }
}
static void _V10_Dchar__alphabetic_Q_D277_k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dchar__alphabetic_Q_D277_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1907 0 0) ((bruijn ##.k.1906 2 0) (bruijn ##.p.1907 0 0)) ((bruijn ##.<=.154 3 15) (bruijn ##.k.1906 2 0) 97 (bruijn ##.reg.3033 1 0) 122))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[15]), 4,
      statics->up->vars[0],
      VEncodeInt(97l),
      statics->vars[0],
      VEncodeInt(122l));
}
}
static void _V10_Dchar__alphabetic_Q_D277_lambda179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dchar__alphabetic_Q_D277_lambda179, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.3033) ((##vcore.char-integer (bruijn ##.x.822 1 1))) ((bruijn ##.<=.154 2 15) (close _V10_Dchar__alphabetic_Q_D277_k211) 65 (bruijn ##.reg.3033 0 0) 90))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCharInt2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[15]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dchar__alphabetic_Q_D277_k211, self)})),
      VEncodeInt(65l),
      self->vars[0],
      VEncodeInt(90l));
    }
}
static void _V10_Dtry__or__gc_D281_lambda182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtry__or__gc_D281_lambda182, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (bruijn ##.ok.829 0 2) ((bruijn ##.k.1911 0 0) (bruijn ##.ret.828 0 1)) ((bruijn ##.error.325 4 186) (bruijn ##.k.1911 0 0) (bruijn ##.msg.825 3 2)))
if(VDecodeBool(
_var2)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[186]), 2,
      _var0,
      statics->up->up->vars[2]);
}
}
static void _V10_Dtry__or__gc_D281_k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtry__or__gc_D281_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1909 1 0) (bruijn ##.thunk.824 2 1) (close _V10_Dtry__or__gc_D281_lambda182))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      statics->up->vars[1],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtry__or__gc_D281_lambda182, self)})));
}
static void _V10_Dtry__or__gc_D281_lambda181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtry__or__gc_D281_lambda181, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (bruijn ##.ok.827 0 2) ((bruijn ##.k.1909 0 0) (bruijn ##.ret.826 0 1)) (##vcore.garbage-collect (close _V10_Dtry__or__gc_D281_k212) #t))
if(VDecodeBool(
_var2)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VGarbageCollect, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtry__or__gc_D281_k212, self)})),
      VEncodeBool(true));
}
}
static void _V10_Dtry__or__gc_D281_lambda180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtry__or__gc_D281_lambda180, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.k.1908 0 0) (bruijn ##.thunk.824 0 1) (close _V10_Dtry__or__gc_D281_lambda181))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      _var1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtry__or__gc_D281_lambda181, self)})));
}
static void _V10_Dclose__port_D282_k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dclose__port_D282_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1913 0 0) (##vcore.finalize! (bruijn ##.k.1912 1 0) (bruijn ##.port.830 1 1)) (##vcore.close-stream (bruijn ##.k.1912 1 0) (bruijn ##.port.830 1 1)))
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
static void _V10_Dclose__port_D282_lambda183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dclose__port_D282_lambda183, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.has-finalizer? (close _V10_Dclose__port_D282_k213) (bruijn ##.port.830 0 1))
    VCallFuncWithGC(runtime, (VFunc)VHasFinalizer, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dclose__port_D282_k213, self)})),
      _var1);
}
static void _V10_Dopen__input__file__impl_D283_lambda185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file__impl_D283_lambda185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.open-input-stream (bruijn ##.k.1915 0 0) (bruijn ##.path.831 1 1))
    VCallFuncWithGC(runtime, (VFunc)VOpenInputStream2, 2,
      _var0,
      statics->vars[1]);
}
static void _V10_Dopen__input__file__impl_D283_k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file__impl_D283_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.ret.832 1 1) (##vcore.set-finalizer! (bruijn ##.k.1918 0 0) (bruijn ##.ret.832 1 1) (##intrinsic ##vcore.close-stream)) ((bruijn ##.k.1918 0 0) #f))
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
static void _V10_Dopen__input__file__impl_D283_k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file__impl_D283_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.304 3 165) (bruijn ##.k.1916 1 0) (bruijn ##.ret.832 1 1) (bruijn ##.ok.833 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[165]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
}
static void _V10_Dopen__input__file__impl_D283_lambda186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file__impl_D283_lambda186, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dopen__input__file__impl_D283_k214) (close _V10_Dopen__input__file__impl_D283_k215))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dopen__input__file__impl_D283_k214, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__input__file__impl_D283_k215, self)})));
}
static void _V10_Dopen__input__file__impl_D283_lambda184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file__impl_D283_lambda184, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call-with-values (bruijn ##.k.1914 0 0) (close _V10_Dopen__input__file__impl_D283_lambda185) (close _V10_Dopen__input__file__impl_D283_lambda186))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__input__file__impl_D283_lambda185, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__input__file__impl_D283_lambda186, self)})));
}
static void _V10_Dopen__output__file__impl_D284_lambda188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file__impl_D284_lambda188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.open-output-stream (bruijn ##.k.1920 0 0) (bruijn ##.path.834 1 1))
    VCallFuncWithGC(runtime, (VFunc)VOpenOutputStream2, 2,
      _var0,
      statics->vars[1]);
}
static void _V10_Dopen__output__file__impl_D284_k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file__impl_D284_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.ret.835 1 1) (##vcore.set-finalizer! (bruijn ##.k.1923 0 0) (bruijn ##.ret.835 1 1) (##intrinsic ##vcore.close-stream)) ((bruijn ##.k.1923 0 0) #f))
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
static void _V10_Dopen__output__file__impl_D284_k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file__impl_D284_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.304 3 165) (bruijn ##.k.1921 1 0) (bruijn ##.ret.835 1 1) (bruijn ##.ok.836 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[165]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
}
static void _V10_Dopen__output__file__impl_D284_lambda189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file__impl_D284_lambda189, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dopen__output__file__impl_D284_k216) (close _V10_Dopen__output__file__impl_D284_k217))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dopen__output__file__impl_D284_k216, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__file__impl_D284_k217, self)})));
}
static void _V10_Dopen__output__file__impl_D284_lambda187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file__impl_D284_lambda187, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call-with-values (bruijn ##.k.1919 0 0) (close _V10_Dopen__output__file__impl_D284_lambda188) (close _V10_Dopen__output__file__impl_D284_lambda189))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__file__impl_D284_lambda188, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__file__impl_D284_lambda189, self)})));
}
static void _V10_Dopen__output__string__impl_D285_lambda191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__string__impl_D285_lambda191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.open-output-string (bruijn ##.k.1925 0 0))
    VCallFuncWithGC(runtime, (VFunc)VOpenOutputString2, 1,
      _var0);
}
static void _V10_Dopen__output__string__impl_D285_k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__string__impl_D285_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.ret.837 1 1) (##vcore.set-finalizer! (bruijn ##.k.1928 0 0) (bruijn ##.ret.837 1 1) (##intrinsic ##vcore.close-stream)) ((bruijn ##.k.1928 0 0) #f))
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
static void _V10_Dopen__output__string__impl_D285_k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__string__impl_D285_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.304 3 165) (bruijn ##.k.1926 1 0) (bruijn ##.ret.837 1 1) (bruijn ##.ok.838 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[165]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
}
static void _V10_Dopen__output__string__impl_D285_lambda192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__string__impl_D285_lambda192, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dopen__output__string__impl_D285_k218) (close _V10_Dopen__output__string__impl_D285_k219))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dopen__output__string__impl_D285_k218, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__string__impl_D285_k219, self)})));
}
static void _V10_Dopen__output__string__impl_D285_lambda190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__string__impl_D285_lambda190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1924 0 0) (close _V10_Dopen__output__string__impl_D285_lambda191) (close _V10_Dopen__output__string__impl_D285_lambda192))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__string__impl_D285_lambda191, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__string__impl_D285_lambda192, self)})));
}
static void _V10_Dopen__input__file_D286_lambda194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file_D286_lambda194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.open-input-file-impl.283 2 144) (bruijn ##.k.1930 0 0) (bruijn ##.path.839 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[144]), 2,
      _var0,
      statics->vars[1]);
}
static void _V10_Dopen__input__file_D286_lambda193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file_D286_lambda193, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.try-or-gc.281 1 142) (bruijn ##.k.1929 0 0) (close _V10_Dopen__input__file_D286_lambda194) (##string ##.string.3077))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[142]), 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__input__file_D286_lambda194, self)})),
      VEncodePointer(&_V10_Dstring_D3077.sym, VPOINTER_OTHER));
}
static void _V10_Dopen__output__file_D287_lambda196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file_D287_lambda196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.open-output-file-impl.284 2 145) (bruijn ##.k.1932 0 0) (bruijn ##.path.840 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[145]), 2,
      _var0,
      statics->vars[1]);
}
static void _V10_Dopen__output__file_D287_lambda195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file_D287_lambda195, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.try-or-gc.281 1 142) (bruijn ##.k.1931 0 0) (close _V10_Dopen__output__file_D287_lambda196) (##string ##.string.3078))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[142]), 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__file_D287_lambda196, self)})),
      VEncodePointer(&_V10_Dstring_D3078.sym, VPOINTER_OTHER));
}
static void _V10_Dopen__output__string_D288_lambda197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__string_D288_lambda197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.try-or-gc.281 1 142) (bruijn ##.k.1933 0 0) (bruijn ##.open-output-string-impl.285 1 146) (##string ##.string.3079))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[142]), 3,
      _var0,
      statics->vars[146],
      VEncodePointer(&_V10_Dstring_D3079.sym, VPOINTER_OTHER));
}
static void _V10_Dcall__with__port_D290_k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcall__with__port_D290_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1934 2 0) (bruijn ##.ret.843 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->vars[0]);
}
static void _V10_Dcall__with__port_D290_k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcall__with__port_D290_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.close-port.282 2 143) (close _V10_Dcall__with__port_D290_k221) (bruijn ##.port.841 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[143]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcall__with__port_D290_k221, self)})),
      statics->vars[1]);
}
static void _V10_Dcall__with__port_D290_lambda198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcall__with__port_D290_lambda198, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.proc.842 0 2) (close _V10_Dcall__with__port_D290_k220) (bruijn ##.port.841 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var2), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcall__with__port_D290_k220, self)})),
      _var1);
}
static void _V10_Dcall__with__input__file_D291_k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcall__with__input__file_D291_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.call-with-port.290 2 151) (bruijn ##.k.1936 1 0) (bruijn ##.x.1937 0 0) (bruijn ##.proc.845 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[151]), 3,
      statics->vars[0],
      _var0,
      statics->vars[2]);
}
static void _V10_Dcall__with__input__file_D291_lambda199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcall__with__input__file_D291_lambda199, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.open-input-file.286 1 147) (close _V10_Dcall__with__input__file_D291_k222) (bruijn ##.path.844 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[147]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcall__with__input__file_D291_k222, self)})),
      _var1);
}
static void _V10_Dcall__with__output__file_D292_k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcall__with__output__file_D292_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.call-with-port.290 2 151) (bruijn ##.k.1938 1 0) (bruijn ##.x.1939 0 0) (bruijn ##.proc.847 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[151]), 3,
      statics->vars[0],
      _var0,
      statics->vars[2]);
}
static void _V10_Dcall__with__output__file_D292_lambda200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcall__with__output__file_D292_lambda200, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.open-output-file.287 1 148) (close _V10_Dcall__with__output__file_D292_k223) (bruijn ##.path.846 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[148]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcall__with__output__file_D292_k223, self)})),
      _var1);
}
static void _V10_Dwith__output__to__file_D293_k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__output__to__file_D293_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1940 6 0) (bruijn ##.ret.854 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      statics->up->vars[0]);
}
static void _V10_Dwith__output__to__file_D293_k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__output__to__file_D293_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parameter.0.851 3 0) (close _V10_Dwith__output__to__file_D293_k228) '##vcore.pop-value (bruijn ##.keyval.1.852 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__output__to__file_D293_k228, self)})),
      _V10vcore_Dpop__value,
      statics->up->vars[0]);
}
static void _V10_Dwith__output__to__file_D293_k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__output__to__file_D293_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.close-port.282 5 143) (close _V10_Dwith__output__to__file_D293_k227) (bruijn ##.port.850 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 143)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__output__to__file_D293_k227, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Dwith__output__to__file_D293_k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__output__to__file_D293_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.thunk.849 3 2) (close _V10_Dwith__output__to__file_D293_k226))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__output__to__file_D293_k226, self)})));
}
static void _V10_Dwith__output__to__file_D293_lambda202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parameter.0.851 0 0) (close _V10_Dwith__output__to__file_D293_k225) '##vcore.push-value (bruijn ##.port.850 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__output__to__file_D293_k225, self)})),
      _V10vcore_Dpush__value,
      statics->vars[0]);
}
static void _V10_Dwith__output__to__file_D293_k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__output__to__file_D293_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dwith__output__to__file_D293_lambda202) (bruijn ##.current-output-port.278 2 139))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dwith__output__to__file_D293_lambda202, .env = self }, }, 1,
      statics->up->vars[139]);
}
static void _V10_Dwith__output__to__file_D293_lambda201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__output__to__file_D293_lambda201, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.open-output-file.287 1 148) (close _V10_Dwith__output__to__file_D293_k224) (bruijn ##.str.848 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[148]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__output__to__file_D293_k224, self)})),
      _var1);
}
static void _V10_Dwith__input__from__file_D294_k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__input__from__file_D294_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1943 6 0) (bruijn ##.ret.861 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      statics->up->vars[0]);
}
static void _V10_Dwith__input__from__file_D294_k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__input__from__file_D294_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parameter.3.858 3 0) (close _V10_Dwith__input__from__file_D294_k233) '##vcore.pop-value (bruijn ##.keyval.4.859 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__input__from__file_D294_k233, self)})),
      _V10vcore_Dpop__value,
      statics->up->vars[0]);
}
static void _V10_Dwith__input__from__file_D294_k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__input__from__file_D294_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.close-port.282 5 143) (close _V10_Dwith__input__from__file_D294_k232) (bruijn ##.port.857 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 143)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__input__from__file_D294_k232, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Dwith__input__from__file_D294_k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__input__from__file_D294_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.thunk.856 3 2) (close _V10_Dwith__input__from__file_D294_k231))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__input__from__file_D294_k231, self)})));
}
static void _V10_Dwith__input__from__file_D294_lambda204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parameter.3.858 0 0) (close _V10_Dwith__input__from__file_D294_k230) '##vcore.push-value (bruijn ##.port.857 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__input__from__file_D294_k230, self)})),
      _V10vcore_Dpush__value,
      statics->vars[0]);
}
static void _V10_Dwith__input__from__file_D294_k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__input__from__file_D294_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dwith__input__from__file_D294_lambda204) (bruijn ##.current-input-port.280 2 141))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dwith__input__from__file_D294_lambda204, .env = self }, }, 1,
      statics->up->vars[141]);
}
static void _V10_Dwith__input__from__file_D294_lambda203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__input__from__file_D294_lambda203, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.open-input-file.286 1 147) (close _V10_Dwith__input__from__file_D294_k229) (bruijn ##.str.855 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[147]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__input__from__file_D294_k229, self)})),
      _var1);
}
static void _V10_Dread__char_D295_k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__char_D295_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.3034) ((##vcore.read-char (bruijn ##.x.1947 1 0))) ((bruijn ##.k.1946 2 0) (bruijn ##.reg.3034 0 0)))
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
__attribute__((used)) static void _V20CaseError__V10_Dread__char_D295_lambda205(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dread__char_D295_lambda205 #t (1 ((bruijn ##.current-input-port.280 1 141) (close _V10_Dread__char_D295_k234))) (2 (basic-block 1 1 (##.reg.3035) ((##vcore.read-char (bruijn ##.port.862 1 1))) ((bruijn ##.k.1948 1 0) (bruijn ##.reg.3035 0 0)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dread__char_D295_lambda205, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dread__char_D295_lambda205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-input-port.280 1 141) (close _V10_Dread__char_D295_k234))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[141]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__char_D295_k234, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dread__char_D295_lambda205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.3035) ((##vcore.read-char (bruijn ##.port.862 1 1))) ((bruijn ##.k.1948 1 0) (bruijn ##.reg.3035 0 0)))
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
void _V10_Dread__char_D295_lambda205(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dread__char_D295_lambda205, @function\n"
#endif
"_V10_Dread__char_D295_lambda205:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dread__char_D295_lambda205\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dread__char_D295_lambda205\n"
"    jmp _V20CaseError__V10_Dread__char_D295_lambda205\n"
);
static void _V10_Dread__line_D296_k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D296_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.read-line.296 2 157) (bruijn ##.k.1949 1 0) (bruijn ##.x.1950 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[157]), 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dread__line_D296_k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D296_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.3037 1 0) ((bruijn ##.k.1956 0 0) (##string ##.string.3074)) ((bruijn ##.k.1956 0 0) (bruijn ##.rest.869 2 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D3074.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
}
static void _V10_Dread__line_D296_k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D296_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.string-append.234 8 95) (bruijn ##.k.1951 7 0) (bruijn ##.line.864 6 0) (bruijn ##.x.1954 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 95)), 3,
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 6-1, 0),
      _var0);
}
static void _V10_Dread__line_D296_k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D296_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.3037) ((##vcore.eof-object? (bruijn ##.rest.869 1 0))) ((close _V10_Dread__line_D296_k239) (close _V10_Dread__line_D296_k240)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEofP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dread__line_D296_k239, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D296_k240, self)})));
    }
}
static void _V10_Dread__line_D296_k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D296_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.3036) ((##vcore.eof-object? (bruijn ##.line.864 3 0))) (if (bruijn ##.reg.3036 0 0) ((bruijn ##.k.1951 4 0) (bruijn ##.line.864 3 0)) (if (bruijn ##.complete.865 3 1) ((bruijn ##.k.1951 4 0) (bruijn ##.line.864 3 0)) ((bruijn ##.read-line.296 5 157) (close _V10_Dread__line_D296_k238) (bruijn ##.port.863 4 1)))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 157)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D296_k238, self)})),
      statics->up->up->up->vars[1]);
}
}
    }
}
static void _V10_Dread__line_D296_k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D296_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Dread__line_D296_k237) (bruijn ##.dummy.8.866 1 2) (bruijn ##.x.1957 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D296_k237, self)})),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Dread__line_D296_lambda207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D296_lambda207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.read-line2 (bruijn ##.k.1958 0 0) (bruijn ##.port.863 2 1))
    VCallFuncWithGC(runtime, (VFunc)VReadLine3, 2,
      _var0,
      statics->up->vars[1]);
}
static void _V10_Dread__line_D296_k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D296_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.1959 1 0) (bruijn ##.complete.865 2 1) (bruijn ##.complete.7.868 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      statics->vars[2]
    );
}
static void _V10_Dread__line_D296_lambda208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D296_lambda208, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V10_Dread__line_D296_k241) (bruijn ##.line.864 1 0) (bruijn ##.line.6.867 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D296_k241, self)})),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
__attribute__((used)) static void _V20CaseError__V10_Dread__line_D296_lambda206(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dread__line_D296_lambda206 #t (1 ((bruijn ##.current-input-port.280 1 141) (close _V10_Dread__line_D296_k235))) (2 (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Dread__line_D296_k236) (close _V10_Dread__line_D296_lambda207) (close _V10_Dread__line_D296_lambda208)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D296_lambda206, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dread__line_D296_lambda206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-input-port.280 1 141) (close _V10_Dread__line_D296_k235))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[141]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D296_k235, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dread__line_D296_lambda206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Dread__line_D296_k236) (close _V10_Dread__line_D296_lambda207) (close _V10_Dread__line_D296_lambda208)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D296_k236, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D296_lambda207, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D296_lambda208, self)})));
    }
}
void _V10_Dread__line_D296_lambda206(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dread__line_D296_lambda206, @function\n"
#endif
"_V10_Dread__line_D296_lambda206:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dread__line_D296_lambda206\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dread__line_D296_lambda206\n"
"    jmp _V20CaseError__V10_Dread__line_D296_lambda206\n"
);
static void _V10_Dread_D297_k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread_D297_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.read (bruijn ##.k.1961 1 0) (bruijn ##.x.1962 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRead2, 2,
      statics->vars[0],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dread_D297_lambda209(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dread_D297_lambda209 #t (1 ((bruijn ##.current-input-port.280 1 141) (close _V10_Dread_D297_k242))) (2 (##vcore.read (bruijn ##.k.1963 0 0) (bruijn ##.port.870 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dread_D297_lambda209, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dread_D297_lambda209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-input-port.280 1 141) (close _V10_Dread_D297_k242))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[141]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread_D297_k242, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dread_D297_lambda209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.read (bruijn ##.k.1963 0 0) (bruijn ##.port.870 0 1))
    VCallFuncWithGC(runtime, (VFunc)VRead2, 2,
      _var0,
      _var1);
}
void _V10_Dread_D297_lambda209(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dread_D297_lambda209, @function\n"
#endif
"_V10_Dread_D297_lambda209:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dread_D297_lambda209\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dread_D297_lambda209\n"
"    jmp _V20CaseError__V10_Dread_D297_lambda209\n"
);
static void _V10_Dnewline_D298_k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dnewline_D298_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.3038) ((##vcore.newline (bruijn ##.x.1965 1 0))) ((bruijn ##.k.1964 2 0) (bruijn ##.reg.3038 0 0)))
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
__attribute__((used)) static void _V20CaseError__V10_Dnewline_D298_lambda210(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dnewline_D298_lambda210 #t (1 ((bruijn ##.current-output-port.278 1 139) (close _V10_Dnewline_D298_k243))) (2 (basic-block 1 1 (##.reg.3039) ((##vcore.newline (bruijn ##.port.871 1 1))) ((bruijn ##.k.1966 1 0) (bruijn ##.reg.3039 0 0)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dnewline_D298_lambda210, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dnewline_D298_lambda210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-output-port.278 1 139) (close _V10_Dnewline_D298_k243))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[139]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dnewline_D298_k243, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dnewline_D298_lambda210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.3039) ((##vcore.newline (bruijn ##.port.871 1 1))) ((bruijn ##.k.1966 1 0) (bruijn ##.reg.3039 0 0)))
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
void _V10_Dnewline_D298_lambda210(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dnewline_D298_lambda210, @function\n"
#endif
"_V10_Dnewline_D298_lambda210:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dnewline_D298_lambda210\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dnewline_D298_lambda210\n"
"    jmp _V20CaseError__V10_Dnewline_D298_lambda210\n"
);
static void _V10_Dloop_D875_k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D875_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.875 3 0) (bruijn ##.k.1971 2 0) (##inline ##vcore.cdr (bruijn ##.xs.876 2 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      statics->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]));
}
static void _V10_Dloop_D875_lambda212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D875_lambda212, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.xs.876 0 1)) (basic-block 1 1 (##.reg.3041) ((##vcore.display-word (##string ##.string.3081) (bruijn ##.port.874 5 3))) ((bruijn ##.printout.301 6 162) (close _V10_Dloop_D875_k245) (##inline ##vcore.car (bruijn ##.xs.876 1 1)) (bruijn ##.write?.873 5 2) (bruijn ##.port.874 5 3))) (if (##inline ##vcore.null? (bruijn ##.xs.876 0 1)) ((bruijn ##.k.1971 0 0) 'ok) (basic-block 1 1 (##.reg.3042) ((##vcore.display-word (##string ##.string.3082) (bruijn ##.port.874 5 3))) ((bruijn ##.printout.301 6 162) (bruijn ##.k.1971 1 0) (bruijn ##.xs.876 1 1) (bruijn ##.write?.873 5 2) (bruijn ##.port.874 5 3)))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D3081.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 162)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D875_k245, self)})),
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
      VEncodePointer(&_V10_Dstring_D3082.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 162)), 4,
      statics->vars[0],
      statics->vars[1],
      VGetArg(statics, 5-1, 2),
      VGetArg(statics, 5-1, 3));
    }
}
}
}
static void _V10_Dprintout__list_D299_k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__list_D299_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.3043) ((##vcore.display-word (##string ##.string.3083) (bruijn ##.port.874 5 3))) ((bruijn ##.k.1967 5 0) (bruijn ##.reg.3043 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D3083.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
static void _V10_Dprintout__list_D299_k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__list_D299_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D875_lambda212)) ((bruijn ##.loop.875 0 0) (close _V10_Dprintout__list_D299_k246) (##inline ##vcore.cdr (bruijn ##.x.872 3 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D875_lambda212, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__list_D299_k246, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
    }
}
static void _V10_Dprintout__list_D299_lambda211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__list_D299_lambda211, got ~D~N"
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
  // (basic-block 1 1 (##.reg.3040) ((##vcore.display-word (##string ##.string.3080) (bruijn ##.port.874 1 3))) ((bruijn ##.printout.301 2 162) (close _V10_Dprintout__list_D299_k244) (##inline ##vcore.car (bruijn ##.x.872 1 1)) (bruijn ##.write?.873 1 2) (bruijn ##.port.874 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D3080.sym, VPOINTER_OTHER),
      statics->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[162]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__list_D299_k244, self)})),
      VInlineCar2(runtime,
        statics->vars[1]),
      statics->vars[2],
      statics->vars[3]);
    }
}
static void _V10_Dprintout__quotation_D300_k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__quotation_D300_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printout.301 4 162) (bruijn ##.k.1981 3 0) (bruijn ##.x.1983 0 0) (bruijn ##.write?.878 3 2) (bruijn ##.port.879 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[162]), 4,
      statics->up->up->vars[0],
      _var0,
      statics->up->up->vars[2],
      statics->up->up->vars[3]);
}
static void _V10_Dprintout__quotation_D300_k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__quotation_D300_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.3044) ((##vcore.display-word (##inline ##vcore.cdr (bruijn ##.x.1985 1 0)) (bruijn ##.port.879 2 3))) ((bruijn ##.cadr.184 3 45) (close _V10_Dprintout__quotation_D300_k248) (bruijn ##.x.877 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VInlineCdr2(runtime,
        statics->vars[0]),
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[45]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__quotation_D300_k248, self)})),
      statics->up->vars[1]);
    }
}
static void _V10_Dprintout__quotation_D300_lambda213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__quotation_D300_lambda213, got ~D~N"
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
  // ((bruijn ##.assv.228 1 89) (close _V10_Dprintout__quotation_D300_k247) (##inline ##vcore.car (bruijn ##.x.877 0 1)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quote '(##string ##.string.3084)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quasiquote '(##string ##.string.3085)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote '(##string ##.string.3086)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote-splicing '(##string ##.string.3087)) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[89]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__quotation_D300_k247, self)})),
      VInlineCar2(runtime,
        _var1),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quote,
        VEncodePointer(&_V10_Dstring_D3084.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quasiquote,
        VEncodePointer(&_V10_Dstring_D3085.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unquote,
        VEncodePointer(&_V10_Dstring_D3086.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unquote__splicing,
        VEncodePointer(&_V10_Dstring_D3087.sym, VPOINTER_OTHER)),
        VNULL)))));
}
static void _V10_Dprintout_D301_k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D301_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1997 0 0) ((bruijn ##.printout-quotation.300 2 161) (bruijn ##.k.1995 1 0) (bruijn ##.x.880 1 1) (bruijn ##.write?.881 1 2) (bruijn ##.port.882 1 3)) ((bruijn ##.printout-list.299 2 160) (bruijn ##.k.1995 1 0) (bruijn ##.x.880 1 1) (bruijn ##.write?.881 1 2) (bruijn ##.port.882 1 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[161]), 4,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      statics->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[160]), 4,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      statics->vars[3]);
}
}
static void _V10_Dloop_D884_k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D884_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.i.885 1 1) 0) ((bruijn ##.k.2013 0 0) #f) (basic-block 1 1 (##.reg.3050) ((##vcore.display-word (##string ##.string.3081) (bruijn ##.port.882 6 3))) ((bruijn ##.k.2013 1 0) (bruijn ##.reg.3050 0 0))))
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
      VEncodePointer(&_V10_Dstring_D3081.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
static void _V10_Dloop_D884_k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D884_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.3049) ((##vcore.+ (bruijn ##.i.885 4 1) 1)) ((bruijn ##.loop.884 5 0) (bruijn ##.k.2006 4 0) (bruijn ##.reg.3049 0 0)))
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
static void _V10_Dloop_D884_k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D884_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.3048) ((##vcore.vector-ref (bruijn ##.x.880 6 1) (bruijn ##.i.885 2 1))) ((bruijn ##.printout.301 7 162) (close _V10_Dloop_D884_k252) (bruijn ##.reg.3048 0 0) (bruijn ##.write?.881 6 2) (bruijn ##.port.882 6 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 162)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D884_k252, self)})),
      self->vars[0],
      VGetArg(statics, 6-1, 2),
      VGetArg(statics, 6-1, 3));
    }
}
static void _V10_Dloop_D884_lambda215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D884_lambda215, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.885 0 1) (bruijn ##.reg.3046 2 0)) ((bruijn ##.k.2006 0 0) #f) ((close _V10_Dloop_D884_k250) (close _V10_Dloop_D884_k251)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D884_k250, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D884_k251, self)})));
}
}
static void _V10_Dprintout_D301_k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D301_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.3051) ((##vcore.display-word (##string ##.string.3083) (bruijn ##.port.882 5 3))) ((bruijn ##.k.1995 5 0) (bruijn ##.reg.3051 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D3083.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
static void _V10_Dprintout_D301_k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D301_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.eq.886 1 0) (##intrinsic ##vcore.eq?)) (basic-block 1 1 (##.reg.3053) ((##vcore.display-word (##string ##.string.3089) (bruijn ##.port.882 5 3))) ((bruijn ##.k.2018 1 0) (bruijn ##.reg.3053 0 0))) (if (##inline ##vcore.eq? (bruijn ##.eq.886 1 0) (##intrinsic ##vcore.eqv?)) (basic-block 1 1 (##.reg.3054) ((##vcore.display-word (##string ##.string.3090) (bruijn ##.port.882 5 3))) ((bruijn ##.k.2018 1 0) (bruijn ##.reg.3054 0 0))) (basic-block 1 1 (##.reg.3055) ((##vcore.display-word (##string ##.string.3091) (bruijn ##.port.882 5 3))) ((bruijn ##.k.2018 1 0) (bruijn ##.reg.3055 0 0)))))
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
      VEncodePointer(&_V10_Dstring_D3089.sym, VPOINTER_OTHER),
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
      VEncodePointer(&_V10_Dstring_D3090.sym, VPOINTER_OTHER),
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
      VEncodePointer(&_V10_Dstring_D3091.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
}
static void _V10_Dprintout_D301_k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D301_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printout.301 6 162) (bruijn ##.k.1995 5 0) (bruijn ##.x.2016 0 0) (bruijn ##.write?.881 5 2) (bruijn ##.port.882 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 162)), 4,
      VGetArg(statics, 5-1, 0),
      _var0,
      VGetArg(statics, 5-1, 2),
      VGetArg(statics, 5-1, 3));
}
static void _V10_Dprintout_D301_k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D301_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.hash-table->alist.274 5 135) (close _V10_Dprintout_D301_k257) (bruijn ##.x.880 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 135)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D301_k257, self)})),
      statics->up->up->up->vars[1]);
}
static void _V10_Dprintout_D301_k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D301_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprintout_D301_k255) (close _V10_Dprintout_D301_k256))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout_D301_k255, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D301_k256, self)})));
}
static void _V10_Dprintout_D301_lambda214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D301_lambda214, got ~D~N"
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
  // (if (##inline ##vcore.pair? (bruijn ##.x.880 0 1)) ((bruijn ##.memq.224 1 85) (close _V10_Dprintout_D301_k249) (##inline ##vcore.car (bruijn ##.x.880 0 1)) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'quasiquote (##inline ##vcore.qcons 'unquote (##inline ##vcore.qcons 'unquote-splicing '()))))) (basic-block 1 1 (##.reg.3045) ((##vcore.vector? (bruijn ##.x.880 1 1))) (if (bruijn ##.reg.3045 0 0) (basic-block 2 2 (##.reg.3046 ##.reg.3047) ((##vcore.vector-length (bruijn ##.x.880 2 1)) (##vcore.display-word (##string ##.string.3088) (bruijn ##.port.882 2 3))) (letrec 1 ((close _V10_Dloop_D884_lambda215)) ((bruijn ##.loop.884 0 0) (close _V10_Dprintout_D301_k253) 0))) (basic-block 1 1 (##.reg.3052) ((##vcore.hash-table? (bruijn ##.x.880 2 1))) (if (bruijn ##.reg.3052 0 0) (##vcore.hash-table-equivalence-function (close _V10_Dprintout_D301_k254) (bruijn ##.x.880 2 1)) (if (bruijn ##.write?.881 2 2) (basic-block 1 1 (##.reg.3056) ((##vcore.write (bruijn ##.x.880 3 1) (bruijn ##.port.882 3 3))) ((bruijn ##.k.1995 3 0) (bruijn ##.reg.3056 0 0))) (basic-block 1 1 (##.reg.3057) ((##vcore.display-word (bruijn ##.x.880 3 1) (bruijn ##.port.882 3 3))) ((bruijn ##.k.1995 3 0) (bruijn ##.reg.3057 0 0)))))))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[85]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D301_k249, self)})),
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
      VEncodePointer(&_V10_Dstring_D3088.sym, VPOINTER_OTHER),
      statics->up->vars[3]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D884_lambda215, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D301_k253, self)})),
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D301_k254, self)})),
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
static void _V10_Ddisplay_D302_k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddisplay_D302_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printout.301 2 162) (bruijn ##.k.2020 1 0) (bruijn ##.x.887 1 1) #f (bruijn ##.x.2021 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[162]), 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeBool(false),
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Ddisplay_D302_lambda216(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Ddisplay_D302_lambda216 #t (2 ((bruijn ##.current-output-port.278 1 139) (close _V10_Ddisplay_D302_k258))) (3 ((bruijn ##.printout.301 1 162) (bruijn ##.k.2022 0 0) (bruijn ##.x.888 0 1) #f (bruijn ##.port.889 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Ddisplay_D302_lambda216, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Ddisplay_D302_lambda216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-output-port.278 1 139) (close _V10_Ddisplay_D302_k258))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[139]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddisplay_D302_k258, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Ddisplay_D302_lambda216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // ((bruijn ##.printout.301 1 162) (bruijn ##.k.2022 0 0) (bruijn ##.x.888 0 1) #f (bruijn ##.port.889 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[162]), 4,
      _var0,
      _var1,
      VEncodeBool(false),
      _var2);
}
void _V10_Ddisplay_D302_lambda216(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Ddisplay_D302_lambda216, @function\n"
#endif
"_V10_Ddisplay_D302_lambda216:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Ddisplay_D302_lambda216\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Ddisplay_D302_lambda216\n"
"    jmp _V20CaseError__V10_Ddisplay_D302_lambda216\n"
);
static void _V10_Dwrite_D303_k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwrite_D303_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printout.301 2 162) (bruijn ##.k.2023 1 0) (bruijn ##.x.890 1 1) #t (bruijn ##.x.2024 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[162]), 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeBool(true),
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dwrite_D303_lambda217(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dwrite_D303_lambda217 #t (2 ((bruijn ##.current-output-port.278 1 139) (close _V10_Dwrite_D303_k259))) (3 ((bruijn ##.printout.301 1 162) (bruijn ##.k.2025 0 0) (bruijn ##.x.891 0 1) #t (bruijn ##.port.892 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dwrite_D303_lambda217, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dwrite_D303_lambda217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-output-port.278 1 139) (close _V10_Dwrite_D303_k259))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[139]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwrite_D303_k259, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dwrite_D303_lambda217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // ((bruijn ##.printout.301 1 162) (bruijn ##.k.2025 0 0) (bruijn ##.x.891 0 1) #t (bruijn ##.port.892 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[162]), 4,
      _var0,
      _var1,
      VEncodeBool(true),
      _var2);
}
void _V10_Dwrite_D303_lambda217(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dwrite_D303_lambda217, @function\n"
#endif
"_V10_Dwrite_D303_lambda217:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dwrite_D303_lambda217\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dwrite_D303_lambda217\n"
"    jmp _V20CaseError__V10_Dwrite_D303_lambda217\n"
);
static void _V10_Dvalues_D304_lambda219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalues_D304_lambda219, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.k.2027 0 0) (bruijn ##.k.894 0 1) (bruijn ##.args.893 1 1))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      _var0,
      _var1,
      statics->vars[1]);
}
static void _V10_Dvalues_D304_lambda218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalues_D304_lambda218, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.k.2026 0 0) (close _V10_Dvalues_D304_lambda219))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalues_D304_lambda219, self)})));
}
static void _V10_Dmake__parameter_D307_lambda221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D307_lambda221, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.2029 0 0) (bruijn ##.x.896 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
static void _V10_Dmake__parameter_D307_k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D307_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.lookup.904 0 0) ((bruijn ##.k.2034 2 0) (##inline ##vcore.cdr (bruijn ##.lookup.904 0 0))) ((bruijn ##.k.2034 2 0) (bruijn ##.x.2033 3 0)))
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
static void _V10_Dmake__parameter_D307_k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D307_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assq.227 5 88) (close _V10_Dmake__parameter_D307_k263) (bruijn ##.x.2032 3 0) (bruijn ##.x.2035 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 88)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D307_k263, self)})),
      statics->up->up->vars[0],
      _var0);
}
static void _V10_Dmake__parameter_D307_k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D307_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.push-dynamic (bruijn ##.k.2036 2 0) (bruijn ##.x.2032 4 0) (bruijn ##.x.2038 0 0))
    VCallFuncWithGC(runtime, (VFunc)VPushDynamic, 3,
      statics->up->vars[0],
      statics->up->up->up->vars[0],
      _var0);
}
static void _V10_Dmake__parameter_D307_k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D307_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.2039 0 0) (##vcore.pop-dynamic (bruijn ##.k.2036 2 0) (bruijn ##.x.906 2 2)) ((bruijn ##.error.325 6 186) (bruijn ##.k.2036 2 0) (##string ##.string.3092)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VPopDynamic, 2,
      statics->up->vars[0],
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 186)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D3092.sym, VPOINTER_OTHER));
}
}
static void _V10_Dmake__parameter_D307_k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D307_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2037 0 0) ((bruijn ##.convert.900 4 2) (close _V10_Dmake__parameter_D307_k265) (bruijn ##.x.906 1 2)) (##vcore.eqv? (close _V10_Dmake__parameter_D307_k266) (bruijn ##.action.905 1 1) '##vcore.pop-value))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D307_k265, self)})),
      statics->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D307_k266, self)})),
      statics->vars[1],
      _V10vcore_Dpop__value);
}
}
__attribute__((used)) static void _V20CaseError__V10_Dmake__parameter_D307_lambda222(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__parameter_D307_lambda222 #t (1 (##vcore.get-dynamics (close _V10_Dmake__parameter_D307_k262))) (3 (##vcore.eqv? (close _V10_Dmake__parameter_D307_k264) (bruijn ##.action.905 0 1) '##vcore.push-value)))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D307_lambda222, got ~D~N"
 "-- expected 1~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__parameter_D307_lambda222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.get-dynamics (close _V10_Dmake__parameter_D307_k262))
    VCallFuncWithGC(runtime, (VFunc)VGetDynamics, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D307_k262, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dmake__parameter_D307_lambda222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.eqv? (close _V10_Dmake__parameter_D307_k264) (bruijn ##.action.905 0 1) '##vcore.push-value)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D307_k264, self)})),
      _var1,
      _V10vcore_Dpush__value);
}
void _V10_Dmake__parameter_D307_lambda222(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__parameter_D307_lambda222, @function\n"
#endif
"_V10_Dmake__parameter_D307_lambda222:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dmake__parameter_D307_lambda222\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__parameter_D307_lambda222\n"
"    jmp _V20CaseError__V10_Dmake__parameter_D307_lambda222\n"
);
static void _V10_Dmake__parameter_D307_k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D307_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.k.2031 2 0) (close _V10_Dmake__parameter_D307_lambda222))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D307_lambda222, self)})));
}
static void _V10_Dmake__parameter_D307_k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D307_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.convert.900 1 2) (close _V10_Dmake__parameter_D307_k261) (bruijn ##.init.899 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[2]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D307_k261, self)})),
      statics->vars[1]);
}
__attribute__((used)) static void _V20CaseError__V10_Dmake__parameter_D307_lambda220(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dmake__parameter_D307_lambda220 #t (2 ((bruijn ##.make-parameter.307 1 168) (bruijn ##.k.2028 0 0) (bruijn ##.init.895 0 1) (close _V10_Dmake__parameter_D307_lambda221) 'parameter)) (3 ((bruijn ##.make-parameter.307 1 168) (bruijn ##.k.2030 0 0) (bruijn ##.init.897 0 1) (bruijn ##.convert.898 0 2) 'parameter)) (4 ((close _V10_Dmake__parameter_D307_k260) (##inline ##vcore.cons (bruijn ##.name.901 0 3) '()))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D307_lambda220, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__parameter_D307_lambda220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.make-parameter.307 1 168) (bruijn ##.k.2028 0 0) (bruijn ##.init.895 0 1) (close _V10_Dmake__parameter_D307_lambda221) 'parameter)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[168]), 4,
      _var0,
      _var1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D307_lambda221, self)})),
      _V0parameter);
}
__attribute__((used)) static void _V20Case1__V10_Dmake__parameter_D307_lambda220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // ((bruijn ##.make-parameter.307 1 168) (bruijn ##.k.2030 0 0) (bruijn ##.init.897 0 1) (bruijn ##.convert.898 0 2) 'parameter)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[168]), 4,
      _var0,
      _var1,
      _var2,
      _V0parameter);
}
__attribute__((used)) static void _V20Case2__V10_Dmake__parameter_D307_lambda220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((close _V10_Dmake__parameter_D307_k260) (##inline ##vcore.cons (bruijn ##.name.901 0 3) '()))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dmake__parameter_D307_k260, .env = self }, }, 1,
      VInlineCons2(runtime,
        _var3,
        VNULL));
}
void _V10_Dmake__parameter_D307_lambda220(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__parameter_D307_lambda220, @function\n"
#endif
"_V10_Dmake__parameter_D307_lambda220:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__parameter_D307_lambda220\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__parameter_D307_lambda220\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V10_Dmake__parameter_D307_lambda220\n"
"    jmp _V20CaseError__V10_Dmake__parameter_D307_lambda220\n"
);
__attribute__((used)) static void _V20CaseError__V10_Dfile__exists_Q_D308_lambda223(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dfile__exists_Q_D308_lambda223 #t (2 (##vcore.access (bruijn ##.k.2040 0 0) (bruijn ##.path.908 0 1) 0)) (3 (##vcore.access (bruijn ##.k.2041 0 0) (bruijn ##.path.909 0 1) (bruijn ##.mode.910 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dfile__exists_Q_D308_lambda223, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dfile__exists_Q_D308_lambda223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.access (bruijn ##.k.2040 0 0) (bruijn ##.path.908 0 1) 0)
    VCallFuncWithGC(runtime, (VFunc)VAccess, 3,
      _var0,
      _var1,
      VEncodeInt(0l));
}
__attribute__((used)) static void _V20Case1__V10_Dfile__exists_Q_D308_lambda223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.access (bruijn ##.k.2041 0 0) (bruijn ##.path.909 0 1) (bruijn ##.mode.910 0 2))
    VCallFuncWithGC(runtime, (VFunc)VAccess, 3,
      _var0,
      _var1,
      _var2);
}
void _V10_Dfile__exists_Q_D308_lambda223(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dfile__exists_Q_D308_lambda223, @function\n"
#endif
"_V10_Dfile__exists_Q_D308_lambda223:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dfile__exists_Q_D308_lambda223\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dfile__exists_Q_D308_lambda223\n"
"    jmp _V20CaseError__V10_Dfile__exists_Q_D308_lambda223\n"
);
static void _V10_Dbitwise__and_D309_k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__and_D309_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-and (bruijn ##.k.2045 1 0) (bruijn ##.x.2046 0 0) (bruijn ##.c.916 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
static void _V10_Dbitwise__and_D309_k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__and_D309_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-and (bruijn ##.k.2047 2 0) (bruijn ##.x.2048 0 0) (bruijn ##.d.920 2 4))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      statics->up->vars[0],
      _var0,
      statics->up->vars[4]);
}
static void _V10_Dbitwise__and_D309_k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__and_D309_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.bitwise-and (close _V10_Dbitwise__and_D309_k269) (bruijn ##.x.2049 0 0) (bruijn ##.c.919 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__and_D309_k269, self)})),
      _var0,
      statics->vars[3]);
}
static void _V10_Dloop_D923_k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D923_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.923 2 0) (bruijn ##.k.2051 1 0) (bruijn ##.x.2053 0 0) (##inline ##vcore.cdr (bruijn ##.bs.922 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      _var0,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D923_lambda225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D923_lambda225, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.bs.922 2 2)) ((bruijn ##.k.2051 0 0) (bruijn ##.ret.924 0 1)) (##vcore.bitwise-and (close _V10_Dloop_D923_k270) (bruijn ##.a.921 2 1) (##inline ##vcore.car (bruijn ##.bs.922 2 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D923_k270, self)})),
      statics->up->vars[1],
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
__attribute__((used)) static void _V20CaseError__V10_Dbitwise__and_D309_lambda224(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dbitwise__and_D309_lambda224 #t (1 ((bruijn ##.k.2042 0 0) -1)) (2 ((bruijn ##.k.2043 0 0) (bruijn ##.a.911 0 1))) (3 (##vcore.bitwise-and (bruijn ##.k.2044 0 0) (bruijn ##.a.912 0 1) (bruijn ##.b.913 0 2))) (4 (##vcore.bitwise-and (close _V10_Dbitwise__and_D309_k267) (bruijn ##.a.914 0 1) (bruijn ##.b.915 0 2))) (5 (##vcore.bitwise-and (close _V10_Dbitwise__and_D309_k268) (bruijn ##.a.917 0 1) (bruijn ##.b.918 0 2))) (2 + (letrec 1 ((close _V10_Dloop_D923_lambda225)) ((bruijn ##.loop.923 0 0) (bruijn ##.k.2050 1 0) (bruijn ##.a.921 1 1) (bruijn ##.bs.922 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__and_D309_lambda224, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dbitwise__and_D309_lambda224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // ((bruijn ##.k.2042 0 0) -1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(-1l));
}
__attribute__((used)) static void _V20Case1__V10_Dbitwise__and_D309_lambda224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.2043 0 0) (bruijn ##.a.911 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V10_Dbitwise__and_D309_lambda224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.bitwise-and (bruijn ##.k.2044 0 0) (bruijn ##.a.912 0 1) (bruijn ##.b.913 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      _var0,
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V10_Dbitwise__and_D309_lambda224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##vcore.bitwise-and (close _V10_Dbitwise__and_D309_k267) (bruijn ##.a.914 0 1) (bruijn ##.b.915 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__and_D309_k267, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case4__V10_Dbitwise__and_D309_lambda224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##vcore.bitwise-and (close _V10_Dbitwise__and_D309_k268) (bruijn ##.a.917 0 1) (bruijn ##.b.918 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseAnd, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__and_D309_k268, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case5__V10_Dbitwise__and_D309_lambda224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D923_lambda225)) ((bruijn ##.loop.923 0 0) (bruijn ##.k.2050 1 0) (bruijn ##.a.921 1 1) (bruijn ##.bs.922 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D923_lambda225, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
    }
}
void _V10_Dbitwise__and_D309_lambda224(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dbitwise__and_D309_lambda224, @function\n"
#endif
"_V10_Dbitwise__and_D309_lambda224:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dbitwise__and_D309_lambda224\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dbitwise__and_D309_lambda224\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dbitwise__and_D309_lambda224\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dbitwise__and_D309_lambda224\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V10_Dbitwise__and_D309_lambda224\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case5__V10_Dbitwise__and_D309_lambda224\n"
"    jmp _V20CaseError__V10_Dbitwise__and_D309_lambda224\n"
);
static void _V10_Dbitwise__ior_D310_k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__ior_D310_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-ior (bruijn ##.k.2059 1 0) (bruijn ##.x.2060 0 0) (bruijn ##.c.931 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
static void _V10_Dbitwise__ior_D310_k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__ior_D310_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-ior (bruijn ##.k.2061 2 0) (bruijn ##.x.2062 0 0) (bruijn ##.d.935 2 4))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      statics->up->vars[0],
      _var0,
      statics->up->vars[4]);
}
static void _V10_Dbitwise__ior_D310_k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__ior_D310_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.bitwise-ior (close _V10_Dbitwise__ior_D310_k273) (bruijn ##.x.2063 0 0) (bruijn ##.c.934 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__ior_D310_k273, self)})),
      _var0,
      statics->vars[3]);
}
static void _V10_Dloop_D938_k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D938_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.938 2 0) (bruijn ##.k.2065 1 0) (bruijn ##.x.2067 0 0) (##inline ##vcore.cdr (bruijn ##.bs.937 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      _var0,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D938_lambda227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D938_lambda227, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.bs.937 2 2)) ((bruijn ##.k.2065 0 0) (bruijn ##.ret.939 0 1)) (##vcore.bitwise-ior (close _V10_Dloop_D938_k274) (bruijn ##.a.936 2 1) (##inline ##vcore.car (bruijn ##.bs.937 2 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D938_k274, self)})),
      statics->up->vars[1],
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
__attribute__((used)) static void _V20CaseError__V10_Dbitwise__ior_D310_lambda226(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dbitwise__ior_D310_lambda226 #t (1 ((bruijn ##.k.2056 0 0) 0)) (2 ((bruijn ##.k.2057 0 0) (bruijn ##.a.926 0 1))) (3 (##vcore.bitwise-ior (bruijn ##.k.2058 0 0) (bruijn ##.a.927 0 1) (bruijn ##.b.928 0 2))) (4 (##vcore.bitwise-ior (close _V10_Dbitwise__ior_D310_k271) (bruijn ##.a.929 0 1) (bruijn ##.b.930 0 2))) (5 (##vcore.bitwise-ior (close _V10_Dbitwise__ior_D310_k272) (bruijn ##.a.932 0 1) (bruijn ##.b.933 0 2))) (2 + (letrec 1 ((close _V10_Dloop_D938_lambda227)) ((bruijn ##.loop.938 0 0) (bruijn ##.k.2064 1 0) (bruijn ##.a.936 1 1) (bruijn ##.bs.937 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__ior_D310_lambda226, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dbitwise__ior_D310_lambda226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // ((bruijn ##.k.2056 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
__attribute__((used)) static void _V20Case1__V10_Dbitwise__ior_D310_lambda226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.2057 0 0) (bruijn ##.a.926 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V10_Dbitwise__ior_D310_lambda226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.bitwise-ior (bruijn ##.k.2058 0 0) (bruijn ##.a.927 0 1) (bruijn ##.b.928 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      _var0,
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V10_Dbitwise__ior_D310_lambda226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##vcore.bitwise-ior (close _V10_Dbitwise__ior_D310_k271) (bruijn ##.a.929 0 1) (bruijn ##.b.930 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__ior_D310_k271, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case4__V10_Dbitwise__ior_D310_lambda226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##vcore.bitwise-ior (close _V10_Dbitwise__ior_D310_k272) (bruijn ##.a.932 0 1) (bruijn ##.b.933 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseIor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__ior_D310_k272, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case5__V10_Dbitwise__ior_D310_lambda226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D938_lambda227)) ((bruijn ##.loop.938 0 0) (bruijn ##.k.2064 1 0) (bruijn ##.a.936 1 1) (bruijn ##.bs.937 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D938_lambda227, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
    }
}
void _V10_Dbitwise__ior_D310_lambda226(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dbitwise__ior_D310_lambda226, @function\n"
#endif
"_V10_Dbitwise__ior_D310_lambda226:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dbitwise__ior_D310_lambda226\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dbitwise__ior_D310_lambda226\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dbitwise__ior_D310_lambda226\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dbitwise__ior_D310_lambda226\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V10_Dbitwise__ior_D310_lambda226\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case5__V10_Dbitwise__ior_D310_lambda226\n"
"    jmp _V20CaseError__V10_Dbitwise__ior_D310_lambda226\n"
);
static void _V10_Dbitwise__xor_D311_k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xor_D311_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-xor (bruijn ##.k.2073 1 0) (bruijn ##.x.2074 0 0) (bruijn ##.c.946 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
static void _V10_Dbitwise__xor_D311_k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xor_D311_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-xor (bruijn ##.k.2075 2 0) (bruijn ##.x.2076 0 0) (bruijn ##.d.950 2 4))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      statics->up->vars[0],
      _var0,
      statics->up->vars[4]);
}
static void _V10_Dbitwise__xor_D311_k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xor_D311_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.bitwise-xor (close _V10_Dbitwise__xor_D311_k277) (bruijn ##.x.2077 0 0) (bruijn ##.c.949 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__xor_D311_k277, self)})),
      _var0,
      statics->vars[3]);
}
static void _V10_Dloop_D953_k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D953_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.953 2 0) (bruijn ##.k.2079 1 0) (bruijn ##.x.2081 0 0) (##inline ##vcore.cdr (bruijn ##.bs.952 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      _var0,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D953_lambda229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D953_lambda229, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.bs.952 2 2)) ((bruijn ##.k.2079 0 0) (bruijn ##.ret.954 0 1)) (##vcore.bitwise-xor (close _V10_Dloop_D953_k278) (bruijn ##.a.951 2 1) (##inline ##vcore.car (bruijn ##.bs.952 2 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D953_k278, self)})),
      statics->up->vars[1],
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
__attribute__((used)) static void _V20CaseError__V10_Dbitwise__xor_D311_lambda228(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dbitwise__xor_D311_lambda228 #t (1 ((bruijn ##.k.2070 0 0) 0)) (2 ((bruijn ##.k.2071 0 0) (bruijn ##.a.941 0 1))) (3 (##vcore.bitwise-xor (bruijn ##.k.2072 0 0) (bruijn ##.a.942 0 1) (bruijn ##.b.943 0 2))) (4 (##vcore.bitwise-xor (close _V10_Dbitwise__xor_D311_k275) (bruijn ##.a.944 0 1) (bruijn ##.b.945 0 2))) (5 (##vcore.bitwise-xor (close _V10_Dbitwise__xor_D311_k276) (bruijn ##.a.947 0 1) (bruijn ##.b.948 0 2))) (2 + (letrec 1 ((close _V10_Dloop_D953_lambda229)) ((bruijn ##.loop.953 0 0) (bruijn ##.k.2078 1 0) (bruijn ##.a.951 1 1) (bruijn ##.bs.952 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xor_D311_lambda228, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dbitwise__xor_D311_lambda228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // ((bruijn ##.k.2070 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
__attribute__((used)) static void _V20Case1__V10_Dbitwise__xor_D311_lambda228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.2071 0 0) (bruijn ##.a.941 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V10_Dbitwise__xor_D311_lambda228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.bitwise-xor (bruijn ##.k.2072 0 0) (bruijn ##.a.942 0 1) (bruijn ##.b.943 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      _var0,
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V10_Dbitwise__xor_D311_lambda228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##vcore.bitwise-xor (close _V10_Dbitwise__xor_D311_k275) (bruijn ##.a.944 0 1) (bruijn ##.b.945 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__xor_D311_k275, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case4__V10_Dbitwise__xor_D311_lambda228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##vcore.bitwise-xor (close _V10_Dbitwise__xor_D311_k276) (bruijn ##.a.947 0 1) (bruijn ##.b.948 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__xor_D311_k276, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case5__V10_Dbitwise__xor_D311_lambda228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D953_lambda229)) ((bruijn ##.loop.953 0 0) (bruijn ##.k.2078 1 0) (bruijn ##.a.951 1 1) (bruijn ##.bs.952 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D953_lambda229, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
    }
}
void _V10_Dbitwise__xor_D311_lambda228(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dbitwise__xor_D311_lambda228, @function\n"
#endif
"_V10_Dbitwise__xor_D311_lambda228:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dbitwise__xor_D311_lambda228\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dbitwise__xor_D311_lambda228\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dbitwise__xor_D311_lambda228\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dbitwise__xor_D311_lambda228\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V10_Dbitwise__xor_D311_lambda228\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case5__V10_Dbitwise__xor_D311_lambda228\n"
"    jmp _V20CaseError__V10_Dbitwise__xor_D311_lambda228\n"
);
static void _V10_Dbitwise__xnor_D312_k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xnor_D312_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-xnor (bruijn ##.k.2087 1 0) (bruijn ##.x.2088 0 0) (bruijn ##.c.961 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      statics->vars[0],
      _var0,
      statics->vars[3]);
}
static void _V10_Dbitwise__xnor_D312_k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xnor_D312_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.bitwise-xnor (bruijn ##.k.2089 2 0) (bruijn ##.x.2090 0 0) (bruijn ##.d.965 2 4))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      statics->up->vars[0],
      _var0,
      statics->up->vars[4]);
}
static void _V10_Dbitwise__xnor_D312_k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xnor_D312_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.bitwise-xnor (close _V10_Dbitwise__xnor_D312_k281) (bruijn ##.x.2091 0 0) (bruijn ##.c.964 1 3))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__xnor_D312_k281, self)})),
      _var0,
      statics->vars[3]);
}
static void _V10_Dloop_D968_k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D968_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.968 2 0) (bruijn ##.k.2093 1 0) (bruijn ##.x.2095 0 0) (##inline ##vcore.cdr (bruijn ##.bs.967 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      _var0,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D968_lambda231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D968_lambda231, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.bs.967 2 2)) ((bruijn ##.k.2093 0 0) (bruijn ##.ret.969 0 1)) (##vcore.bitwise-xnor (close _V10_Dloop_D968_k282) (bruijn ##.a.966 2 1) (##inline ##vcore.car (bruijn ##.bs.967 2 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D968_k282, self)})),
      statics->up->vars[1],
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
__attribute__((used)) static void _V20CaseError__V10_Dbitwise__xnor_D312_lambda230(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dbitwise__xnor_D312_lambda230 #t (1 ((bruijn ##.k.2084 0 0) -1)) (2 ((bruijn ##.k.2085 0 0) (bruijn ##.a.956 0 1))) (3 (##vcore.bitwise-xnor (bruijn ##.k.2086 0 0) (bruijn ##.a.957 0 1) (bruijn ##.b.958 0 2))) (4 (##vcore.bitwise-xnor (close _V10_Dbitwise__xnor_D312_k279) (bruijn ##.a.959 0 1) (bruijn ##.b.960 0 2))) (5 (##vcore.bitwise-xnor (close _V10_Dbitwise__xnor_D312_k280) (bruijn ##.a.962 0 1) (bruijn ##.b.963 0 2))) (2 + (letrec 1 ((close _V10_Dloop_D968_lambda231)) ((bruijn ##.loop.968 0 0) (bruijn ##.k.2092 1 0) (bruijn ##.a.966 1 1) (bruijn ##.bs.967 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dbitwise__xnor_D312_lambda230, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dbitwise__xnor_D312_lambda230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // ((bruijn ##.k.2084 0 0) -1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(-1l));
}
__attribute__((used)) static void _V20Case1__V10_Dbitwise__xnor_D312_lambda230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.2085 0 0) (bruijn ##.a.956 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V10_Dbitwise__xnor_D312_lambda230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.bitwise-xnor (bruijn ##.k.2086 0 0) (bruijn ##.a.957 0 1) (bruijn ##.b.958 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      _var0,
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case3__V10_Dbitwise__xnor_D312_lambda230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##vcore.bitwise-xnor (close _V10_Dbitwise__xnor_D312_k279) (bruijn ##.a.959 0 1) (bruijn ##.b.960 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__xnor_D312_k279, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case4__V10_Dbitwise__xnor_D312_lambda230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##vcore.bitwise-xnor (close _V10_Dbitwise__xnor_D312_k280) (bruijn ##.a.962 0 1) (bruijn ##.b.963 0 2))
    VCallFuncWithGC(runtime, (VFunc)VBitwiseXnor, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__xnor_D312_k280, self)})),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case5__V10_Dbitwise__xnor_D312_lambda230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D968_lambda231)) ((bruijn ##.loop.968 0 0) (bruijn ##.k.2092 1 0) (bruijn ##.a.966 1 1) (bruijn ##.bs.967 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D968_lambda231, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
    }
}
void _V10_Dbitwise__xnor_D312_lambda230(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dbitwise__xnor_D312_lambda230, @function\n"
#endif
"_V10_Dbitwise__xnor_D312_lambda230:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dbitwise__xnor_D312_lambda230\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dbitwise__xnor_D312_lambda230\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dbitwise__xnor_D312_lambda230\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dbitwise__xnor_D312_lambda230\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V10_Dbitwise__xnor_D312_lambda230\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case5__V10_Dbitwise__xnor_D312_lambda230\n"
"    jmp _V20CaseError__V10_Dbitwise__xnor_D312_lambda230\n"
);
static void _V10_Datom_Q_D315_lambda232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Datom_Q_D315_lambda232, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.2098 0 0) (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.x.971 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineNot2(runtime,
        VInlinePairP2(runtime,
        _var1)));
}
static void _V10_Ddisplayln_D316_k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddisplayln_D316_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.displayln.316 2 177) (bruijn ##.k.2100 1 0) (bruijn ##.x.972 1 1) (bruijn ##.x.2101 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[177]), 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
static void _V10_Ddisplayln_D316_k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddisplayln_D316_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.newline.298 2 159) (bruijn ##.k.2102 1 0) (bruijn ##.port.974 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[159]), 2,
      statics->vars[0],
      statics->vars[2]);
}
__attribute__((used)) static void _V20CaseError__V10_Ddisplayln_D316_lambda233(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Ddisplayln_D316_lambda233 #t (2 ((bruijn ##.current-output-port.278 1 139) (close _V10_Ddisplayln_D316_k283))) (3 ((bruijn ##.display.302 1 163) (close _V10_Ddisplayln_D316_k284) (bruijn ##.x.973 0 1) (bruijn ##.port.974 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Ddisplayln_D316_lambda233, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Ddisplayln_D316_lambda233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-output-port.278 1 139) (close _V10_Ddisplayln_D316_k283))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[139]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddisplayln_D316_k283, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Ddisplayln_D316_lambda233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.display.302 1 163) (close _V10_Ddisplayln_D316_k284) (bruijn ##.x.973 0 1) (bruijn ##.port.974 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[163]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddisplayln_D316_k284, self)})),
      _var1,
      _var2);
}
void _V10_Ddisplayln_D316_lambda233(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Ddisplayln_D316_lambda233, @function\n"
#endif
"_V10_Ddisplayln_D316_lambda233:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Ddisplayln_D316_lambda233\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Ddisplayln_D316_lambda233\n"
"    jmp _V20CaseError__V10_Ddisplayln_D316_lambda233\n"
);
static void _V10_Dwriteln_D317_k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwriteln_D317_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.writeln.317 2 178) (bruijn ##.k.2104 1 0) (bruijn ##.x.975 1 1) (bruijn ##.x.2105 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[178]), 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
static void _V10_Dwriteln_D317_k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwriteln_D317_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.newline.298 2 159) (bruijn ##.k.2106 1 0) (bruijn ##.port.977 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[159]), 2,
      statics->vars[0],
      statics->vars[2]);
}
__attribute__((used)) static void _V20CaseError__V10_Dwriteln_D317_lambda234(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dwriteln_D317_lambda234 #t (2 ((bruijn ##.current-output-port.278 1 139) (close _V10_Dwriteln_D317_k285))) (3 ((bruijn ##.write.303 1 164) (close _V10_Dwriteln_D317_k286) (bruijn ##.x.976 0 1) (bruijn ##.port.977 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dwriteln_D317_lambda234, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dwriteln_D317_lambda234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-output-port.278 1 139) (close _V10_Dwriteln_D317_k285))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[139]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwriteln_D317_k285, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dwriteln_D317_lambda234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.write.303 1 164) (close _V10_Dwriteln_D317_k286) (bruijn ##.x.976 0 1) (bruijn ##.port.977 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[164]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwriteln_D317_k286, self)})),
      _var1,
      _var2);
}
void _V10_Dwriteln_D317_lambda234(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dwriteln_D317_lambda234, @function\n"
#endif
"_V10_Dwriteln_D317_lambda234:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dwriteln_D317_lambda234\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dwriteln_D317_lambda234\n"
"    jmp _V20CaseError__V10_Dwriteln_D317_lambda234\n"
);
static void _V10_Dloop_D982_k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.2144 1 0) ((bruijn ##.error.325 9 186) (bruijn ##.k.2145 0 0) (##string ##.string.3093) (bruijn ##.fmt.979 8 2)) ((bruijn ##.k.2145 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 186)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D3093.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D982_k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.2141 1 0) ((bruijn ##.k.2142 0 0) (bruijn ##.p.2141 1 0)) (##vcore.eqv? (bruijn ##.k.2142 0 0) (bruijn ##.reg.3062 3 1) '#\N))
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
static void _V10_Dloop_D982_k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.2139 1 0) ((bruijn ##.k.2140 0 0) (bruijn ##.p.2139 1 0)) (##vcore.eqv? (bruijn ##.k.2140 0 0) (bruijn ##.reg.3062 5 1) '#\A))
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
static void _V10_Dloop_D982_k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.null? (bruijn ##.args.984 12 2)) ((bruijn ##.error.325 16 186) (bruijn ##.k.2126 0 0) (##string ##.string.3094) (bruijn ##.fmt.979 15 2)) ((bruijn ##.k.2126 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VGetArg(statics, 12-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 186)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D3094.sym, VPOINTER_OTHER),
      VGetArg(statics, 15-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D982_k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.3067) ((##vcore.+ (bruijn ##.i.983 14 1) 2)) ((bruijn ##.loop.982 15 0) (bruijn ##.k.2109 14 0) (bruijn ##.reg.3067 0 0) (##inline ##vcore.cdr (bruijn ##.args.984 14 2))))
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
static void _V10_Dloop_D982_k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.display.302 16 163) (close _V10_Dloop_D982_k300) (##inline ##vcore.car (bruijn ##.args.984 12 2)) (bruijn ##.port.978 15 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 163)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D982_k300, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 2)),
      VGetArg(statics, 15-1, 1));
}
static void _V10_Dloop_D982_k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.2137 1 0) ((bruijn ##.k.2138 0 0) (bruijn ##.p.2137 1 0)) (##vcore.eqv? (bruijn ##.k.2138 0 0) (bruijn ##.reg.3062 7 1) '#\S))
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
static void _V10_Dloop_D982_k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.null? (bruijn ##.args.984 14 2)) ((bruijn ##.error.325 18 186) (bruijn ##.k.2134 0 0) (##string ##.string.3094) (bruijn ##.fmt.979 17 2)) ((bruijn ##.k.2134 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VGetArg(statics, 14-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 186)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D3094.sym, VPOINTER_OTHER),
      VGetArg(statics, 17-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D982_k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.3068) ((##vcore.+ (bruijn ##.i.983 16 1) 2)) ((bruijn ##.loop.982 17 0) (bruijn ##.k.2109 16 0) (bruijn ##.reg.3068 0 0) (##inline ##vcore.cdr (bruijn ##.args.984 16 2))))
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
static void _V10_Dloop_D982_k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.write.303 18 164) (close _V10_Dloop_D982_k306) (##inline ##vcore.car (bruijn ##.args.984 14 2)) (bruijn ##.port.978 17 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 164)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D982_k306, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 14-1, 2)),
      VGetArg(statics, 17-1, 1));
}
static void _V10_Dloop_D982_k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.325 19 186) (bruijn ##.k.2109 15 0) (##string ##.string.3095) (bruijn ##.x.2135 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 186)), 3,
      VGetArg(statics, 15-1, 0),
      VEncodePointer(&_V10_Dstring_D3095.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dloop_D982_k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2127 0 0) ((close _V10_Dloop_D982_k304) (close _V10_Dloop_D982_k305)) (basic-block 1 1 (##.reg.3069) ((##vcore.+ (bruijn ##.i.983 14 1) 2)) (##vcore.substring (close _V10_Dloop_D982_k307) (bruijn ##.fmt.979 17 2) (bruijn ##.i.983 14 1) (bruijn ##.reg.3069 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D982_k304, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D982_k305, self)})));
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D982_k307, self)})),
      VGetArg(statics, 17-1, 2),
      VGetArg(statics, 14-1, 1),
      self->vars[0]);
    }
}
}
static void _V10_Dloop_D982_k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D982_k302) (close _V10_Dloop_D982_k303))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D982_k302, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D982_k303, self)})));
}
static void _V10_Dloop_D982_k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2119 0 0) ((close _V10_Dloop_D982_k298) (close _V10_Dloop_D982_k299)) (##vcore.eqv? (close _V10_Dloop_D982_k301) (bruijn ##.reg.3062 5 1) '#\s))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D982_k298, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D982_k299, self)})));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D982_k301, self)})),
      VGetArg(statics, 5-1, 1),
      VEncodeChar('s'));
}
}
static void _V10_Dloop_D982_k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D982_k296) (close _V10_Dloop_D982_k297))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D982_k296, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D982_k297, self)})));
}
static void _V10_Dloop_D982_k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2116 0 0) (basic-block 2 2 (##.reg.3065 ##.reg.3066) ((##vcore.display-word #\newline (bruijn ##.port.978 13 1)) (##vcore.+ (bruijn ##.i.983 10 1) 2)) ((bruijn ##.loop.982 11 0) (bruijn ##.k.2109 10 0) (bruijn ##.reg.3066 0 1) (bruijn ##.args.984 10 2))) (##vcore.eqv? (close _V10_Dloop_D982_k295) (bruijn ##.reg.3062 3 1) '#\a))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D982_k295, self)})),
      statics->up->up->vars[1],
      VEncodeChar('a'));
}
}
static void _V10_Dloop_D982_k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D982_k293) (close _V10_Dloop_D982_k294))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D982_k293, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D982_k294, self)})));
}
static void _V10_Dloop_D982_k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2113 0 0) (basic-block 2 2 (##.reg.3063 ##.reg.3064) ((##vcore.display-word #\~ (bruijn ##.port.978 11 1)) (##vcore.+ (bruijn ##.i.983 8 1) 2)) ((bruijn ##.loop.982 9 0) (bruijn ##.k.2109 8 0) (bruijn ##.reg.3064 0 1) (bruijn ##.args.984 8 2))) (##vcore.eqv? (close _V10_Dloop_D982_k292) (bruijn ##.reg.3062 1 1) '#\n))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D982_k292, self)})),
      statics->vars[1],
      VEncodeChar('n'));
}
}
static void _V10_Dloop_D982_k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.reg.3061 ##.reg.3062) ((##vcore.+ (bruijn ##.i.983 6 1) 1) (##vcore.string-ref (bruijn ##.fmt.979 9 2) (bruijn ##.reg.3061 0 0))) (##vcore.eqv? (close _V10_Dloop_D982_k291) (bruijn ##.reg.3062 0 1) '#\~))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D982_k291, self)})),
      self->vars[1],
      VEncodeChar('~'));
    }
}
static void _V10_Dloop_D982_k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D982_k289) (close _V10_Dloop_D982_k290))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D982_k289, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D982_k290, self)})));
}
static void _V10_Dloop_D982_k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2110 0 0) (basic-block 1 1 (##.reg.3059) ((##vcore.string-ref (bruijn ##.fmt.979 5 2) (bruijn ##.i.983 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.3059 0 0) #\~) (basic-block 1 1 (##.reg.3060) ((##vcore.+ (bruijn ##.i.983 3 1) 1)) ((bruijn ##.=.152 7 13) (close _V10_Dloop_D982_k288) (bruijn ##.reg.3060 0 0) (bruijn ##.reg.3058 5 0))) (basic-block 2 2 (##.reg.3070 ##.reg.3071) ((##vcore.display-word (bruijn ##.reg.3059 1 0) (bruijn ##.port.978 6 1)) (##vcore.+ (bruijn ##.i.983 3 1) 1)) ((bruijn ##.loop.982 4 0) (bruijn ##.k.2109 3 0) (bruijn ##.reg.3071 0 1) (bruijn ##.args.984 3 2))))) ((bruijn ##.k.2109 1 0) #f))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 13)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D982_k288, self)})),
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
static void _V10_Dloop_D982_lambda236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D982_lambda236, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.<.151 4 12) (close _V10_Dloop_D982_k287) (bruijn ##.i.983 0 1) (bruijn ##.reg.3058 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[12]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D982_k287, self)})),
      _var1,
      statics->up->vars[0]);
}
static void _V10_Dformat__printf_D318_lambda235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__printf_D318_lambda235, got ~D~N"
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
  // (basic-block 1 1 (##.reg.3058) ((##vcore.string-length (bruijn ##.fmt.979 1 2))) (letrec 1 ((close _V10_Dloop_D982_lambda236)) ((bruijn ##.loop.982 0 0) (bruijn ##.k.2108 2 0) 0 (bruijn ##.args.980 2 3))))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D982_lambda236, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->up->vars[0],
      VEncodeInt(0l),
      statics->up->vars[3]);
    }
    }
}
static void _V10_Dformat__sprintf_D319_k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__sprintf_D319_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2149 4 0) (bruijn ##.ret.990 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->vars[0]);
}
static void _V10_Dformat__sprintf_D319_k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__sprintf_D319_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.close-port.282 4 143) (close _V10_Dformat__sprintf_D319_k311) (bruijn ##.strport.989 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[143]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__sprintf_D319_k311, self)})),
      statics->up->vars[0]);
}
static void _V10_Dformat__sprintf_D319_k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__sprintf_D319_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-output-string.289 3 150) (close _V10_Dformat__sprintf_D319_k310) (bruijn ##.strport.989 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[150]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__sprintf_D319_k310, self)})),
      statics->vars[0]);
}
static void _V10_Dformat__sprintf_D319_k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__sprintf_D319_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.format-printf.318 2 179) (close _V10_Dformat__sprintf_D319_k309) (bruijn ##.strport.989 0 0) (bruijn ##.fmt.987 1 1) (bruijn ##.args.988 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[179]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__sprintf_D319_k309, self)})),
      _var0,
      statics->vars[1],
      statics->vars[2]);
}
static void _V10_Dformat__sprintf_D319_lambda237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__sprintf_D319_lambda237, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.open-output-string.288 1 149) (close _V10_Dformat__sprintf_D319_k308))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[149]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__sprintf_D319_k308, self)})));
}
static void _V10_Dprintf_D320_k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintf_D320_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.format-printf.318 2 179) (bruijn ##.k.2152 1 0) (bruijn ##.x.2153 0 0) (bruijn ##.fmt.991 1 1) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[179]), 4,
      statics->vars[0],
      _var0,
      statics->vars[1],
      VNULL);
}
static void _V10_Dprintf_D320_k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintf_D320_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.format-printf.318 3 179) (bruijn ##.k.2154 2 0) (bruijn ##.x.2156 0 0) (bruijn ##.a.992 2 1) (##inline ##vcore.cons (bruijn ##.b.993 2 2) (bruijn ##.args.994 2 3)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[179]), 4,
      statics->up->vars[0],
      _var0,
      statics->up->vars[1],
      VInlineCons2(runtime,
        statics->up->vars[2],
        statics->up->vars[3]));
}
__attribute__((used)) static void _V20CaseError__V10_Dprintf_D320_lambda238(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dprintf_D320_lambda238 #t (2 ((bruijn ##.current-output-port.278 1 139) (close _V10_Dprintf_D320_k312))) (3 + (basic-block 1 1 (##.reg.3072) ((##vcore.string? (bruijn ##.a.992 1 1))) (if (bruijn ##.reg.3072 0 0) ((bruijn ##.current-output-port.278 2 139) (close _V10_Dprintf_D320_k313)) ((bruijn ##.format-printf.318 2 179) (bruijn ##.k.2154 1 0) (bruijn ##.a.992 1 1) (bruijn ##.b.993 1 2) (bruijn ##.args.994 1 3))))))
 VErrorC(runtime, "Not enough arguments to _V10_Dprintf_D320_lambda238, got ~D~N"
 "-- expected 2~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dprintf_D320_lambda238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-output-port.278 1 139) (close _V10_Dprintf_D320_k312))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[139]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintf_D320_k312, self)})));
}
__attribute__((used)) static void _V20Case1__V10_Dprintf_D320_lambda238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (basic-block 1 1 (##.reg.3072) ((##vcore.string? (bruijn ##.a.992 1 1))) (if (bruijn ##.reg.3072 0 0) ((bruijn ##.current-output-port.278 2 139) (close _V10_Dprintf_D320_k313)) ((bruijn ##.format-printf.318 2 179) (bruijn ##.k.2154 1 0) (bruijn ##.a.992 1 1) (bruijn ##.b.993 1 2) (bruijn ##.args.994 1 3))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[139]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintf_D320_k313, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[179]), 4,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      statics->vars[3]);
}
    }
}
void _V10_Dprintf_D320_lambda238(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dprintf_D320_lambda238, @function\n"
#endif
"_V10_Dprintf_D320_lambda238:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dprintf_D320_lambda238\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case1__V10_Dprintf_D320_lambda238\n"
"    jmp _V20CaseError__V10_Dprintf_D320_lambda238\n"
);
static void _V10_Dsprintf_D321_k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsprintf_D321_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2158 4 0) (bruijn ##.ret.998 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->vars[0]);
}
static void _V10_Dsprintf_D321_k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsprintf_D321_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.close-port.282 4 143) (close _V10_Dsprintf_D321_k317) (bruijn ##.strport.997 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[143]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsprintf_D321_k317, self)})),
      statics->up->vars[0]);
}
static void _V10_Dsprintf_D321_k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsprintf_D321_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-output-string.289 3 150) (close _V10_Dsprintf_D321_k316) (bruijn ##.strport.997 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[150]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsprintf_D321_k316, self)})),
      statics->vars[0]);
}
static void _V10_Dsprintf_D321_k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsprintf_D321_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.format-printf.318 2 179) (close _V10_Dsprintf_D321_k315) (bruijn ##.strport.997 0 0) (bruijn ##.fmt.995 1 1) (bruijn ##.args.996 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[179]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsprintf_D321_k315, self)})),
      _var0,
      statics->vars[1],
      statics->vars[2]);
}
static void _V10_Dsprintf_D321_lambda239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsprintf_D321_lambda239, got ~D~N"
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
  // ((bruijn ##.open-output-string.288 1 149) (close _V10_Dsprintf_D321_k314))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[149]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsprintf_D321_k314, self)})));
}
static void _V10_Dformat_D322_k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat_D322_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.format-printf.318 3 179) (bruijn ##.k.2162 2 0) (bruijn ##.x.2166 0 0) (bruijn ##.b.1001 2 2) (bruijn ##.args.1002 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[179]), 4,
      statics->up->vars[0],
      _var0,
      statics->up->vars[2],
      statics->up->vars[3]);
}
__attribute__((used)) static void _V20CaseError__V10_Dformat_D322_lambda240(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dformat_D322_lambda240 #t (2 ((bruijn ##.sprintf.321 1 182) (bruijn ##.k.2161 0 0) (bruijn ##.fmt.999 0 1))) (3 + (basic-block 1 1 (##.reg.3073) ((##vcore.string? (bruijn ##.a.1000 1 1))) (if (bruijn ##.reg.3073 0 0) ((bruijn ##.format-sprintf.319 2 180) (bruijn ##.k.2162 1 0) (bruijn ##.a.1000 1 1) (##inline ##vcore.cons (bruijn ##.b.1001 1 2) (bruijn ##.args.1002 1 3))) (if (##inline ##vcore.eq? (bruijn ##.a.1000 1 1) #t) ((bruijn ##.current-output-port.278 2 139) (close _V10_Dformat_D322_k318)) (if (##inline ##vcore.eq? (bruijn ##.a.1000 1 1) #f) ((bruijn ##.format-sprintf.319 2 180) (bruijn ##.k.2162 1 0) (bruijn ##.b.1001 1 2) (bruijn ##.args.1002 1 3)) ((bruijn ##.format-printf.318 2 179) (bruijn ##.k.2162 1 0) (bruijn ##.a.1000 1 1) (bruijn ##.b.1001 1 2) (bruijn ##.args.1002 1 3))))))))
 VErrorC(runtime, "Not enough arguments to _V10_Dformat_D322_lambda240, got ~D~N"
 "-- expected 2~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dformat_D322_lambda240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.sprintf.321 1 182) (bruijn ##.k.2161 0 0) (bruijn ##.fmt.999 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[182]), 2,
      _var0,
      _var1);
}
__attribute__((used)) static void _V20Case1__V10_Dformat_D322_lambda240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (basic-block 1 1 (##.reg.3073) ((##vcore.string? (bruijn ##.a.1000 1 1))) (if (bruijn ##.reg.3073 0 0) ((bruijn ##.format-sprintf.319 2 180) (bruijn ##.k.2162 1 0) (bruijn ##.a.1000 1 1) (##inline ##vcore.cons (bruijn ##.b.1001 1 2) (bruijn ##.args.1002 1 3))) (if (##inline ##vcore.eq? (bruijn ##.a.1000 1 1) #t) ((bruijn ##.current-output-port.278 2 139) (close _V10_Dformat_D322_k318)) (if (##inline ##vcore.eq? (bruijn ##.a.1000 1 1) #f) ((bruijn ##.format-sprintf.319 2 180) (bruijn ##.k.2162 1 0) (bruijn ##.b.1001 1 2) (bruijn ##.args.1002 1 3)) ((bruijn ##.format-printf.318 2 179) (bruijn ##.k.2162 1 0) (bruijn ##.a.1000 1 1) (bruijn ##.b.1001 1 2) (bruijn ##.args.1002 1 3))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[180]), 3,
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[139]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat_D322_k318, self)})));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[1],
        VEncodeBool(false)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[180]), 3,
      statics->vars[0],
      statics->vars[2],
      statics->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[179]), 4,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      statics->vars[3]);
}
}
}
    }
}
void _V10_Dformat_D322_lambda240(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dformat_D322_lambda240, @function\n"
#endif
"_V10_Dformat_D322_lambda240:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dformat_D322_lambda240\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case1__V10_Dformat_D322_lambda240\n"
"    jmp _V20CaseError__V10_Dformat_D322_lambda240\n"
);
static void _V10_Draise__continuable_D323_k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Draise__continuable_D323_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2168 3 0) (bruijn ##.ret.1005 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
static void _V10_Draise__continuable_D323_k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Draise__continuable_D323_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.push-exception-handler (close _V10_Draise__continuable_D323_k321) (bruijn ##.handler.1004 1 0))
    VCallFuncWithGC(runtime, (VFunc)VPushExceptionHandler, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Draise__continuable_D323_k321, self)})),
      statics->vars[0]);
}
static void _V10_Draise__continuable_D323_k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Draise__continuable_D323_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.handler.1004 0 0) (close _V10_Draise__continuable_D323_k320) (bruijn ##.x.1003 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Draise__continuable_D323_k320, self)})),
      statics->vars[1]);
}
static void _V10_Draise__continuable_D323_lambda241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Draise__continuable_D323_lambda241, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.get-exception-handler (close _V10_Draise__continuable_D323_k319))
    VCallFuncWithGC(runtime, (VFunc)VGetExceptionHandler, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Draise__continuable_D323_k319, self)})));
}
static void _V10_Dwith__exception__handler_D324_k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__exception__handler_D324_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.k.2172 1 0) (bruijn ##.values.304 4 165) (bruijn ##.rets.1008 1 1))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      statics->vars[0],
      statics->up->up->up->vars[165],
      statics->vars[1]);
}
static void _V10_Dwith__exception__handler_D324_lambda243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__exception__handler_D324_lambda243, got ~D~N"
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
  // (##vcore.pop-exception-handler (close _V10_Dwith__exception__handler_D324_k323) (bruijn ##.handler.1006 2 1))
    VCallFuncWithGC(runtime, (VFunc)VPopExceptionHandler, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__exception__handler_D324_k323, self)})),
      statics->up->vars[1]);
}
static void _V10_Dwith__exception__handler_D324_k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__exception__handler_D324_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.2170 1 0) (bruijn ##.thunk.1007 1 2) (close _V10_Dwith__exception__handler_D324_lambda243))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      statics->vars[2],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__exception__handler_D324_lambda243, self)})));
}
static void _V10_Dwith__exception__handler_D324_lambda242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__exception__handler_D324_lambda242, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.push-exception-handler (close _V10_Dwith__exception__handler_D324_k322) (bruijn ##.handler.1006 0 1))
    VCallFuncWithGC(runtime, (VFunc)VPushExceptionHandler, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__exception__handler_D324_k322, self)})),
      _var1);
}
static void _V10_Derror_D325_k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Derror_D325_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.k.2174 1 0) (bruijn ##.x.2175 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Derror_D325_lambda244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Derror_D325_lambda244, got ~D~N"
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
  // (##vcore.record (close _V10_Derror_D325_k324) #f 'error (bruijn ##.msg.1009 0 1) (bruijn ##.irritants.1010 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Derror_D325_k324, self)})),
      VEncodeBool(false),
      _V0error,
      _var1,
      _varargs);
}
static void _V10_Dfiber__fork_D326_lambda245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__fork_D326_lambda245, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.fiber-fork-list (bruijn ##.k.2176 0 0) (bruijn ##.args.1011 0 1))
    VCallFuncWithGC(runtime, (VFunc)VFiberForkList, 2,
      _var0,
      _varargs);
}
static void _V10_Dfiber__map_D327_k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D327_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.fiber-fork-list (bruijn ##.k.2177 1 0) (bruijn ##.x.2178 0 0))
    VCallFuncWithGC(runtime, (VFunc)VFiberForkList, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dfiber__map_D327_lambda248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D327_lambda248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.f.1012 2 1) (bruijn ##.k.2180 0 0) (bruijn ##.e.1014 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      _var0,
      statics->vars[1]);
}
static void _V10_Dfiber__map_D327_lambda247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D327_lambda247, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.k.2179 0 0) (close _V10_Dfiber__map_D327_lambda248))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D327_lambda248, self)})));
}
static void _V10_Dfiber__map_D327_k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D327_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.fiber-fork-list (bruijn ##.k.2181 1 0) (bruijn ##.x.2182 0 0))
    VCallFuncWithGC(runtime, (VFunc)VFiberForkList, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dfiber__map_D327_lambda250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D327_lambda250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.f.1015 2 1) (bruijn ##.k.2184 0 0) (bruijn ##.a.1018 1 1) (bruijn ##.b.1019 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 3,
      _var0,
      statics->vars[1],
      statics->vars[2]);
}
static void _V10_Dfiber__map_D327_lambda249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D327_lambda249, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.k.2183 0 0) (close _V10_Dfiber__map_D327_lambda250))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D327_lambda250, self)})));
}
static void _V10_Dfiber__map_D327_k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D327_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.fiber-fork-list (bruijn ##.k.2185 1 0) (bruijn ##.x.2186 0 0))
    VCallFuncWithGC(runtime, (VFunc)VFiberForkList, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dfiber__map_D327_lambda252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D327_lambda252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.f.1020 2 1) (bruijn ##.k.2188 0 0) (bruijn ##.a.1024 1 1) (bruijn ##.b.1025 1 2) (bruijn ##.c.1026 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 4,
      _var0,
      statics->vars[1],
      statics->vars[2],
      statics->vars[3]);
}
static void _V10_Dfiber__map_D327_lambda251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D327_lambda251, got ~D~N"
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
  // ((bruijn ##.k.2187 0 0) (close _V10_Dfiber__map_D327_lambda252))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D327_lambda252, self)})));
}
static void _V10_Dfiber__map_D327_k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D327_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.fiber-fork-list (bruijn ##.k.2189 1 0) (bruijn ##.x.2190 0 0))
    VCallFuncWithGC(runtime, (VFunc)VFiberForkList, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dfiber__map_D327_lambda254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D327_lambda254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.k.2192 0 0) (bruijn ##.f.1027 2 1) (bruijn ##.args.1030 1 1))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      _var0,
      statics->up->vars[1],
      statics->vars[1]);
}
static void _V10_Dfiber__map_D327_lambda253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D327_lambda253, got ~D~N"
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
  // ((bruijn ##.k.2191 0 0) (close _V10_Dfiber__map_D327_lambda254))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D327_lambda254, self)})));
}
__attribute__((used)) static void _V20CaseError__V10_Dfiber__map_D327_lambda246(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dfiber__map_D327_lambda246 #t (3 ((bruijn ##.map.219 1 80) (close _V10_Dfiber__map_D327_k325) (close _V10_Dfiber__map_D327_lambda247) (bruijn ##.lst.1013 0 2))) (4 ((bruijn ##.map.219 1 80) (close _V10_Dfiber__map_D327_k326) (close _V10_Dfiber__map_D327_lambda249) (bruijn ##.as.1016 0 2) (bruijn ##.bs.1017 0 3))) (5 ((bruijn ##.map.219 1 80) (close _V10_Dfiber__map_D327_k327) (close _V10_Dfiber__map_D327_lambda251) (bruijn ##.as.1021 0 2) (bruijn ##.bs.1022 0 3) (bruijn ##.cs.1023 0 4))) (3 + (##vcore.apply (close _V10_Dfiber__map_D327_k328) (bruijn ##.map.219 1 80) (close _V10_Dfiber__map_D327_lambda253) (bruijn ##.as.1028 0 2) (bruijn ##.args.1029 0 3))))
 VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D327_lambda246, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dfiber__map_D327_lambda246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.map.219 1 80) (close _V10_Dfiber__map_D327_k325) (close _V10_Dfiber__map_D327_lambda247) (bruijn ##.lst.1013 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D327_k325, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D327_lambda247, self)})),
      _var2);
}
__attribute__((used)) static void _V20Case1__V10_Dfiber__map_D327_lambda246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((bruijn ##.map.219 1 80) (close _V10_Dfiber__map_D327_k326) (close _V10_Dfiber__map_D327_lambda249) (bruijn ##.as.1016 0 2) (bruijn ##.bs.1017 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D327_k326, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D327_lambda249, self)})),
      _var2,
      _var3);
}
__attribute__((used)) static void _V20Case2__V10_Dfiber__map_D327_lambda246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // ((bruijn ##.map.219 1 80) (close _V10_Dfiber__map_D327_k327) (close _V10_Dfiber__map_D327_lambda251) (bruijn ##.as.1021 0 2) (bruijn ##.bs.1022 0 3) (bruijn ##.cs.1023 0 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D327_k327, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D327_lambda251, self)})),
      _var2,
      _var3,
      _var4);
}
__attribute__((used)) static void _V20Case3__V10_Dfiber__map_D327_lambda246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##vcore.apply (close _V10_Dfiber__map_D327_k328) (bruijn ##.map.219 1 80) (close _V10_Dfiber__map_D327_lambda253) (bruijn ##.as.1028 0 2) (bruijn ##.args.1029 0 3))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D327_k328, self)})),
      statics->vars[80],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D327_lambda253, self)})),
      _var2,
      _varargs);
}
void _V10_Dfiber__map_D327_lambda246(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dfiber__map_D327_lambda246, @function\n"
#endif
"_V10_Dfiber__map_D327_lambda246:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dfiber__map_D327_lambda246\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dfiber__map_D327_lambda246\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dfiber__map_D327_lambda246\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case3__V10_Dfiber__map_D327_lambda246\n"
"    jmp _V20CaseError__V10_Dfiber__map_D327_lambda246\n"
);
static void _V0vanity_V0core_V20_k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1032 22 0) (##inline ##vcore.cons (##inline ##vcore.cons 'null? (##intrinsic ##vcore.null?)) (##inline ##vcore.cons (##inline ##vcore.cons 'eof-object? (##intrinsic ##vcore.eof-object?)) (##inline ##vcore.cons (##inline ##vcore.cons 'boolean? (bruijn ##.boolean?.139 17 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'pair? (##intrinsic ##vcore.pair?)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector? (##intrinsic ##vcore.vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table? (##intrinsic ##vcore.hash-table?)) (##inline ##vcore.cons (##inline ##vcore.cons 'record? (##intrinsic ##vcore.record?)) (##inline ##vcore.cons (##inline ##vcore.cons 'procedure? (##intrinsic ##vcore.procedure?)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol? (##intrinsic ##vcore.symbol?)) (##inline ##vcore.cons (##inline ##vcore.cons 'string? (##intrinsic ##vcore.string?)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact? (##intrinsic ##vcore.int?)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact-integer? (##intrinsic ##vcore.int?)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact? (##intrinsic ##vcore.double?)) (##inline ##vcore.cons (##inline ##vcore.cons 'real? (##intrinsic ##vcore.double?)) (##inline ##vcore.cons (##inline ##vcore.cons 'integer? (##intrinsic ##vcore.int?)) (##inline ##vcore.cons (##inline ##vcore.cons 'char? (##intrinsic ##vcore.char?)) (##inline ##vcore.cons (##inline ##vcore.cons 'nullptr? (##intrinsic ##vcore.nullptr?)) (##inline ##vcore.cons (##inline ##vcore.cons 'foreign-pointer? (##intrinsic ##vcore.foreign-pointer?)) (##inline ##vcore.cons (##inline ##vcore.cons 'eq? (##intrinsic ##vcore.eq?)) (##inline ##vcore.cons (##inline ##vcore.cons 'eqv? (##intrinsic ##vcore.eqv?)) (##inline ##vcore.cons (##inline ##vcore.cons 'equal? (bruijn ##.equal?.150 17 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'boolean=? (##intrinsic ##vcore.eq?)) (##inline ##vcore.cons (##inline ##vcore.cons 'char=? (##intrinsic ##vcore.eq?)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol=? (bruijn ##.symbol=?.140 17 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'string=? (##intrinsic ##vcore.blob=?)) (##inline ##vcore.cons (##inline ##vcore.cons 'not (##intrinsic ##vcore.not)) (##inline ##vcore.cons (##inline ##vcore.cons '< (bruijn ##.<.151 17 12)) (##inline ##vcore.cons (##inline ##vcore.cons '= (bruijn ##.=.152 17 13)) (##inline ##vcore.cons (##inline ##vcore.cons '> (bruijn ##.>.153 17 14)) (##inline ##vcore.cons (##inline ##vcore.cons '<= (bruijn ##.<=.154 17 15)) (##inline ##vcore.cons (##inline ##vcore.cons '>= (bruijn ##.>=.155 17 16)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact (##intrinsic ##vcore.exact)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact->exact (##intrinsic ##vcore.exact)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact (##intrinsic ##vcore.inexact)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact->inexact (##intrinsic ##vcore.inexact)) (##inline ##vcore.cons (##inline ##vcore.cons 'number? (bruijn ##.number?.156 17 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'complex? (bruijn ##.complex?.157 17 18)) (##inline ##vcore.cons (##inline ##vcore.cons 'rational? (bruijn ##.rational?.158 17 19)) (##inline ##vcore.cons (##inline ##vcore.cons 'positive? (bruijn ##.positive?.159 17 20)) (##inline ##vcore.cons (##inline ##vcore.cons 'negative? (bruijn ##.negative?.161 17 22)) (##inline ##vcore.cons (##inline ##vcore.cons 'zero? (bruijn ##.zero?.160 17 21)) (##inline ##vcore.cons (##inline ##vcore.cons '+ (##intrinsic ##vcore.+)) (##inline ##vcore.cons (##inline ##vcore.cons '- (##intrinsic ##vcore.-)) (##inline ##vcore.cons (##inline ##vcore.cons '* (##intrinsic ##vcore.*)) (##inline ##vcore.cons (##inline ##vcore.cons '/ (##intrinsic ##vcore./)) (##inline ##vcore.cons (##inline ##vcore.cons 'quotient (##intrinsic ##vcore.quotient)) (##inline ##vcore.cons (##inline ##vcore.cons 'remainder (##intrinsic ##vcore.remainder)) (##inline ##vcore.cons (##inline ##vcore.cons 'max (bruijn ##.max.181 17 42)) (##inline ##vcore.cons (##inline ##vcore.cons 'min (bruijn ##.min.182 17 43)) (##inline ##vcore.cons (##inline ##vcore.cons 'abs (bruijn ##.abs.162 17 23)) (##inline ##vcore.cons (##inline ##vcore.cons 'square (bruijn ##.square.166 17 27)) (##inline ##vcore.cons (##inline ##vcore.cons 'sqrt (bruijn ##.sqrt.167 17 28)) (##inline ##vcore.cons (##inline ##vcore.cons 'ceiling (bruijn ##.ceiling.163 17 24)) (##inline ##vcore.cons (##inline ##vcore.cons 'floor (bruijn ##.floor.164 17 25)) (##inline ##vcore.cons (##inline ##vcore.cons 'round (bruijn ##.round.165 17 26)) (##inline ##vcore.cons (##inline ##vcore.cons 'sin (bruijn ##.sin.168 17 29)) (##inline ##vcore.cons (##inline ##vcore.cons 'cos (bruijn ##.cos.169 17 30)) (##inline ##vcore.cons (##inline ##vcore.cons 'tan (bruijn ##.tan.170 17 31)) (##inline ##vcore.cons (##inline ##vcore.cons 'asin (bruijn ##.asin.171 17 32)) (##inline ##vcore.cons (##inline ##vcore.cons 'acos (bruijn ##.acos.172 17 33)) (##inline ##vcore.cons (##inline ##vcore.cons 'atan (bruijn ##.atan.175 17 36)) (##inline ##vcore.cons (##inline ##vcore.cons 'exp (bruijn ##.exp.176 17 37)) (##inline ##vcore.cons (##inline ##vcore.cons 'log (bruijn ##.log.178 17 39)) (##inline ##vcore.cons (##inline ##vcore.cons 'expt (bruijn ##.expt.180 17 41)) (##inline ##vcore.cons (##inline ##vcore.cons 'pow (bruijn ##.pow.179 17 40)) (##inline ##vcore.cons (##inline ##vcore.cons 'cons (##intrinsic ##vcore.cons)) (##inline ##vcore.cons (##inline ##vcore.cons 'car (##intrinsic ##vcore.car)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdr (##intrinsic ##vcore.cdr)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-car! (##intrinsic ##vcore.set-car!)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-cdr! (##intrinsic ##vcore.set-cdr!)) (##inline ##vcore.cons (##inline ##vcore.cons 'caar (bruijn ##.caar.183 17 44)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadr (bruijn ##.cadr.184 17 45)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdar (bruijn ##.cdar.185 17 46)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddr (bruijn ##.cddr.186 17 47)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaar (bruijn ##.caaar.187 17 48)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadr (bruijn ##.caadr.188 17 49)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadar (bruijn ##.cadar.189 17 50)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddr (bruijn ##.caddr.190 17 51)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaar (bruijn ##.cdaar.191 17 52)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadr (bruijn ##.cdadr.192 17 53)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddar (bruijn ##.cddar.193 17 54)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddr (bruijn ##.cdddr.194 17 55)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaaar (bruijn ##.caaaar.195 17 56)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaadr (bruijn ##.caaadr.196 17 57)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadar (bruijn ##.caadar.197 17 58)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaddr (bruijn ##.caaddr.198 17 59)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadaar (bruijn ##.cadaar.199 17 60)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadadr (bruijn ##.cadadr.200 17 61)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddar (bruijn ##.caddar.201 17 62)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadddr (bruijn ##.cadddr.202 17 63)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaaar (bruijn ##.cdaaar.203 17 64)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaadr (bruijn ##.cdaadr.204 17 65)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadar (bruijn ##.cdadar.205 17 66)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaddr (bruijn ##.cdaddr.206 17 67)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddaar (bruijn ##.cddaar.207 17 68)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddadr (bruijn ##.cddadr.208 17 69)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddar (bruijn ##.cdddar.209 17 70)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddddr (bruijn ##.cddddr.210 17 71)) (##inline ##vcore.cons (##inline ##vcore.cons 'list (bruijn ##.list.211 17 72)) (##inline ##vcore.cons (##inline ##vcore.cons 'list? (bruijn ##.list?.212 17 73)) (##inline ##vcore.cons (##inline ##vcore.cons 'length (bruijn ##.length.213 17 74)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-tail (bruijn ##.list-tail.214 17 75)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-ref (bruijn ##.list-ref.215 17 76)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-set! (bruijn ##.list-set!.216 17 77)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-copy (bruijn ##.list-copy.217 17 78)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-list (bruijn ##.make-list.218 17 79)) (##inline ##vcore.cons (##inline ##vcore.cons 'map (bruijn ##.map.219 17 80)) (##inline ##vcore.cons (##inline ##vcore.cons 'for-each (bruijn ##.for-each.220 17 81)) (##inline ##vcore.cons (##inline ##vcore.cons 'append (bruijn ##.append.222 17 83)) (##inline ##vcore.cons (##inline ##vcore.cons 'reverse (bruijn ##.reverse.223 17 84)) (##inline ##vcore.cons (##inline ##vcore.cons 'memq (bruijn ##.memq.224 17 85)) (##inline ##vcore.cons (##inline ##vcore.cons 'memv (bruijn ##.memv.225 17 86)) (##inline ##vcore.cons (##inline ##vcore.cons 'member (bruijn ##.member.226 17 87)) (##inline ##vcore.cons (##inline ##vcore.cons 'assq (bruijn ##.assq.227 17 88)) (##inline ##vcore.cons (##inline ##vcore.cons 'assv (bruijn ##.assv.228 17 89)) (##inline ##vcore.cons (##inline ##vcore.cons 'assoc (bruijn ##.assoc.229 17 90)) (##inline ##vcore.cons (##inline ##vcore.cons 'num-pairs (bruijn ##.num-pairs.230 17 91)) (##inline ##vcore.cons (##inline ##vcore.cons 'split-at-right (bruijn ##.split-at-right.231 17 92)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->list (bruijn ##.string->list.233 17 94)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->string (bruijn ##.list->string.232 17 93)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-string (##intrinsic ##vcore.make-string)) (##inline ##vcore.cons (##inline ##vcore.cons 'substring (##intrinsic ##vcore.substring)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-copy (##intrinsic ##vcore.substring)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-copy! (##intrinsic ##vcore.string-copy!)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-ref (##intrinsic ##vcore.string-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-set! (##intrinsic ##vcore.string-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-length (##intrinsic ##vcore.string-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->symbol (##intrinsic ##vcore.string->symbol)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->number (##intrinsic ##vcore.string->number)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-append (bruijn ##.string-append.234 17 95)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol->string (##intrinsic ##vcore.symbol->string)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->vector (##intrinsic ##vcore.list->vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector->list (bruijn ##.vector->list.263 17 124)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-vector (bruijn ##.make-vector.264 17 125)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-copy (bruijn ##.vector-copy.267 17 128)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-copy! (bruijn ##.vector-copy!.268 17 129)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector (bruijn ##.vector.235 17 96)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-ref (##intrinsic ##vcore.vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-set! (##intrinsic ##vcore.vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-length (##intrinsic ##vcore.vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-map (bruijn ##.vector-map.266 17 127)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-for-each (bruijn ##.vector-for-each.265 17 126)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-append (bruijn ##.vector-append.269 17 130)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-fill! (bruijn ##.vector-fill!.270 17 131)) (##inline ##vcore.cons (##inline ##vcore.cons 'f64vector? (##intrinsic ##vcore.f64vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->f64vector (##intrinsic ##vcore.list->f64vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'f64vector->list (bruijn ##.f64vector->list.241 17 102)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-f64vector (bruijn ##.make-f64vector.239 17 100)) (##inline ##vcore.cons (##inline ##vcore.cons 'f64vector (bruijn ##.f64vector.240 17 101)) (##inline ##vcore.cons (##inline ##vcore.cons 'f64vector-ref (##intrinsic ##vcore.f64vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'f64vector-set! (##intrinsic ##vcore.f64vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'f64vector-length (##intrinsic ##vcore.f64vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'f32vector? (##intrinsic ##vcore.f32vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->f32vector (##intrinsic ##vcore.list->f32vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'f32vector->list (bruijn ##.f32vector->list.238 17 99)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-f32vector (bruijn ##.make-f32vector.236 17 97)) (##inline ##vcore.cons (##inline ##vcore.cons 'f32vector (bruijn ##.f32vector.237 17 98)) (##inline ##vcore.cons (##inline ##vcore.cons 'f32vector-ref (##intrinsic ##vcore.f32vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'f32vector-set! (##intrinsic ##vcore.f32vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'f32vector-length (##intrinsic ##vcore.f32vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 's32vector? (##intrinsic ##vcore.s32vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->s32vector (##intrinsic ##vcore.list->s32vector)) (##inline ##vcore.cons (##inline ##vcore.cons 's32vector->list (bruijn ##.s32vector->list.244 17 105)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-s32vector (bruijn ##.make-s32vector.242 17 103)) (##inline ##vcore.cons (##inline ##vcore.cons 's32vector (bruijn ##.s32vector.243 17 104)) (##inline ##vcore.cons (##inline ##vcore.cons 's32vector-ref (##intrinsic ##vcore.s32vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 's32vector-set! (##intrinsic ##vcore.s32vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 's32vector-length (##intrinsic ##vcore.s32vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'u16vector? (##intrinsic ##vcore.u16vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->u16vector (##intrinsic ##vcore.list->u16vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'u16vector->list (bruijn ##.u16vector->list.247 17 108)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-u16vector (bruijn ##.make-u16vector.245 17 106)) (##inline ##vcore.cons (##inline ##vcore.cons 'u16vector (bruijn ##.u16vector.246 17 107)) (##inline ##vcore.cons (##inline ##vcore.cons 'u16vector-ref (##intrinsic ##vcore.u16vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'u16vector-set! (##intrinsic ##vcore.u16vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'u16vector-length (##intrinsic ##vcore.u16vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 's16vector? (##intrinsic ##vcore.s16vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->s16vector (##intrinsic ##vcore.list->s16vector)) (##inline ##vcore.cons (##inline ##vcore.cons 's16vector->list (bruijn ##.s16vector->list.250 17 111)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-s16vector (bruijn ##.make-s16vector.248 17 109)) (##inline ##vcore.cons (##inline ##vcore.cons 's16vector (bruijn ##.s16vector.249 17 110)) (##inline ##vcore.cons (##inline ##vcore.cons 's16vector-ref (##intrinsic ##vcore.s16vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 's16vector-set! (##intrinsic ##vcore.s16vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 's16vector-length (##intrinsic ##vcore.s16vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'u8vector? (##intrinsic ##vcore.u8vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->u8vector (##intrinsic ##vcore.list->u8vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'u8vector->list (bruijn ##.u8vector->list.253 17 114)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-u8vector (bruijn ##.make-u8vector.251 17 112)) (##inline ##vcore.cons (##inline ##vcore.cons 'u8vector (bruijn ##.u8vector.252 17 113)) (##inline ##vcore.cons (##inline ##vcore.cons 'u8vector-ref (##intrinsic ##vcore.u8vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'u8vector-set! (##intrinsic ##vcore.u8vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'u8vector-length (##intrinsic ##vcore.u8vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 's8vector? (##intrinsic ##vcore.s8vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->s8vector (##intrinsic ##vcore.list->s8vector)) (##inline ##vcore.cons (##inline ##vcore.cons 's8vector->list (bruijn ##.s8vector->list.261 17 122)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-s8vector (bruijn ##.make-s8vector.259 17 120)) (##inline ##vcore.cons (##inline ##vcore.cons 's8vector (bruijn ##.s8vector.260 17 121)) (##inline ##vcore.cons (##inline ##vcore.cons 's8vector-ref (##intrinsic ##vcore.s8vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 's8vector-set! (##intrinsic ##vcore.s8vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 's8vector-length (##intrinsic ##vcore.s8vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'bytevector? (##intrinsic ##vcore.u8vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->bytevector (##intrinsic ##vcore.list->u8vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'bytevector->list (bruijn ##.bytevector->list.255 17 116)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-bytevector (bruijn ##.make-bytevector.254 17 115)) (##inline ##vcore.cons (##inline ##vcore.cons 'bytevector (bruijn ##.bytevector.256 17 117)) (##inline ##vcore.cons (##inline ##vcore.cons 'bytevector-u8-ref (##intrinsic ##vcore.u8vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'bytevector-u8-set! (##intrinsic ##vcore.u8vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'bytevector-length (##intrinsic ##vcore.u8vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-u8vector (bruijn ##.read-u8vector.257 17 118)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-bytevector (bruijn ##.read-bytevector.258 17 119)) (##inline ##vcore.cons (##inline ##vcore.cons 'typevector? (bruijn ##.typevector?.262 17 123)) (##inline ##vcore.cons (##inline ##vcore.cons 'record (##intrinsic ##vcore.record)) (##inline ##vcore.cons (##inline ##vcore.cons 'record-ref (##intrinsic ##vcore.record-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'record-set! (##intrinsic ##vcore.record-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'record-length (##intrinsic ##vcore.record-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-hash-table (bruijn ##.make-hash-table.271 17 132)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table-ref (bruijn ##.hash-table-ref.272 17 133)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table-set! (bruijn ##.hash-table-set!.273 17 134)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table-delete! (##intrinsic ##vcore.hash-table-delete!)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table->alist (bruijn ##.hash-table->alist.274 17 135)) (##inline ##vcore.cons (##inline ##vcore.cons 'char->integer (##intrinsic ##vcore.char-integer)) (##inline ##vcore.cons (##inline ##vcore.cons 'number->string (bruijn ##.number->string.275 17 136)) (##inline ##vcore.cons (##inline ##vcore.cons 'char-numeric? (bruijn ##.char-numeric?.276 17 137)) (##inline ##vcore.cons (##inline ##vcore.cons 'char-alphabetic? (bruijn ##.char-alphabetic?.277 17 138)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-output-port (bruijn ##.current-output-port.278 17 139)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-error-port (bruijn ##.current-error-port.279 17 140)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-input-port (bruijn ##.current-input-port.280 17 141)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-input-file (bruijn ##.open-input-file.286 17 147)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-file (bruijn ##.open-output-file.287 17 148)) (##inline ##vcore.cons (##inline ##vcore.cons 'close-port (bruijn ##.close-port.282 17 143)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-string (bruijn ##.open-output-string.288 17 149)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-output-string (bruijn ##.get-output-string.289 17 150)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-output-to-file (bruijn ##.with-output-to-file.293 17 154)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-input-from-file (bruijn ##.with-input-from-file.294 17 155)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-port (bruijn ##.call-with-port.290 17 151)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-input-file (bruijn ##.call-with-input-file.291 17 152)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-output-file (bruijn ##.call-with-output-file.292 17 153)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-char (bruijn ##.read-char.295 17 156)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-line (bruijn ##.read-line.296 17 157)) (##inline ##vcore.cons (##inline ##vcore.cons 'read (bruijn ##.read.297 17 158)) (##inline ##vcore.cons (##inline ##vcore.cons 'newline (bruijn ##.newline.298 17 159)) (##inline ##vcore.cons (##inline ##vcore.cons 'display (bruijn ##.display.302 17 163)) (##inline ##vcore.cons (##inline ##vcore.cons 'write (bruijn ##.write.303 17 164)) (##inline ##vcore.cons (##inline ##vcore.cons 'call/cc (##intrinsic ##vcore.call/cc)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-current-continuation (##intrinsic ##vcore.call/cc)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-values (##intrinsic ##vcore.call-with-values)) (##inline ##vcore.cons (##inline ##vcore.cons 'apply (##intrinsic ##vcore.apply)) (##inline ##vcore.cons (##inline ##vcore.cons 'values (bruijn ##.values.304 17 165)) (##inline ##vcore.cons (##inline ##vcore.cons 'setter (bruijn ##.setter.305 17 166)) (##inline ##vcore.cons (##inline ##vcore.cons 'mutator (bruijn ##.mutator.306 17 167)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.setter (bruijn ##.x.1034 18 0)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.mutator (bruijn ##.x.1033 19 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-parameter (bruijn ##.make-parameter.307 17 168)) (##inline ##vcore.cons (##inline ##vcore.cons 'raise (##intrinsic ##vcore.raise)) (##inline ##vcore.cons (##inline ##vcore.cons 'raise-continuable (bruijn ##.raise-continuable.323 17 184)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-exception-handler (bruijn ##.with-exception-handler.324 17 185)) (##inline ##vcore.cons (##inline ##vcore.cons 'command-line (##intrinsic ##vcore.command-line)) (##inline ##vcore.cons (##inline ##vcore.cons 'system (##intrinsic ##vcore.system)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-input-process (##intrinsic ##vcore.open-input-process)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-process (##intrinsic ##vcore.open-output-process)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-temporary-file (##intrinsic ##vcore.make-temporary-file)) (##inline ##vcore.cons (##inline ##vcore.cons 'file-exists? (bruijn ##.file-exists?.308 17 169)) (##inline ##vcore.cons (##inline ##vcore.cons 'exit (##intrinsic ##vcore.exit)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-jiffy (##intrinsic ##vcore.current-jiffy)) (##inline ##vcore.cons (##inline ##vcore.cons 'jiffies-per-second (##intrinsic ##vcore.jiffies-per-second)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-not (##intrinsic ##vcore.bitwise-not)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-and (bruijn ##.bitwise-and.309 17 170)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-or (bruijn ##.bitwise-or.314 17 175)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-ior (bruijn ##.bitwise-ior.310 17 171)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-xor (bruijn ##.bitwise-xor.311 17 172)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-xnor (bruijn ##.bitwise-xnor.312 17 173)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-eqv (bruijn ##.bitwise-eqv.313 17 174)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-nand (##intrinsic ##vcore.bitwise-nand)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-nor (##intrinsic ##vcore.bitwise-nor)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-andc1 (##intrinsic ##vcore.bitwise-andc1)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-andc2 (##intrinsic ##vcore.bitwise-andc2)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-orc1 (##intrinsic ##vcore.bitwise-orc1)) (##inline ##vcore.cons (##inline ##vcore.cons 'bitwise-orc2 (##intrinsic ##vcore.bitwise-orc2)) (##inline ##vcore.cons (##inline ##vcore.cons 'arithmetic-shift (##intrinsic ##vcore.arithmetic-shift)) (##inline ##vcore.cons (##inline ##vcore.cons 'bit-count (##intrinsic ##vcore.bit-count)) (##inline ##vcore.cons (##inline ##vcore.cons 'fiber-fork (bruijn ##.fiber-fork.326 17 187)) (##inline ##vcore.cons (##inline ##vcore.cons 'fiber-fork-list (##intrinsic ##vcore.fiber-fork-list)) (##inline ##vcore.cons (##inline ##vcore.cons 'fiber-map (bruijn ##.fiber-map.327 17 188)) (##inline ##vcore.cons (##inline ##vcore.cons 'async (##intrinsic ##vcore.async)) (##inline ##vcore.cons (##inline ##vcore.cons 'await (##intrinsic ##vcore.await)) (##inline ##vcore.cons (##inline ##vcore.cons 'atom? (bruijn ##.atom?.315 17 176)) (##inline ##vcore.cons (##inline ##vcore.cons 'displayln (bruijn ##.displayln.316 17 177)) (##inline ##vcore.cons (##inline ##vcore.cons 'writeln (bruijn ##.writeln.317 17 178)) (##inline ##vcore.cons (##inline ##vcore.cons 'format (bruijn ##.format.322 17 183)) (##inline ##vcore.cons (##inline ##vcore.cons 'printf (bruijn ##.printf.320 17 181)) (##inline ##vcore.cons (##inline ##vcore.cons 'sprintf (bruijn ##.sprintf.321 17 182)) (##inline ##vcore.cons (##inline ##vcore.cons 'error (bruijn ##.error.325 17 186)) '())))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
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
        VGetArg(statics, 17-1, 12)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_E,
        VGetArg(statics, 17-1, 13)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_G,
        VGetArg(statics, 17-1, 14)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_L_E,
        VGetArg(statics, 17-1, 15)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_G_E,
        VGetArg(statics, 17-1, 16)),
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
        VGetArg(statics, 17-1, 17)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0complex_Q,
        VGetArg(statics, 17-1, 18)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0rational_Q,
        VGetArg(statics, 17-1, 19)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0positive_Q,
        VGetArg(statics, 17-1, 20)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0negative_Q,
        VGetArg(statics, 17-1, 22)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0zero_Q,
        VGetArg(statics, 17-1, 21)),
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
        VGetArg(statics, 17-1, 42)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0min,
        VGetArg(statics, 17-1, 43)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0abs,
        VGetArg(statics, 17-1, 23)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0square,
        VGetArg(statics, 17-1, 27)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0sqrt,
        VGetArg(statics, 17-1, 28)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0ceiling,
        VGetArg(statics, 17-1, 24)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0floor,
        VGetArg(statics, 17-1, 25)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0round,
        VGetArg(statics, 17-1, 26)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0sin,
        VGetArg(statics, 17-1, 29)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cos,
        VGetArg(statics, 17-1, 30)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0tan,
        VGetArg(statics, 17-1, 31)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0asin,
        VGetArg(statics, 17-1, 32)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0acos,
        VGetArg(statics, 17-1, 33)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0atan,
        VGetArg(statics, 17-1, 36)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exp,
        VGetArg(statics, 17-1, 37)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0log,
        VGetArg(statics, 17-1, 39)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0expt,
        VGetArg(statics, 17-1, 41)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0pow,
        VGetArg(statics, 17-1, 40)),
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
        VGetArg(statics, 17-1, 44)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadr,
        VGetArg(statics, 17-1, 45)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdar,
        VGetArg(statics, 17-1, 46)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddr,
        VGetArg(statics, 17-1, 47)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaar,
        VGetArg(statics, 17-1, 48)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caadr,
        VGetArg(statics, 17-1, 49)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadar,
        VGetArg(statics, 17-1, 50)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caddr,
        VGetArg(statics, 17-1, 51)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaar,
        VGetArg(statics, 17-1, 52)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdadr,
        VGetArg(statics, 17-1, 53)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddar,
        VGetArg(statics, 17-1, 54)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdddr,
        VGetArg(statics, 17-1, 55)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaaar,
        VGetArg(statics, 17-1, 56)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaadr,
        VGetArg(statics, 17-1, 57)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caadar,
        VGetArg(statics, 17-1, 58)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaddr,
        VGetArg(statics, 17-1, 59)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadaar,
        VGetArg(statics, 17-1, 60)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadadr,
        VGetArg(statics, 17-1, 61)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caddar,
        VGetArg(statics, 17-1, 62)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadddr,
        VGetArg(statics, 17-1, 63)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaaar,
        VGetArg(statics, 17-1, 64)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaadr,
        VGetArg(statics, 17-1, 65)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdadar,
        VGetArg(statics, 17-1, 66)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaddr,
        VGetArg(statics, 17-1, 67)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddaar,
        VGetArg(statics, 17-1, 68)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddadr,
        VGetArg(statics, 17-1, 69)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdddar,
        VGetArg(statics, 17-1, 70)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddddr,
        VGetArg(statics, 17-1, 71)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list,
        VGetArg(statics, 17-1, 72)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list_Q,
        VGetArg(statics, 17-1, 73)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0length,
        VGetArg(statics, 17-1, 74)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__tail,
        VGetArg(statics, 17-1, 75)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__ref,
        VGetArg(statics, 17-1, 76)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__set_B,
        VGetArg(statics, 17-1, 77)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__copy,
        VGetArg(statics, 17-1, 78)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__list,
        VGetArg(statics, 17-1, 79)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0map,
        VGetArg(statics, 17-1, 80)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0for__each,
        VGetArg(statics, 17-1, 81)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append,
        VGetArg(statics, 17-1, 83)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0reverse,
        VGetArg(statics, 17-1, 84)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0memq,
        VGetArg(statics, 17-1, 85)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0memv,
        VGetArg(statics, 17-1, 86)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0member,
        VGetArg(statics, 17-1, 87)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assq,
        VGetArg(statics, 17-1, 88)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assv,
        VGetArg(statics, 17-1, 89)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assoc,
        VGetArg(statics, 17-1, 90)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0num__pairs,
        VGetArg(statics, 17-1, 91)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0split__at__right,
        VGetArg(statics, 17-1, 92)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Glist,
        VGetArg(statics, 17-1, 94)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gstring,
        VGetArg(statics, 17-1, 93)),
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
        VGetArg(statics, 17-1, 95)),
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
        VGetArg(statics, 17-1, 124)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__vector,
        VGetArg(statics, 17-1, 125)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__copy,
        VGetArg(statics, 17-1, 128)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__copy_B,
        VGetArg(statics, 17-1, 129)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector,
        VGetArg(statics, 17-1, 96)),
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
        VGetArg(statics, 17-1, 127)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__for__each,
        VGetArg(statics, 17-1, 126)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__append,
        VGetArg(statics, 17-1, 130)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__fill_B,
        VGetArg(statics, 17-1, 131)),
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
        VGetArg(statics, 17-1, 102)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__f64vector,
        VGetArg(statics, 17-1, 100)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0f64vector,
        VGetArg(statics, 17-1, 101)),
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
        VGetArg(statics, 17-1, 99)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__f32vector,
        VGetArg(statics, 17-1, 97)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0f32vector,
        VGetArg(statics, 17-1, 98)),
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
        VGetArg(statics, 17-1, 105)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__s32vector,
        VGetArg(statics, 17-1, 103)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s32vector,
        VGetArg(statics, 17-1, 104)),
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
        VGetArg(statics, 17-1, 108)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__u16vector,
        VGetArg(statics, 17-1, 106)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0u16vector,
        VGetArg(statics, 17-1, 107)),
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
        VGetArg(statics, 17-1, 111)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__s16vector,
        VGetArg(statics, 17-1, 109)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s16vector,
        VGetArg(statics, 17-1, 110)),
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
        VGetArg(statics, 17-1, 114)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__u8vector,
        VGetArg(statics, 17-1, 112)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0u8vector,
        VGetArg(statics, 17-1, 113)),
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
        VGetArg(statics, 17-1, 122)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__s8vector,
        VGetArg(statics, 17-1, 120)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0s8vector,
        VGetArg(statics, 17-1, 121)),
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
        VGetArg(statics, 17-1, 116)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__bytevector,
        VGetArg(statics, 17-1, 115)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bytevector,
        VGetArg(statics, 17-1, 117)),
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
        VGetArg(statics, 17-1, 118)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__bytevector,
        VGetArg(statics, 17-1, 119)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0typevector_Q,
        VGetArg(statics, 17-1, 123)),
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
        VGetArg(statics, 17-1, 132)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table__ref,
        VGetArg(statics, 17-1, 133)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table__set_B,
        VGetArg(statics, 17-1, 134)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table__delete_B,
        _V40_V10vcore_Dhash__table__delete_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table___Galist,
        VGetArg(statics, 17-1, 135)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char___Ginteger,
        _V40_V10vcore_Dchar__integer),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0number___Gstring,
        VGetArg(statics, 17-1, 136)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char__numeric_Q,
        VGetArg(statics, 17-1, 137)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char__alphabetic_Q,
        VGetArg(statics, 17-1, 138)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__output__port,
        VGetArg(statics, 17-1, 139)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__error__port,
        VGetArg(statics, 17-1, 140)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__input__port,
        VGetArg(statics, 17-1, 141)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__input__file,
        VGetArg(statics, 17-1, 147)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__file,
        VGetArg(statics, 17-1, 148)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0close__port,
        VGetArg(statics, 17-1, 143)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__string,
        VGetArg(statics, 17-1, 149)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__output__string,
        VGetArg(statics, 17-1, 150)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__output__to__file,
        VGetArg(statics, 17-1, 154)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__input__from__file,
        VGetArg(statics, 17-1, 155)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__port,
        VGetArg(statics, 17-1, 151)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__input__file,
        VGetArg(statics, 17-1, 152)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__output__file,
        VGetArg(statics, 17-1, 153)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__char,
        VGetArg(statics, 17-1, 156)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__line,
        VGetArg(statics, 17-1, 157)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read,
        VGetArg(statics, 17-1, 158)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0newline,
        VGetArg(statics, 17-1, 159)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0display,
        VGetArg(statics, 17-1, 163)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0write,
        VGetArg(statics, 17-1, 164)),
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
        VGetArg(statics, 17-1, 165)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0setter,
        VGetArg(statics, 17-1, 166)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mutator,
        VGetArg(statics, 17-1, 167)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dsetter,
        VGetArg(statics, 18-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dmutator,
        VGetArg(statics, 19-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__parameter,
        VGetArg(statics, 17-1, 168)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0raise,
        _V40_V10vcore_Draise),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0raise__continuable,
        VGetArg(statics, 17-1, 184)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__exception__handler,
        VGetArg(statics, 17-1, 185)),
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
        VGetArg(statics, 17-1, 169)),
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
        VGetArg(statics, 17-1, 170)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__or,
        VGetArg(statics, 17-1, 175)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__ior,
        VGetArg(statics, 17-1, 171)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__xor,
        VGetArg(statics, 17-1, 172)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__xnor,
        VGetArg(statics, 17-1, 173)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bitwise__eqv,
        VGetArg(statics, 17-1, 174)),
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
        VGetArg(statics, 17-1, 187)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fiber__fork__list,
        _V40_V10vcore_Dfiber__fork__list),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fiber__map,
        VGetArg(statics, 17-1, 188)),
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
        VGetArg(statics, 17-1, 176)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0displayln,
        VGetArg(statics, 17-1, 177)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0writeln,
        VGetArg(statics, 17-1, 178)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0format,
        VGetArg(statics, 17-1, 183)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0printf,
        VGetArg(statics, 17-1, 181)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0sprintf,
        VGetArg(statics, 17-1, 182)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0error,
        VGetArg(statics, 17-1, 186)),
        VNULL)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}
static void _V0vanity_V0core_V20_k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k345) (bruijn ##.bitwise-or.314 16 175) (bruijn ##.bitwise-ior.310 16 171))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k345, self)})),
      VEncodeInt(16l), VEncodeInt(175l),
      VGetArg(statics, 16-1, 171)
    );
}
static void _V0vanity_V0core_V20_k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k344) (bruijn ##.bitwise-eqv.313 15 174) (bruijn ##.bitwise-xnor.312 15 173))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k344, self)})),
      VEncodeInt(15l), VEncodeInt(174l),
      VGetArg(statics, 15-1, 173)
    );
}
static void _V0vanity_V0core_V20_k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k343) (bruijn ##.current-input-port.280 14 141) (bruijn ##.x.2787 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k343, self)})),
      VEncodeInt(14l), VEncodeInt(141l),
      _var0
    );
}
static void _V0vanity_V0core_V20_k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-parameter.307 13 168) (close _V0vanity_V0core_V20_k342) (bruijn ##.x.2788 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 168)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k342, self)})),
      _var0);
}
static void _V0vanity_V0core_V20_k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.stdin->port (close _V0vanity_V0core_V20_k341))
    VCallFuncWithGC(runtime, (VFunc)VStdinPort, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k341, self)})));
}
static void _V0vanity_V0core_V20_k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k340) (bruijn ##.current-error-port.279 11 140) (bruijn ##.x.2789 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k340, self)})),
      VEncodeInt(11l), VEncodeInt(140l),
      _var0
    );
}
static void _V0vanity_V0core_V20_k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-parameter.307 10 168) (close _V0vanity_V0core_V20_k339) (bruijn ##.x.2790 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 168)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k339, self)})),
      _var0);
}
static void _V0vanity_V0core_V20_k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.stderr->port (close _V0vanity_V0core_V20_k338))
    VCallFuncWithGC(runtime, (VFunc)VStderrPort, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k338, self)})));
}
static void _V0vanity_V0core_V20_k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k337) (bruijn ##.current-output-port.278 8 139) (bruijn ##.x.2791 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k337, self)})),
      VEncodeInt(8l), VEncodeInt(139l),
      _var0
    );
}
static void _V0vanity_V0core_V20_k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-parameter.307 7 168) (close _V0vanity_V0core_V20_k336) (bruijn ##.x.2792 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 168)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k336, self)})),
      _var0);
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
  // (##vcore.stdout->port (close _V0vanity_V0core_V20_k335))
    VCallFuncWithGC(runtime, (VFunc)VStdoutPort, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k335, self)})));
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
  // (set! (close _V0vanity_V0core_V20_k334) (bruijn ##.read-bytevector.258 5 119) (bruijn ##.read-u8vector.257 5 118))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k334, self)})),
      VEncodeInt(5l), VEncodeInt(119l),
      VGetArg(statics, 5-1, 118)
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
  // (set! (close _V0vanity_V0core_V20_k333) (bruijn ##.bytevector.256 4 117) (bruijn ##.u8vector.252 4 113))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k333, self)})),
      VEncodeInt(4l), VEncodeInt(117l),
      statics->up->up->up->vars[113]
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
  // (set! (close _V0vanity_V0core_V20_k332) (bruijn ##.bytevector->list.255 3 116) (bruijn ##.u8vector->list.253 3 114))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k332, self)})),
      VEncodeInt(3l), VEncodeInt(116l),
      statics->up->up->vars[114]
    );
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
  // (set! (close _V0vanity_V0core_V20_k331) (bruijn ##.make-bytevector.254 2 115) (bruijn ##.make-u8vector.251 2 112))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k331, self)})),
      VEncodeInt(2l), VEncodeInt(115l),
      statics->up->vars[112]
    );
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
  // (set! (close _V0vanity_V0core_V20_k330) (bruijn ##.expt.180 1 41) (bruijn ##.pow.179 1 40))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k330, self)})),
      VEncodeInt(1l), VEncodeInt(41l),
      statics->vars[40]
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
  // (letrec 189 ((close _V10_Dboolean_Q_D139_lambda2) (close _V10_Dsymbol_E_Q_D140_lambda3) (close _V10_Dvector_E_Q_D141_lambda5) (close _V10_Df32vector_E_Q_D142_lambda7) (close _V10_Df64vector_E_Q_D143_lambda9) (close _V10_Ds32vector_E_Q_D144_lambda11) (close _V10_Du16vector_E_Q_D145_lambda13) (close _V10_Ds16vector_E_Q_D146_lambda15) (close _V10_Du8vector_E_Q_D147_lambda17) (close _V10_Ds8vector_E_Q_D148_lambda19) (close _V10_Drecord_E_Q_D149_lambda21) (close _V10_Dequal_Q_D150_lambda23) (close _V10_D_L_D151_lambda24) (close _V10_D_E_D152_lambda26) (close _V10_D_G_D153_lambda28) (close _V10_D_L_E_D154_lambda30) (close _V10_D_G_E_D155_lambda32) (close _V10_Dnumber_Q_D156_lambda34) #f (##intrinsic ##vcore.int?) (close _V10_Dpositive_Q_D159_lambda35) (close _V10_Dzero_Q_D160_lambda36) (close _V10_Dnegative_Q_D161_lambda37) (close _V10_Dabs_D162_lambda38) (##foreign.function "_V30ceil_shim") (##foreign.function "_V30floor_shim") (##foreign.function "_V30round_shim") (close _V10_Dsquare_D166_lambda39) (##foreign.function "_V30sqrt_shim") (##foreign.function "_V30sin_shim") (##foreign.function "_V30cos_shim") (##foreign.function "_V30tan_shim") (##foreign.function "_V30asin_shim") (##foreign.function "_V30acos_shim") (##foreign.function "_V30atan_shim") (##foreign.function "_V30atan2_shim") (close _V10_Datan_D175_lambda40) (##foreign.function "_V30exp_shim") (##foreign.function "_V30log_shim") (close _V10_Dlog_D178_lambda41) (##foreign.function "_V30pow_shim") #f (close _V10_Dmax_D181_lambda42) (close _V10_Dmin_D182_lambda44) (close _V10_Dcaar_D183_lambda46) (close _V10_Dcadr_D184_lambda47) (close _V10_Dcdar_D185_lambda48) (close _V10_Dcddr_D186_lambda49) (close _V10_Dcaaar_D187_lambda50) (close _V10_Dcaadr_D188_lambda51) (close _V10_Dcadar_D189_lambda52) (close _V10_Dcaddr_D190_lambda53) (close _V10_Dcdaar_D191_lambda54) (close _V10_Dcdadr_D192_lambda55) (close _V10_Dcddar_D193_lambda56) (close _V10_Dcdddr_D194_lambda57) (close _V10_Dcaaaar_D195_lambda58) (close _V10_Dcaaadr_D196_lambda59) (close _V10_Dcaadar_D197_lambda60) (close _V10_Dcaaddr_D198_lambda61) (close _V10_Dcadaar_D199_lambda62) (close _V10_Dcadadr_D200_lambda63) (close _V10_Dcaddar_D201_lambda64) (close _V10_Dcadddr_D202_lambda65) (close _V10_Dcdaaar_D203_lambda66) (close _V10_Dcdaadr_D204_lambda67) (close _V10_Dcdadar_D205_lambda68) (close _V10_Dcdaddr_D206_lambda69) (close _V10_Dcddaar_D207_lambda70) (close _V10_Dcddadr_D208_lambda71) (close _V10_Dcdddar_D209_lambda72) (close _V10_Dcddddr_D210_lambda73) (close _V10_Dlist_D211_lambda74) (close _V10_Dlist_Q_D212_lambda75) (close _V10_Dlength_D213_lambda76) (close _V10_Dlist__tail_D214_lambda78) (close _V10_Dlist__ref_D215_lambda79) (close _V10_Dlist__set_B_D216_lambda80) (close _V10_Dlist__copy_D217_lambda81) (close _V10_Dmake__list_D218_lambda82) (close _V10_Dmap_D219_lambda84) (close _V10_Dfor__each_D220_lambda89) (close _V10_Dfold__right_D221_lambda94) (close _V10_Dappend_D222_lambda96) (close _V10_Dreverse_D223_lambda98) (close _V10_Dmemq_D224_lambda100) (close _V10_Dmemv_D225_lambda101) (close _V10_Dmember_D226_lambda102) (close _V10_Dassq_D227_lambda103) (close _V10_Dassv_D228_lambda104) (close _V10_Dassoc_D229_lambda105) (close _V10_Dnum__pairs_D230_lambda106) (close _V10_Dsplit__at__right_D231_lambda108) (close _V10_Dlist___Gstring_D232_lambda112) (close _V10_Dstring___Glist_D233_lambda114) (close _V10_Dstring__append_D234_lambda116) (close _V10_Dvector_D235_lambda117) (close _V10_Dmake__f32vector_D236_lambda118) (close _V10_Df32vector_D237_lambda119) (close _V10_Df32vector___Glist_D238_lambda120) (close _V10_Dmake__f64vector_D239_lambda122) (close _V10_Df64vector_D240_lambda123) (close _V10_Df64vector___Glist_D241_lambda124) (close _V10_Dmake__s32vector_D242_lambda126) (close _V10_Ds32vector_D243_lambda127) (close _V10_Ds32vector___Glist_D244_lambda128) (close _V10_Dmake__u16vector_D245_lambda130) (close _V10_Du16vector_D246_lambda131) (close _V10_Du16vector___Glist_D247_lambda132) (close _V10_Dmake__s16vector_D248_lambda134) (close _V10_Ds16vector_D249_lambda135) (close _V10_Ds16vector___Glist_D250_lambda136) (close _V10_Dmake__u8vector_D251_lambda138) (close _V10_Du8vector_D252_lambda139) (close _V10_Du8vector___Glist_D253_lambda140) #f #f #f (close _V10_Dread__u8vector_D257_lambda142) #f (close _V10_Dmake__s8vector_D259_lambda143) (close _V10_Ds8vector_D260_lambda144) (close _V10_Ds8vector___Glist_D261_lambda145) (close _V10_Dtypevector_Q_D262_lambda147) (close _V10_Dvector___Glist_D263_lambda148) (close _V10_Dmake__vector_D264_lambda150) (close _V10_Dvector__for__each_D265_lambda151) (close _V10_Dvector__map_D266_lambda157) (close _V10_Dvector__copy_D267_lambda163) (close _V10_Dvector__copy_B_D268_lambda164) (close _V10_Dvector__append_D269_lambda166) (close _V10_Dvector__fill_B_D270_lambda169) (close _V10_Dmake__hash__table_D271_lambda171) (close _V10_Dhash__table__ref_D272_lambda172) (close _V10_Dhash__table__set_B_D273_lambda174) (close _V10_Dhash__table___Galist_D274_lambda175) (close _V10_Dnumber___Gstring_D275_lambda177) (close _V10_Dchar__numeric_Q_D276_lambda178) (close _V10_Dchar__alphabetic_Q_D277_lambda179) #f #f #f (close _V10_Dtry__or__gc_D281_lambda180) (close _V10_Dclose__port_D282_lambda183) (close _V10_Dopen__input__file__impl_D283_lambda184) (close _V10_Dopen__output__file__impl_D284_lambda187) (close _V10_Dopen__output__string__impl_D285_lambda190) (close _V10_Dopen__input__file_D286_lambda193) (close _V10_Dopen__output__file_D287_lambda195) (close _V10_Dopen__output__string_D288_lambda197) (##intrinsic ##vcore.get-output-string) (close _V10_Dcall__with__port_D290_lambda198) (close _V10_Dcall__with__input__file_D291_lambda199) (close _V10_Dcall__with__output__file_D292_lambda200) (close _V10_Dwith__output__to__file_D293_lambda201) (close _V10_Dwith__input__from__file_D294_lambda203) (close _V10_Dread__char_D295_lambda205) (close _V10_Dread__line_D296_lambda206) (close _V10_Dread_D297_lambda209) (close _V10_Dnewline_D298_lambda210) (close _V10_Dprintout__list_D299_lambda211) (close _V10_Dprintout__quotation_D300_lambda213) (close _V10_Dprintout_D301_lambda214) (close _V10_Ddisplay_D302_lambda216) (close _V10_Dwrite_D303_lambda217) (close _V10_Dvalues_D304_lambda218) (bruijn ##.x.1034 1 0) (bruijn ##.x.1033 2 0) (close _V10_Dmake__parameter_D307_lambda220) (close _V10_Dfile__exists_Q_D308_lambda223) (close _V10_Dbitwise__and_D309_lambda224) (close _V10_Dbitwise__ior_D310_lambda226) (close _V10_Dbitwise__xor_D311_lambda228) (close _V10_Dbitwise__xnor_D312_lambda230) #f #f (close _V10_Datom_Q_D315_lambda232) (close _V10_Ddisplayln_D316_lambda233) (close _V10_Dwriteln_D317_lambda234) (close _V10_Dformat__printf_D318_lambda235) (close _V10_Dformat__sprintf_D319_lambda237) (close _V10_Dprintf_D320_lambda238) (close _V10_Dsprintf_D321_lambda239) (close _V10_Dformat_D322_lambda240) (close _V10_Draise__continuable_D323_lambda241) (close _V10_Dwith__exception__handler_D324_lambda242) (close _V10_Derror_D325_lambda244) (close _V10_Dfiber__fork_D326_lambda245) (close _V10_Dfiber__map_D327_lambda246)) (set! (close _V0vanity_V0core_V20_k329) (bruijn ##.complex?.157 0 18) (bruijn ##.number?.156 0 17)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[189]; } container;
    self = &container.self;
    VInitEnv(self, 189, 189, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dboolean_Q_D139_lambda2, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsymbol_E_Q_D140_lambda3, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector_E_Q_D141_lambda5, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Df32vector_E_Q_D142_lambda7, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Df64vector_E_Q_D143_lambda9, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds32vector_E_Q_D144_lambda11, self)}));
    self->vars[6] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Du16vector_E_Q_D145_lambda13, self)}));
    self->vars[7] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds16vector_E_Q_D146_lambda15, self)}));
    self->vars[8] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Du8vector_E_Q_D147_lambda17, self)}));
    self->vars[9] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds8vector_E_Q_D148_lambda19, self)}));
    self->vars[10] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Drecord_E_Q_D149_lambda21, self)}));
    self->vars[11] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D150_lambda23, self)}));
    self->vars[12] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_L_D151_lambda24, self)}));
    self->vars[13] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_E_D152_lambda26, self)}));
    self->vars[14] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_G_D153_lambda28, self)}));
    self->vars[15] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_L_E_D154_lambda30, self)}));
    self->vars[16] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_G_E_D155_lambda32, self)}));
    self->vars[17] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dnumber_Q_D156_lambda34, self)}));
    self->vars[18] = VEncodeBool(false);
    self->vars[19] = _V40_V10vcore_Dint_Q;
    self->vars[20] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpositive_Q_D159_lambda35, self)}));
    self->vars[21] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dzero_Q_D160_lambda36, self)}));
    self->vars[22] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dnegative_Q_D161_lambda37, self)}));
    self->vars[23] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dabs_D162_lambda38, self)}));
    self->vars[24] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30ceil_shim, NULL)})));
    self->vars[25] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30floor_shim, NULL)})));
    self->vars[26] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30round_shim, NULL)})));
    self->vars[27] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsquare_D166_lambda39, self)}));
    self->vars[28] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30sqrt_shim, NULL)})));
    self->vars[29] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30sin_shim, NULL)})));
    self->vars[30] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30cos_shim, NULL)})));
    self->vars[31] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30tan_shim, NULL)})));
    self->vars[32] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30asin_shim, NULL)})));
    self->vars[33] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30acos_shim, NULL)})));
    self->vars[34] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30atan_shim, NULL)})));
    self->vars[35] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30atan2_shim, NULL)})));
    self->vars[36] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Datan_D175_lambda40, self)}));
    self->vars[37] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30exp_shim, NULL)})));
    self->vars[38] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30log_shim, NULL)})));
    self->vars[39] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlog_D178_lambda41, self)}));
    self->vars[40] = (VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)_V30pow_shim, NULL)})));
    self->vars[41] = VEncodeBool(false);
    self->vars[42] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmax_D181_lambda42, self)}));
    self->vars[43] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmin_D182_lambda44, self)}));
    self->vars[44] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaar_D183_lambda46, self)}));
    self->vars[45] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcadr_D184_lambda47, self)}));
    self->vars[46] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdar_D185_lambda48, self)}));
    self->vars[47] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcddr_D186_lambda49, self)}));
    self->vars[48] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaaar_D187_lambda50, self)}));
    self->vars[49] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaadr_D188_lambda51, self)}));
    self->vars[50] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcadar_D189_lambda52, self)}));
    self->vars[51] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaddr_D190_lambda53, self)}));
    self->vars[52] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdaar_D191_lambda54, self)}));
    self->vars[53] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdadr_D192_lambda55, self)}));
    self->vars[54] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcddar_D193_lambda56, self)}));
    self->vars[55] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdddr_D194_lambda57, self)}));
    self->vars[56] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaaaar_D195_lambda58, self)}));
    self->vars[57] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaaadr_D196_lambda59, self)}));
    self->vars[58] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaadar_D197_lambda60, self)}));
    self->vars[59] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaaddr_D198_lambda61, self)}));
    self->vars[60] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcadaar_D199_lambda62, self)}));
    self->vars[61] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcadadr_D200_lambda63, self)}));
    self->vars[62] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaddar_D201_lambda64, self)}));
    self->vars[63] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcadddr_D202_lambda65, self)}));
    self->vars[64] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdaaar_D203_lambda66, self)}));
    self->vars[65] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdaadr_D204_lambda67, self)}));
    self->vars[66] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdadar_D205_lambda68, self)}));
    self->vars[67] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdaddr_D206_lambda69, self)}));
    self->vars[68] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcddaar_D207_lambda70, self)}));
    self->vars[69] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcddadr_D208_lambda71, self)}));
    self->vars[70] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdddar_D209_lambda72, self)}));
    self->vars[71] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcddddr_D210_lambda73, self)}));
    self->vars[72] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist_D211_lambda74, self)}));
    self->vars[73] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist_Q_D212_lambda75, self)}));
    self->vars[74] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlength_D213_lambda76, self)}));
    self->vars[75] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__tail_D214_lambda78, self)}));
    self->vars[76] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__ref_D215_lambda79, self)}));
    self->vars[77] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__set_B_D216_lambda80, self)}));
    self->vars[78] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__copy_D217_lambda81, self)}));
    self->vars[79] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__list_D218_lambda82, self)}));
    self->vars[80] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmap_D219_lambda84, self)}));
    self->vars[81] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfor__each_D220_lambda89, self)}));
    self->vars[82] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold__right_D221_lambda94, self)}));
    self->vars[83] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dappend_D222_lambda96, self)}));
    self->vars[84] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreverse_D223_lambda98, self)}));
    self->vars[85] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemq_D224_lambda100, self)}));
    self->vars[86] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemv_D225_lambda101, self)}));
    self->vars[87] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmember_D226_lambda102, self)}));
    self->vars[88] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq_D227_lambda103, self)}));
    self->vars[89] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv_D228_lambda104, self)}));
    self->vars[90] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc_D229_lambda105, self)}));
    self->vars[91] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dnum__pairs_D230_lambda106, self)}));
    self->vars[92] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at__right_D231_lambda108, self)}));
    self->vars[93] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist___Gstring_D232_lambda112, self)}));
    self->vars[94] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring___Glist_D233_lambda114, self)}));
    self->vars[95] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D234_lambda116, self)}));
    self->vars[96] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector_D235_lambda117, self)}));
    self->vars[97] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__f32vector_D236_lambda118, self)}));
    self->vars[98] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Df32vector_D237_lambda119, self)}));
    self->vars[99] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Df32vector___Glist_D238_lambda120, self)}));
    self->vars[100] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__f64vector_D239_lambda122, self)}));
    self->vars[101] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Df64vector_D240_lambda123, self)}));
    self->vars[102] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Df64vector___Glist_D241_lambda124, self)}));
    self->vars[103] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__s32vector_D242_lambda126, self)}));
    self->vars[104] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds32vector_D243_lambda127, self)}));
    self->vars[105] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds32vector___Glist_D244_lambda128, self)}));
    self->vars[106] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__u16vector_D245_lambda130, self)}));
    self->vars[107] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Du16vector_D246_lambda131, self)}));
    self->vars[108] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Du16vector___Glist_D247_lambda132, self)}));
    self->vars[109] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__s16vector_D248_lambda134, self)}));
    self->vars[110] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds16vector_D249_lambda135, self)}));
    self->vars[111] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds16vector___Glist_D250_lambda136, self)}));
    self->vars[112] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__u8vector_D251_lambda138, self)}));
    self->vars[113] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Du8vector_D252_lambda139, self)}));
    self->vars[114] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Du8vector___Glist_D253_lambda140, self)}));
    self->vars[115] = VEncodeBool(false);
    self->vars[116] = VEncodeBool(false);
    self->vars[117] = VEncodeBool(false);
    self->vars[118] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__u8vector_D257_lambda142, self)}));
    self->vars[119] = VEncodeBool(false);
    self->vars[120] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__s8vector_D259_lambda143, self)}));
    self->vars[121] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds8vector_D260_lambda144, self)}));
    self->vars[122] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ds8vector___Glist_D261_lambda145, self)}));
    self->vars[123] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtypevector_Q_D262_lambda147, self)}));
    self->vars[124] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector___Glist_D263_lambda148, self)}));
    self->vars[125] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__vector_D264_lambda150, self)}));
    self->vars[126] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__for__each_D265_lambda151, self)}));
    self->vars[127] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__map_D266_lambda157, self)}));
    self->vars[128] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__copy_D267_lambda163, self)}));
    self->vars[129] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__copy_B_D268_lambda164, self)}));
    self->vars[130] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__append_D269_lambda166, self)}));
    self->vars[131] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__fill_B_D270_lambda169, self)}));
    self->vars[132] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__hash__table_D271_lambda171, self)}));
    self->vars[133] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dhash__table__ref_D272_lambda172, self)}));
    self->vars[134] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dhash__table__set_B_D273_lambda174, self)}));
    self->vars[135] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dhash__table___Galist_D274_lambda175, self)}));
    self->vars[136] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dnumber___Gstring_D275_lambda177, self)}));
    self->vars[137] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dchar__numeric_Q_D276_lambda178, self)}));
    self->vars[138] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dchar__alphabetic_Q_D277_lambda179, self)}));
    self->vars[139] = VEncodeBool(false);
    self->vars[140] = VEncodeBool(false);
    self->vars[141] = VEncodeBool(false);
    self->vars[142] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtry__or__gc_D281_lambda180, self)}));
    self->vars[143] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dclose__port_D282_lambda183, self)}));
    self->vars[144] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__input__file__impl_D283_lambda184, self)}));
    self->vars[145] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__file__impl_D284_lambda187, self)}));
    self->vars[146] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__string__impl_D285_lambda190, self)}));
    self->vars[147] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__input__file_D286_lambda193, self)}));
    self->vars[148] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__file_D287_lambda195, self)}));
    self->vars[149] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__string_D288_lambda197, self)}));
    self->vars[150] = _V40_V10vcore_Dget__output__string;
    self->vars[151] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcall__with__port_D290_lambda198, self)}));
    self->vars[152] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcall__with__input__file_D291_lambda199, self)}));
    self->vars[153] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcall__with__output__file_D292_lambda200, self)}));
    self->vars[154] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__output__to__file_D293_lambda201, self)}));
    self->vars[155] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__input__from__file_D294_lambda203, self)}));
    self->vars[156] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__char_D295_lambda205, self)}));
    self->vars[157] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D296_lambda206, self)}));
    self->vars[158] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread_D297_lambda209, self)}));
    self->vars[159] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dnewline_D298_lambda210, self)}));
    self->vars[160] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__list_D299_lambda211, self)}));
    self->vars[161] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__quotation_D300_lambda213, self)}));
    self->vars[162] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D301_lambda214, self)}));
    self->vars[163] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddisplay_D302_lambda216, self)}));
    self->vars[164] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwrite_D303_lambda217, self)}));
    self->vars[165] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalues_D304_lambda218, self)}));
    self->vars[166] = statics->vars[0];
    self->vars[167] = statics->up->vars[0];
    self->vars[168] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D307_lambda220, self)}));
    self->vars[169] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfile__exists_Q_D308_lambda223, self)}));
    self->vars[170] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__and_D309_lambda224, self)}));
    self->vars[171] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__ior_D310_lambda226, self)}));
    self->vars[172] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__xor_D311_lambda228, self)}));
    self->vars[173] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbitwise__xnor_D312_lambda230, self)}));
    self->vars[174] = VEncodeBool(false);
    self->vars[175] = VEncodeBool(false);
    self->vars[176] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Datom_Q_D315_lambda232, self)}));
    self->vars[177] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddisplayln_D316_lambda233, self)}));
    self->vars[178] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwriteln_D317_lambda234, self)}));
    self->vars[179] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__printf_D318_lambda235, self)}));
    self->vars[180] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__sprintf_D319_lambda237, self)}));
    self->vars[181] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintf_D320_lambda238, self)}));
    self->vars[182] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsprintf_D321_lambda239, self)}));
    self->vars[183] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat_D322_lambda240, self)}));
    self->vars[184] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Draise__continuable_D323_lambda241, self)}));
    self->vars[185] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__exception__handler_D324_lambda242, self)}));
    self->vars[186] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Derror_D325_lambda244, self)}));
    self->vars[187] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__fork_D326_lambda245, self)}));
    self->vars[188] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D327_lambda246, self)}));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k329, self)})),
      VEncodeInt(0l), VEncodeInt(18l),
      self->vars[17]
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
  // ((bruijn ##..vcore.import.11 1 0) (close _V0vanity_V0core_V20_k4) '##vcore.setter)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k4, self)})),
      _V10vcore_Dsetter);
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
  // ((bruijn ##..vcore.import.11 0 0) (close _V0vanity_V0core_V20_k3) '##vcore.mutator)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k3, self)})),
      _V10vcore_Dmutator);
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
  // (##vcore.make-import (close _V0vanity_V0core_V20_k2) (##string ##.string.3096) (bruijn ##.x.2793 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D3096.sym, VPOINTER_OTHER),
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
  // (##vcore.load-library (close _V0vanity_V0core_V20_k1) (##string ##.string.3097))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D3097.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0core_V20 = (VFunc)_V0vanity_V0core_V20_lambda1;
