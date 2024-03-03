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
static struct { VBlob sym; char bytes[21]; } _V10string_D1141 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0seed_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1140 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V40_V10sys_Dnull_Q;VWEAK VClosure _VW_V40_V10sys_Dnull_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNullP2, NULL };
VWEAK VWORD _V40_V10sys_Deof__object_Q;VWEAK VClosure _VW_V40_V10sys_Deof__object_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEofP2, NULL };
VWEAK VWORD _V40_V10sys_Dpair_Q;VWEAK VClosure _VW_V40_V10sys_Dpair_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPairP2, NULL };
VWEAK VWORD _V40_V10sys_Dvector_Q;VWEAK VClosure _VW_V40_V10sys_Dvector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorP2, NULL };
VWEAK VWORD _V40_V10sys_Dprocedure_Q;VWEAK VClosure _VW_V40_V10sys_Dprocedure_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VProcedureP2, NULL };
VWEAK VWORD _V40_V10sys_Dsymbol_Q;VWEAK VClosure _VW_V40_V10sys_Dsymbol_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolP2, NULL };
VWEAK VWORD _V40_V10sys_Dstring_Q;VWEAK VClosure _VW_V40_V10sys_Dstring_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringP2, NULL };
VWEAK VWORD _V40_V10sys_Dchar_Q;VWEAK VClosure _VW_V40_V10sys_Dchar_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCharP2, NULL };
VWEAK VWORD _V40_V10sys_Dint_Q;VWEAK VClosure _VW_V40_V10sys_Dint_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VIntP2, NULL };
VWEAK VWORD _V40_V10sys_Ddouble_Q;VWEAK VClosure _VW_V40_V10sys_Ddouble_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDoubleP2, NULL };
VWEAK VWORD _V40_V10sys_Dsymbol_E_Q;VWEAK VClosure _VW_V40_V10sys_Dsymbol_E_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolEqv2, NULL };
VWEAK VWORD _V40_V10sys_Deqv_Q;VWEAK VClosure _VW_V40_V10sys_Deqv_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEqv, NULL };
VWEAK VWORD _V40_V10sys_Dnot;VWEAK VClosure _VW_V40_V10sys_Dnot = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNot2, NULL };
VWEAK VWORD _V40_V10sys_D_P;VWEAK VClosure _VW_V40_V10sys_D_P = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAdd2, NULL };
VWEAK VWORD _V40_V10sys_D__;VWEAK VClosure _VW_V40_V10sys_D__ = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSub2, NULL };
VWEAK VWORD _V40_V10sys_D_S;VWEAK VClosure _VW_V40_V10sys_D_S = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMul2, NULL };
VWEAK VWORD _V40_V10sys_D_W;VWEAK VClosure _VW_V40_V10sys_D_W = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDiv2, NULL };
VWEAK VWORD _V40_V10sys_Dquotient;VWEAK VClosure _VW_V40_V10sys_Dquotient = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VQuot2, NULL };
VWEAK VWORD _V40_V10sys_Dremainder;VWEAK VClosure _VW_V40_V10sys_Dremainder = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRem2, NULL };
VWEAK VWORD _V40_V10sys_Dcons;VWEAK VClosure _VW_V40_V10sys_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V40_V10sys_Dset__car_B;VWEAK VClosure _VW_V40_V10sys_Dset__car_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCar2, NULL };
VWEAK VWORD _V40_V10sys_Dset__cdr_B;VWEAK VClosure _VW_V40_V10sys_Dset__cdr_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCdr2, NULL };
VWEAK VWORD _V40_V10sys_Dcar;VWEAK VClosure _VW_V40_V10sys_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
VWEAK VWORD _V40_V10sys_Dcdr;VWEAK VClosure _VW_V40_V10sys_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
VWEAK VWORD _V40_V10sys_Dmake__string;VWEAK VClosure _VW_V40_V10sys_Dmake__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeString2, NULL };
VWEAK VWORD _V40_V10sys_Dsubstring;VWEAK VClosure _VW_V40_V10sys_Dsubstring = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSubstring2, NULL };
VWEAK VWORD _V40_V10sys_Dstring__copy_B;VWEAK VClosure _VW_V40_V10sys_Dstring__copy_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringCopy2, NULL };
VWEAK VWORD _V40_V10sys_Dstring__ref;VWEAK VClosure _VW_V40_V10sys_Dstring__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringRef2, NULL };
VWEAK VWORD _V40_V10sys_Dstring__set_B;VWEAK VClosure _VW_V40_V10sys_Dstring__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringSet2, NULL };
VWEAK VWORD _V40_V10sys_Dstring__length;VWEAK VClosure _VW_V40_V10sys_Dstring__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringLength2, NULL };
VWEAK VWORD _V40_V10sys_Dstring___Gsymbol;VWEAK VClosure _VW_V40_V10sys_Dstring___Gsymbol = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringSymbol2, NULL };
VWEAK VWORD _V40_V10sys_Dstring___Gnumber;VWEAK VClosure _VW_V40_V10sys_Dstring___Gnumber = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringNumber2, NULL };
VWEAK VWORD _V40_V10sys_Dsymbol___Gstring;VWEAK VClosure _VW_V40_V10sys_Dsymbol___Gstring = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolString2, NULL };
static struct { VBlob sym; char bytes[1]; } _V10string_D1139 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
VWEAK VWORD _V40_V10sys_Dlist___Gvector;VWEAK VClosure _VW_V40_V10sys_Dlist___Gvector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListVector2, NULL };
VWEAK VWORD _V40_V10sys_Dvector__ref;VWEAK VClosure _VW_V40_V10sys_Dvector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorRef2, NULL };
VWEAK VWORD _V40_V10sys_Dvector__set_B;VWEAK VClosure _VW_V40_V10sys_Dvector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorSet2, NULL };
VWEAK VWORD _V40_V10sys_Dvector__length;VWEAK VClosure _VW_V40_V10sys_Dvector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorLength2, NULL };
VWEAK VWORD _V40_V10sys_Deq_Q;VWEAK VClosure _VW_V40_V10sys_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V40_V10vcore_Dhash__table__equivalence__function;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__equivalence__function = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableEqvFunc, NULL };
VWEAK VWORD _V40_V10vcore_Dhash__table__hash__function;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__hash__function = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableHashFunc, NULL };
static struct { VBlob sym; char bytes[26]; } _V10string_D1138 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "No such key in hash table" };
VWEAK VWORD _V40_V10vcore_Dhash__table__set_B;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableSet, NULL };
VWEAK VWORD _V40_V10vcore_Dhash__table__delete_B;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__delete_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableDelete, NULL };
VWEAK VWORD _V40_V10sys_Dchar__integer;VWEAK VClosure _VW_V40_V10sys_Dchar__integer = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCharInt2, NULL };
VWEAK VWORD _V40_V10sys_Dclose__stream;VWEAK VClosure _VW_V40_V10sys_Dclose__stream = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCloseStream2, NULL };
VWEAK VWORD _V40_V10sys_Dopen__output__string;VWEAK VClosure _VW_V40_V10sys_Dopen__output__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputString2, NULL };
static struct { VBlob sym; char bytes[24]; } _V10string_D1137 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "open-input-file: failed" };
static struct { VBlob sym; char bytes[25]; } _V10string_D1136 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "open-output-file: failed" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1135 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "open-output-string: failed" };
VWEAK VWORD _V40_V10sys_Dget__output__string;VWEAK VClosure _VW_V40_V10sys_Dget__output__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetOutputString2, NULL };
static struct { VBlob sym; char bytes[2]; } _V10string_D1134 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "(" };
static struct { VBlob sym; char bytes[4]; } _V10string_D1133 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " . " };
VWEAK VWORD _V0ok;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0ok = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "ok" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1132 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ",@" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1131 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "," };
static struct { VBlob sym; char bytes[2]; } _V10string_D1130 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "`" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1129 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "'" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1128 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "#(" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1127 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
VWEAK VWORD _V0unquote__splicing;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0unquote__splicing = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "unquote-splicing" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
VWEAK VWORD _V0quasiquote;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quasiquote" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V40_V10sys_Dcall_Wcc;VWEAK VClosure _VW_V40_V10sys_Dcall_Wcc = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCallCC2, NULL };
VWEAK VWORD _V40_V10sys_Dcall__with__values;VWEAK VClosure _VW_V40_V10sys_Dcall__with__values = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCallValues2, NULL };
VWEAK VWORD _V40_V10sys_Dapply;VWEAK VClosure _VW_V40_V10sys_Dapply = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VApply2, NULL };
VWEAK VWORD _V40_V10sys_Dcommand__line;VWEAK VClosure _VW_V40_V10sys_Dcommand__line = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCommandLine2, NULL };
VWEAK VWORD _V40_V10sys_Dsystem;VWEAK VClosure _VW_V40_V10sys_Dsystem = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSystem2, NULL };
VWEAK VWORD _V40_V10sys_Dopen__input__process;VWEAK VClosure _VW_V40_V10sys_Dopen__input__process = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenInputProcess2, NULL };
VWEAK VWORD _V40_V10sys_Dopen__output__process;VWEAK VClosure _VW_V40_V10sys_Dopen__output__process = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputProcess2, NULL };
VWEAK VWORD _V40_V10sys_Dmake__temporary__file;VWEAK VClosure _VW_V40_V10sys_Dmake__temporary__file = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeTemporaryFile2, NULL };
VWEAK VWORD _V40_V10sys_Dexit;VWEAK VClosure _VW_V40_V10sys_Dexit = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VExit2, NULL };
static struct { VBlob sym; char bytes[23]; } _V10string_D1126 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "printf: unknown format" };
static struct { VBlob sym; char bytes[42]; } _V10string_D1125 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "printf: not enough args for format string" };
static struct { VBlob sym; char bytes[41]; } _V10string_D1124 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "printf: format string has trailing tilde" };
static struct { VBlob sym; char bytes[8]; } _V10string_D1123 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "error: " };
static struct { VBlob sym; char bytes[2]; } _V10string_D1122 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ":" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1121 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
VWEAK VWORD _V40_V10vcore_Dfiber__fork__list;VWEAK VClosure _VW_V40_V10vcore_Dfiber__fork__list = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VFiberForkList, NULL };
VWEAK VWORD _V40_V10vcore_Dasync;VWEAK VClosure _VW_V40_V10vcore_Dasync = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAsync, NULL };
VWEAK VWORD _V40_V10vcore_Dawait;VWEAK VClosure _VW_V40_V10vcore_Dawait = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAwait, NULL };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0printf;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0printf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "printf" };
VWEAK VWORD _V0format;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0format = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "format" };
VWEAK VWORD _V0writeln;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0writeln = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "writeln" };
VWEAK VWORD _V0displayln;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0displayln = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "displayln" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0await;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0await = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "await" };
VWEAK VWORD _V0async;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0async = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "async" };
VWEAK VWORD _V0fiber__map;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0fiber__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "fiber-map" };
VWEAK VWORD _V0fiber__fork__list;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0fiber__fork__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "fiber-fork-list" };
VWEAK VWORD _V0fiber__fork;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0fiber__fork = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "fiber-fork" };
VWEAK VWORD _V0exit;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0exit = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "exit" };
VWEAK VWORD _V0make__temporary__file;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0make__temporary__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "make-temporary-file" };
VWEAK VWORD _V0open__output__process;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0open__output__process = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "open-output-process" };
VWEAK VWORD _V0open__input__process;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__input__process = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-input-process" };
VWEAK VWORD _V0system;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0system = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "system" };
VWEAK VWORD _V0command__line;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0command__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "command-line" };
VWEAK VWORD _V10vcore_Dmutator;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dmutator = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.mutator" };
VWEAK VWORD _V10vcore_Dsetter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dsetter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.setter" };
VWEAK VWORD _V0mutator;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0mutator = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "mutator" };
VWEAK VWORD _V0setter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0setter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "setter" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0apply;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0apply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "apply" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
VWEAK VWORD _V0call__with__current__continuation;VWEAK struct { VBlob sym; char bytes[31]; } _VW_V0call__with__current__continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 31 }, "call-with-current-continuation" };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V0write;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0write = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "write" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0newline;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0newline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "newline" };
VWEAK VWORD _V0read;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0read = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "read" };
VWEAK VWORD _V0read__line;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0read__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "read-line" };
VWEAK VWORD _V0read__char;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0read__char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "read-char" };
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
VWEAK VWORD _V0char___Ginteger;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0char___Ginteger = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "char->integer" };
VWEAK VWORD _V0hash__table__delete_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0hash__table__delete_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "hash-table-delete!" };
VWEAK VWORD _V0hash__table__set_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-set!" };
VWEAK VWORD _V0hash__table__ref;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0hash__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "hash-table-ref" };
VWEAK VWORD _V0make__hash__table;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0make__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "make-hash-table" };
VWEAK VWORD _V0vector__for__each;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0vector__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "vector-for-each" };
VWEAK VWORD _V0vector__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "vector-length" };
VWEAK VWORD _V0vector__set_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "vector-set!" };
VWEAK VWORD _V0vector__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "vector-ref" };
VWEAK VWORD _V0vector;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vector" };
VWEAK VWORD _V0list___Gvector;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0list___Gvector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "list->vector" };
VWEAK VWORD _V0symbol___Gstring;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0symbol___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "symbol->string" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0string___Gnumber;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0string___Gnumber = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "string->number" };
VWEAK VWORD _V0string___Gsymbol;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0string___Gsymbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "string->symbol" };
VWEAK VWORD _V0string__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-length" };
VWEAK VWORD _V0string__set_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0string__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "string-set!" };
VWEAK VWORD _V0string__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0string__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "string-ref" };
VWEAK VWORD _V0string__copy_B;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0string__copy_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "string-copy!" };
VWEAK VWORD _V0string__copy;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0string__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "string-copy" };
VWEAK VWORD _V0substring;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0substring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "substring" };
VWEAK VWORD _V0make__string;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "make-string" };
VWEAK VWORD _V0list___Gstring;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0list___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "list->string" };
VWEAK VWORD _V0string___Glist;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0string___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "string->list" };
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
VWEAK VWORD _V0list__ref;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0list__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "list-ref" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
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
VWEAK VWORD _V0set__cdr_B;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0set__cdr_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "set-cdr!" };
VWEAK VWORD _V0set__car_B;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0set__car_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "set-car!" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0min;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0min = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "min" };
VWEAK VWORD _V0max;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0max = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "max" };
VWEAK VWORD _V0remainder;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0remainder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "remainder" };
VWEAK VWORD _V0quotient;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0quotient = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "quotient" };
VWEAK VWORD _V0_W;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_W = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "/" };
VWEAK VWORD _V0_S;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "*" };
VWEAK VWORD _V0__;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "-" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0complex_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0complex_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "complex\?" };
VWEAK VWORD _V0number_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0number_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "number\?" };
VWEAK VWORD _V0exact___Ginexact;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0exact___Ginexact = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "exact->inexact" };
VWEAK VWORD _V0inexact;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0inexact = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "inexact" };
VWEAK VWORD _V0_G_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_G_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, ">=" };
VWEAK VWORD _V0_L_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "<=" };
VWEAK VWORD _V0_G;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, ">" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
VWEAK VWORD _V0_L;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_L = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "<" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0symbol_E_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0symbol_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "symbol=\?" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V0char_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0char_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "char\?" };
VWEAK VWORD _V0integer_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0integer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "integer\?" };
VWEAK VWORD _V0real_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0real_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "real\?" };
VWEAK VWORD _V0inexact_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0inexact_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "inexact\?" };
VWEAK VWORD _V0exact_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0exact_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "exact\?" };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "string\?" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0procedure_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0procedure_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "procedure\?" };
VWEAK VWORD _V0vector_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "vector\?" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0boolean_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0boolean_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "boolean\?" };
VWEAK VWORD _V0eof__object_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0eof__object_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "eof-object\?" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
static __attribute__((constructor)) void VDllMain1() {
  _V40_V10sys_Dnull_Q = VEncodePointer(VLookupConstant("_V40_V10sys_Dnull_Q", &_VW_V40_V10sys_Dnull_Q), VPOINTER_CLOSURE);
  _V40_V10sys_Deof__object_Q = VEncodePointer(VLookupConstant("_V40_V10sys_Deof__object_Q", &_VW_V40_V10sys_Deof__object_Q), VPOINTER_CLOSURE);
  _V40_V10sys_Dpair_Q = VEncodePointer(VLookupConstant("_V40_V10sys_Dpair_Q", &_VW_V40_V10sys_Dpair_Q), VPOINTER_CLOSURE);
  _V40_V10sys_Dvector_Q = VEncodePointer(VLookupConstant("_V40_V10sys_Dvector_Q", &_VW_V40_V10sys_Dvector_Q), VPOINTER_CLOSURE);
  _V40_V10sys_Dprocedure_Q = VEncodePointer(VLookupConstant("_V40_V10sys_Dprocedure_Q", &_VW_V40_V10sys_Dprocedure_Q), VPOINTER_CLOSURE);
  _V40_V10sys_Dsymbol_Q = VEncodePointer(VLookupConstant("_V40_V10sys_Dsymbol_Q", &_VW_V40_V10sys_Dsymbol_Q), VPOINTER_CLOSURE);
  _V40_V10sys_Dstring_Q = VEncodePointer(VLookupConstant("_V40_V10sys_Dstring_Q", &_VW_V40_V10sys_Dstring_Q), VPOINTER_CLOSURE);
  _V40_V10sys_Dchar_Q = VEncodePointer(VLookupConstant("_V40_V10sys_Dchar_Q", &_VW_V40_V10sys_Dchar_Q), VPOINTER_CLOSURE);
  _V40_V10sys_Dint_Q = VEncodePointer(VLookupConstant("_V40_V10sys_Dint_Q", &_VW_V40_V10sys_Dint_Q), VPOINTER_CLOSURE);
  _V40_V10sys_Ddouble_Q = VEncodePointer(VLookupConstant("_V40_V10sys_Ddouble_Q", &_VW_V40_V10sys_Ddouble_Q), VPOINTER_CLOSURE);
  _V40_V10sys_Dsymbol_E_Q = VEncodePointer(VLookupConstant("_V40_V10sys_Dsymbol_E_Q", &_VW_V40_V10sys_Dsymbol_E_Q), VPOINTER_CLOSURE);
  _V40_V10sys_Deqv_Q = VEncodePointer(VLookupConstant("_V40_V10sys_Deqv_Q", &_VW_V40_V10sys_Deqv_Q), VPOINTER_CLOSURE);
  _V40_V10sys_Dnot = VEncodePointer(VLookupConstant("_V40_V10sys_Dnot", &_VW_V40_V10sys_Dnot), VPOINTER_CLOSURE);
  _V40_V10sys_D_P = VEncodePointer(VLookupConstant("_V40_V10sys_D_P", &_VW_V40_V10sys_D_P), VPOINTER_CLOSURE);
  _V40_V10sys_D__ = VEncodePointer(VLookupConstant("_V40_V10sys_D__", &_VW_V40_V10sys_D__), VPOINTER_CLOSURE);
  _V40_V10sys_D_S = VEncodePointer(VLookupConstant("_V40_V10sys_D_S", &_VW_V40_V10sys_D_S), VPOINTER_CLOSURE);
  _V40_V10sys_D_W = VEncodePointer(VLookupConstant("_V40_V10sys_D_W", &_VW_V40_V10sys_D_W), VPOINTER_CLOSURE);
  _V40_V10sys_Dquotient = VEncodePointer(VLookupConstant("_V40_V10sys_Dquotient", &_VW_V40_V10sys_Dquotient), VPOINTER_CLOSURE);
  _V40_V10sys_Dremainder = VEncodePointer(VLookupConstant("_V40_V10sys_Dremainder", &_VW_V40_V10sys_Dremainder), VPOINTER_CLOSURE);
  _V40_V10sys_Dcons = VEncodePointer(VLookupConstant("_V40_V10sys_Dcons", &_VW_V40_V10sys_Dcons), VPOINTER_CLOSURE);
  _V40_V10sys_Dset__car_B = VEncodePointer(VLookupConstant("_V40_V10sys_Dset__car_B", &_VW_V40_V10sys_Dset__car_B), VPOINTER_CLOSURE);
  _V40_V10sys_Dset__cdr_B = VEncodePointer(VLookupConstant("_V40_V10sys_Dset__cdr_B", &_VW_V40_V10sys_Dset__cdr_B), VPOINTER_CLOSURE);
  _V40_V10sys_Dcar = VEncodePointer(VLookupConstant("_V40_V10sys_Dcar", &_VW_V40_V10sys_Dcar), VPOINTER_CLOSURE);
  _V40_V10sys_Dcdr = VEncodePointer(VLookupConstant("_V40_V10sys_Dcdr", &_VW_V40_V10sys_Dcdr), VPOINTER_CLOSURE);
  _V40_V10sys_Dmake__string = VEncodePointer(VLookupConstant("_V40_V10sys_Dmake__string", &_VW_V40_V10sys_Dmake__string), VPOINTER_CLOSURE);
  _V40_V10sys_Dsubstring = VEncodePointer(VLookupConstant("_V40_V10sys_Dsubstring", &_VW_V40_V10sys_Dsubstring), VPOINTER_CLOSURE);
  _V40_V10sys_Dstring__copy_B = VEncodePointer(VLookupConstant("_V40_V10sys_Dstring__copy_B", &_VW_V40_V10sys_Dstring__copy_B), VPOINTER_CLOSURE);
  _V40_V10sys_Dstring__ref = VEncodePointer(VLookupConstant("_V40_V10sys_Dstring__ref", &_VW_V40_V10sys_Dstring__ref), VPOINTER_CLOSURE);
  _V40_V10sys_Dstring__set_B = VEncodePointer(VLookupConstant("_V40_V10sys_Dstring__set_B", &_VW_V40_V10sys_Dstring__set_B), VPOINTER_CLOSURE);
  _V40_V10sys_Dstring__length = VEncodePointer(VLookupConstant("_V40_V10sys_Dstring__length", &_VW_V40_V10sys_Dstring__length), VPOINTER_CLOSURE);
  _V40_V10sys_Dstring___Gsymbol = VEncodePointer(VLookupConstant("_V40_V10sys_Dstring___Gsymbol", &_VW_V40_V10sys_Dstring___Gsymbol), VPOINTER_CLOSURE);
  _V40_V10sys_Dstring___Gnumber = VEncodePointer(VLookupConstant("_V40_V10sys_Dstring___Gnumber", &_VW_V40_V10sys_Dstring___Gnumber), VPOINTER_CLOSURE);
  _V40_V10sys_Dsymbol___Gstring = VEncodePointer(VLookupConstant("_V40_V10sys_Dsymbol___Gstring", &_VW_V40_V10sys_Dsymbol___Gstring), VPOINTER_CLOSURE);
  _V40_V10sys_Dlist___Gvector = VEncodePointer(VLookupConstant("_V40_V10sys_Dlist___Gvector", &_VW_V40_V10sys_Dlist___Gvector), VPOINTER_CLOSURE);
  _V40_V10sys_Dvector__ref = VEncodePointer(VLookupConstant("_V40_V10sys_Dvector__ref", &_VW_V40_V10sys_Dvector__ref), VPOINTER_CLOSURE);
  _V40_V10sys_Dvector__set_B = VEncodePointer(VLookupConstant("_V40_V10sys_Dvector__set_B", &_VW_V40_V10sys_Dvector__set_B), VPOINTER_CLOSURE);
  _V40_V10sys_Dvector__length = VEncodePointer(VLookupConstant("_V40_V10sys_Dvector__length", &_VW_V40_V10sys_Dvector__length), VPOINTER_CLOSURE);
  _V40_V10sys_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10sys_Deq_Q", &_VW_V40_V10sys_Deq_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__equivalence__function = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__equivalence__function", &_VW_V40_V10vcore_Dhash__table__equivalence__function), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__hash__function = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__hash__function", &_VW_V40_V10vcore_Dhash__table__hash__function), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__set_B", &_VW_V40_V10vcore_Dhash__table__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__delete_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__delete_B", &_VW_V40_V10vcore_Dhash__table__delete_B), VPOINTER_CLOSURE);
  _V40_V10sys_Dchar__integer = VEncodePointer(VLookupConstant("_V40_V10sys_Dchar__integer", &_VW_V40_V10sys_Dchar__integer), VPOINTER_CLOSURE);
  _V40_V10sys_Dclose__stream = VEncodePointer(VLookupConstant("_V40_V10sys_Dclose__stream", &_VW_V40_V10sys_Dclose__stream), VPOINTER_CLOSURE);
  _V40_V10sys_Dopen__output__string = VEncodePointer(VLookupConstant("_V40_V10sys_Dopen__output__string", &_VW_V40_V10sys_Dopen__output__string), VPOINTER_CLOSURE);
  _V40_V10sys_Dget__output__string = VEncodePointer(VLookupConstant("_V40_V10sys_Dget__output__string", &_VW_V40_V10sys_Dget__output__string), VPOINTER_CLOSURE);
  _V0ok = VEncodePointer(VLookupConstant("_V0ok", &_VW_V0ok), VPOINTER_OTHER);
  _V0unquote__splicing = VEncodePointer(VLookupConstant("_V0unquote__splicing", &_VW_V0unquote__splicing), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VLookupConstant("_V0unquote", &_VW_V0unquote), VPOINTER_OTHER);
  _V0quasiquote = VEncodePointer(VLookupConstant("_V0quasiquote", &_VW_V0quasiquote), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
  _V40_V10sys_Dcall_Wcc = VEncodePointer(VLookupConstant("_V40_V10sys_Dcall_Wcc", &_VW_V40_V10sys_Dcall_Wcc), VPOINTER_CLOSURE);
  _V40_V10sys_Dcall__with__values = VEncodePointer(VLookupConstant("_V40_V10sys_Dcall__with__values", &_VW_V40_V10sys_Dcall__with__values), VPOINTER_CLOSURE);
  _V40_V10sys_Dapply = VEncodePointer(VLookupConstant("_V40_V10sys_Dapply", &_VW_V40_V10sys_Dapply), VPOINTER_CLOSURE);
  _V40_V10sys_Dcommand__line = VEncodePointer(VLookupConstant("_V40_V10sys_Dcommand__line", &_VW_V40_V10sys_Dcommand__line), VPOINTER_CLOSURE);
  _V40_V10sys_Dsystem = VEncodePointer(VLookupConstant("_V40_V10sys_Dsystem", &_VW_V40_V10sys_Dsystem), VPOINTER_CLOSURE);
  _V40_V10sys_Dopen__input__process = VEncodePointer(VLookupConstant("_V40_V10sys_Dopen__input__process", &_VW_V40_V10sys_Dopen__input__process), VPOINTER_CLOSURE);
  _V40_V10sys_Dopen__output__process = VEncodePointer(VLookupConstant("_V40_V10sys_Dopen__output__process", &_VW_V40_V10sys_Dopen__output__process), VPOINTER_CLOSURE);
  _V40_V10sys_Dmake__temporary__file = VEncodePointer(VLookupConstant("_V40_V10sys_Dmake__temporary__file", &_VW_V40_V10sys_Dmake__temporary__file), VPOINTER_CLOSURE);
  _V40_V10sys_Dexit = VEncodePointer(VLookupConstant("_V40_V10sys_Dexit", &_VW_V40_V10sys_Dexit), VPOINTER_CLOSURE);
  _V40_V10vcore_Dfiber__fork__list = VEncodePointer(VLookupConstant("_V40_V10vcore_Dfiber__fork__list", &_VW_V40_V10vcore_Dfiber__fork__list), VPOINTER_CLOSURE);
  _V40_V10vcore_Dasync = VEncodePointer(VLookupConstant("_V40_V10vcore_Dasync", &_VW_V40_V10vcore_Dasync), VPOINTER_CLOSURE);
  _V40_V10vcore_Dawait = VEncodePointer(VLookupConstant("_V40_V10vcore_Dawait", &_VW_V40_V10vcore_Dawait), VPOINTER_CLOSURE);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VLookupConstant("_V0sprintf", &_VW_V0sprintf), VPOINTER_OTHER);
  _V0printf = VEncodePointer(VLookupConstant("_V0printf", &_VW_V0printf), VPOINTER_OTHER);
  _V0format = VEncodePointer(VLookupConstant("_V0format", &_VW_V0format), VPOINTER_OTHER);
  _V0writeln = VEncodePointer(VLookupConstant("_V0writeln", &_VW_V0writeln), VPOINTER_OTHER);
  _V0displayln = VEncodePointer(VLookupConstant("_V0displayln", &_VW_V0displayln), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VLookupConstant("_V0atom_Q", &_VW_V0atom_Q), VPOINTER_OTHER);
  _V0await = VEncodePointer(VLookupConstant("_V0await", &_VW_V0await), VPOINTER_OTHER);
  _V0async = VEncodePointer(VLookupConstant("_V0async", &_VW_V0async), VPOINTER_OTHER);
  _V0fiber__map = VEncodePointer(VLookupConstant("_V0fiber__map", &_VW_V0fiber__map), VPOINTER_OTHER);
  _V0fiber__fork__list = VEncodePointer(VLookupConstant("_V0fiber__fork__list", &_VW_V0fiber__fork__list), VPOINTER_OTHER);
  _V0fiber__fork = VEncodePointer(VLookupConstant("_V0fiber__fork", &_VW_V0fiber__fork), VPOINTER_OTHER);
  _V0exit = VEncodePointer(VLookupConstant("_V0exit", &_VW_V0exit), VPOINTER_OTHER);
  _V0make__temporary__file = VEncodePointer(VLookupConstant("_V0make__temporary__file", &_VW_V0make__temporary__file), VPOINTER_OTHER);
  _V0open__output__process = VEncodePointer(VLookupConstant("_V0open__output__process", &_VW_V0open__output__process), VPOINTER_OTHER);
  _V0open__input__process = VEncodePointer(VLookupConstant("_V0open__input__process", &_VW_V0open__input__process), VPOINTER_OTHER);
  _V0system = VEncodePointer(VLookupConstant("_V0system", &_VW_V0system), VPOINTER_OTHER);
  _V0command__line = VEncodePointer(VLookupConstant("_V0command__line", &_VW_V0command__line), VPOINTER_OTHER);
  _V10vcore_Dmutator = VEncodePointer(VLookupConstant("_V10vcore_Dmutator", &_VW_V10vcore_Dmutator), VPOINTER_OTHER);
  _V10vcore_Dsetter = VEncodePointer(VLookupConstant("_V10vcore_Dsetter", &_VW_V10vcore_Dsetter), VPOINTER_OTHER);
  _V0mutator = VEncodePointer(VLookupConstant("_V0mutator", &_VW_V0mutator), VPOINTER_OTHER);
  _V0setter = VEncodePointer(VLookupConstant("_V0setter", &_VW_V0setter), VPOINTER_OTHER);
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V0apply = VEncodePointer(VLookupConstant("_V0apply", &_VW_V0apply), VPOINTER_OTHER);
  _V0call__with__values = VEncodePointer(VLookupConstant("_V0call__with__values", &_VW_V0call__with__values), VPOINTER_OTHER);
  _V0call__with__current__continuation = VEncodePointer(VLookupConstant("_V0call__with__current__continuation", &_VW_V0call__with__current__continuation), VPOINTER_OTHER);
  _V0call_Wcc = VEncodePointer(VLookupConstant("_V0call_Wcc", &_VW_V0call_Wcc), VPOINTER_OTHER);
  _V0write = VEncodePointer(VLookupConstant("_V0write", &_VW_V0write), VPOINTER_OTHER);
  _V0display = VEncodePointer(VLookupConstant("_V0display", &_VW_V0display), VPOINTER_OTHER);
  _V0newline = VEncodePointer(VLookupConstant("_V0newline", &_VW_V0newline), VPOINTER_OTHER);
  _V0read = VEncodePointer(VLookupConstant("_V0read", &_VW_V0read), VPOINTER_OTHER);
  _V0read__line = VEncodePointer(VLookupConstant("_V0read__line", &_VW_V0read__line), VPOINTER_OTHER);
  _V0read__char = VEncodePointer(VLookupConstant("_V0read__char", &_VW_V0read__char), VPOINTER_OTHER);
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
  _V0char___Ginteger = VEncodePointer(VLookupConstant("_V0char___Ginteger", &_VW_V0char___Ginteger), VPOINTER_OTHER);
  _V0hash__table__delete_B = VEncodePointer(VLookupConstant("_V0hash__table__delete_B", &_VW_V0hash__table__delete_B), VPOINTER_OTHER);
  _V0hash__table__set_B = VEncodePointer(VLookupConstant("_V0hash__table__set_B", &_VW_V0hash__table__set_B), VPOINTER_OTHER);
  _V0hash__table__ref = VEncodePointer(VLookupConstant("_V0hash__table__ref", &_VW_V0hash__table__ref), VPOINTER_OTHER);
  _V0make__hash__table = VEncodePointer(VLookupConstant("_V0make__hash__table", &_VW_V0make__hash__table), VPOINTER_OTHER);
  _V0vector__for__each = VEncodePointer(VLookupConstant("_V0vector__for__each", &_VW_V0vector__for__each), VPOINTER_OTHER);
  _V0vector__length = VEncodePointer(VLookupConstant("_V0vector__length", &_VW_V0vector__length), VPOINTER_OTHER);
  _V0vector__set_B = VEncodePointer(VLookupConstant("_V0vector__set_B", &_VW_V0vector__set_B), VPOINTER_OTHER);
  _V0vector__ref = VEncodePointer(VLookupConstant("_V0vector__ref", &_VW_V0vector__ref), VPOINTER_OTHER);
  _V0vector = VEncodePointer(VLookupConstant("_V0vector", &_VW_V0vector), VPOINTER_OTHER);
  _V0list___Gvector = VEncodePointer(VLookupConstant("_V0list___Gvector", &_VW_V0list___Gvector), VPOINTER_OTHER);
  _V0symbol___Gstring = VEncodePointer(VLookupConstant("_V0symbol___Gstring", &_VW_V0symbol___Gstring), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VLookupConstant("_V0string__append", &_VW_V0string__append), VPOINTER_OTHER);
  _V0string___Gnumber = VEncodePointer(VLookupConstant("_V0string___Gnumber", &_VW_V0string___Gnumber), VPOINTER_OTHER);
  _V0string___Gsymbol = VEncodePointer(VLookupConstant("_V0string___Gsymbol", &_VW_V0string___Gsymbol), VPOINTER_OTHER);
  _V0string__length = VEncodePointer(VLookupConstant("_V0string__length", &_VW_V0string__length), VPOINTER_OTHER);
  _V0string__set_B = VEncodePointer(VLookupConstant("_V0string__set_B", &_VW_V0string__set_B), VPOINTER_OTHER);
  _V0string__ref = VEncodePointer(VLookupConstant("_V0string__ref", &_VW_V0string__ref), VPOINTER_OTHER);
  _V0string__copy_B = VEncodePointer(VLookupConstant("_V0string__copy_B", &_VW_V0string__copy_B), VPOINTER_OTHER);
  _V0string__copy = VEncodePointer(VLookupConstant("_V0string__copy", &_VW_V0string__copy), VPOINTER_OTHER);
  _V0substring = VEncodePointer(VLookupConstant("_V0substring", &_VW_V0substring), VPOINTER_OTHER);
  _V0make__string = VEncodePointer(VLookupConstant("_V0make__string", &_VW_V0make__string), VPOINTER_OTHER);
  _V0list___Gstring = VEncodePointer(VLookupConstant("_V0list___Gstring", &_VW_V0list___Gstring), VPOINTER_OTHER);
  _V0string___Glist = VEncodePointer(VLookupConstant("_V0string___Glist", &_VW_V0string___Glist), VPOINTER_OTHER);
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
  _V0list__ref = VEncodePointer(VLookupConstant("_V0list__ref", &_VW_V0list__ref), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
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
  _V0set__cdr_B = VEncodePointer(VLookupConstant("_V0set__cdr_B", &_VW_V0set__cdr_B), VPOINTER_OTHER);
  _V0set__car_B = VEncodePointer(VLookupConstant("_V0set__car_B", &_VW_V0set__car_B), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0min = VEncodePointer(VLookupConstant("_V0min", &_VW_V0min), VPOINTER_OTHER);
  _V0max = VEncodePointer(VLookupConstant("_V0max", &_VW_V0max), VPOINTER_OTHER);
  _V0remainder = VEncodePointer(VLookupConstant("_V0remainder", &_VW_V0remainder), VPOINTER_OTHER);
  _V0quotient = VEncodePointer(VLookupConstant("_V0quotient", &_VW_V0quotient), VPOINTER_OTHER);
  _V0_W = VEncodePointer(VLookupConstant("_V0_W", &_VW_V0_W), VPOINTER_OTHER);
  _V0_S = VEncodePointer(VLookupConstant("_V0_S", &_VW_V0_S), VPOINTER_OTHER);
  _V0__ = VEncodePointer(VLookupConstant("_V0__", &_VW_V0__), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0complex_Q = VEncodePointer(VLookupConstant("_V0complex_Q", &_VW_V0complex_Q), VPOINTER_OTHER);
  _V0number_Q = VEncodePointer(VLookupConstant("_V0number_Q", &_VW_V0number_Q), VPOINTER_OTHER);
  _V0exact___Ginexact = VEncodePointer(VLookupConstant("_V0exact___Ginexact", &_VW_V0exact___Ginexact), VPOINTER_OTHER);
  _V0inexact = VEncodePointer(VLookupConstant("_V0inexact", &_VW_V0inexact), VPOINTER_OTHER);
  _V0_G_E = VEncodePointer(VLookupConstant("_V0_G_E", &_VW_V0_G_E), VPOINTER_OTHER);
  _V0_L_E = VEncodePointer(VLookupConstant("_V0_L_E", &_VW_V0_L_E), VPOINTER_OTHER);
  _V0_G = VEncodePointer(VLookupConstant("_V0_G", &_VW_V0_G), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V0_L = VEncodePointer(VLookupConstant("_V0_L", &_VW_V0_L), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0symbol_E_Q = VEncodePointer(VLookupConstant("_V0symbol_E_Q", &_VW_V0symbol_E_Q), VPOINTER_OTHER);
  _V0eq_Q = VEncodePointer(VLookupConstant("_V0eq_Q", &_VW_V0eq_Q), VPOINTER_OTHER);
  _V0char_Q = VEncodePointer(VLookupConstant("_V0char_Q", &_VW_V0char_Q), VPOINTER_OTHER);
  _V0integer_Q = VEncodePointer(VLookupConstant("_V0integer_Q", &_VW_V0integer_Q), VPOINTER_OTHER);
  _V0real_Q = VEncodePointer(VLookupConstant("_V0real_Q", &_VW_V0real_Q), VPOINTER_OTHER);
  _V0inexact_Q = VEncodePointer(VLookupConstant("_V0inexact_Q", &_VW_V0inexact_Q), VPOINTER_OTHER);
  _V0exact_Q = VEncodePointer(VLookupConstant("_V0exact_Q", &_VW_V0exact_Q), VPOINTER_OTHER);
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0procedure_Q = VEncodePointer(VLookupConstant("_V0procedure_Q", &_VW_V0procedure_Q), VPOINTER_OTHER);
  _V0vector_Q = VEncodePointer(VLookupConstant("_V0vector_Q", &_VW_V0vector_Q), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0boolean_Q = VEncodePointer(VLookupConstant("_V0boolean_Q", &_VW_V0boolean_Q), VPOINTER_OTHER);
  _V0eof__object_Q = VEncodePointer(VLookupConstant("_V0eof__object_Q", &_VW_V0eof__object_Q), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
}
static void _V0vanity_V0core_V20_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k169, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.2 171 0) (##inline ##sys.cons (##inline ##sys.cons 'null? (bruijn null? 165 0)) (##inline ##sys.cons (##inline ##sys.cons 'eof-object? (bruijn eof-object? 165 2)) (##inline ##sys.cons (##inline ##sys.cons 'boolean? (bruijn boolean? 165 1)) (##inline ##sys.cons (##inline ##sys.cons 'pair? (bruijn pair? 165 3)) (##inline ##sys.cons (##inline ##sys.cons 'vector? (bruijn vector? 165 4)) (##inline ##sys.cons (##inline ##sys.cons 'procedure? (bruijn procedure? 165 5)) (##inline ##sys.cons (##inline ##sys.cons 'symbol? (bruijn symbol? 165 6)) (##inline ##sys.cons (##inline ##sys.cons 'string? (bruijn string? 165 7)) (##inline ##sys.cons (##inline ##sys.cons 'exact? (bruijn exact? 165 9)) (##inline ##sys.cons (##inline ##sys.cons 'inexact? (bruijn inexact? 165 11)) (##inline ##sys.cons (##inline ##sys.cons 'real? (bruijn real? 165 12)) (##inline ##sys.cons (##inline ##sys.cons 'integer? (bruijn integer? 165 10)) (##inline ##sys.cons (##inline ##sys.cons 'char? (bruijn char? 165 8)) (##inline ##sys.cons (##inline ##sys.cons 'eq? (bruijn eq? 165 13)) (##inline ##sys.cons (##inline ##sys.cons 'symbol=? (bruijn symbol=? 165 14)) (##inline ##sys.cons (##inline ##sys.cons 'eqv? (bruijn eqv? 165 15)) (##inline ##sys.cons (##inline ##sys.cons 'equal? (bruijn equal? 165 17)) (##inline ##sys.cons (##inline ##sys.cons 'not (bruijn not 165 18)) (##inline ##sys.cons (##inline ##sys.cons '< (bruijn < 165 19)) (##inline ##sys.cons (##inline ##sys.cons '= (bruijn = 165 20)) (##inline ##sys.cons (##inline ##sys.cons '> (bruijn > 165 21)) (##inline ##sys.cons (##inline ##sys.cons '<= (bruijn <= 165 22)) (##inline ##sys.cons (##inline ##sys.cons '>= (bruijn >= 165 23)) (##inline ##sys.cons (##inline ##sys.cons 'inexact (bruijn inexact 165 24)) (##inline ##sys.cons (##inline ##sys.cons 'exact->inexact (bruijn exact->inexact 165 25)) (##inline ##sys.cons (##inline ##sys.cons 'number? (bruijn number? 165 26)) (##inline ##sys.cons (##inline ##sys.cons 'complex? (bruijn complex? 165 27)) (##inline ##sys.cons (##inline ##sys.cons '+ (bruijn + 165 28)) (##inline ##sys.cons (##inline ##sys.cons '- (bruijn - 165 29)) (##inline ##sys.cons (##inline ##sys.cons '* (bruijn * 165 30)) (##inline ##sys.cons (##inline ##sys.cons '/ (bruijn / 165 31)) (##inline ##sys.cons (##inline ##sys.cons 'quotient (bruijn quotient 165 32)) (##inline ##sys.cons (##inline ##sys.cons 'remainder (bruijn remainder 165 33)) (##inline ##sys.cons (##inline ##sys.cons 'max (bruijn max 165 34)) (##inline ##sys.cons (##inline ##sys.cons 'min (bruijn min 165 35)) (##inline ##sys.cons (##inline ##sys.cons 'cons (bruijn cons 165 36)) (##inline ##sys.cons (##inline ##sys.cons 'car (bruijn car 165 37)) (##inline ##sys.cons (##inline ##sys.cons 'cdr (bruijn cdr 165 38)) (##inline ##sys.cons (##inline ##sys.cons 'set-car! (bruijn set-car! 165 39)) (##inline ##sys.cons (##inline ##sys.cons 'set-cdr! (bruijn set-cdr! 165 40)) (##inline ##sys.cons (##inline ##sys.cons 'caar (bruijn caar 165 41)) (##inline ##sys.cons (##inline ##sys.cons 'cadr (bruijn cadr 165 42)) (##inline ##sys.cons (##inline ##sys.cons 'cdar (bruijn cdar 165 43)) (##inline ##sys.cons (##inline ##sys.cons 'cddr (bruijn cddr 165 44)) (##inline ##sys.cons (##inline ##sys.cons 'caaar (bruijn caaar 165 45)) (##inline ##sys.cons (##inline ##sys.cons 'caadr (bruijn caadr 165 46)) (##inline ##sys.cons (##inline ##sys.cons 'cadar (bruijn cadar 165 47)) (##inline ##sys.cons (##inline ##sys.cons 'caddr (bruijn caddr 165 48)) (##inline ##sys.cons (##inline ##sys.cons 'cdaar (bruijn cdaar 165 49)) (##inline ##sys.cons (##inline ##sys.cons 'cdadr (bruijn cdadr 165 50)) (##inline ##sys.cons (##inline ##sys.cons 'cddar (bruijn cddar 165 51)) (##inline ##sys.cons (##inline ##sys.cons 'cdddr (bruijn cdddr 165 52)) (##inline ##sys.cons (##inline ##sys.cons 'caaaar (bruijn caaaar 165 53)) (##inline ##sys.cons (##inline ##sys.cons 'caaadr (bruijn caaadr 165 54)) (##inline ##sys.cons (##inline ##sys.cons 'caadar (bruijn caadar 165 55)) (##inline ##sys.cons (##inline ##sys.cons 'caaddr (bruijn caaddr 165 56)) (##inline ##sys.cons (##inline ##sys.cons 'cadaar (bruijn cadaar 165 57)) (##inline ##sys.cons (##inline ##sys.cons 'cadadr (bruijn cadadr 165 58)) (##inline ##sys.cons (##inline ##sys.cons 'caddar (bruijn caddar 165 59)) (##inline ##sys.cons (##inline ##sys.cons 'cadddr (bruijn cadddr 165 60)) (##inline ##sys.cons (##inline ##sys.cons 'cdaaar (bruijn cdaaar 165 61)) (##inline ##sys.cons (##inline ##sys.cons 'cdaadr (bruijn cdaadr 165 62)) (##inline ##sys.cons (##inline ##sys.cons 'cdadar (bruijn cdadar 165 63)) (##inline ##sys.cons (##inline ##sys.cons 'cdaddr (bruijn cdaddr 165 64)) (##inline ##sys.cons (##inline ##sys.cons 'cddaar (bruijn cddaar 165 65)) (##inline ##sys.cons (##inline ##sys.cons 'cddadr (bruijn cddadr 165 66)) (##inline ##sys.cons (##inline ##sys.cons 'cdddar (bruijn cdddar 165 67)) (##inline ##sys.cons (##inline ##sys.cons 'cddddr (bruijn cddddr 165 68)) (##inline ##sys.cons (##inline ##sys.cons 'list (bruijn list 165 69)) (##inline ##sys.cons (##inline ##sys.cons 'length (bruijn length 165 70)) (##inline ##sys.cons (##inline ##sys.cons 'list-ref (bruijn list-ref 165 71)) (##inline ##sys.cons (##inline ##sys.cons 'map (bruijn map 165 72)) (##inline ##sys.cons (##inline ##sys.cons 'for-each (bruijn for-each 165 73)) (##inline ##sys.cons (##inline ##sys.cons 'append (bruijn append 165 75)) (##inline ##sys.cons (##inline ##sys.cons 'reverse (bruijn reverse 165 76)) (##inline ##sys.cons (##inline ##sys.cons 'memq (bruijn memq 165 77)) (##inline ##sys.cons (##inline ##sys.cons 'memv (bruijn memv 165 78)) (##inline ##sys.cons (##inline ##sys.cons 'member (bruijn member 165 79)) (##inline ##sys.cons (##inline ##sys.cons 'assq (bruijn assq 165 80)) (##inline ##sys.cons (##inline ##sys.cons 'assv (bruijn assv 165 81)) (##inline ##sys.cons (##inline ##sys.cons 'assoc (bruijn assoc 165 82)) (##inline ##sys.cons (##inline ##sys.cons 'string->list (bruijn string->list 165 94)) (##inline ##sys.cons (##inline ##sys.cons 'list->string (bruijn list->string 165 93)) (##inline ##sys.cons (##inline ##sys.cons 'make-string (bruijn make-string 165 83)) (##inline ##sys.cons (##inline ##sys.cons 'substring (bruijn substring 165 84)) (##inline ##sys.cons (##inline ##sys.cons 'string-copy (bruijn string-copy 165 85)) (##inline ##sys.cons (##inline ##sys.cons 'string-copy! (bruijn string-copy! 165 86)) (##inline ##sys.cons (##inline ##sys.cons 'string-ref (bruijn string-ref 165 87)) (##inline ##sys.cons (##inline ##sys.cons 'string-set! (bruijn string-set! 165 88)) (##inline ##sys.cons (##inline ##sys.cons 'string-length (bruijn string-length 165 89)) (##inline ##sys.cons (##inline ##sys.cons 'string->symbol (bruijn string->symbol 165 90)) (##inline ##sys.cons (##inline ##sys.cons 'string->number (bruijn string->number 165 91)) (##inline ##sys.cons (##inline ##sys.cons 'string->list (bruijn string->list 165 94)) (##inline ##sys.cons (##inline ##sys.cons 'string-append (bruijn string-append 165 95)) (##inline ##sys.cons (##inline ##sys.cons 'symbol->string (bruijn symbol->string 165 92)) (##inline ##sys.cons (##inline ##sys.cons 'list->vector (bruijn list->vector 165 96)) (##inline ##sys.cons (##inline ##sys.cons 'vector (bruijn vector 165 97)) (##inline ##sys.cons (##inline ##sys.cons 'vector-ref (bruijn vector-ref 165 98)) (##inline ##sys.cons (##inline ##sys.cons 'vector-set! (bruijn vector-set! 165 99)) (##inline ##sys.cons (##inline ##sys.cons 'vector-length (bruijn vector-length 165 100)) (##inline ##sys.cons (##inline ##sys.cons 'vector-for-each (bruijn vector-for-each 165 101)) (##inline ##sys.cons (##inline ##sys.cons 'make-hash-table (bruijn make-hash-table 165 102)) (##inline ##sys.cons (##inline ##sys.cons 'hash-table-ref (bruijn hash-table-ref 165 105)) (##inline ##sys.cons (##inline ##sys.cons 'hash-table-set! (bruijn hash-table-set! 165 106)) (##inline ##sys.cons (##inline ##sys.cons 'hash-table-delete! (bruijn hash-table-delete! 165 107)) (##inline ##sys.cons (##inline ##sys.cons 'char->integer (bruijn char->integer 165 108)) (##inline ##sys.cons (##inline ##sys.cons 'current-output-port (bruijn current-output-port 165 109)) (##inline ##sys.cons (##inline ##sys.cons 'current-error-port (bruijn current-error-port 165 110)) (##inline ##sys.cons (##inline ##sys.cons 'current-input-port (bruijn current-input-port 165 111)) (##inline ##sys.cons (##inline ##sys.cons 'open-input-file (bruijn open-input-file 165 117)) (##inline ##sys.cons (##inline ##sys.cons 'open-output-file (bruijn open-output-file 165 118)) (##inline ##sys.cons (##inline ##sys.cons 'close-port (bruijn close-port 165 113)) (##inline ##sys.cons (##inline ##sys.cons 'open-output-string (bruijn open-output-string 165 119)) (##inline ##sys.cons (##inline ##sys.cons 'get-output-string (bruijn get-output-string 165 120)) (##inline ##sys.cons (##inline ##sys.cons 'with-output-to-file (bruijn with-output-to-file 165 121)) (##inline ##sys.cons (##inline ##sys.cons 'with-input-from-file (bruijn with-input-from-file 165 122)) (##inline ##sys.cons (##inline ##sys.cons 'read-char (bruijn read-char 165 123)) (##inline ##sys.cons (##inline ##sys.cons 'read-line (bruijn read-line 165 124)) (##inline ##sys.cons (##inline ##sys.cons 'read (bruijn read 165 125)) (##inline ##sys.cons (##inline ##sys.cons 'newline (bruijn newline 165 126)) (##inline ##sys.cons (##inline ##sys.cons 'display (bruijn display 165 130)) (##inline ##sys.cons (##inline ##sys.cons 'write (bruijn write 165 131)) (##inline ##sys.cons (##inline ##sys.cons 'call/cc (bruijn call/cc 165 132)) (##inline ##sys.cons (##inline ##sys.cons 'call-with-current-continuation (bruijn call-with-current-continuation 165 133)) (##inline ##sys.cons (##inline ##sys.cons 'call-with-values (bruijn call-with-values 165 134)) (##inline ##sys.cons (##inline ##sys.cons 'apply (bruijn apply 165 135)) (##inline ##sys.cons (##inline ##sys.cons 'values (bruijn values 165 136)) (##inline ##sys.cons (##inline ##sys.cons 'setter (bruijn setter 165 137)) (##inline ##sys.cons (##inline ##sys.cons 'mutator (bruijn mutator 165 138)) (##inline ##sys.cons (##inline ##sys.cons '##vcore.setter (bruijn ##vcore.setter 166 0)) (##inline ##sys.cons (##inline ##sys.cons '##vcore.mutator (bruijn ##vcore.mutator 166 1)) (##inline ##sys.cons (##inline ##sys.cons 'command-line (bruijn command-line 165 139)) (##inline ##sys.cons (##inline ##sys.cons 'system (bruijn system 165 140)) (##inline ##sys.cons (##inline ##sys.cons 'open-input-process (bruijn open-input-process 165 141)) (##inline ##sys.cons (##inline ##sys.cons 'open-output-process (bruijn open-output-process 165 142)) (##inline ##sys.cons (##inline ##sys.cons 'make-temporary-file (bruijn make-temporary-file 165 143)) (##inline ##sys.cons (##inline ##sys.cons 'exit (bruijn exit 165 144)) (##inline ##sys.cons (##inline ##sys.cons 'fiber-fork (bruijn fiber-fork 165 155)) (##inline ##sys.cons (##inline ##sys.cons 'fiber-fork-list (bruijn fiber-fork-list 165 154)) (##inline ##sys.cons (##inline ##sys.cons 'fiber-map (bruijn fiber-map 165 156)) (##inline ##sys.cons (##inline ##sys.cons 'async (bruijn async 165 157)) (##inline ##sys.cons (##inline ##sys.cons 'await (bruijn await 165 158)) (##inline ##sys.cons (##inline ##sys.cons 'atom? (bruijn atom? 165 145)) (##inline ##sys.cons (##inline ##sys.cons 'displayln (bruijn displayln 165 146)) (##inline ##sys.cons (##inline ##sys.cons 'writeln (bruijn writeln 165 147)) (##inline ##sys.cons (##inline ##sys.cons 'format (bruijn format 165 152)) (##inline ##sys.cons (##inline ##sys.cons 'printf (bruijn printf 165 150)) (##inline ##sys.cons (##inline ##sys.cons 'sprintf (bruijn sprintf 165 151)) (##inline ##sys.cons (##inline ##sys.cons 'error (bruijn error 165 153)) '()))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
V_CALL(VGetArg(upenv, 171-1, 0), runtime,
      VInlineCons(
        VInlineCons(
        _V0null_Q,
        VGetArg(upenv, 165-1, 0)),
        VInlineCons(
        VInlineCons(
        _V0eof__object_Q,
        VGetArg(upenv, 165-1, 2)),
        VInlineCons(
        VInlineCons(
        _V0boolean_Q,
        VGetArg(upenv, 165-1, 1)),
        VInlineCons(
        VInlineCons(
        _V0pair_Q,
        VGetArg(upenv, 165-1, 3)),
        VInlineCons(
        VInlineCons(
        _V0vector_Q,
        VGetArg(upenv, 165-1, 4)),
        VInlineCons(
        VInlineCons(
        _V0procedure_Q,
        VGetArg(upenv, 165-1, 5)),
        VInlineCons(
        VInlineCons(
        _V0symbol_Q,
        VGetArg(upenv, 165-1, 6)),
        VInlineCons(
        VInlineCons(
        _V0string_Q,
        VGetArg(upenv, 165-1, 7)),
        VInlineCons(
        VInlineCons(
        _V0exact_Q,
        VGetArg(upenv, 165-1, 9)),
        VInlineCons(
        VInlineCons(
        _V0inexact_Q,
        VGetArg(upenv, 165-1, 11)),
        VInlineCons(
        VInlineCons(
        _V0real_Q,
        VGetArg(upenv, 165-1, 12)),
        VInlineCons(
        VInlineCons(
        _V0integer_Q,
        VGetArg(upenv, 165-1, 10)),
        VInlineCons(
        VInlineCons(
        _V0char_Q,
        VGetArg(upenv, 165-1, 8)),
        VInlineCons(
        VInlineCons(
        _V0eq_Q,
        VGetArg(upenv, 165-1, 13)),
        VInlineCons(
        VInlineCons(
        _V0symbol_E_Q,
        VGetArg(upenv, 165-1, 14)),
        VInlineCons(
        VInlineCons(
        _V0eqv_Q,
        VGetArg(upenv, 165-1, 15)),
        VInlineCons(
        VInlineCons(
        _V0equal_Q,
        VGetArg(upenv, 165-1, 17)),
        VInlineCons(
        VInlineCons(
        _V0not,
        VGetArg(upenv, 165-1, 18)),
        VInlineCons(
        VInlineCons(
        _V0_L,
        VGetArg(upenv, 165-1, 19)),
        VInlineCons(
        VInlineCons(
        _V0_E,
        VGetArg(upenv, 165-1, 20)),
        VInlineCons(
        VInlineCons(
        _V0_G,
        VGetArg(upenv, 165-1, 21)),
        VInlineCons(
        VInlineCons(
        _V0_L_E,
        VGetArg(upenv, 165-1, 22)),
        VInlineCons(
        VInlineCons(
        _V0_G_E,
        VGetArg(upenv, 165-1, 23)),
        VInlineCons(
        VInlineCons(
        _V0inexact,
        VGetArg(upenv, 165-1, 24)),
        VInlineCons(
        VInlineCons(
        _V0exact___Ginexact,
        VGetArg(upenv, 165-1, 25)),
        VInlineCons(
        VInlineCons(
        _V0number_Q,
        VGetArg(upenv, 165-1, 26)),
        VInlineCons(
        VInlineCons(
        _V0complex_Q,
        VGetArg(upenv, 165-1, 27)),
        VInlineCons(
        VInlineCons(
        _V0_P,
        VGetArg(upenv, 165-1, 28)),
        VInlineCons(
        VInlineCons(
        _V0__,
        VGetArg(upenv, 165-1, 29)),
        VInlineCons(
        VInlineCons(
        _V0_S,
        VGetArg(upenv, 165-1, 30)),
        VInlineCons(
        VInlineCons(
        _V0_W,
        VGetArg(upenv, 165-1, 31)),
        VInlineCons(
        VInlineCons(
        _V0quotient,
        VGetArg(upenv, 165-1, 32)),
        VInlineCons(
        VInlineCons(
        _V0remainder,
        VGetArg(upenv, 165-1, 33)),
        VInlineCons(
        VInlineCons(
        _V0max,
        VGetArg(upenv, 165-1, 34)),
        VInlineCons(
        VInlineCons(
        _V0min,
        VGetArg(upenv, 165-1, 35)),
        VInlineCons(
        VInlineCons(
        _V0cons,
        VGetArg(upenv, 165-1, 36)),
        VInlineCons(
        VInlineCons(
        _V0car,
        VGetArg(upenv, 165-1, 37)),
        VInlineCons(
        VInlineCons(
        _V0cdr,
        VGetArg(upenv, 165-1, 38)),
        VInlineCons(
        VInlineCons(
        _V0set__car_B,
        VGetArg(upenv, 165-1, 39)),
        VInlineCons(
        VInlineCons(
        _V0set__cdr_B,
        VGetArg(upenv, 165-1, 40)),
        VInlineCons(
        VInlineCons(
        _V0caar,
        VGetArg(upenv, 165-1, 41)),
        VInlineCons(
        VInlineCons(
        _V0cadr,
        VGetArg(upenv, 165-1, 42)),
        VInlineCons(
        VInlineCons(
        _V0cdar,
        VGetArg(upenv, 165-1, 43)),
        VInlineCons(
        VInlineCons(
        _V0cddr,
        VGetArg(upenv, 165-1, 44)),
        VInlineCons(
        VInlineCons(
        _V0caaar,
        VGetArg(upenv, 165-1, 45)),
        VInlineCons(
        VInlineCons(
        _V0caadr,
        VGetArg(upenv, 165-1, 46)),
        VInlineCons(
        VInlineCons(
        _V0cadar,
        VGetArg(upenv, 165-1, 47)),
        VInlineCons(
        VInlineCons(
        _V0caddr,
        VGetArg(upenv, 165-1, 48)),
        VInlineCons(
        VInlineCons(
        _V0cdaar,
        VGetArg(upenv, 165-1, 49)),
        VInlineCons(
        VInlineCons(
        _V0cdadr,
        VGetArg(upenv, 165-1, 50)),
        VInlineCons(
        VInlineCons(
        _V0cddar,
        VGetArg(upenv, 165-1, 51)),
        VInlineCons(
        VInlineCons(
        _V0cdddr,
        VGetArg(upenv, 165-1, 52)),
        VInlineCons(
        VInlineCons(
        _V0caaaar,
        VGetArg(upenv, 165-1, 53)),
        VInlineCons(
        VInlineCons(
        _V0caaadr,
        VGetArg(upenv, 165-1, 54)),
        VInlineCons(
        VInlineCons(
        _V0caadar,
        VGetArg(upenv, 165-1, 55)),
        VInlineCons(
        VInlineCons(
        _V0caaddr,
        VGetArg(upenv, 165-1, 56)),
        VInlineCons(
        VInlineCons(
        _V0cadaar,
        VGetArg(upenv, 165-1, 57)),
        VInlineCons(
        VInlineCons(
        _V0cadadr,
        VGetArg(upenv, 165-1, 58)),
        VInlineCons(
        VInlineCons(
        _V0caddar,
        VGetArg(upenv, 165-1, 59)),
        VInlineCons(
        VInlineCons(
        _V0cadddr,
        VGetArg(upenv, 165-1, 60)),
        VInlineCons(
        VInlineCons(
        _V0cdaaar,
        VGetArg(upenv, 165-1, 61)),
        VInlineCons(
        VInlineCons(
        _V0cdaadr,
        VGetArg(upenv, 165-1, 62)),
        VInlineCons(
        VInlineCons(
        _V0cdadar,
        VGetArg(upenv, 165-1, 63)),
        VInlineCons(
        VInlineCons(
        _V0cdaddr,
        VGetArg(upenv, 165-1, 64)),
        VInlineCons(
        VInlineCons(
        _V0cddaar,
        VGetArg(upenv, 165-1, 65)),
        VInlineCons(
        VInlineCons(
        _V0cddadr,
        VGetArg(upenv, 165-1, 66)),
        VInlineCons(
        VInlineCons(
        _V0cdddar,
        VGetArg(upenv, 165-1, 67)),
        VInlineCons(
        VInlineCons(
        _V0cddddr,
        VGetArg(upenv, 165-1, 68)),
        VInlineCons(
        VInlineCons(
        _V0list,
        VGetArg(upenv, 165-1, 69)),
        VInlineCons(
        VInlineCons(
        _V0length,
        VGetArg(upenv, 165-1, 70)),
        VInlineCons(
        VInlineCons(
        _V0list__ref,
        VGetArg(upenv, 165-1, 71)),
        VInlineCons(
        VInlineCons(
        _V0map,
        VGetArg(upenv, 165-1, 72)),
        VInlineCons(
        VInlineCons(
        _V0for__each,
        VGetArg(upenv, 165-1, 73)),
        VInlineCons(
        VInlineCons(
        _V0append,
        VGetArg(upenv, 165-1, 75)),
        VInlineCons(
        VInlineCons(
        _V0reverse,
        VGetArg(upenv, 165-1, 76)),
        VInlineCons(
        VInlineCons(
        _V0memq,
        VGetArg(upenv, 165-1, 77)),
        VInlineCons(
        VInlineCons(
        _V0memv,
        VGetArg(upenv, 165-1, 78)),
        VInlineCons(
        VInlineCons(
        _V0member,
        VGetArg(upenv, 165-1, 79)),
        VInlineCons(
        VInlineCons(
        _V0assq,
        VGetArg(upenv, 165-1, 80)),
        VInlineCons(
        VInlineCons(
        _V0assv,
        VGetArg(upenv, 165-1, 81)),
        VInlineCons(
        VInlineCons(
        _V0assoc,
        VGetArg(upenv, 165-1, 82)),
        VInlineCons(
        VInlineCons(
        _V0string___Glist,
        VGetArg(upenv, 165-1, 94)),
        VInlineCons(
        VInlineCons(
        _V0list___Gstring,
        VGetArg(upenv, 165-1, 93)),
        VInlineCons(
        VInlineCons(
        _V0make__string,
        VGetArg(upenv, 165-1, 83)),
        VInlineCons(
        VInlineCons(
        _V0substring,
        VGetArg(upenv, 165-1, 84)),
        VInlineCons(
        VInlineCons(
        _V0string__copy,
        VGetArg(upenv, 165-1, 85)),
        VInlineCons(
        VInlineCons(
        _V0string__copy_B,
        VGetArg(upenv, 165-1, 86)),
        VInlineCons(
        VInlineCons(
        _V0string__ref,
        VGetArg(upenv, 165-1, 87)),
        VInlineCons(
        VInlineCons(
        _V0string__set_B,
        VGetArg(upenv, 165-1, 88)),
        VInlineCons(
        VInlineCons(
        _V0string__length,
        VGetArg(upenv, 165-1, 89)),
        VInlineCons(
        VInlineCons(
        _V0string___Gsymbol,
        VGetArg(upenv, 165-1, 90)),
        VInlineCons(
        VInlineCons(
        _V0string___Gnumber,
        VGetArg(upenv, 165-1, 91)),
        VInlineCons(
        VInlineCons(
        _V0string___Glist,
        VGetArg(upenv, 165-1, 94)),
        VInlineCons(
        VInlineCons(
        _V0string__append,
        VGetArg(upenv, 165-1, 95)),
        VInlineCons(
        VInlineCons(
        _V0symbol___Gstring,
        VGetArg(upenv, 165-1, 92)),
        VInlineCons(
        VInlineCons(
        _V0list___Gvector,
        VGetArg(upenv, 165-1, 96)),
        VInlineCons(
        VInlineCons(
        _V0vector,
        VGetArg(upenv, 165-1, 97)),
        VInlineCons(
        VInlineCons(
        _V0vector__ref,
        VGetArg(upenv, 165-1, 98)),
        VInlineCons(
        VInlineCons(
        _V0vector__set_B,
        VGetArg(upenv, 165-1, 99)),
        VInlineCons(
        VInlineCons(
        _V0vector__length,
        VGetArg(upenv, 165-1, 100)),
        VInlineCons(
        VInlineCons(
        _V0vector__for__each,
        VGetArg(upenv, 165-1, 101)),
        VInlineCons(
        VInlineCons(
        _V0make__hash__table,
        VGetArg(upenv, 165-1, 102)),
        VInlineCons(
        VInlineCons(
        _V0hash__table__ref,
        VGetArg(upenv, 165-1, 105)),
        VInlineCons(
        VInlineCons(
        _V0hash__table__set_B,
        VGetArg(upenv, 165-1, 106)),
        VInlineCons(
        VInlineCons(
        _V0hash__table__delete_B,
        VGetArg(upenv, 165-1, 107)),
        VInlineCons(
        VInlineCons(
        _V0char___Ginteger,
        VGetArg(upenv, 165-1, 108)),
        VInlineCons(
        VInlineCons(
        _V0current__output__port,
        VGetArg(upenv, 165-1, 109)),
        VInlineCons(
        VInlineCons(
        _V0current__error__port,
        VGetArg(upenv, 165-1, 110)),
        VInlineCons(
        VInlineCons(
        _V0current__input__port,
        VGetArg(upenv, 165-1, 111)),
        VInlineCons(
        VInlineCons(
        _V0open__input__file,
        VGetArg(upenv, 165-1, 117)),
        VInlineCons(
        VInlineCons(
        _V0open__output__file,
        VGetArg(upenv, 165-1, 118)),
        VInlineCons(
        VInlineCons(
        _V0close__port,
        VGetArg(upenv, 165-1, 113)),
        VInlineCons(
        VInlineCons(
        _V0open__output__string,
        VGetArg(upenv, 165-1, 119)),
        VInlineCons(
        VInlineCons(
        _V0get__output__string,
        VGetArg(upenv, 165-1, 120)),
        VInlineCons(
        VInlineCons(
        _V0with__output__to__file,
        VGetArg(upenv, 165-1, 121)),
        VInlineCons(
        VInlineCons(
        _V0with__input__from__file,
        VGetArg(upenv, 165-1, 122)),
        VInlineCons(
        VInlineCons(
        _V0read__char,
        VGetArg(upenv, 165-1, 123)),
        VInlineCons(
        VInlineCons(
        _V0read__line,
        VGetArg(upenv, 165-1, 124)),
        VInlineCons(
        VInlineCons(
        _V0read,
        VGetArg(upenv, 165-1, 125)),
        VInlineCons(
        VInlineCons(
        _V0newline,
        VGetArg(upenv, 165-1, 126)),
        VInlineCons(
        VInlineCons(
        _V0display,
        VGetArg(upenv, 165-1, 130)),
        VInlineCons(
        VInlineCons(
        _V0write,
        VGetArg(upenv, 165-1, 131)),
        VInlineCons(
        VInlineCons(
        _V0call_Wcc,
        VGetArg(upenv, 165-1, 132)),
        VInlineCons(
        VInlineCons(
        _V0call__with__current__continuation,
        VGetArg(upenv, 165-1, 133)),
        VInlineCons(
        VInlineCons(
        _V0call__with__values,
        VGetArg(upenv, 165-1, 134)),
        VInlineCons(
        VInlineCons(
        _V0apply,
        VGetArg(upenv, 165-1, 135)),
        VInlineCons(
        VInlineCons(
        _V0values,
        VGetArg(upenv, 165-1, 136)),
        VInlineCons(
        VInlineCons(
        _V0setter,
        VGetArg(upenv, 165-1, 137)),
        VInlineCons(
        VInlineCons(
        _V0mutator,
        VGetArg(upenv, 165-1, 138)),
        VInlineCons(
        VInlineCons(
        _V10vcore_Dsetter,
        VGetArg(upenv, 166-1, 0)),
        VInlineCons(
        VInlineCons(
        _V10vcore_Dmutator,
        VGetArg(upenv, 166-1, 1)),
        VInlineCons(
        VInlineCons(
        _V0command__line,
        VGetArg(upenv, 165-1, 139)),
        VInlineCons(
        VInlineCons(
        _V0system,
        VGetArg(upenv, 165-1, 140)),
        VInlineCons(
        VInlineCons(
        _V0open__input__process,
        VGetArg(upenv, 165-1, 141)),
        VInlineCons(
        VInlineCons(
        _V0open__output__process,
        VGetArg(upenv, 165-1, 142)),
        VInlineCons(
        VInlineCons(
        _V0make__temporary__file,
        VGetArg(upenv, 165-1, 143)),
        VInlineCons(
        VInlineCons(
        _V0exit,
        VGetArg(upenv, 165-1, 144)),
        VInlineCons(
        VInlineCons(
        _V0fiber__fork,
        VGetArg(upenv, 165-1, 155)),
        VInlineCons(
        VInlineCons(
        _V0fiber__fork__list,
        VGetArg(upenv, 165-1, 154)),
        VInlineCons(
        VInlineCons(
        _V0fiber__map,
        VGetArg(upenv, 165-1, 156)),
        VInlineCons(
        VInlineCons(
        _V0async,
        VGetArg(upenv, 165-1, 157)),
        VInlineCons(
        VInlineCons(
        _V0await,
        VGetArg(upenv, 165-1, 158)),
        VInlineCons(
        VInlineCons(
        _V0atom_Q,
        VGetArg(upenv, 165-1, 145)),
        VInlineCons(
        VInlineCons(
        _V0displayln,
        VGetArg(upenv, 165-1, 146)),
        VInlineCons(
        VInlineCons(
        _V0writeln,
        VGetArg(upenv, 165-1, 147)),
        VInlineCons(
        VInlineCons(
        _V0format,
        VGetArg(upenv, 165-1, 152)),
        VInlineCons(
        VInlineCons(
        _V0printf,
        VGetArg(upenv, 165-1, 150)),
        VInlineCons(
        VInlineCons(
        _V0sprintf,
        VGetArg(upenv, 165-1, 151)),
        VInlineCons(
        VInlineCons(
        _V0error,
        VGetArg(upenv, 165-1, 153)),
        VNULL))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
 }
}
static void _V0vanity_V0core_V20_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k169) (bruijn await 164 158) (##intrinsic ##vcore.await))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k169, env)}),
      VEncodeInt(164l), VEncodeInt(158l),
      _V40_V10vcore_Dawait
    );
 }
}
static void _V0vanity_V0core_V20_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k168) (bruijn async 163 157) (##intrinsic ##vcore.async))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k168, env)}),
      VEncodeInt(163l), VEncodeInt(157l),
      _V40_V10vcore_Dasync
    );
 }
}
static void _V0fiber__map_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fiber__map_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fiber__map_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_k170, runtime, upenv, 1, argc, _var0) {
  // ((bruijn fiber-fork-list 164 154) (bruijn ##k.461 1 0) (bruijn ##x.462 0 0))
V_CALL(VGetArg(upenv, 164-1, 154), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0fiber__map_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fiber__map_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fiber__map_lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_lambda6, runtime, upenv, 1, argc, _var0) {
  // ((bruijn f 2 1) (bruijn ##k.464 0 0) (bruijn e 1 1))
V_CALL(upenv->up->vars[1], runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0fiber__map_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0fiber__map_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0fiber__map_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##k.463 0 0) (close _V0fiber__map_lambda6))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_lambda6, env)}));
 }
}
static void _V0fiber__map_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fiber__map_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fiber__map_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_k171, runtime, upenv, 1, argc, _var0) {
  // ((bruijn fiber-fork-list 164 154) (bruijn ##k.465 1 0) (bruijn ##x.466 0 0))
V_CALL(VGetArg(upenv, 164-1, 154), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0fiber__map_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fiber__map_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fiber__map_lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_lambda8, runtime, upenv, 1, argc, _var0) {
  // ((bruijn f 2 1) (bruijn ##k.468 0 0) (bruijn a 1 1) (bruijn b 1 2))
V_CALL(upenv->up->vars[1], runtime,
      _var0,
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0fiber__map_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0fiber__map_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0fiber__map_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_lambda7, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##k.467 0 0) (close _V0fiber__map_lambda8))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_lambda8, env)}));
 }
}
static void _V0fiber__map_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fiber__map_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fiber__map_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_k172, runtime, upenv, 1, argc, _var0) {
  // ((bruijn fiber-fork-list 164 154) (bruijn ##k.469 1 0) (bruijn ##x.470 0 0))
V_CALL(VGetArg(upenv, 164-1, 154), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0fiber__map_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fiber__map_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fiber__map_lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_lambda10, runtime, upenv, 1, argc, _var0) {
  // ((bruijn f 2 1) (bruijn ##k.472 0 0) (bruijn a 1 1) (bruijn b 1 2) (bruijn c 1 3))
V_CALL(upenv->up->vars[1], runtime,
      _var0,
      upenv->vars[1],
      upenv->vars[2],
      upenv->vars[3]);
 }
}
static void _V0fiber__map_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0fiber__map_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0fiber__map_lambda9, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_lambda9, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##k.471 0 0) (close _V0fiber__map_lambda10))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_lambda10, env)}));
 }
}
static void _V0fiber__map_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fiber__map_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fiber__map_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_k173, runtime, upenv, 1, argc, _var0) {
  // ((bruijn fiber-fork-list 164 154) (bruijn ##k.473 1 0) (bruijn ##x.474 0 0))
V_CALL(VGetArg(upenv, 164-1, 154), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0fiber__map_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fiber__map_lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fiber__map_lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_lambda12, runtime, upenv, 1, argc, _var0) {
  // ((bruijn apply 165 135) (bruijn ##k.476 0 0) (bruijn f 2 1) (bruijn args 1 1))
V_CALL(VGetArg(upenv, 165-1, 135), runtime,
      _var0,
      upenv->up->vars[1],
      upenv->vars[1]);
 }
}
static void _V0fiber__map_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0fiber__map_lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0fiber__map_lambda11, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_lambda11, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((bruijn ##k.475 0 0) (close _V0fiber__map_lambda12))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_lambda12, env)}));
 }
}
__attribute__((used)) static void _V20CaseError__V0fiber__map_lambda4(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0fiber__map_lambda4 #t (3 ((bruijn map 163 72) (close _V0fiber__map_k170) (close _V0fiber__map_lambda5) (bruijn lst 0 2))) (4 ((bruijn map 163 72) (close _V0fiber__map_k171) (close _V0fiber__map_lambda7) (bruijn as 0 2) (bruijn bs 0 3))) (5 ((bruijn map 163 72) (close _V0fiber__map_k172) (close _V0fiber__map_lambda9) (bruijn as 0 2) (bruijn bs 0 3) (bruijn cs 0 4))) (3 + ((bruijn apply 163 135) (close _V0fiber__map_k173) (bruijn map 163 72) (close _V0fiber__map_lambda11) (bruijn as 0 2) (bruijn args 0 3))))
 VError("Not enough arguments to _V0fiber__map_lambda4, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0fiber__map_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0fiber__map_lambda4" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0fiber__map_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn map 163 72) (close _V0fiber__map_k170) (close _V0fiber__map_lambda5) (bruijn lst 0 2))
V_CALL(VGetArg(upenv, 163-1, 72), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_k170, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_lambda5, env)}),
      _var2);
 }
}
__attribute__((used)) static void _V20Case1__V0fiber__map_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0fiber__map_lambda4" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0fiber__map_lambda4, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn map 163 72) (close _V0fiber__map_k171) (close _V0fiber__map_lambda7) (bruijn as 0 2) (bruijn bs 0 3))
V_CALL(VGetArg(upenv, 163-1, 72), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_k171, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_lambda7, env)}),
      _var2,
      _var3);
 }
}
__attribute__((used)) static void _V20Case2__V0fiber__map_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0fiber__map_lambda4" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0fiber__map_lambda4, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn map 163 72) (close _V0fiber__map_k172) (close _V0fiber__map_lambda9) (bruijn as 0 2) (bruijn bs 0 3) (bruijn cs 0 4))
V_CALL(VGetArg(upenv, 163-1, 72), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_k172, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_lambda9, env)}),
      _var2,
      _var3,
      _var4);
 }
}
__attribute__((used)) static void _V20Case3__V0fiber__map_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0fiber__map_lambda4" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0fiber__map_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((bruijn apply 163 135) (close _V0fiber__map_k173) (bruijn map 163 72) (close _V0fiber__map_lambda11) (bruijn as 0 2) (bruijn args 0 3))
V_CALL(VGetArg(upenv, 163-1, 135), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_k173, env)}),
      VGetArg(upenv, 163-1, 72),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_lambda11, env)}),
      _var2,
      _varargs);
 }
}
void _V0fiber__map_lambda4(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0fiber__map_lambda4:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0fiber__map_lambda4\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0fiber__map_lambda4\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V0fiber__map_lambda4\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case3__V0fiber__map_lambda4\n"
"    jmp _V20CaseError__V0fiber__map_lambda4\n"
);
static void _V0vanity_V0core_V20_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k167) (bruijn fiber-map 162 156) (close _V0fiber__map_lambda4))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k167, env)}),
      VEncodeInt(162l), VEncodeInt(156l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_lambda4, env)})
    );
 }
}
static void _V0fiber__fork_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0fiber__fork_lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0fiber__fork_lambda13, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__fork_lambda13, runtime, upenv, 1, argc, _var0, _varargs) {
  // (##vcore.fiber-fork-list (bruijn ##k.477 0 0) (bruijn args 0 1))
    V_CALL_FUNC(VFiberForkList, NULL, runtime,
      _var0,
      _varargs);
 }
}
static void _V0vanity_V0core_V20_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k166) (bruijn fiber-fork 161 155) (close _V0fiber__fork_lambda13))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k166, env)}),
      VEncodeInt(161l), VEncodeInt(155l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__fork_lambda13, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k165) (bruijn fiber-fork-list 160 154) (##intrinsic ##vcore.fiber-fork-list))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k165, env)}),
      VEncodeInt(160l), VEncodeInt(154l),
      _V40_V10vcore_Dfiber__fork__list
    );
 }
}
static void _V0error_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k186, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 0) (bruijn ##k.486 6 0) (bruijn ##x.490 0 0))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0error_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 174 38) (close _V0error_k186) (bruijn irritants 5 1))
V_CALL(VGetArg(upenv, 174-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k186, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0error_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn write 173 131) (close _V0error_k185) (bruijn ##x.491 0 0) (bruijn err 12 0))
V_CALL(VGetArg(upenv, 173-1, 131), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k185, env)}),
      _var0,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0error_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 172 37) (close _V0error_k184) (bruijn irritants 3 1))
V_CALL(VGetArg(upenv, 172-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k184, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0error_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.487 0 0) ((bruijn display 171 130) (close _V0error_k183) (##string ##string.1121) (bruijn err 10 0)) ((bruijn ##k.486 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 171-1, 130), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k183, env)}),
      VEncodePointer(&_V10string_D1121.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0error_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 170 18) (close _V0error_k182) (bruijn ##x.492 0 0))
V_CALL(VGetArg(upenv, 170-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k182, env)}),
      _var0);
 }
}
static void _V0error_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0error_lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0error_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 169 0) (close _V0error_k181) (bruijn irritants 0 1))
V_CALL(VGetArg(upenv, 169-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k181, env)}),
      _var1);
 }
}
static void _V0error_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0error_lambda15)) ((bruijn loop 0 0) (bruijn ##k.484 2 0) (bruijn irritants 8 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_lambda15, env)});
V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 8-1, 2));
    }
 }
}
static void _V0error_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.483 1 0) ((bruijn display 166 130) (close _V0error_k180) (##string ##string.1122) (bruijn err 5 0)) ((bruijn ##k.484 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 166-1, 130), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k180, env)}),
      VEncodePointer(&_V10string_D1122.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0error_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k188, runtime, upenv, 1, argc, _var0) {
  // (##sys.abort (bruijn ##k.478 7 0))
    V_CALL_FUNC(VAbort2, NULL, runtime,
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V0error_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn newline 166 126) (close _V0error_k188) (bruijn err 5 0))
V_CALL(VGetArg(upenv, 166-1, 126), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k188, env)}),
      VGetArg(upenv, 5-1, 0));
 }
}
static void _V0error_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0error_k179) (close _V0error_k187))
V_CALL_FUNC(_V0error_k179, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k187, env)}));
 }
}
static void _V0error_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 164 18) (close _V0error_k178) (bruijn ##x.493 0 0))
V_CALL(VGetArg(upenv, 164-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k178, env)}),
      _var0);
 }
}
static void _V0error_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 163 0) (close _V0error_k177) (bruijn irritants 3 2))
V_CALL(VGetArg(upenv, 163-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k177, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V0error_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn display 162 130) (close _V0error_k176) (bruijn msg 2 1) (bruijn err 1 0))
V_CALL(VGetArg(upenv, 162-1, 130), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k176, env)}),
      upenv->up->vars[1],
      upenv->vars[0]);
 }
}
static void _V0error_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn display 161 130) (close _V0error_k175) (##string ##string.1123) (bruijn err 0 0))
V_CALL(VGetArg(upenv, 161-1, 130), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k175, env)}),
      VEncodePointer(&_V10string_D1123.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0error_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V0error_lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc < 2) {
  VError("Not enough arguments to _V0error_lambda14, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V0error_lambda14, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((bruijn current-error-port 160 110) (close _V0error_k174))
V_CALL(VGetArg(upenv, 160-1, 110), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k174, env)}));
 }
}
static void _V0vanity_V0core_V20_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k164) (bruijn error 159 153) (close _V0error_lambda14))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k164, env)}),
      VEncodeInt(159l), VEncodeInt(153l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_lambda14, env)})
    );
 }
}
static void _V0format_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format_k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k190, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-sprintf 161 149) (bruijn ##k.495 2 0) (bruijn a 2 1) (bruijn ##x.497 0 0))
V_CALL(VGetArg(upenv, 161-1, 149), runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0format_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format_k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k192, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-printf 162 148) (bruijn ##k.495 3 0) (bruijn ##x.499 0 0) (bruijn b 3 2) (bruijn args 3 3))
V_CALL(VGetArg(upenv, 162-1, 148), runtime,
      upenv->up->up->vars[0],
      _var0,
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
 }
}
static void _V0format_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k193, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.500 0 0) ((bruijn format-sprintf 162 149) (bruijn ##k.495 3 0) (bruijn b 3 2) (bruijn args 3 3)) ((bruijn format-printf 162 148) (bruijn ##k.495 3 0) (bruijn a 3 1) (bruijn b 3 2) (bruijn args 3 3)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 162-1, 149), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
V_CALL(VGetArg(upenv, 162-1, 148), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
}
 }
}
static void _V0format_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format_k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.498 0 0) ((bruijn current-output-port 161 109) (close _V0format_k192)) ((bruijn eq? 161 13) (close _V0format_k193) (bruijn a 2 1) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 161-1, 109), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k192, env)}));
} else {
V_CALL(VGetArg(upenv, 161-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k193, env)}),
      upenv->up->vars[1],
      VEncodeBool(false));
}
 }
}
static void _V0format_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.496 0 0) ((bruijn cons 160 36) (close _V0format_k190) (bruijn b 1 2) (bruijn args 1 3)) ((bruijn eq? 160 13) (close _V0format_k191) (bruijn a 1 1) #t))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 160-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k190, env)}),
      upenv->vars[2],
      upenv->vars[3]);
} else {
V_CALL(VGetArg(upenv, 160-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k191, env)}),
      upenv->vars[1],
      VEncodeBool(true));
}
 }
}
__attribute__((used)) static void _V20CaseError__V0format_lambda16(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0format_lambda16 #t (2 ((bruijn sprintf 159 151) (bruijn ##k.494 0 0) (bruijn fmt 0 1))) (3 + ((bruijn string? 159 7) (close _V0format_k189) (bruijn a 0 1))))
 VError("Not enough arguments to _V0format_lambda16, got ~D~N"
 "-- expected 2~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0format_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0format_lambda16" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0format_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn sprintf 159 151) (bruijn ##k.494 0 0) (bruijn fmt 0 1))
V_CALL(VGetArg(upenv, 159-1, 151), runtime,
      _var0,
      _var1);
 }
}
__attribute__((used)) static void _V20Case1__V0format_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case1__V0format_lambda16" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0format_lambda16, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((bruijn string? 159 7) (close _V0format_k189) (bruijn a 0 1))
V_CALL(VGetArg(upenv, 159-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k189, env)}),
      _var1);
 }
}
void _V0format_lambda16(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0format_lambda16:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0format_lambda16\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case1__V0format_lambda16\n"
"    jmp _V20CaseError__V0format_lambda16\n"
);
static void _V0vanity_V0core_V20_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k163) (bruijn format 158 152) (close _V0format_lambda16))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k163, env)}),
      VEncodeInt(158l), VEncodeInt(152l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_lambda16, env)})
    );
 }
}
static void _V0sprintf_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0sprintf_k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0sprintf_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_k197, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.501 4 0) (bruijn ret 1 0))
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]);
 }
}
static void _V0sprintf_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0sprintf_k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0sprintf_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn close-port 161 113) (close _V0sprintf_k197) (bruijn strport 2 0))
V_CALL(VGetArg(upenv, 161-1, 113), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_k197, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0sprintf_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0sprintf_k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0sprintf_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn get-output-string 160 120) (close _V0sprintf_k196) (bruijn strport 1 0))
V_CALL(VGetArg(upenv, 160-1, 120), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_k196, env)}),
      upenv->vars[0]);
 }
}
static void _V0sprintf_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0sprintf_k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0sprintf_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn format-printf 159 148) (close _V0sprintf_k195) (bruijn strport 0 0) (bruijn fmt 1 1) (bruijn args 1 2))
V_CALL(VGetArg(upenv, 159-1, 148), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_k195, env)}),
      _var0,
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0sprintf_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V0sprintf_lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc < 2) {
  VError("Not enough arguments to _V0sprintf_lambda17, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_lambda17, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((bruijn open-output-string 158 119) (close _V0sprintf_k194))
V_CALL(VGetArg(upenv, 158-1, 119), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_k194, env)}));
 }
}
static void _V0vanity_V0core_V20_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k162) (bruijn sprintf 157 151) (close _V0sprintf_lambda17))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k162, env)}),
      VEncodeInt(157l), VEncodeInt(151l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_lambda17, env)})
    );
 }
}
static void _V0printf_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printf_k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printf_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printf_k198, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-printf 158 148) (bruijn ##k.504 1 0) (bruijn ##x.505 0 0) (bruijn fmt 1 1) '())
V_CALL(VGetArg(upenv, 158-1, 148), runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[1],
      VNULL);
 }
}
static void _V0printf_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printf_k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printf_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printf_k201, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-printf 160 148) (bruijn ##k.506 3 0) (bruijn ##x.508 1 0) (bruijn a 3 1) (bruijn ##x.509 0 0))
V_CALL(VGetArg(upenv, 160-1, 148), runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V0printf_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printf_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printf_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printf_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 159 36) (close _V0printf_k201) (bruijn b 2 2) (bruijn args 2 3))
V_CALL(VGetArg(upenv, 159-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_k201, env)}),
      upenv->up->vars[2],
      upenv->up->vars[3]);
 }
}
static void _V0printf_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printf_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printf_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printf_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.507 0 0) ((bruijn current-output-port 158 109) (close _V0printf_k200)) ((bruijn format-printf 158 148) (bruijn ##k.506 1 0) (bruijn a 1 1) (bruijn b 1 2) (bruijn args 1 3)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 158-1, 109), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_k200, env)}));
} else {
V_CALL(VGetArg(upenv, 158-1, 148), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2],
      upenv->vars[3]);
}
 }
}
__attribute__((used)) static void _V20CaseError__V0printf_lambda18(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0printf_lambda18 #t (2 ((bruijn current-output-port 157 109) (close _V0printf_k198))) (3 + ((bruijn string? 157 7) (close _V0printf_k199) (bruijn a 0 1))))
 VError("Not enough arguments to _V0printf_lambda18, got ~D~N"
 "-- expected 2~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0printf_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0printf_lambda18" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0printf_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 157 109) (close _V0printf_k198))
V_CALL(VGetArg(upenv, 157-1, 109), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_k198, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0printf_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case1__V0printf_lambda18" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0printf_lambda18, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((bruijn string? 157 7) (close _V0printf_k199) (bruijn a 0 1))
V_CALL(VGetArg(upenv, 157-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_k199, env)}),
      _var1);
 }
}
void _V0printf_lambda18(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0printf_lambda18:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0printf_lambda18\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case1__V0printf_lambda18\n"
"    jmp _V20CaseError__V0printf_lambda18\n"
);
static void _V0vanity_V0core_V20_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k161) (bruijn printf 156 150) (close _V0printf_lambda18))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k161, env)}),
      VEncodeInt(156l), VEncodeInt(150l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_lambda18, env)})
    );
 }
}
static void _V0format__sprintf_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__sprintf_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__sprintf_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_k205, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.510 4 0) (bruijn ret 1 0))
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]);
 }
}
static void _V0format__sprintf_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__sprintf_k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__sprintf_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn close-port 159 113) (close _V0format__sprintf_k205) (bruijn strport 2 0))
V_CALL(VGetArg(upenv, 159-1, 113), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_k205, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0format__sprintf_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__sprintf_k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__sprintf_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn get-output-string 158 120) (close _V0format__sprintf_k204) (bruijn strport 1 0))
V_CALL(VGetArg(upenv, 158-1, 120), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_k204, env)}),
      upenv->vars[0]);
 }
}
static void _V0format__sprintf_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__sprintf_k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__sprintf_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn format-printf 157 148) (close _V0format__sprintf_k203) (bruijn strport 0 0) (bruijn fmt 1 1) (bruijn args 1 2))
V_CALL(VGetArg(upenv, 157-1, 148), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_k203, env)}),
      _var0,
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0format__sprintf_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0format__sprintf_lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0format__sprintf_lambda19, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_lambda19, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn open-output-string 156 119) (close _V0format__sprintf_k202))
V_CALL(VGetArg(upenv, 156-1, 119), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_k202, env)}));
 }
}
static void _V0vanity_V0core_V20_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k160) (bruijn format-sprintf 155 149) (close _V0format__sprintf_lambda19))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k160, env)}),
      VEncodeInt(155l), VEncodeInt(149l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_lambda19, env)})
    );
 }
}
static void _V0format__printf_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k212, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.549 1 0) ((bruijn error 164 153) (bruijn ##k.550 0 0) (##string ##string.1124) (bruijn fmt 9 2)) ((bruijn ##k.550 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 164-1, 153), runtime,
      _var0,
      VEncodePointer(&_V10string_D1124.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 2));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0format__printf_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k218, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 12 0) (bruijn ##k.514 11 0) (bruijn ##x.520 0 0) (bruijn args 11 2))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0,
      VGetArg(upenv, 11-1, 2));
 }
}
static void _V0format__printf_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 168 28) (close _V0format__printf_k218) (bruijn i 10 1) 2)
V_CALL(VGetArg(upenv, 168-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k218, env)}),
      VGetArg(upenv, 10-1, 1),
      VEncodeInt(2l));
 }
}
static void _V0format__printf_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k220, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.546 1 0) ((bruijn ##k.547 0 0) (bruijn ##p.546 1 0)) ((bruijn eqv? 169 15) (bruijn ##k.547 0 0) (bruijn ##x.1 3 0) '#\N))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 169-1, 15), runtime,
      _var0,
      upenv->up->up->vars[0],
      VEncodeChar('N'));
}
 }
}
static void _V0format__printf_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k223, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 14 0) (bruijn ##k.514 13 0) (bruijn ##x.523 0 0) (bruijn args 13 2))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VGetArg(upenv, 13-1, 0),
      _var0,
      VGetArg(upenv, 13-1, 2));
 }
}
static void _V0format__printf_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 170 28) (close _V0format__printf_k223) (bruijn i 12 1) 2)
V_CALL(VGetArg(upenv, 170-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k223, env)}),
      VGetArg(upenv, 12-1, 1),
      VEncodeInt(2l));
 }
}
static void _V0format__printf_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k225, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.544 1 0) ((bruijn ##k.545 0 0) (bruijn ##p.544 1 0)) ((bruijn eqv? 171 15) (bruijn ##k.545 0 0) (bruijn ##x.1 5 0) '#\A))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 171-1, 15), runtime,
      _var0,
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('A'));
}
 }
}
static void _V0format__printf_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k228, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.530 1 0) ((bruijn error 173 153) (bruijn ##k.531 0 0) (##string ##string.1125) (bruijn fmt 18 2)) ((bruijn ##k.531 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 173-1, 153), runtime,
      _var0,
      VEncodePointer(&_V10string_D1125.sym, VPOINTER_OTHER),
      VGetArg(upenv, 18-1, 2));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0format__printf_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k233, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 20 0) (bruijn ##k.514 19 0) (bruijn ##x.527 1 0) (bruijn ##x.528 0 0))
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VGetArg(upenv, 19-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0format__printf_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 176 38) (close _V0format__printf_k233) (bruijn args 18 2))
V_CALL(VGetArg(upenv, 176-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k233, env)}),
      VGetArg(upenv, 18-1, 2));
 }
}
static void _V0format__printf_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 175 28) (close _V0format__printf_k232) (bruijn i 17 1) 2)
V_CALL(VGetArg(upenv, 175-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k232, env)}),
      VGetArg(upenv, 17-1, 1),
      VEncodeInt(2l));
 }
}
static void _V0format__printf_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn display 174 130) (close _V0format__printf_k231) (bruijn ##x.529 0 0) (bruijn port 19 1))
V_CALL(VGetArg(upenv, 174-1, 130), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k231, env)}),
      _var0,
      VGetArg(upenv, 19-1, 1));
 }
}
static void _V0format__printf_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 173 37) (close _V0format__printf_k230) (bruijn args 15 2))
V_CALL(VGetArg(upenv, 173-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k230, env)}),
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V0format__printf_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0format__printf_k228) (close _V0format__printf_k229))
V_CALL_FUNC(_V0format__printf_k228, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k229, env)}));
 }
}
static void _V0format__printf_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k235, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.542 1 0) ((bruijn ##k.543 0 0) (bruijn ##p.542 1 0)) ((bruijn eqv? 173 15) (bruijn ##k.543 0 0) (bruijn ##x.1 7 0) '#\S))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 173-1, 15), runtime,
      _var0,
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('S'));
}
 }
}
static void _V0format__printf_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k238, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.538 1 0) ((bruijn error 175 153) (bruijn ##k.539 0 0) (##string ##string.1125) (bruijn fmt 20 2)) ((bruijn ##k.539 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 175-1, 153), runtime,
      _var0,
      VEncodePointer(&_V10string_D1125.sym, VPOINTER_OTHER),
      VGetArg(upenv, 20-1, 2));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0format__printf_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k243, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 22 0) (bruijn ##k.514 21 0) (bruijn ##x.535 1 0) (bruijn ##x.536 0 0))
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VGetArg(upenv, 21-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0format__printf_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 178 38) (close _V0format__printf_k243) (bruijn args 20 2))
V_CALL(VGetArg(upenv, 178-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k243, env)}),
      VGetArg(upenv, 20-1, 2));
 }
}
static void _V0format__printf_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 177 28) (close _V0format__printf_k242) (bruijn i 19 1) 2)
V_CALL(VGetArg(upenv, 177-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k242, env)}),
      VGetArg(upenv, 19-1, 1),
      VEncodeInt(2l));
 }
}
static void _V0format__printf_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn write 176 131) (close _V0format__printf_k241) (bruijn ##x.537 0 0) (bruijn port 21 1))
V_CALL(VGetArg(upenv, 176-1, 131), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k241, env)}),
      _var0,
      VGetArg(upenv, 21-1, 1));
 }
}
static void _V0format__printf_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 175 37) (close _V0format__printf_k240) (bruijn args 17 2))
V_CALL(VGetArg(upenv, 175-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k240, env)}),
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V0format__printf_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0format__printf_k238) (close _V0format__printf_k239))
V_CALL_FUNC(_V0format__printf_k238, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k239, env)}));
 }
}
static void _V0format__printf_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k245, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 175 153) (bruijn ##k.514 17 0) (##string ##string.1126) (bruijn ##x.540 0 0))
V_CALL(VGetArg(upenv, 175-1, 153), runtime,
      VGetArg(upenv, 17-1, 0),
      VEncodePointer(&_V10string_D1126.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0format__printf_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn substring 174 84) (close _V0format__printf_k245) (bruijn fmt 19 2) (bruijn i 16 1) (bruijn ##x.541 0 0))
V_CALL(VGetArg(upenv, 174-1, 84), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k245, env)}),
      VGetArg(upenv, 19-1, 2),
      VGetArg(upenv, 16-1, 1),
      _var0);
 }
}
static void _V0format__printf_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.532 0 0) ((bruijn null? 173 0) (close _V0format__printf_k237) (bruijn args 15 2)) ((bruijn + 173 28) (close _V0format__printf_k244) (bruijn i 15 1) 2))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 173-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k237, env)}),
      VGetArg(upenv, 15-1, 2));
} else {
V_CALL(VGetArg(upenv, 173-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k244, env)}),
      VGetArg(upenv, 15-1, 1),
      VEncodeInt(2l));
}
 }
}
static void _V0format__printf_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0format__printf_k235) (close _V0format__printf_k236))
V_CALL_FUNC(_V0format__printf_k235, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k236, env)}));
 }
}
static void _V0format__printf_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.524 0 0) ((bruijn null? 171 0) (close _V0format__printf_k227) (bruijn args 13 2)) ((bruijn eqv? 171 15) (close _V0format__printf_k234) (bruijn ##x.1 5 0) '#\s))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 171-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k227, env)}),
      VGetArg(upenv, 13-1, 2));
} else {
V_CALL(VGetArg(upenv, 171-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k234, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('s'));
}
 }
}
static void _V0format__printf_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0format__printf_k225) (close _V0format__printf_k226))
V_CALL_FUNC(_V0format__printf_k225, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k226, env)}));
 }
}
static void _V0format__printf_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.521 0 0) (##sys.display-word (close _V0format__printf_k222) #\newline (bruijn port 14 1)) ((bruijn eqv? 169 15) (close _V0format__printf_k224) (bruijn ##x.1 3 0) '#\a))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k222, env)}),
      VEncodeChar('\n'),
      VGetArg(upenv, 14-1, 1));
} else {
V_CALL(VGetArg(upenv, 169-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k224, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('a'));
}
 }
}
static void _V0format__printf_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0format__printf_k220) (close _V0format__printf_k221))
V_CALL_FUNC(_V0format__printf_k220, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k221, env)}));
 }
}
static void _V0format__printf_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.518 0 0) (##sys.display-word (close _V0format__printf_k217) #\~ (bruijn port 12 1)) ((bruijn eqv? 167 15) (close _V0format__printf_k219) (bruijn ##x.1 1 0) '#\n))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k217, env)}),
      VEncodeChar('~'),
      VGetArg(upenv, 12-1, 1));
} else {
V_CALL(VGetArg(upenv, 167-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k219, env)}),
      upenv->vars[0],
      VEncodeChar('n'));
}
 }
}
static void _V0format__printf_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 166 15) (close _V0format__printf_k216) (bruijn ##x.1 0 0) '#\~)
V_CALL(VGetArg(upenv, 166-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k216, env)}),
      _var0,
      VEncodeChar('~'));
 }
}
static void _V0format__printf_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-ref 165 87) (close _V0format__printf_k215) (bruijn fmt 10 2) (bruijn ##x.548 0 0))
V_CALL(VGetArg(upenv, 165-1, 87), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k215, env)}),
      VGetArg(upenv, 10-1, 2),
      _var0);
 }
}
static void _V0format__printf_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 164 28) (close _V0format__printf_k214) (bruijn i 6 1) 1)
V_CALL(VGetArg(upenv, 164-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k214, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeInt(1l));
 }
}
static void _V0format__printf_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0format__printf_k212) (close _V0format__printf_k213))
V_CALL_FUNC(_V0format__printf_k212, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k213, env)}));
 }
}
static void _V0format__printf_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 162 20) (close _V0format__printf_k211) (bruijn ##x.551 0 0) (bruijn len 6 0))
V_CALL(VGetArg(upenv, 162-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k211, env)}),
      _var0,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0format__printf_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k247, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.514 5 0) (bruijn ##x.553 0 0) (bruijn args 5 2))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0format__printf_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 162 28) (close _V0format__printf_k247) (bruijn i 4 1) 1)
V_CALL(VGetArg(upenv, 162-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k247, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0format__printf_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.516 0 0) ((bruijn + 161 28) (close _V0format__printf_k210) (bruijn i 3 1) 1) (##sys.display-word (close _V0format__printf_k246) (bruijn c 1 0) (bruijn port 6 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 161-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k210, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k246, env)}),
      upenv->vars[0],
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V0format__printf_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 160 13) (close _V0format__printf_k209) (bruijn c 0 0) #\~)
V_CALL(VGetArg(upenv, 160-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k209, env)}),
      _var0,
      VEncodeChar('~'));
 }
}
static void _V0format__printf_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.515 0 0) ((bruijn string-ref 159 87) (close _V0format__printf_k208) (bruijn fmt 4 2) (bruijn i 1 1)) ((bruijn ##k.514 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 159-1, 87), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k208, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0format__printf_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0format__printf_lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0format__printf_lambda21, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_lambda21, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn < 158 19) (close _V0format__printf_k207) (bruijn i 0 1) (bruijn len 2 0))
V_CALL(VGetArg(upenv, 158-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k207, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V0format__printf_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0format__printf_lambda21)) ((bruijn loop 0 0) (bruijn ##k.513 2 0) 0 (bruijn args 2 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_lambda21, env)});
V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l),
      upenv->up->vars[3]);
    }
 }
}
static void _V0format__printf_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0format__printf_lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0format__printf_lambda20, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_lambda20, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn string-length 155 89) (close _V0format__printf_k206) (bruijn fmt 0 2))
V_CALL(VGetArg(upenv, 155-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k206, env)}),
      _var2);
 }
}
static void _V0vanity_V0core_V20_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k159) (bruijn format-printf 154 148) (close _V0format__printf_lambda20))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k159, env)}),
      VEncodeInt(154l), VEncodeInt(148l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_lambda20, env)})
    );
 }
}
static void _V0writeln_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0writeln_k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0writeln_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0writeln_k248, runtime, upenv, 1, argc, _var0) {
  // ((bruijn writeln 155 147) (bruijn ##k.554 1 0) (bruijn x 1 1) (bruijn ##x.555 0 0))
V_CALL(VGetArg(upenv, 155-1, 147), runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
 }
}
static void _V0writeln_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0writeln_k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0writeln_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0writeln_k249, runtime, upenv, 1, argc, _var0) {
  // ((bruijn newline 155 126) (bruijn ##k.556 1 0) (bruijn port 1 2))
V_CALL(VGetArg(upenv, 155-1, 126), runtime,
      upenv->vars[0],
      upenv->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V0writeln_lambda22(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0writeln_lambda22 #t (2 ((bruijn current-output-port 154 109) (close _V0writeln_k248))) (3 ((bruijn write 154 131) (close _V0writeln_k249) (bruijn x 0 1) (bruijn port 0 2))))
 VError("Not enough arguments to _V0writeln_lambda22, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0writeln_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0writeln_lambda22" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0writeln_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 154 109) (close _V0writeln_k248))
V_CALL(VGetArg(upenv, 154-1, 109), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0writeln_k248, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0writeln_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0writeln_lambda22" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0writeln_lambda22, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn write 154 131) (close _V0writeln_k249) (bruijn x 0 1) (bruijn port 0 2))
V_CALL(VGetArg(upenv, 154-1, 131), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0writeln_k249, env)}),
      _var1,
      _var2);
 }
}
void _V0writeln_lambda22(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0writeln_lambda22:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0writeln_lambda22\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0writeln_lambda22\n"
"    jmp _V20CaseError__V0writeln_lambda22\n"
);
static void _V0vanity_V0core_V20_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k158) (bruijn writeln 153 147) (close _V0writeln_lambda22))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k158, env)}),
      VEncodeInt(153l), VEncodeInt(147l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0writeln_lambda22, env)})
    );
 }
}
static void _V0displayln_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0displayln_k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0displayln_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0displayln_k250, runtime, upenv, 1, argc, _var0) {
  // ((bruijn displayln 154 146) (bruijn ##k.558 1 0) (bruijn x 1 1) (bruijn ##x.559 0 0))
V_CALL(VGetArg(upenv, 154-1, 146), runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
 }
}
static void _V0displayln_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0displayln_k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0displayln_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0displayln_k251, runtime, upenv, 1, argc, _var0) {
  // ((bruijn newline 154 126) (bruijn ##k.560 1 0) (bruijn port 1 2))
V_CALL(VGetArg(upenv, 154-1, 126), runtime,
      upenv->vars[0],
      upenv->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V0displayln_lambda23(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0displayln_lambda23 #t (2 ((bruijn current-output-port 153 109) (close _V0displayln_k250))) (3 ((bruijn display 153 130) (close _V0displayln_k251) (bruijn x 0 1) (bruijn port 0 2))))
 VError("Not enough arguments to _V0displayln_lambda23, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0displayln_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0displayln_lambda23" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0displayln_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 153 109) (close _V0displayln_k250))
V_CALL(VGetArg(upenv, 153-1, 109), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0displayln_k250, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0displayln_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0displayln_lambda23" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0displayln_lambda23, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn display 153 130) (close _V0displayln_k251) (bruijn x 0 1) (bruijn port 0 2))
V_CALL(VGetArg(upenv, 153-1, 130), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0displayln_k251, env)}),
      _var1,
      _var2);
 }
}
void _V0displayln_lambda23(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0displayln_lambda23:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0displayln_lambda23\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0displayln_lambda23\n"
"    jmp _V20CaseError__V0displayln_lambda23\n"
);
static void _V0vanity_V0core_V20_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k157) (bruijn displayln 152 146) (close _V0displayln_lambda23))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k157, env)}),
      VEncodeInt(152l), VEncodeInt(146l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0displayln_lambda23, env)})
    );
 }
}
static void _V0atom_Q_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0atom_Q_k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0atom_Q_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0atom_Q_k252, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 153 18) (bruijn ##k.562 1 0) (bruijn ##x.563 0 0))
V_CALL(VGetArg(upenv, 153-1, 18), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0atom_Q_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0atom_Q_lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0atom_Q_lambda24, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0atom_Q_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 152 3) (close _V0atom_Q_k252) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 152-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0atom_Q_k252, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k156) (bruijn atom? 151 145) (close _V0atom_Q_lambda24))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k156, env)}),
      VEncodeInt(151l), VEncodeInt(145l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0atom_Q_lambda24, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k155) (bruijn exit 150 144) (##intrinsic ##sys.exit))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k155, env)}),
      VEncodeInt(150l), VEncodeInt(144l),
      _V40_V10sys_Dexit
    );
 }
}
static void _V0vanity_V0core_V20_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k154) (bruijn make-temporary-file 149 143) (##intrinsic ##sys.make-temporary-file))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k154, env)}),
      VEncodeInt(149l), VEncodeInt(143l),
      _V40_V10sys_Dmake__temporary__file
    );
 }
}
static void _V0vanity_V0core_V20_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k153) (bruijn open-output-process 148 142) (##intrinsic ##sys.open-output-process))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k153, env)}),
      VEncodeInt(148l), VEncodeInt(142l),
      _V40_V10sys_Dopen__output__process
    );
 }
}
static void _V0vanity_V0core_V20_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k152) (bruijn open-input-process 147 141) (##intrinsic ##sys.open-input-process))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k152, env)}),
      VEncodeInt(147l), VEncodeInt(141l),
      _V40_V10sys_Dopen__input__process
    );
 }
}
static void _V0vanity_V0core_V20_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k151) (bruijn system 146 140) (##intrinsic ##sys.system))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k151, env)}),
      VEncodeInt(146l), VEncodeInt(140l),
      _V40_V10sys_Dsystem
    );
 }
}
static void _V0vanity_V0core_V20_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k150) (bruijn command-line 145 139) (##intrinsic ##sys.command-line))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k150, env)}),
      VEncodeInt(145l), VEncodeInt(139l),
      _V40_V10sys_Dcommand__line
    );
 }
}
static void _V0vanity_V0core_V20_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k149) (bruijn mutator 144 138) (bruijn ##vcore.mutator 145 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k149, env)}),
      VEncodeInt(144l), VEncodeInt(138l),
      VGetArg(upenv, 145-1, 1)
    );
 }
}
static void _V0vanity_V0core_V20_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k148) (bruijn setter 143 137) (bruijn ##vcore.setter 144 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k148, env)}),
      VEncodeInt(143l), VEncodeInt(137l),
      VGetArg(upenv, 144-1, 0)
    );
 }
}
static void _V0values_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0values_lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0values_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0values_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn apply 144 135) (bruijn ##k.565 0 0) (bruijn k 0 1) (bruijn args 1 1))
V_CALL(VGetArg(upenv, 144-1, 135), runtime,
      _var0,
      _var1,
      upenv->vars[1]);
 }
}
static void _V0values_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0values_lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0values_lambda25, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0values_lambda25, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((bruijn call/cc 143 132) (bruijn ##k.564 0 0) (close _V0values_lambda26))
V_CALL(VGetArg(upenv, 143-1, 132), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0values_lambda26, env)}));
 }
}
static void _V0vanity_V0core_V20_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k147) (bruijn values 142 136) (close _V0values_lambda25))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k147, env)}),
      VEncodeInt(142l), VEncodeInt(136l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0values_lambda25, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k146) (bruijn apply 141 135) (##intrinsic ##sys.apply))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k146, env)}),
      VEncodeInt(141l), VEncodeInt(135l),
      _V40_V10sys_Dapply
    );
 }
}
static void _V0vanity_V0core_V20_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k145) (bruijn call-with-values 140 134) (##intrinsic ##sys.call-with-values))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k145, env)}),
      VEncodeInt(140l), VEncodeInt(134l),
      _V40_V10sys_Dcall__with__values
    );
 }
}
static void _V0vanity_V0core_V20_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k144) (bruijn call-with-current-continuation 139 133) (##intrinsic ##sys.call/cc))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k144, env)}),
      VEncodeInt(139l), VEncodeInt(133l),
      _V40_V10sys_Dcall_Wcc
    );
 }
}
static void _V0vanity_V0core_V20_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k143) (bruijn call/cc 138 132) (##intrinsic ##sys.call/cc))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k143, env)}),
      VEncodeInt(138l), VEncodeInt(132l),
      _V40_V10sys_Dcall_Wcc
    );
 }
}
static void _V0write_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0write_k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0write_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0write_k253, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printout 139 129) (bruijn ##k.566 1 0) (bruijn x 1 1) #t (bruijn ##x.567 0 0))
V_CALL(VGetArg(upenv, 139-1, 129), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeBool(true),
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0write_lambda27(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0write_lambda27 #t (2 ((bruijn current-output-port 138 109) (close _V0write_k253))) (3 ((bruijn printout 138 129) (bruijn ##k.568 0 0) (bruijn x 0 1) #t (bruijn port 0 2))))
 VError("Not enough arguments to _V0write_lambda27, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0write_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0write_lambda27" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0write_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 138 109) (close _V0write_k253))
V_CALL(VGetArg(upenv, 138-1, 109), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0write_k253, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0write_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0write_lambda27" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0write_lambda27, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn printout 138 129) (bruijn ##k.568 0 0) (bruijn x 0 1) #t (bruijn port 0 2))
V_CALL(VGetArg(upenv, 138-1, 129), runtime,
      _var0,
      _var1,
      VEncodeBool(true),
      _var2);
 }
}
void _V0write_lambda27(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0write_lambda27:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0write_lambda27\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0write_lambda27\n"
"    jmp _V20CaseError__V0write_lambda27\n"
);
static void _V0vanity_V0core_V20_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k142) (bruijn write 137 131) (close _V0write_lambda27))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k142, env)}),
      VEncodeInt(137l), VEncodeInt(131l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0write_lambda27, env)})
    );
 }
}
static void _V0display_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display_k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display_k254, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printout 138 129) (bruijn ##k.569 1 0) (bruijn x 1 1) #f (bruijn ##x.570 0 0))
V_CALL(VGetArg(upenv, 138-1, 129), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeBool(false),
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0display_lambda28(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0display_lambda28 #t (2 ((bruijn current-output-port 137 109) (close _V0display_k254))) (3 ((bruijn printout 137 129) (bruijn ##k.571 0 0) (bruijn x 0 1) #f (bruijn port 0 2))))
 VError("Not enough arguments to _V0display_lambda28, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0display_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0display_lambda28" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0display_lambda28, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 137 109) (close _V0display_k254))
V_CALL(VGetArg(upenv, 137-1, 109), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display_k254, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0display_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0display_lambda28" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0display_lambda28, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn printout 137 129) (bruijn ##k.571 0 0) (bruijn x 0 1) #f (bruijn port 0 2))
V_CALL(VGetArg(upenv, 137-1, 129), runtime,
      _var0,
      _var1,
      VEncodeBool(false),
      _var2);
 }
}
void _V0display_lambda28(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0display_lambda28:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0display_lambda28\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0display_lambda28\n"
"    jmp _V20CaseError__V0display_lambda28\n"
);
static void _V0vanity_V0core_V20_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k141) (bruijn display 136 130) (close _V0display_lambda28))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k141, env)}),
      VEncodeInt(136l), VEncodeInt(130l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display_lambda28, env)})
    );
 }
}
static void _V0printout_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k257, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.574 0 0) ((bruijn printout-quotation 139 128) (bruijn ##k.572 3 0) (bruijn x 3 1) (bruijn write? 3 2) (bruijn port 3 3)) ((bruijn printout-list 139 127) (bruijn ##k.572 3 0) (bruijn x 3 1) (bruijn write? 3 2) (bruijn port 3 3)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 139-1, 128), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
V_CALL(VGetArg(upenv, 139-1, 127), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
}
 }
}
static void _V0printout_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn memq 138 77) (close _V0printout_k257) (bruijn ##x.575 0 0) (##inline ##sys.qcons 'quote (##inline ##sys.qcons 'quasiquote (##inline ##sys.qcons 'unquote (##inline ##sys.qcons 'unquote-splicing '())))))
V_CALL(VGetArg(upenv, 138-1, 77), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k257, env)}),
      _var0,
      VInlineCons(
        _V0quote,
        VInlineCons(
        _V0quasiquote,
        VInlineCons(
        _V0unquote,
        VInlineCons(
        _V0unquote__splicing,
        VNULL)))));
 }
}
static void _V0printout_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k263, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.589 1 0) ((bruijn ##k.590 0 0) #f) (##sys.display-word (bruijn ##k.590 0 0) (##string ##string.1121) (bruijn port 9 3)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VEncodeBool(false));
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1121.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 3));
}
 }
}
static void _V0printout_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k267, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 0) (bruijn ##k.583 6 0) (bruijn ##x.587 0 0))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0printout_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 147 28) (close _V0printout_k267) (bruijn i 5 1) 1)
V_CALL(VGetArg(upenv, 147-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k267, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l));
 }
}
static void _V0printout_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printout 146 129) (close _V0printout_k266) (bruijn ##x.588 0 0) (bruijn write? 10 2) (bruijn port 10 3))
V_CALL(VGetArg(upenv, 146-1, 129), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k266, env)}),
      _var0,
      VGetArg(upenv, 10-1, 2),
      VGetArg(upenv, 10-1, 3));
 }
}
static void _V0printout_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-ref 145 98) (close _V0printout_k265) (bruijn x 9 1) (bruijn i 3 1))
V_CALL(VGetArg(upenv, 145-1, 98), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k265, env)}),
      VGetArg(upenv, 9-1, 1),
      upenv->up->up->vars[1]);
 }
}
static void _V0printout_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0printout_k263) (close _V0printout_k264))
V_CALL_FUNC(_V0printout_k263, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k264, env)}));
 }
}
static void _V0printout_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.584 0 0) ((bruijn ##k.583 1 0) #f) ((bruijn eq? 143 13) (close _V0printout_k262) (bruijn i 1 1) 0))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 143-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k262, env)}),
      upenv->vars[1],
      VEncodeInt(0l));
}
 }
}
static void _V0printout_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0printout_lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0printout_lambda30, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eq? 142 13) (close _V0printout_k261) (bruijn i 0 1) (bruijn len 3 0))
V_CALL(VGetArg(upenv, 142-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k261, env)}),
      _var1,
      upenv->up->up->vars[0]);
 }
}
static void _V0printout_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k268, runtime, upenv, 1, argc, _var0) {
  // (##sys.display-word (bruijn ##k.572 6 0) (##string ##string.1127) (bruijn port 6 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1127.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0printout_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0printout_lambda30)) ((bruijn loop 0 0) (close _V0printout_k268) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_lambda30, env)});
V_CALL(env->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k268, env)}),
      VEncodeInt(0l));
    }
 }
}
static void _V0printout_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##sys.display-word (close _V0printout_k260) (##string ##string.1128) (bruijn port 3 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k260, env)}),
      VEncodePointer(&_V10string_D1128.sym, VPOINTER_OTHER),
      upenv->up->up->vars[3]);
 }
}
static void _V0printout_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.580 0 0) ((bruijn vector-length 138 100) (close _V0printout_k259) (bruijn x 2 1)) (if (bruijn write? 2 2) (##sys.write (bruijn ##k.572 2 0) (bruijn x 2 1) (bruijn port 2 3)) (##sys.display-word (bruijn ##k.572 2 0) (bruijn x 2 1) (bruijn port 2 3))))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 138-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k259, env)}),
      upenv->up->vars[1]);
} else {
if(VDecodeBool(
upenv->up->vars[2])) {
    V_CALL_FUNC(VWrite2, NULL, runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[3]);
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[3]);
}
}
 }
}
static void _V0printout_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.573 0 0) ((bruijn car 137 37) (close _V0printout_k256) (bruijn x 1 1)) ((bruijn vector? 137 4) (close _V0printout_k258) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 137-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k256, env)}),
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 137-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k258, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0printout_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0printout_lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0printout_lambda29, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_lambda29, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn pair? 136 3) (close _V0printout_k255) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 136-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k255, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k140) (bruijn printout 135 129) (close _V0printout_lambda29))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k140, env)}),
      VEncodeInt(135l), VEncodeInt(129l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_lambda29, env)})
    );
 }
}
static void _V0printout__quotation_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__quotation_k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__quotation_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__quotation_k273, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printout 140 129) (bruijn ##k.591 5 0) (bruijn ##x.593 0 0) (bruijn write? 5 2) (bruijn port 5 3))
V_CALL(VGetArg(upenv, 140-1, 129), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V0printout__quotation_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__quotation_k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__quotation_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__quotation_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 139 42) (close _V0printout__quotation_k273) (bruijn x 4 1))
V_CALL(VGetArg(upenv, 139-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__quotation_k273, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0printout__quotation_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__quotation_k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__quotation_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__quotation_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##sys.display-word (close _V0printout__quotation_k272) (bruijn ##x.594 0 0) (bruijn port 3 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__quotation_k272, env)}),
      _var0,
      upenv->up->up->vars[3]);
 }
}
static void _V0printout__quotation_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__quotation_k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__quotation_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__quotation_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 137 38) (close _V0printout__quotation_k271) (bruijn ##x.595 0 0))
V_CALL(VGetArg(upenv, 137-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__quotation_k271, env)}),
      _var0);
 }
}
static void _V0printout__quotation_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__quotation_k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__quotation_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__quotation_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn assv 136 81) (close _V0printout__quotation_k270) (bruijn ##x.596 0 0) (##inline ##sys.qcons (##inline ##sys.qcons 'quote '(##string ##string.1129)) (##inline ##sys.qcons (##inline ##sys.qcons 'quasiquote '(##string ##string.1130)) (##inline ##sys.qcons (##inline ##sys.qcons 'unquote '(##string ##string.1131)) (##inline ##sys.qcons (##inline ##sys.qcons 'unquote-splicing '(##string ##string.1132)) '())))))
V_CALL(VGetArg(upenv, 136-1, 81), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__quotation_k270, env)}),
      _var0,
      VInlineCons(
        VInlineCons(
        _V0quote,
        VEncodePointer(&_V10string_D1129.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0quasiquote,
        VEncodePointer(&_V10string_D1130.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0unquote,
        VEncodePointer(&_V10string_D1131.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0unquote__splicing,
        VEncodePointer(&_V10string_D1132.sym, VPOINTER_OTHER)),
        VNULL)))));
 }
}
static void _V0printout__quotation_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0printout__quotation_lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0printout__quotation_lambda31, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__quotation_lambda31, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn car 135 37) (close _V0printout__quotation_k269) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 135-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__quotation_k269, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k139) (bruijn printout-quotation 134 128) (close _V0printout__quotation_lambda31))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k139, env)}),
      VEncodeInt(134l), VEncodeInt(128l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__quotation_lambda31, env)})
    );
 }
}
static void _V0printout__list_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__list_k281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__list_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_k281, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.609 5 0) (bruijn ##x.613 0 0))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0printout__list_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__list_k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__list_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 143 38) (close _V0printout__list_k281) (bruijn xs 4 1))
V_CALL(VGetArg(upenv, 143-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_k281, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0printout__list_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__list_k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__list_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printout 142 129) (close _V0printout__list_k280) (bruijn ##x.614 0 0) (bruijn write? 8 2) (bruijn port 8 3))
V_CALL(VGetArg(upenv, 142-1, 129), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_k280, env)}),
      _var0,
      VGetArg(upenv, 8-1, 2),
      VGetArg(upenv, 8-1, 3));
 }
}
static void _V0printout__list_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__list_k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__list_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 141 37) (close _V0printout__list_k279) (bruijn xs 2 1))
V_CALL(VGetArg(upenv, 141-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_k279, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0printout__list_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__list_k283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__list_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_k283, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printout 142 129) (bruijn ##k.609 3 0) (bruijn xs 3 1) (bruijn write? 8 2) (bruijn port 8 3))
V_CALL(VGetArg(upenv, 142-1, 129), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      VGetArg(upenv, 8-1, 2),
      VGetArg(upenv, 8-1, 3));
 }
}
static void _V0printout__list_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__list_k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__list_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.615 0 0) ((bruijn ##k.609 2 0) 'ok) (##sys.display-word (close _V0printout__list_k283) (##string ##string.1133) (bruijn port 7 3)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      _V0ok);
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_k283, env)}),
      VEncodePointer(&_V10string_D1133.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 3));
}
 }
}
static void _V0printout__list_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__list_k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__list_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.610 0 0) (##sys.display-word (close _V0printout__list_k278) (##string ##string.1121) (bruijn port 6 3)) ((bruijn null? 140 0) (close _V0printout__list_k282) (bruijn xs 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_k278, env)}),
      VEncodePointer(&_V10string_D1121.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 3));
} else {
V_CALL(VGetArg(upenv, 140-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_k282, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0printout__list_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0printout__list_lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0printout__list_lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_lambda33, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 139 3) (close _V0printout__list_k277) (bruijn xs 0 1))
V_CALL(VGetArg(upenv, 139-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_k277, env)}),
      _var1);
 }
}
static void _V0printout__list_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__list_k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__list_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_k285, runtime, upenv, 1, argc, _var0) {
  // (##sys.display-word (bruijn ##k.605 6 0) (##string ##string.1127) (bruijn port 6 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1127.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0printout__list_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__list_k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__list_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 1 0) (close _V0printout__list_k285) (bruijn ##x.617 0 0))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_k285, env)}),
      _var0);
 }
}
static void _V0printout__list_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__list_k276" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__list_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0printout__list_lambda33)) ((bruijn cdr 138 38) (close _V0printout__list_k284) (bruijn x 4 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_lambda33, env)});
V_CALL(VGetArg(upenv, 138-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_k284, env)}),
      upenv->up->up->up->vars[1]);
    }
 }
}
static void _V0printout__list_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__list_k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__list_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printout 136 129) (close _V0printout__list_k276) (bruijn ##x.618 0 0) (bruijn write? 2 2) (bruijn port 2 3))
V_CALL(VGetArg(upenv, 136-1, 129), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_k276, env)}),
      _var0,
      upenv->up->vars[2],
      upenv->up->vars[3]);
 }
}
static void _V0printout__list_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__list_k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__list_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 135 37) (close _V0printout__list_k275) (bruijn x 1 1))
V_CALL(VGetArg(upenv, 135-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_k275, env)}),
      upenv->vars[1]);
 }
}
static void _V0printout__list_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0printout__list_lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0printout__list_lambda32, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_lambda32, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (##sys.display-word (close _V0printout__list_k274) (##string ##string.1134) (bruijn port 0 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_k274, env)}),
      VEncodePointer(&_V10string_D1134.sym, VPOINTER_OTHER),
      _var3);
 }
}
static void _V0vanity_V0core_V20_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k138) (bruijn printout-list 133 127) (close _V0printout__list_lambda32))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k138, env)}),
      VEncodeInt(133l), VEncodeInt(127l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_lambda32, env)})
    );
 }
}
static void _V0newline_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0newline_k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0newline_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0newline_k286, runtime, upenv, 1, argc, _var0) {
  // (##sys.newline (bruijn ##k.619 1 0) (bruijn ##x.620 0 0))
    V_CALL_FUNC(VNewline2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0newline_lambda34(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0newline_lambda34 #t (1 ((bruijn current-output-port 133 109) (close _V0newline_k286))) (2 (##sys.newline (bruijn ##k.621 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0newline_lambda34, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0newline_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0newline_lambda34" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0newline_lambda34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-output-port 133 109) (close _V0newline_k286))
V_CALL(VGetArg(upenv, 133-1, 109), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0newline_k286, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0newline_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0newline_lambda34" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0newline_lambda34, runtime, upenv, 2, argc, _var0, _var1) {
  // (##sys.newline (bruijn ##k.621 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VNewline2, NULL, runtime,
      _var0,
      _var1);
 }
}
void _V0newline_lambda34(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0newline_lambda34:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0newline_lambda34\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0newline_lambda34\n"
"    jmp _V20CaseError__V0newline_lambda34\n"
);
static void _V0vanity_V0core_V20_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k137) (bruijn newline 132 126) (close _V0newline_lambda34))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k137, env)}),
      VEncodeInt(132l), VEncodeInt(126l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0newline_lambda34, env)})
    );
 }
}
static void _V0read_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0read_k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0read_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0read_k287, runtime, upenv, 1, argc, _var0) {
  // (##sys.read (bruijn ##k.622 1 0) (bruijn ##x.623 0 0))
    V_CALL_FUNC(VRead2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0read_lambda35(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0read_lambda35 #t (1 ((bruijn current-input-port 132 111) (close _V0read_k287))) (2 (##sys.read (bruijn ##k.624 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0read_lambda35, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0read_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0read_lambda35" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0read_lambda35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-input-port 132 111) (close _V0read_k287))
V_CALL(VGetArg(upenv, 132-1, 111), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read_k287, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0read_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0read_lambda35" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0read_lambda35, runtime, upenv, 2, argc, _var0, _var1) {
  // (##sys.read (bruijn ##k.624 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VRead2, NULL, runtime,
      _var0,
      _var1);
 }
}
void _V0read_lambda35(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0read_lambda35:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0read_lambda35\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0read_lambda35\n"
"    jmp _V20CaseError__V0read_lambda35\n"
);
static void _V0vanity_V0core_V20_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k136) (bruijn read 131 125) (close _V0read_lambda35))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k136, env)}),
      VEncodeInt(131l), VEncodeInt(125l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read_lambda35, env)})
    );
 }
}
static void _V0read__line_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0read__line_k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0read__line_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0read__line_k288, runtime, upenv, 1, argc, _var0) {
  // (##sys.read-line (bruijn ##k.625 1 0) (bruijn ##x.626 0 0))
    V_CALL_FUNC(VReadLine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0read__line_lambda36(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0read__line_lambda36 #t (1 ((bruijn current-input-port 131 111) (close _V0read__line_k288))) (2 (##sys.read-line (bruijn ##k.627 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0read__line_lambda36, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0read__line_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0read__line_lambda36" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0read__line_lambda36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-input-port 131 111) (close _V0read__line_k288))
V_CALL(VGetArg(upenv, 131-1, 111), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__line_k288, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0read__line_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0read__line_lambda36" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0read__line_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  // (##sys.read-line (bruijn ##k.627 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VReadLine2, NULL, runtime,
      _var0,
      _var1);
 }
}
void _V0read__line_lambda36(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0read__line_lambda36:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0read__line_lambda36\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0read__line_lambda36\n"
"    jmp _V20CaseError__V0read__line_lambda36\n"
);
static void _V0vanity_V0core_V20_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k135) (bruijn read-line 130 124) (close _V0read__line_lambda36))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k135, env)}),
      VEncodeInt(130l), VEncodeInt(124l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__line_lambda36, env)})
    );
 }
}
static void _V0read__char_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0read__char_k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0read__char_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0read__char_k289, runtime, upenv, 1, argc, _var0) {
  // (##sys.read-char (bruijn ##k.628 1 0) (bruijn ##x.629 0 0))
    V_CALL_FUNC(VReadChar2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0read__char_lambda37(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0read__char_lambda37 #t (1 ((bruijn current-input-port 130 111) (close _V0read__char_k289))) (2 (##sys.read-char (bruijn ##k.630 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0read__char_lambda37, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0read__char_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0read__char_lambda37" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0read__char_lambda37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-input-port 130 111) (close _V0read__char_k289))
V_CALL(VGetArg(upenv, 130-1, 111), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__char_k289, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0read__char_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0read__char_lambda37" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0read__char_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  // (##sys.read-char (bruijn ##k.630 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VReadChar2, NULL, runtime,
      _var0,
      _var1);
 }
}
void _V0read__char_lambda37(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0read__char_lambda37:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0read__char_lambda37\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0read__char_lambda37\n"
"    jmp _V20CaseError__V0read__char_lambda37\n"
);
static void _V0vanity_V0core_V20_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k134) (bruijn read-char 129 123) (close _V0read__char_lambda37))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k134, env)}),
      VEncodeInt(129l), VEncodeInt(123l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__char_lambda37, env)})
    );
 }
}
static void _V0with__input__from__file_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__input__from__file_k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k295, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.631 7 0) (bruijn ret 2 0))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      upenv->up->vars[0]);
 }
}
static void _V0with__input__from__file_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__input__from__file_k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn close-port 135 113) (close _V0with__input__from__file_k295) (bruijn port 3 0))
V_CALL(VGetArg(upenv, 135-1, 113), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k295, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0with__input__from__file_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__input__from__file_k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-input-port 134 111) (close _V0with__input__from__file_k294) (bruijn stdout 2 1))
V_CALL(VGetArg(upenv, 134-1, 111), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k294, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0with__input__from__file_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__input__from__file_k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn thunk 4 2) (close _V0with__input__from__file_k293))
V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k293, env)}));
 }
}
static void _V0with__input__from__file_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0with__input__from__file_lambda39" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-input-port 132 111) (close _V0with__input__from__file_k292) (bruijn port 0 0))
V_CALL(VGetArg(upenv, 132-1, 111), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k292, env)}),
      _var0);
 }
}
static void _V0with__input__from__file_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__input__from__file_k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0with__input__from__file_lambda39) (bruijn ##x.632 1 0) (bruijn ##x.633 0 0))
V_CALL_FUNC(_V0with__input__from__file_lambda39, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0with__input__from__file_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__input__from__file_k290" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-input-port 130 111) (close _V0with__input__from__file_k291))
V_CALL(VGetArg(upenv, 130-1, 111), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k291, env)}));
 }
}
static void _V0with__input__from__file_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0with__input__from__file_lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0with__input__from__file_lambda38, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_lambda38, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn open-input-file 129 117) (close _V0with__input__from__file_k290) (bruijn str 0 1))
V_CALL(VGetArg(upenv, 129-1, 117), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k290, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k133) (bruijn with-input-from-file 128 122) (close _V0with__input__from__file_lambda38))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k133, env)}),
      VEncodeInt(128l), VEncodeInt(122l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_lambda38, env)})
    );
 }
}
static void _V0with__output__to__file_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__output__to__file_k301" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k301, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.637 7 0) (bruijn ret 2 0))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      upenv->up->vars[0]);
 }
}
static void _V0with__output__to__file_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__output__to__file_k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k300, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn close-port 134 113) (close _V0with__output__to__file_k301) (bruijn port 3 0))
V_CALL(VGetArg(upenv, 134-1, 113), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k301, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0with__output__to__file_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__output__to__file_k299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-output-port 133 109) (close _V0with__output__to__file_k300) (bruijn stdout 2 1))
V_CALL(VGetArg(upenv, 133-1, 109), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k300, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0with__output__to__file_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__output__to__file_k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn thunk 4 2) (close _V0with__output__to__file_k299))
V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k299, env)}));
 }
}
static void _V0with__output__to__file_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0with__output__to__file_lambda41" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 131 109) (close _V0with__output__to__file_k298) (bruijn port 0 0))
V_CALL(VGetArg(upenv, 131-1, 109), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k298, env)}),
      _var0);
 }
}
static void _V0with__output__to__file_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__output__to__file_k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0with__output__to__file_lambda41) (bruijn ##x.638 1 0) (bruijn ##x.639 0 0))
V_CALL_FUNC(_V0with__output__to__file_lambda41, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0with__output__to__file_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__output__to__file_k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-output-port 129 109) (close _V0with__output__to__file_k297))
V_CALL(VGetArg(upenv, 129-1, 109), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k297, env)}));
 }
}
static void _V0with__output__to__file_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0with__output__to__file_lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0with__output__to__file_lambda40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_lambda40, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn open-output-file 128 118) (close _V0with__output__to__file_k296) (bruijn str 0 1))
V_CALL(VGetArg(upenv, 128-1, 118), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k296, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k132) (bruijn with-output-to-file 127 121) (close _V0with__output__to__file_lambda40))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k132, env)}),
      VEncodeInt(127l), VEncodeInt(121l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_lambda40, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k131) (bruijn get-output-string 126 120) (##intrinsic ##sys.get-output-string))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k131, env)}),
      VEncodeInt(126l), VEncodeInt(120l),
      _V40_V10sys_Dget__output__string
    );
 }
}
static void _V0open__output__string_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__string_lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__string_lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__string_lambda42, runtime, upenv, 1, argc, _var0) {
  // ((bruijn try-or-gc 126 112) (bruijn ##k.643 0 0) (bruijn open-output-string-impl 126 116) (##string ##string.1135))
V_CALL(VGetArg(upenv, 126-1, 112), runtime,
      _var0,
      VGetArg(upenv, 126-1, 116),
      VEncodePointer(&_V10string_D1135.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0core_V20_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k130) (bruijn open-output-string 125 119) (close _V0open__output__string_lambda42))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k130, env)}),
      VEncodeInt(125l), VEncodeInt(119l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__string_lambda42, env)})
    );
 }
}
static void _V0open__output__file_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__file_lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__file_lambda44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file_lambda44, runtime, upenv, 1, argc, _var0) {
  // ((bruijn open-output-file-impl 126 115) (bruijn ##k.645 0 0) (bruijn path 1 1))
V_CALL(VGetArg(upenv, 126-1, 115), runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0open__output__file_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0open__output__file_lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0open__output__file_lambda43, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file_lambda43, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn try-or-gc 125 112) (bruijn ##k.644 0 0) (close _V0open__output__file_lambda44) (##string ##string.1136))
V_CALL(VGetArg(upenv, 125-1, 112), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__file_lambda44, env)}),
      VEncodePointer(&_V10string_D1136.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0core_V20_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k129) (bruijn open-output-file 124 118) (close _V0open__output__file_lambda43))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k129, env)}),
      VEncodeInt(124l), VEncodeInt(118l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__file_lambda43, env)})
    );
 }
}
static void _V0open__input__file_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__input__file_lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__input__file_lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file_lambda46, runtime, upenv, 1, argc, _var0) {
  // ((bruijn open-input-file-impl 125 114) (bruijn ##k.647 0 0) (bruijn path 1 1))
V_CALL(VGetArg(upenv, 125-1, 114), runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0open__input__file_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0open__input__file_lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0open__input__file_lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file_lambda45, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn try-or-gc 124 112) (bruijn ##k.646 0 0) (close _V0open__input__file_lambda46) (##string ##string.1137))
V_CALL(VGetArg(upenv, 124-1, 112), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__input__file_lambda46, env)}),
      VEncodePointer(&_V10string_D1137.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0core_V20_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k128) (bruijn open-input-file 123 117) (close _V0open__input__file_lambda45))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k128, env)}),
      VEncodeInt(123l), VEncodeInt(117l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__input__file_lambda45, env)})
    );
 }
}
static void _V0open__output__string__impl_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__string__impl_k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__string__impl_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__string__impl_k302, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ret 1 1) (##sys.set-finalizer! (bruijn ##k.652 0 0) (bruijn ret 1 1) (##intrinsic ##sys.close-stream)) ((bruijn ##k.652 0 0) #f))
if(VDecodeBool(
upenv->vars[1])) {
    V_CALL_FUNC(VSetFinalizer, NULL, runtime,
      _var0,
      upenv->vars[1],
      _V40_V10sys_Dclose__stream);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0open__output__string__impl_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__string__impl_k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__string__impl_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__string__impl_k303, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 125 136) (bruijn ##k.650 1 0) (bruijn ret 1 1) (bruijn ok 1 2))
V_CALL(VGetArg(upenv, 125-1, 136), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0open__output__string__impl_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0open__output__string__impl_lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0open__output__string__impl_lambda48, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__string__impl_lambda48, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0open__output__string__impl_k302) (close _V0open__output__string__impl_k303))
V_CALL_FUNC(_V0open__output__string__impl_k302, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__string__impl_k303, env)}));
 }
}
static void _V0open__output__string__impl_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__string__impl_lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__string__impl_lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__string__impl_lambda47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 123 134) (bruijn ##k.648 0 0) (##intrinsic ##sys.open-output-string) (close _V0open__output__string__impl_lambda48))
V_CALL(VGetArg(upenv, 123-1, 134), runtime,
      _var0,
      _V40_V10sys_Dopen__output__string,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__string__impl_lambda48, env)}));
 }
}
static void _V0vanity_V0core_V20_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k127) (bruijn open-output-string-impl 122 116) (close _V0open__output__string__impl_lambda47))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k127, env)}),
      VEncodeInt(122l), VEncodeInt(116l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__string__impl_lambda47, env)})
    );
 }
}
static void _V0open__output__file__impl_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__file__impl_lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__file__impl_lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file__impl_lambda50, runtime, upenv, 1, argc, _var0) {
  // (##sys.open-output-stream (bruijn ##k.654 0 0) (bruijn path 1 1))
    V_CALL_FUNC(VOpenOutputStream2, NULL, runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0open__output__file__impl_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__file__impl_k304" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__file__impl_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file__impl_k304, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ret 1 1) (##sys.set-finalizer! (bruijn ##k.657 0 0) (bruijn ret 1 1) (##intrinsic ##sys.close-stream)) ((bruijn ##k.657 0 0) #f))
if(VDecodeBool(
upenv->vars[1])) {
    V_CALL_FUNC(VSetFinalizer, NULL, runtime,
      _var0,
      upenv->vars[1],
      _V40_V10sys_Dclose__stream);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0open__output__file__impl_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__file__impl_k305" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__file__impl_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file__impl_k305, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 124 136) (bruijn ##k.655 1 0) (bruijn ret 1 1) (bruijn ok 1 2))
V_CALL(VGetArg(upenv, 124-1, 136), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0open__output__file__impl_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0open__output__file__impl_lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0open__output__file__impl_lambda51, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file__impl_lambda51, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0open__output__file__impl_k304) (close _V0open__output__file__impl_k305))
V_CALL_FUNC(_V0open__output__file__impl_k304, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__file__impl_k305, env)}));
 }
}
static void _V0open__output__file__impl_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0open__output__file__impl_lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0open__output__file__impl_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file__impl_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 122 134) (bruijn ##k.653 0 0) (close _V0open__output__file__impl_lambda50) (close _V0open__output__file__impl_lambda51))
V_CALL(VGetArg(upenv, 122-1, 134), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__file__impl_lambda50, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__file__impl_lambda51, env)}));
 }
}
static void _V0vanity_V0core_V20_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k126) (bruijn open-output-file-impl 121 115) (close _V0open__output__file__impl_lambda49))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k126, env)}),
      VEncodeInt(121l), VEncodeInt(115l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__file__impl_lambda49, env)})
    );
 }
}
static void _V0open__input__file__impl_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__input__file__impl_lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__input__file__impl_lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file__impl_lambda53, runtime, upenv, 1, argc, _var0) {
  // (##sys.open-input-stream (bruijn ##k.659 0 0) (bruijn path 1 1))
    V_CALL_FUNC(VOpenInputStream2, NULL, runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0open__input__file__impl_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__input__file__impl_k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__input__file__impl_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file__impl_k306, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ret 1 1) (##sys.set-finalizer! (bruijn ##k.662 0 0) (bruijn ret 1 1) (##intrinsic ##sys.close-stream)) ((bruijn ##k.662 0 0) #f))
if(VDecodeBool(
upenv->vars[1])) {
    V_CALL_FUNC(VSetFinalizer, NULL, runtime,
      _var0,
      upenv->vars[1],
      _V40_V10sys_Dclose__stream);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0open__input__file__impl_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__input__file__impl_k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__input__file__impl_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file__impl_k307, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 123 136) (bruijn ##k.660 1 0) (bruijn ret 1 1) (bruijn ok 1 2))
V_CALL(VGetArg(upenv, 123-1, 136), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0open__input__file__impl_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0open__input__file__impl_lambda54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0open__input__file__impl_lambda54, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file__impl_lambda54, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0open__input__file__impl_k306) (close _V0open__input__file__impl_k307))
V_CALL_FUNC(_V0open__input__file__impl_k306, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__input__file__impl_k307, env)}));
 }
}
static void _V0open__input__file__impl_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0open__input__file__impl_lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0open__input__file__impl_lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file__impl_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 121 134) (bruijn ##k.658 0 0) (close _V0open__input__file__impl_lambda53) (close _V0open__input__file__impl_lambda54))
V_CALL(VGetArg(upenv, 121-1, 134), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__input__file__impl_lambda53, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__input__file__impl_lambda54, env)}));
 }
}
static void _V0vanity_V0core_V20_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k125) (bruijn open-input-file-impl 120 114) (close _V0open__input__file__impl_lambda52))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k125, env)}),
      VEncodeInt(120l), VEncodeInt(114l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__input__file__impl_lambda52, env)})
    );
 }
}
static void _V0close__port_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0close__port_k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0close__port_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0close__port_k308, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.664 0 0) (##sys.finalize! (bruijn ##k.663 1 0) (bruijn port 1 1)) (##sys.close-stream (bruijn ##k.663 1 0) (bruijn port 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VFinalize, NULL, runtime,
      upenv->vars[0],
      upenv->vars[1]);
} else {
    V_CALL_FUNC(VCloseStream2, NULL, runtime,
      upenv->vars[0],
      upenv->vars[1]);
}
 }
}
static void _V0close__port_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0close__port_lambda55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0close__port_lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0close__port_lambda55, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##sys.has-finalizer? (close _V0close__port_k308) (bruijn port 0 1))
    V_CALL_FUNC(VHasFinalizer, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0close__port_k308, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k124) (bruijn close-port 119 113) (close _V0close__port_lambda55))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k124, env)}),
      VEncodeInt(119l), VEncodeInt(113l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0close__port_lambda55, env)})
    );
 }
}
static void _V0try__or__gc_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0try__or__gc_lambda58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0try__or__gc_lambda58, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0try__or__gc_lambda58, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn ok 0 2) ((bruijn ##k.668 0 0) (bruijn ret 0 1)) ((bruijn error 122 153) (bruijn ##k.668 0 0) (bruijn msg 3 2)))
if(VDecodeBool(
_var2)) {
V_CALL(_var0, runtime,
      _var1);
} else {
V_CALL(VGetArg(upenv, 122-1, 153), runtime,
      _var0,
      upenv->up->up->vars[2]);
}
 }
}
static void _V0try__or__gc_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0try__or__gc_k309" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0try__or__gc_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0try__or__gc_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 121 134) (bruijn ##k.666 1 0) (bruijn thunk 2 1) (close _V0try__or__gc_lambda58))
V_CALL(VGetArg(upenv, 121-1, 134), runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0try__or__gc_lambda58, env)}));
 }
}
static void _V0try__or__gc_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0try__or__gc_lambda57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0try__or__gc_lambda57, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0try__or__gc_lambda57, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (bruijn ok 0 2) ((bruijn ##k.666 0 0) (bruijn ret 0 1)) (##sys.garbage-collect (close _V0try__or__gc_k309) #t))
if(VDecodeBool(
_var2)) {
V_CALL(_var0, runtime,
      _var1);
} else {
    V_CALL_FUNC(VGarbageCollect, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0try__or__gc_k309, env)}),
      VEncodeBool(true));
}
 }
}
static void _V0try__or__gc_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0try__or__gc_lambda56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0try__or__gc_lambda56, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0try__or__gc_lambda56, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call-with-values 119 134) (bruijn ##k.665 0 0) (bruijn thunk 0 1) (close _V0try__or__gc_lambda57))
V_CALL(VGetArg(upenv, 119-1, 134), runtime,
      _var0,
      _var1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0try__or__gc_lambda57, env)}));
 }
}
static void _V0vanity_V0core_V20_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k123) (bruijn try-or-gc 118 112) (close _V0try__or__gc_lambda56))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k123, env)}),
      VEncodeInt(118l), VEncodeInt(112l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0try__or__gc_lambda56, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k122) (bruijn current-input-port 117 111) (bruijn ##x.669 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k122, env)}),
      VEncodeInt(117l), VEncodeInt(111l),
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda59(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda59 #t (1 ((bruijn ##k.670 0 0) (bruijn in 1 0))) (2 (set! (bruijn ##k.671 0 0) (bruijn in 1 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda59, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda59" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda59, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.670 0 0) (bruijn in 1 0))
V_CALL(_var0, runtime,
      upenv->vars[0]);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda59" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda59, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (bruijn ##k.671 0 0) (bruijn in 1 0) (bruijn port 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      _var0,
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
 }
}
void _V0vanity_V0core_V20_lambda59(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0vanity_V0core_V20_lambda59:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda59\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda59\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda59\n"
);
static void _V0vanity_V0core_V20_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_k121) (close _V0vanity_V0core_V20_lambda59))
V_CALL_FUNC(_V0vanity_V0core_V20_k121, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda59, env)}));
 }
}
static void _V0vanity_V0core_V20_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##sys.stdin->port (close _V0vanity_V0core_V20_k120))
    V_CALL_FUNC(VStdinPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k120, env)}));
 }
}
static void _V0vanity_V0core_V20_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k119) (bruijn current-error-port 114 110) (bruijn ##x.672 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k119, env)}),
      VEncodeInt(114l), VEncodeInt(110l),
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda60(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda60 #t (1 ((bruijn ##k.673 0 0) (bruijn out 1 0))) (2 (set! (bruijn ##k.674 0 0) (bruijn out 1 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda60, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda60" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda60, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.673 0 0) (bruijn out 1 0))
V_CALL(_var0, runtime,
      upenv->vars[0]);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda60" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda60, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (bruijn ##k.674 0 0) (bruijn out 1 0) (bruijn port 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      _var0,
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
 }
}
void _V0vanity_V0core_V20_lambda60(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0vanity_V0core_V20_lambda60:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda60\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda60\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda60\n"
);
static void _V0vanity_V0core_V20_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_k118) (close _V0vanity_V0core_V20_lambda60))
V_CALL_FUNC(_V0vanity_V0core_V20_k118, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda60, env)}));
 }
}
static void _V0vanity_V0core_V20_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##sys.stderr->port (close _V0vanity_V0core_V20_k117))
    V_CALL_FUNC(VStderrPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k117, env)}));
 }
}
static void _V0vanity_V0core_V20_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k116) (bruijn current-output-port 111 109) (bruijn ##x.675 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k116, env)}),
      VEncodeInt(111l), VEncodeInt(109l),
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda61(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda61 #t (1 ((bruijn ##k.676 0 0) (bruijn out 1 0))) (2 (set! (bruijn ##k.677 0 0) (bruijn out 1 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda61, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda61" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda61, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.676 0 0) (bruijn out 1 0))
V_CALL(_var0, runtime,
      upenv->vars[0]);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda61" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda61, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (bruijn ##k.677 0 0) (bruijn out 1 0) (bruijn port 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      _var0,
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
 }
}
void _V0vanity_V0core_V20_lambda61(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0vanity_V0core_V20_lambda61:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda61\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda61\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda61\n"
);
static void _V0vanity_V0core_V20_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_k115) (close _V0vanity_V0core_V20_lambda61))
V_CALL_FUNC(_V0vanity_V0core_V20_k115, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda61, env)}));
 }
}
static void _V0vanity_V0core_V20_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##sys.stdout->port (close _V0vanity_V0core_V20_k114))
    V_CALL_FUNC(VStdoutPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k114, env)}));
 }
}
static void _V0vanity_V0core_V20_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k113) (bruijn char->integer 108 108) (##intrinsic ##sys.char-integer))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k113, env)}),
      VEncodeInt(108l), VEncodeInt(108l),
      _V40_V10sys_Dchar__integer
    );
 }
}
static void _V0vanity_V0core_V20_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k112) (bruijn hash-table-delete! 107 107) (##intrinsic ##vcore.hash-table-delete!))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k112, env)}),
      VEncodeInt(107l), VEncodeInt(107l),
      _V40_V10vcore_Dhash__table__delete_B
    );
 }
}
static void _V0vanity_V0core_V20_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k111) (bruijn hash-table-set! 106 106) (##intrinsic ##vcore.hash-table-set!))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k111, env)}),
      VEncodeInt(106l), VEncodeInt(106l),
      _V40_V10vcore_Dhash__table__set_B
    );
 }
}
static void _V0hash__table__ref_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0hash__table__ref_lambda63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0hash__table__ref_lambda63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0hash__table__ref_lambda63, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 107 153) (bruijn ##k.680 0 0) (##string ##string.1138) (bruijn key 1 2))
V_CALL(VGetArg(upenv, 107-1, 153), runtime,
      _var0,
      VEncodePointer(&_V10string_D1138.sym, VPOINTER_OTHER),
      upenv->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V0hash__table__ref_lambda62(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0hash__table__ref_lambda62 #t (3 (##vcore.hash-table-ref (bruijn ##k.679 0 0) (bruijn table 0 1) (bruijn key 0 2) (close _V0hash__table__ref_lambda63))) (4 (##vcore.hash-table-ref (bruijn ##k.681 0 0) (bruijn table 0 1) (bruijn key 0 2) (bruijn thunk 0 3))))
 VError("Not enough arguments to _V0hash__table__ref_lambda62, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0hash__table__ref_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0hash__table__ref_lambda62" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0hash__table__ref_lambda62, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (##vcore.hash-table-ref (bruijn ##k.679 0 0) (bruijn table 0 1) (bruijn key 0 2) (close _V0hash__table__ref_lambda63))
    V_CALL_FUNC(VHashTableRef, NULL, runtime,
      _var0,
      _var1,
      _var2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0hash__table__ref_lambda63, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0hash__table__ref_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0hash__table__ref_lambda62" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0hash__table__ref_lambda62, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  // (##vcore.hash-table-ref (bruijn ##k.681 0 0) (bruijn table 0 1) (bruijn key 0 2) (bruijn thunk 0 3))
    V_CALL_FUNC(VHashTableRef, NULL, runtime,
      _var0,
      _var1,
      _var2,
      _var3);
 }
}
void _V0hash__table__ref_lambda62(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0hash__table__ref_lambda62:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0hash__table__ref_lambda62\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0hash__table__ref_lambda62\n"
"    jmp _V20CaseError__V0hash__table__ref_lambda62\n"
);
static void _V0vanity_V0core_V20_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k110) (bruijn hash-table-ref 105 105) (close _V0hash__table__ref_lambda62))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k110, env)}),
      VEncodeInt(105l), VEncodeInt(105l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0hash__table__ref_lambda62, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k109) (bruijn hash-table-hash-function 104 104) (##intrinsic ##vcore.hash-table-hash-function))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k109, env)}),
      VEncodeInt(104l), VEncodeInt(104l),
      _V40_V10vcore_Dhash__table__hash__function
    );
 }
}
static void _V0vanity_V0core_V20_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k108) (bruijn hash-table-equivalence-function 103 103) (##intrinsic ##vcore.hash-table-equivalence-function))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k108, env)}),
      VEncodeInt(103l), VEncodeInt(103l),
      _V40_V10vcore_Dhash__table__equivalence__function
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0make__hash__table_lambda64(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0make__hash__table_lambda64 #t (1 (##vcore.make-hash-table (bruijn ##k.682 0 0) (##intrinsic ##sys.eq?) #f 32)) (2 (##vcore.make-hash-table (bruijn ##k.683 0 0) (bruijn eq 0 1) #f 32)) (3 (##vcore.make-hash-table (bruijn ##k.684 0 0) (bruijn eq 0 1) (bruijn hash 0 2) 32)) (4 (##vcore.make-hash-table (bruijn ##k.685 0 0) (bruijn eq 0 1) (bruijn hash 0 2) (bruijn len 0 3))))
 VError("Not enough arguments to _V0make__hash__table_lambda64, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0make__hash__table_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0make__hash__table_lambda64" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0make__hash__table_lambda64, runtime, upenv, 1, argc, _var0) {
  // (##vcore.make-hash-table (bruijn ##k.682 0 0) (##intrinsic ##sys.eq?) #f 32)
    V_CALL_FUNC(VMakeHashTable, NULL, runtime,
      _var0,
      _V40_V10sys_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
 }
}
__attribute__((used)) static void _V20Case1__V0make__hash__table_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0make__hash__table_lambda64" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0make__hash__table_lambda64, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.make-hash-table (bruijn ##k.683 0 0) (bruijn eq 0 1) #f 32)
    V_CALL_FUNC(VMakeHashTable, NULL, runtime,
      _var0,
      _var1,
      VEncodeBool(false),
      VEncodeInt(32l));
 }
}
__attribute__((used)) static void _V20Case2__V0make__hash__table_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case2__V0make__hash__table_lambda64" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0make__hash__table_lambda64, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (##vcore.make-hash-table (bruijn ##k.684 0 0) (bruijn eq 0 1) (bruijn hash 0 2) 32)
    V_CALL_FUNC(VMakeHashTable, NULL, runtime,
      _var0,
      _var1,
      _var2,
      VEncodeInt(32l));
 }
}
__attribute__((used)) static void _V20Case3__V0make__hash__table_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case3__V0make__hash__table_lambda64" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0make__hash__table_lambda64, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  // (##vcore.make-hash-table (bruijn ##k.685 0 0) (bruijn eq 0 1) (bruijn hash 0 2) (bruijn len 0 3))
    V_CALL_FUNC(VMakeHashTable, NULL, runtime,
      _var0,
      _var1,
      _var2,
      _var3);
 }
}
void _V0make__hash__table_lambda64(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0make__hash__table_lambda64:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0make__hash__table_lambda64\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0make__hash__table_lambda64\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V0make__hash__table_lambda64\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V0make__hash__table_lambda64\n"
"    jmp _V20CaseError__V0make__hash__table_lambda64\n"
);
static void _V0vanity_V0core_V20_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k107) (bruijn make-hash-table 102 102) (close _V0make__hash__table_lambda64))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k107, env)}),
      VEncodeInt(102l), VEncodeInt(102l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__hash__table_lambda64, env)})
    );
 }
}
static void _V0vector__for__each_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k314, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.687 4 0) (bruijn ##x.690 0 0))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0vector__for__each_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k313" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 108 28) (close _V0vector__for__each_k314) (bruijn i 3 1) 1)
V_CALL(VGetArg(upenv, 108-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k314, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0vector__for__each_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k312, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn f 5 1) (close _V0vector__for__each_k313) (bruijn ##x.691 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k313, env)}),
      _var0);
 }
}
static void _V0vector__for__each_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.688 0 0) ((bruijn vector-ref 106 98) (close _V0vector__for__each_k312) (bruijn xs 4 2) (bruijn i 1 1)) ((bruijn ##k.687 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 106-1, 98), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k312, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vector__for__each_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vector__for__each_lambda66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vector__for__each_lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_lambda66, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 105 19) (close _V0vector__for__each_k311) (bruijn i 0 1) (bruijn len 2 0))
V_CALL(VGetArg(upenv, 105-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k311, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V0vector__for__each_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0vector__for__each_lambda66)) ((bruijn loop 0 0) (bruijn ##k.686 2 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_lambda66, env)});
V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V0vector__for__each_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k320, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.693 5 0) (bruijn ##x.696 0 0))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vector__for__each_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 109 28) (close _V0vector__for__each_k320) (bruijn i 4 1) 1)
V_CALL(VGetArg(upenv, 109-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k320, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0vector__for__each_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn f 6 1) (close _V0vector__for__each_k319) (bruijn ##x.697 1 0) (bruijn ##x.698 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k319, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vector__for__each_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k317" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-ref 107 98) (close _V0vector__for__each_k318) (bruijn ys 5 3) (bruijn i 2 1))
V_CALL(VGetArg(upenv, 107-1, 98), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k318, env)}),
      VGetArg(upenv, 5-1, 3),
      upenv->up->vars[1]);
 }
}
static void _V0vector__for__each_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.694 0 0) ((bruijn vector-ref 106 98) (close _V0vector__for__each_k317) (bruijn xs 4 2) (bruijn i 1 1)) ((bruijn ##k.693 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 106-1, 98), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k317, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vector__for__each_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vector__for__each_lambda67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vector__for__each_lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_lambda67, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 105 19) (close _V0vector__for__each_k316) (bruijn i 0 1) (bruijn len 2 0))
V_CALL(VGetArg(upenv, 105-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k316, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V0vector__for__each_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0vector__for__each_lambda67)) ((bruijn loop 0 0) (bruijn ##k.692 2 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_lambda67, env)});
V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V0vector__for__each_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k327, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 0) (bruijn ##k.700 6 0) (bruijn ##x.703 0 0))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0vector__for__each_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 110 28) (close _V0vector__for__each_k327) (bruijn i 5 1) 1)
V_CALL(VGetArg(upenv, 110-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k327, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l));
 }
}
static void _V0vector__for__each_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn f 7 1) (close _V0vector__for__each_k326) (bruijn ##x.704 2 0) (bruijn ##x.705 1 0) (bruijn ##x.706 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k326, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vector__for__each_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-ref 108 98) (close _V0vector__for__each_k325) (bruijn zs 6 4) (bruijn i 3 1))
V_CALL(VGetArg(upenv, 108-1, 98), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k325, env)}),
      VGetArg(upenv, 6-1, 4),
      upenv->up->up->vars[1]);
 }
}
static void _V0vector__for__each_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-ref 107 98) (close _V0vector__for__each_k324) (bruijn ys 5 3) (bruijn i 2 1))
V_CALL(VGetArg(upenv, 107-1, 98), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k324, env)}),
      VGetArg(upenv, 5-1, 3),
      upenv->up->vars[1]);
 }
}
static void _V0vector__for__each_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.701 0 0) ((bruijn vector-ref 106 98) (close _V0vector__for__each_k323) (bruijn xs 4 2) (bruijn i 1 1)) ((bruijn ##k.700 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 106-1, 98), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k323, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vector__for__each_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vector__for__each_lambda68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vector__for__each_lambda68, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_lambda68, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 105 19) (close _V0vector__for__each_k322) (bruijn i 0 1) (bruijn len 2 0))
V_CALL(VGetArg(upenv, 105-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k322, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V0vector__for__each_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k321" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0vector__for__each_lambda68)) ((bruijn loop 0 0) (bruijn ##k.699 2 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_lambda68, env)});
V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V0vector__for__each_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k333" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k333, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.708 4 0) (bruijn ##x.711 0 0))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0vector__for__each_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 109 28) (close _V0vector__for__each_k333) (bruijn i 3 1) 1)
V_CALL(VGetArg(upenv, 109-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k333, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0vector__for__each_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn apply 108 135) (close _V0vector__for__each_k332) (bruijn f 6 1) (bruijn ##x.712 0 0))
V_CALL(VGetArg(upenv, 108-1, 135), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k332, env)}),
      VGetArg(upenv, 6-1, 1),
      _var0);
 }
}
static void _V0vector__for__each_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vector__for__each_lambda70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vector__for__each_lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_lambda70, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn vector-ref 108 98) (bruijn ##k.713 0 0) (bruijn vec 0 1) (bruijn i 2 1))
V_CALL(VGetArg(upenv, 108-1, 98), runtime,
      _var0,
      _var1,
      upenv->up->vars[1]);
 }
}
static void _V0vector__for__each_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.709 0 0) ((bruijn map 107 72) (close _V0vector__for__each_k331) (close _V0vector__for__each_lambda70) (bruijn vecs 5 2)) ((bruijn ##k.708 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 107-1, 72), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k331, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_lambda70, env)}),
      VGetArg(upenv, 5-1, 2));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vector__for__each_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vector__for__each_lambda69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vector__for__each_lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_lambda69, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 106 19) (close _V0vector__for__each_k330) (bruijn i 0 1) (bruijn len 2 0))
V_CALL(VGetArg(upenv, 106-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k330, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V0vector__for__each_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k329" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0vector__for__each_lambda69)) ((bruijn loop 0 0) (bruijn ##k.707 3 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_lambda69, env)});
V_CALL(env->vars[0], runtime,
      upenv->up->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V0vector__for__each_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-length 103 100) (close _V0vector__for__each_k329) (bruijn ##x.714 0 0))
V_CALL(VGetArg(upenv, 103-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k329, env)}),
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0vector__for__each_lambda65(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vector__for__each_lambda65 #t (3 ((bruijn vector-length 102 100) (close _V0vector__for__each_k310) (bruijn xs 0 2))) (4 ((bruijn vector-length 102 100) (close _V0vector__for__each_k315) (bruijn xs 0 2))) (5 ((bruijn vector-length 102 100) (close _V0vector__for__each_k321) (bruijn xs 0 2))) (2 + ((bruijn car 102 37) (close _V0vector__for__each_k328) (bruijn vecs 0 2))))
 VError("Not enough arguments to _V0vector__for__each_lambda65, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vector__for__each_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0vector__for__each_lambda65" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vector__for__each_lambda65, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn vector-length 102 100) (close _V0vector__for__each_k310) (bruijn xs 0 2))
V_CALL(VGetArg(upenv, 102-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k310, env)}),
      _var2);
 }
}
__attribute__((used)) static void _V20Case1__V0vector__for__each_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0vector__for__each_lambda65" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vector__for__each_lambda65, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn vector-length 102 100) (close _V0vector__for__each_k315) (bruijn xs 0 2))
V_CALL(VGetArg(upenv, 102-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k315, env)}),
      _var2);
 }
}
__attribute__((used)) static void _V20Case2__V0vector__for__each_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0vector__for__each_lambda65" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0vector__for__each_lambda65, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn vector-length 102 100) (close _V0vector__for__each_k321) (bruijn xs 0 2))
V_CALL(VGetArg(upenv, 102-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k321, env)}),
      _var2);
 }
}
__attribute__((used)) static void _V20Case3__V0vector__for__each_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0vector__for__each_lambda65" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0vector__for__each_lambda65, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((bruijn car 102 37) (close _V0vector__for__each_k328) (bruijn vecs 0 2))
V_CALL(VGetArg(upenv, 102-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k328, env)}),
      _varargs);
 }
}
void _V0vector__for__each_lambda65(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0vector__for__each_lambda65:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0vector__for__each_lambda65\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0vector__for__each_lambda65\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V0vector__for__each_lambda65\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V0vector__for__each_lambda65\n"
"    jmp _V20CaseError__V0vector__for__each_lambda65\n"
);
static void _V0vanity_V0core_V20_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k106) (bruijn vector-for-each 101 101) (close _V0vector__for__each_lambda65))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k106, env)}),
      VEncodeInt(101l), VEncodeInt(101l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_lambda65, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k105) (bruijn vector-length 100 100) (##intrinsic ##sys.vector-length))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k105, env)}),
      VEncodeInt(100l), VEncodeInt(100l),
      _V40_V10sys_Dvector__length
    );
 }
}
static void _V0vanity_V0core_V20_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k104) (bruijn vector-set! 99 99) (##intrinsic ##sys.vector-set!))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k104, env)}),
      VEncodeInt(99l), VEncodeInt(99l),
      _V40_V10sys_Dvector__set_B
    );
 }
}
static void _V0vanity_V0core_V20_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k103) (bruijn vector-ref 98 98) (##intrinsic ##sys.vector-ref))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k103, env)}),
      VEncodeInt(98l), VEncodeInt(98l),
      _V40_V10sys_Dvector__ref
    );
 }
}
static void _V0vector_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0vector_lambda71" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0vector_lambda71, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_lambda71, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn list->vector 98 96) (bruijn ##k.715 0 0) (bruijn args 0 1))
V_CALL(VGetArg(upenv, 98-1, 96), runtime,
      _var0,
      _varargs);
 }
}
static void _V0vanity_V0core_V20_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k102) (bruijn vector 97 97) (close _V0vector_lambda71))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k102, env)}),
      VEncodeInt(97l), VEncodeInt(97l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_lambda71, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k101) (bruijn list->vector 96 96) (##intrinsic ##sys.list->vector))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k101, env)}),
      VEncodeInt(96l), VEncodeInt(96l),
      _V40_V10sys_Dlist___Gvector
    );
 }
}
static void _V0string__append_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k340" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k340, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.718 7 0) (bruijn str 3 0))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      upenv->up->up->vars[0]);
 }
}
static void _V0string__append_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k339" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 102 86) (close _V0string__append_k340) (bruijn str 2 0) (bruijn ##x.721 0 0) (bruijn b 6 2))
V_CALL(VGetArg(upenv, 102-1, 86), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k340, env)}),
      upenv->up->vars[0],
      _var0,
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0string__append_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k338" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 101 89) (close _V0string__append_k339) (bruijn a 5 1))
V_CALL(VGetArg(upenv, 101-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k339, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0string__append_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k337" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 100 86) (close _V0string__append_k338) (bruijn str 0 0) 0 (bruijn a 4 1))
V_CALL(VGetArg(upenv, 100-1, 86), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k338, env)}),
      _var0,
      VEncodeInt(0l),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0string__append_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k336" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn make-string 99 83) (close _V0string__append_k337) (bruijn len 0 0))
V_CALL(VGetArg(upenv, 99-1, 83), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k337, env)}),
      _var0);
 }
}
static void _V0string__append_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k335" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 98 28) (close _V0string__append_k336) (bruijn ##x.722 1 0) (bruijn ##x.723 0 0))
V_CALL(VGetArg(upenv, 98-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k336, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0string__append_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k334" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k334, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 97 89) (close _V0string__append_k335) (bruijn b 1 2))
V_CALL(VGetArg(upenv, 97-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k335, env)}),
      upenv->vars[2]);
 }
}
static void _V0string__append_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k352" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k352, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.724 12 0) (bruijn str 7 0))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V0string__append_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k351" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 107 86) (close _V0string__append_k352) (bruijn str 6 0) (bruijn ##x.728 0 0) (bruijn c 11 3))
V_CALL(VGetArg(upenv, 107-1, 86), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k352, env)}),
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 11-1, 3));
 }
}
static void _V0string__append_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k350" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 106 28) (close _V0string__append_k351) (bruijn ##x.729 1 0) (bruijn ##x.730 0 0))
V_CALL(VGetArg(upenv, 106-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k351, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0string__append_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k349" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 105 89) (close _V0string__append_k350) (bruijn b 9 2))
V_CALL(VGetArg(upenv, 105-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k350, env)}),
      VGetArg(upenv, 9-1, 2));
 }
}
static void _V0string__append_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k348" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 104 89) (close _V0string__append_k349) (bruijn a 8 1))
V_CALL(VGetArg(upenv, 104-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k349, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V0string__append_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k347" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k347, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 103 86) (close _V0string__append_k348) (bruijn str 2 0) (bruijn ##x.731 0 0) (bruijn b 7 2))
V_CALL(VGetArg(upenv, 103-1, 86), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k348, env)}),
      upenv->up->vars[0],
      _var0,
      VGetArg(upenv, 7-1, 2));
 }
}
static void _V0string__append_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k346" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 102 89) (close _V0string__append_k347) (bruijn a 6 1))
V_CALL(VGetArg(upenv, 102-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k347, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0string__append_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k345" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 101 86) (close _V0string__append_k346) (bruijn str 0 0) 0 (bruijn a 5 1))
V_CALL(VGetArg(upenv, 101-1, 86), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k346, env)}),
      _var0,
      VEncodeInt(0l),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0string__append_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k344" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn make-string 100 83) (close _V0string__append_k345) (bruijn len 0 0))
V_CALL(VGetArg(upenv, 100-1, 83), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k345, env)}),
      _var0);
 }
}
static void _V0string__append_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k343" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 99 28) (close _V0string__append_k344) (bruijn ##x.732 2 0) (bruijn ##x.733 1 0) (bruijn ##x.734 0 0))
V_CALL(VGetArg(upenv, 99-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k344, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0string__append_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k342" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k342, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 98 89) (close _V0string__append_k343) (bruijn c 2 3))
V_CALL(VGetArg(upenv, 98-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k343, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0string__append_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k341" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k341, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 97 89) (close _V0string__append_k342) (bruijn b 1 2))
V_CALL(VGetArg(upenv, 97-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k342, env)}),
      upenv->vars[2]);
 }
}
static void _V0string__append_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k370" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k370, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.735 18 0) (bruijn str 12 0))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0string__append_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k369" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k369, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 113 86) (close _V0string__append_k370) (bruijn str 11 0) (bruijn ##x.740 0 0) (bruijn d 17 4))
V_CALL(VGetArg(upenv, 113-1, 86), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k370, env)}),
      VGetArg(upenv, 11-1, 0),
      _var0,
      VGetArg(upenv, 17-1, 4));
 }
}
static void _V0string__append_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k368" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k368, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 112 28) (close _V0string__append_k369) (bruijn ##x.741 2 0) (bruijn ##x.742 1 0) (bruijn ##x.743 0 0))
V_CALL(VGetArg(upenv, 112-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k369, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0string__append_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k367" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 111 89) (close _V0string__append_k368) (bruijn c 15 3))
V_CALL(VGetArg(upenv, 111-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k368, env)}),
      VGetArg(upenv, 15-1, 3));
 }
}
static void _V0string__append_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k366" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k366, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 110 89) (close _V0string__append_k367) (bruijn b 14 2))
V_CALL(VGetArg(upenv, 110-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k367, env)}),
      VGetArg(upenv, 14-1, 2));
 }
}
static void _V0string__append_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k365" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k365, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 109 89) (close _V0string__append_k366) (bruijn a 13 1))
V_CALL(VGetArg(upenv, 109-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k366, env)}),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V0string__append_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k364" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 108 86) (close _V0string__append_k365) (bruijn str 6 0) (bruijn ##x.744 0 0) (bruijn c 12 3))
V_CALL(VGetArg(upenv, 108-1, 86), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k365, env)}),
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 12-1, 3));
 }
}
static void _V0string__append_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k363" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 107 28) (close _V0string__append_k364) (bruijn ##x.745 1 0) (bruijn ##x.746 0 0))
V_CALL(VGetArg(upenv, 107-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k364, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0string__append_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k362" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k362, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 106 89) (close _V0string__append_k363) (bruijn b 10 2))
V_CALL(VGetArg(upenv, 106-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k363, env)}),
      VGetArg(upenv, 10-1, 2));
 }
}
static void _V0string__append_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k361" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 105 89) (close _V0string__append_k362) (bruijn a 9 1))
V_CALL(VGetArg(upenv, 105-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k362, env)}),
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V0string__append_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k360" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k360, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 104 86) (close _V0string__append_k361) (bruijn str 2 0) (bruijn ##x.747 0 0) (bruijn b 8 2))
V_CALL(VGetArg(upenv, 104-1, 86), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k361, env)}),
      upenv->up->vars[0],
      _var0,
      VGetArg(upenv, 8-1, 2));
 }
}
static void _V0string__append_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k359" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 103 89) (close _V0string__append_k360) (bruijn a 7 1))
V_CALL(VGetArg(upenv, 103-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k360, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V0string__append_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k358" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 102 86) (close _V0string__append_k359) (bruijn str 0 0) 0 (bruijn a 6 1))
V_CALL(VGetArg(upenv, 102-1, 86), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k359, env)}),
      _var0,
      VEncodeInt(0l),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0string__append_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k357" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn make-string 101 83) (close _V0string__append_k358) (bruijn len 0 0))
V_CALL(VGetArg(upenv, 101-1, 83), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k358, env)}),
      _var0);
 }
}
static void _V0string__append_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k356" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 100 28) (close _V0string__append_k357) (bruijn ##x.748 3 0) (bruijn ##x.749 2 0) (bruijn ##x.750 1 0) (bruijn ##x.751 0 0))
V_CALL(VGetArg(upenv, 100-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k357, env)}),
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0string__append_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k355" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 99 89) (close _V0string__append_k356) (bruijn d 3 4))
V_CALL(VGetArg(upenv, 99-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k356, env)}),
      upenv->up->up->vars[4]);
 }
}
static void _V0string__append_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k354" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k354, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 98 89) (close _V0string__append_k355) (bruijn c 2 3))
V_CALL(VGetArg(upenv, 98-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k355, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0string__append_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k353" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k353, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 97 89) (close _V0string__append_k354) (bruijn b 1 2))
V_CALL(VGetArg(upenv, 97-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k354, env)}),
      upenv->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V0string__append_lambda72(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0string__append_lambda72 #t (1 ((bruijn string-copy 96 85) (bruijn ##k.716 0 0) (##string ##string.1139))) (2 ((bruijn string-copy 96 85) (bruijn ##k.717 0 0) (bruijn a 0 1))) (3 ((bruijn string-length 96 89) (close _V0string__append_k334) (bruijn a 0 1))) (4 ((bruijn string-length 96 89) (close _V0string__append_k341) (bruijn a 0 1))) (5 ((bruijn string-length 96 89) (close _V0string__append_k353) (bruijn a 0 1))) (1 + ((bruijn fold-right 96 74) (bruijn ##k.752 0 0) (bruijn string-append 96 95) (##string ##string.1139) (bruijn strs 0 1))))
 VError("Not enough arguments to _V0string__append_lambda72, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0string__append_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0string__append_lambda72" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0string__append_lambda72, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string-copy 96 85) (bruijn ##k.716 0 0) (##string ##string.1139))
V_CALL(VGetArg(upenv, 96-1, 85), runtime,
      _var0,
      VEncodePointer(&_V10string_D1139.sym, VPOINTER_OTHER));
 }
}
__attribute__((used)) static void _V20Case1__V0string__append_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0string__append_lambda72" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0string__append_lambda72, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn string-copy 96 85) (bruijn ##k.717 0 0) (bruijn a 0 1))
V_CALL(VGetArg(upenv, 96-1, 85), runtime,
      _var0,
      _var1);
 }
}
__attribute__((used)) static void _V20Case2__V0string__append_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case2__V0string__append_lambda72" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0string__append_lambda72, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn string-length 96 89) (close _V0string__append_k334) (bruijn a 0 1))
V_CALL(VGetArg(upenv, 96-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k334, env)}),
      _var1);
 }
}
__attribute__((used)) static void _V20Case3__V0string__append_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case3__V0string__append_lambda72" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0string__append_lambda72, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn string-length 96 89) (close _V0string__append_k341) (bruijn a 0 1))
V_CALL(VGetArg(upenv, 96-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k341, env)}),
      _var1);
 }
}
__attribute__((used)) static void _V20Case4__V0string__append_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case4__V0string__append_lambda72" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0string__append_lambda72, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn string-length 96 89) (close _V0string__append_k353) (bruijn a 0 1))
V_CALL(VGetArg(upenv, 96-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k353, env)}),
      _var1);
 }
}
__attribute__((used)) static void _V20Case5__V0string__append_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V20Case5__V0string__append_lambda72" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case5__V0string__append_lambda72, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn fold-right 96 74) (bruijn ##k.752 0 0) (bruijn string-append 96 95) (##string ##string.1139) (bruijn strs 0 1))
V_CALL(VGetArg(upenv, 96-1, 74), runtime,
      _var0,
      VGetArg(upenv, 96-1, 95),
      VEncodePointer(&_V10string_D1139.sym, VPOINTER_OTHER),
      _varargs);
 }
}
void _V0string__append_lambda72(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0string__append_lambda72:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0string__append_lambda72\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0string__append_lambda72\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V0string__append_lambda72\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V0string__append_lambda72\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V0string__append_lambda72\n"
"    cmp " ARGC_REG ", 1\n"
"    jge _V20Case5__V0string__append_lambda72\n"
"    jmp _V20CaseError__V0string__append_lambda72\n"
);
static void _V0vanity_V0core_V20_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k100) (bruijn string-append 95 95) (close _V0string__append_lambda72))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k100, env)}),
      VEncodeInt(95l), VEncodeInt(95l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_lambda72, env)})
    );
 }
}
static void _V0string___Glist_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string___Glist_k374" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string___Glist_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_k374, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.754 4 0) (bruijn ##x.756 2 0) (bruijn ##x.757 0 0))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0string___Glist_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string___Glist_k373" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string___Glist_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 100 36) (close _V0string___Glist_k374) (bruijn ##x.758 0 0) (bruijn acc 3 2))
V_CALL(VGetArg(upenv, 100-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string___Glist_k374, env)}),
      _var0,
      upenv->up->up->vars[2]);
 }
}
static void _V0string___Glist_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string___Glist_k372" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string___Glist_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-ref 99 87) (close _V0string___Glist_k373) (bruijn str 4 1) (bruijn i 2 1))
V_CALL(VGetArg(upenv, 99-1, 87), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string___Glist_k373, env)}),
      upenv->up->up->up->vars[1],
      upenv->up->vars[1]);
 }
}
static void _V0string___Glist_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string___Glist_k371" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string___Glist_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.755 0 0) ((bruijn ##k.754 1 0) (bruijn acc 1 2)) ((bruijn - 98 29) (close _V0string___Glist_k372) (bruijn i 1 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
V_CALL(VGetArg(upenv, 98-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string___Glist_k372, env)}),
      upenv->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V0string___Glist_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0string___Glist_lambda74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0string___Glist_lambda74, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_lambda74, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 97 13) (close _V0string___Glist_k371) (bruijn i 0 1) -1)
V_CALL(VGetArg(upenv, 97-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string___Glist_k371, env)}),
      _var1,
      VEncodeInt(-1l));
 }
}
static void _V0string___Glist_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string___Glist_k376" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string___Glist_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_k376, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.753 3 0) (bruijn ##x.759 0 0) '())
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0,
      VNULL);
 }
}
static void _V0string___Glist_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string___Glist_k375" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string___Glist_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 97 29) (close _V0string___Glist_k376) (bruijn ##x.760 0 0) 1)
V_CALL(VGetArg(upenv, 97-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string___Glist_k376, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0string___Glist_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0string___Glist_lambda73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0string___Glist_lambda73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_lambda73, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0string___Glist_lambda74)) ((bruijn string-length 96 89) (close _V0string___Glist_k375) (bruijn str 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string___Glist_lambda74, env)});
V_CALL(VGetArg(upenv, 96-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string___Glist_k375, env)}),
      upenv->vars[1]);
    }
 }
}
static void _V0vanity_V0core_V20_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k99) (bruijn string->list 94 94) (close _V0string___Glist_lambda73))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k99, env)}),
      VEncodeInt(94l), VEncodeInt(94l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string___Glist_lambda73, env)})
    );
 }
}
static void _V0list___Gstring_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list___Gstring_k383" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list___Gstring_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_k383, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.762 5 0) (bruijn ##x.765 1 0) (bruijn ##x.766 0 0))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0list___Gstring_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list___Gstring_k382" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list___Gstring_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 102 28) (close _V0list___Gstring_k383) (bruijn i 4 2) 1)
V_CALL(VGetArg(upenv, 102-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_k383, env)}),
      upenv->up->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0list___Gstring_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list___Gstring_k381" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list___Gstring_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 101 38) (close _V0list___Gstring_k382) (bruijn lst 3 1))
V_CALL(VGetArg(upenv, 101-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_k382, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0list___Gstring_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list___Gstring_k380" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list___Gstring_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-set! 100 88) (close _V0list___Gstring_k381) (bruijn str 4 0) (bruijn i 2 2) (bruijn ##x.767 0 0))
V_CALL(VGetArg(upenv, 100-1, 88), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_k381, env)}),
      upenv->up->up->up->vars[0],
      upenv->up->vars[2],
      _var0);
 }
}
static void _V0list___Gstring_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list___Gstring_k379" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list___Gstring_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.763 0 0) ((bruijn ##k.762 1 0) (bruijn str 3 0)) ((bruijn car 99 37) (close _V0list___Gstring_k380) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 99-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_k380, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0list___Gstring_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0list___Gstring_lambda76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0list___Gstring_lambda76, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_lambda76, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 98 0) (close _V0list___Gstring_k379) (bruijn lst 0 1))
V_CALL(VGetArg(upenv, 98-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_k379, env)}),
      _var1);
 }
}
static void _V0list___Gstring_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list___Gstring_k378" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list___Gstring_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0list___Gstring_lambda76)) ((bruijn loop 0 0) (bruijn ##k.761 3 0) (bruijn lst 3 1) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_lambda76, env)});
V_CALL(env->vars[0], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      VEncodeInt(0l));
    }
 }
}
static void _V0list___Gstring_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list___Gstring_k377" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list___Gstring_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn make-string 95 83) (close _V0list___Gstring_k378) (bruijn ##x.768 0 0))
V_CALL(VGetArg(upenv, 95-1, 83), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_k378, env)}),
      _var0);
 }
}
static void _V0list___Gstring_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0list___Gstring_lambda75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0list___Gstring_lambda75, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_lambda75, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn length 94 70) (close _V0list___Gstring_k377) (bruijn lst 0 1))
V_CALL(VGetArg(upenv, 94-1, 70), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_k377, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k98) (bruijn list->string 93 93) (close _V0list___Gstring_lambda75))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k98, env)}),
      VEncodeInt(93l), VEncodeInt(93l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_lambda75, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k97) (bruijn symbol->string 92 92) (##intrinsic ##sys.symbol->string))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k97, env)}),
      VEncodeInt(92l), VEncodeInt(92l),
      _V40_V10sys_Dsymbol___Gstring
    );
 }
}
static void _V0vanity_V0core_V20_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k96) (bruijn string->number 91 91) (##intrinsic ##sys.string->number))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k96, env)}),
      VEncodeInt(91l), VEncodeInt(91l),
      _V40_V10sys_Dstring___Gnumber
    );
 }
}
static void _V0vanity_V0core_V20_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k95) (bruijn string->symbol 90 90) (##intrinsic ##sys.string->symbol))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k95, env)}),
      VEncodeInt(90l), VEncodeInt(90l),
      _V40_V10sys_Dstring___Gsymbol
    );
 }
}
static void _V0vanity_V0core_V20_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k94) (bruijn string-length 89 89) (##intrinsic ##sys.string-length))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k94, env)}),
      VEncodeInt(89l), VEncodeInt(89l),
      _V40_V10sys_Dstring__length
    );
 }
}
static void _V0vanity_V0core_V20_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k93) (bruijn string-set! 88 88) (##intrinsic ##sys.string-set!))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k93, env)}),
      VEncodeInt(88l), VEncodeInt(88l),
      _V40_V10sys_Dstring__set_B
    );
 }
}
static void _V0vanity_V0core_V20_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k92) (bruijn string-ref 87 87) (##intrinsic ##sys.string-ref))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k92, env)}),
      VEncodeInt(87l), VEncodeInt(87l),
      _V40_V10sys_Dstring__ref
    );
 }
}
static void _V0vanity_V0core_V20_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k91) (bruijn string-copy! 86 86) (##intrinsic ##sys.string-copy!))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k91, env)}),
      VEncodeInt(86l), VEncodeInt(86l),
      _V40_V10sys_Dstring__copy_B
    );
 }
}
static void _V0vanity_V0core_V20_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k90) (bruijn string-copy 85 85) (##intrinsic ##sys.substring))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k90, env)}),
      VEncodeInt(85l), VEncodeInt(85l),
      _V40_V10sys_Dsubstring
    );
 }
}
static void _V0vanity_V0core_V20_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k89) (bruijn substring 84 84) (##intrinsic ##sys.substring))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k89, env)}),
      VEncodeInt(84l), VEncodeInt(84l),
      _V40_V10sys_Dsubstring
    );
 }
}
static void _V0vanity_V0core_V20_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k88) (bruijn make-string 83 83) (##intrinsic ##sys.make-string))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k88, env)}),
      VEncodeInt(83l), VEncodeInt(83l),
      _V40_V10sys_Dmake__string
    );
 }
}
static void _V0assoc_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc_k387" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc_k387, runtime, upenv, 1, argc, _var0) {
  // ((bruijn assoc 87 82) (bruijn ##k.770 4 0) (bruijn x 4 1) (bruijn ##x.773 0 0))
V_CALL(VGetArg(upenv, 87-1, 82), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0assoc_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc_k386" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.772 0 0) ((bruijn car 86 37) (bruijn ##k.770 3 0) (bruijn alst 3 2)) ((bruijn cdr 86 38) (close _V0assoc_k387) (bruijn alst 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 86-1, 37), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]);
} else {
V_CALL(VGetArg(upenv, 86-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc_k387, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0assoc_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc_k385" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 2 3) (close _V0assoc_k386) (bruijn x 2 1) (bruijn ##x.774 0 0))
V_CALL(upenv->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc_k386, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0assoc_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc_k384" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc_k384, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.771 0 0) ((bruijn ##k.770 1 0) #f) ((bruijn caar 84 41) (close _V0assoc_k385) (bruijn alst 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 84-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc_k385, env)}),
      upenv->vars[2]);
}
 }
}
__attribute__((used)) static void _V20CaseError__V0assoc_lambda77(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0assoc_lambda77 #t (3 ((bruijn assoc 83 82) (bruijn ##k.769 0 0) (bruijn x 0 1) (bruijn alst 0 2) (bruijn equal? 83 17))) (4 ((bruijn null? 83 0) (close _V0assoc_k384) (bruijn alst 0 2))))
 VError("Not enough arguments to _V0assoc_lambda77, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0assoc_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0assoc_lambda77" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0assoc_lambda77, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn assoc 83 82) (bruijn ##k.769 0 0) (bruijn x 0 1) (bruijn alst 0 2) (bruijn equal? 83 17))
V_CALL(VGetArg(upenv, 83-1, 82), runtime,
      _var0,
      _var1,
      _var2,
      VGetArg(upenv, 83-1, 17));
 }
}
__attribute__((used)) static void _V20Case1__V0assoc_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0assoc_lambda77" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0assoc_lambda77, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 83 0) (close _V0assoc_k384) (bruijn alst 0 2))
V_CALL(VGetArg(upenv, 83-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc_k384, env)}),
      _var2);
 }
}
void _V0assoc_lambda77(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0assoc_lambda77:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0assoc_lambda77\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0assoc_lambda77\n"
"    jmp _V20CaseError__V0assoc_lambda77\n"
);
static void _V0vanity_V0core_V20_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k87) (bruijn assoc 82 82) (close _V0assoc_lambda77))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k87, env)}),
      VEncodeInt(82l), VEncodeInt(82l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc_lambda77, env)})
    );
 }
}
static void _V0assv_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv_k391" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv_k391, runtime, upenv, 1, argc, _var0) {
  // ((bruijn assv 86 81) (bruijn ##k.775 4 0) (bruijn x 4 1) (bruijn ##x.778 0 0))
V_CALL(VGetArg(upenv, 86-1, 81), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0assv_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv_k390" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.777 0 0) ((bruijn car 85 37) (bruijn ##k.775 3 0) (bruijn alst 3 2)) ((bruijn cdr 85 38) (close _V0assv_k391) (bruijn alst 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 85-1, 37), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]);
} else {
V_CALL(VGetArg(upenv, 85-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv_k391, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0assv_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv_k389" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 84 15) (close _V0assv_k390) (bruijn x 2 1) (bruijn ##x.779 0 0))
V_CALL(VGetArg(upenv, 84-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv_k390, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0assv_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv_k388" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv_k388, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.776 0 0) ((bruijn ##k.775 1 0) #f) ((bruijn caar 83 41) (close _V0assv_k389) (bruijn alst 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 83-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv_k389, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0assv_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0assv_lambda78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0assv_lambda78, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv_lambda78, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 82 0) (close _V0assv_k388) (bruijn alst 0 2))
V_CALL(VGetArg(upenv, 82-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv_k388, env)}),
      _var2);
 }
}
static void _V0vanity_V0core_V20_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k86) (bruijn assv 81 81) (close _V0assv_lambda78))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k86, env)}),
      VEncodeInt(81l), VEncodeInt(81l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv_lambda78, env)})
    );
 }
}
static void _V0assq_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq_k395" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq_k395, runtime, upenv, 1, argc, _var0) {
  // ((bruijn assq 85 80) (bruijn ##k.780 4 0) (bruijn x 4 1) (bruijn ##x.783 0 0))
V_CALL(VGetArg(upenv, 85-1, 80), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0assq_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq_k394" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq_k394, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.782 0 0) ((bruijn car 84 37) (bruijn ##k.780 3 0) (bruijn alst 3 2)) ((bruijn cdr 84 38) (close _V0assq_k395) (bruijn alst 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 84-1, 37), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]);
} else {
V_CALL(VGetArg(upenv, 84-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq_k395, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0assq_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq_k393" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 83 13) (close _V0assq_k394) (bruijn x 2 1) (bruijn ##x.784 0 0))
V_CALL(VGetArg(upenv, 83-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq_k394, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0assq_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq_k392" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq_k392, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.781 0 0) ((bruijn ##k.780 1 0) #f) ((bruijn caar 82 41) (close _V0assq_k393) (bruijn alst 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 82-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq_k393, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0assq_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0assq_lambda79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0assq_lambda79, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq_lambda79, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 81 0) (close _V0assq_k392) (bruijn alst 0 2))
V_CALL(VGetArg(upenv, 81-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq_k392, env)}),
      _var2);
 }
}
static void _V0vanity_V0core_V20_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k85) (bruijn assq 80 80) (close _V0assq_lambda79))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k85, env)}),
      VEncodeInt(80l), VEncodeInt(80l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq_lambda79, env)})
    );
 }
}
static void _V0member_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0member_k399" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0member_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0member_k399, runtime, upenv, 1, argc, _var0) {
  // ((bruijn member 84 79) (bruijn ##k.786 4 0) (bruijn x 4 1) (bruijn ##x.789 0 0))
V_CALL(VGetArg(upenv, 84-1, 79), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0member_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0member_k398" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0member_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0member_k398, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.788 0 0) ((bruijn ##k.786 3 0) (bruijn lst 3 2)) ((bruijn cdr 83 38) (close _V0member_k399) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
V_CALL(VGetArg(upenv, 83-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0member_k399, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0member_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0member_k397" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0member_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0member_k397, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 2 3) (close _V0member_k398) (bruijn x 2 1) (bruijn ##x.790 0 0))
V_CALL(upenv->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0member_k398, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0member_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0member_k396" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0member_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0member_k396, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.787 0 0) ((bruijn ##k.786 1 0) #f) ((bruijn car 81 37) (close _V0member_k397) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 81-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0member_k397, env)}),
      upenv->vars[2]);
}
 }
}
__attribute__((used)) static void _V20CaseError__V0member_lambda80(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0member_lambda80 #t (3 ((bruijn member 80 79) (bruijn ##k.785 0 0) (bruijn x 0 1) (bruijn lst 0 2) (bruijn equal? 80 17))) (4 ((bruijn null? 80 0) (close _V0member_k396) (bruijn lst 0 2))))
 VError("Not enough arguments to _V0member_lambda80, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0member_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0member_lambda80" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0member_lambda80, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn member 80 79) (bruijn ##k.785 0 0) (bruijn x 0 1) (bruijn lst 0 2) (bruijn equal? 80 17))
V_CALL(VGetArg(upenv, 80-1, 79), runtime,
      _var0,
      _var1,
      _var2,
      VGetArg(upenv, 80-1, 17));
 }
}
__attribute__((used)) static void _V20Case1__V0member_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0member_lambda80" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0member_lambda80, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 80 0) (close _V0member_k396) (bruijn lst 0 2))
V_CALL(VGetArg(upenv, 80-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0member_k396, env)}),
      _var2);
 }
}
void _V0member_lambda80(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0member_lambda80:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0member_lambda80\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0member_lambda80\n"
"    jmp _V20CaseError__V0member_lambda80\n"
);
static void _V0vanity_V0core_V20_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k84) (bruijn member 79 79) (close _V0member_lambda80))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k84, env)}),
      VEncodeInt(79l), VEncodeInt(79l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0member_lambda80, env)})
    );
 }
}
static void _V0memv_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memv_k403" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memv_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memv_k403, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memv 83 78) (bruijn ##k.791 4 0) (bruijn x 4 1) (bruijn ##x.794 0 0))
V_CALL(VGetArg(upenv, 83-1, 78), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0memv_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memv_k402" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memv_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memv_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.793 0 0) ((bruijn ##k.791 3 0) (bruijn lst 3 2)) ((bruijn cdr 82 38) (close _V0memv_k403) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
V_CALL(VGetArg(upenv, 82-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memv_k403, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0memv_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memv_k401" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memv_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memv_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 81 15) (close _V0memv_k402) (bruijn x 2 1) (bruijn ##x.795 0 0))
V_CALL(VGetArg(upenv, 81-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memv_k402, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0memv_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memv_k400" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memv_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memv_k400, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.792 0 0) ((bruijn ##k.791 1 0) #f) ((bruijn car 80 37) (close _V0memv_k401) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 80-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memv_k401, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0memv_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0memv_lambda81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0memv_lambda81, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memv_lambda81, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 79 0) (close _V0memv_k400) (bruijn lst 0 2))
V_CALL(VGetArg(upenv, 79-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memv_k400, env)}),
      _var2);
 }
}
static void _V0vanity_V0core_V20_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k83) (bruijn memv 78 78) (close _V0memv_lambda81))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k83, env)}),
      VEncodeInt(78l), VEncodeInt(78l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memv_lambda81, env)})
    );
 }
}
static void _V0memq_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memq_k407" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memq_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memq_k407, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memq 82 77) (bruijn ##k.796 4 0) (bruijn x 4 1) (bruijn ##x.799 0 0))
V_CALL(VGetArg(upenv, 82-1, 77), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0memq_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memq_k406" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memq_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memq_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.798 0 0) ((bruijn ##k.796 3 0) (bruijn lst 3 2)) ((bruijn cdr 81 38) (close _V0memq_k407) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
V_CALL(VGetArg(upenv, 81-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memq_k407, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0memq_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memq_k405" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memq_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memq_k405, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 80 13) (close _V0memq_k406) (bruijn x 2 1) (bruijn ##x.800 0 0))
V_CALL(VGetArg(upenv, 80-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memq_k406, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0memq_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memq_k404" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memq_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memq_k404, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.797 0 0) ((bruijn ##k.796 1 0) #f) ((bruijn car 79 37) (close _V0memq_k405) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 79-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memq_k405, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0memq_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0memq_lambda82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0memq_lambda82, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memq_lambda82, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 78 0) (close _V0memq_k404) (bruijn lst 0 2))
V_CALL(VGetArg(upenv, 78-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memq_k404, env)}),
      _var2);
 }
}
static void _V0vanity_V0core_V20_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k82) (bruijn memq 77 77) (close _V0memq_lambda82))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k82, env)}),
      VEncodeInt(77l), VEncodeInt(77l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memq_lambda82, env)})
    );
 }
}
static void _V0reverse_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reverse_k411" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reverse_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reverse_k411, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter 5 0) (bruijn ##k.802 4 0) (bruijn ##x.804 1 0) (bruijn ##x.805 0 0))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0reverse_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reverse_k410" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reverse_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reverse_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 82 38) (close _V0reverse_k411) (bruijn rest 3 2))
V_CALL(VGetArg(upenv, 82-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reverse_k411, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V0reverse_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reverse_k409" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reverse_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reverse_k409, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 81 36) (close _V0reverse_k410) (bruijn ##x.806 0 0) (bruijn acc 2 1))
V_CALL(VGetArg(upenv, 81-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reverse_k410, env)}),
      _var0,
      upenv->up->vars[1]);
 }
}
static void _V0reverse_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reverse_k408" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reverse_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reverse_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.803 0 0) ((bruijn ##k.802 1 0) (bruijn acc 1 1)) ((bruijn car 80 37) (close _V0reverse_k409) (bruijn rest 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 80-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reverse_k409, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0reverse_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0reverse_lambda84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0reverse_lambda84, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reverse_lambda84, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 79 0) (close _V0reverse_k408) (bruijn rest 0 2))
V_CALL(VGetArg(upenv, 79-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reverse_k408, env)}),
      _var2);
 }
}
static void _V0reverse_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0reverse_lambda83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0reverse_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reverse_lambda83, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0reverse_lambda84)) ((bruijn iter 0 0) (bruijn ##k.801 1 0) '() (bruijn lst 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reverse_lambda84, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VNULL,
      upenv->vars[1]);
    }
 }
}
static void _V0vanity_V0core_V20_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k81) (bruijn reverse 76 76) (close _V0reverse_lambda83))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k81, env)}),
      VEncodeInt(76l), VEncodeInt(76l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reverse_lambda83, env)})
    );
 }
}
static void _V0append_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append_k412" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append_k412, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.810 1 0) (##inline ##sys.cons (##inline ##sys.car (bruijn a 1 1)) (bruijn ##x.813 0 0)))
V_CALL(upenv->vars[0], runtime,
      VInlineCons(
        VInlineCar(
        upenv->vars[1]),
        _var0));
 }
}
static void _V0append_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0append_lambda86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0append_lambda86, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append_lambda86, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (bruijn a 0 1)) ((bruijn ##k.810 0 0) (bruijn b 2 2)) ((bruijn loop 1 0) (close _V0append_k412) (##inline ##sys.cdr (bruijn a 0 1))))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(_var0, runtime,
      upenv->up->vars[2]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append_k412, env)}),
      VInlineCdr(
        _var1));
}
 }
}
static void _V0append_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append_k413" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append_k413, runtime, upenv, 1, argc, _var0) {
  // ((bruijn append 77 75) (bruijn ##k.815 1 0) (bruijn a 1 1) (bruijn ##x.816 0 0))
V_CALL(VGetArg(upenv, 77-1, 75), runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
 }
}
static void _V0append_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append_k415" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append_k415, runtime, upenv, 1, argc, _var0) {
  // ((bruijn append 78 75) (bruijn ##k.817 2 0) (bruijn a 2 1) (bruijn ##x.818 0 0))
V_CALL(VGetArg(upenv, 78-1, 75), runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0append_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append_k414" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append_k414, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn append 77 75) (close _V0append_k415) (bruijn b 1 2) (bruijn ##x.819 0 0))
V_CALL(VGetArg(upenv, 77-1, 75), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append_k415, env)}),
      upenv->vars[2],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0append_lambda85(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0append_lambda85 #t (1 ((bruijn ##k.807 0 0) '())) (2 ((bruijn ##k.808 0 0) (bruijn a 0 1))) (3 (letrec 1 ((close _V0append_lambda86)) ((bruijn loop 0 0) (bruijn ##k.809 1 0) (bruijn a 1 1)))) (4 ((bruijn append 76 75) (close _V0append_k413) (bruijn b 0 2) (bruijn c 0 3))) (5 ((bruijn append 76 75) (close _V0append_k414) (bruijn c 0 3) (bruijn d 0 4))) (1 + ((bruijn fold-right 76 74) (bruijn ##k.820 0 0) (bruijn append 76 75) '() (bruijn lsts 0 1))))
 VError("Not enough arguments to _V0append_lambda85, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0append_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0append_lambda85" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0append_lambda85, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.807 0 0) '())
V_CALL(_var0, runtime,
      VNULL);
 }
}
__attribute__((used)) static void _V20Case1__V0append_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0append_lambda85" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0append_lambda85, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.808 0 0) (bruijn a 0 1))
V_CALL(_var0, runtime,
      _var1);
 }
}
__attribute__((used)) static void _V20Case2__V0append_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case2__V0append_lambda85" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0append_lambda85, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0append_lambda86)) ((bruijn loop 0 0) (bruijn ##k.809 1 0) (bruijn a 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append_lambda86, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1]);
    }
 }
}
__attribute__((used)) static void _V20Case3__V0append_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case3__V0append_lambda85" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0append_lambda85, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn append 76 75) (close _V0append_k413) (bruijn b 0 2) (bruijn c 0 3))
V_CALL(VGetArg(upenv, 76-1, 75), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append_k413, env)}),
      _var2,
      _var3);
 }
}
__attribute__((used)) static void _V20Case4__V0append_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case4__V0append_lambda85" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0append_lambda85, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn append 76 75) (close _V0append_k414) (bruijn c 0 3) (bruijn d 0 4))
V_CALL(VGetArg(upenv, 76-1, 75), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append_k414, env)}),
      _var3,
      _var4);
 }
}
__attribute__((used)) static void _V20Case5__V0append_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V20Case5__V0append_lambda85" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case5__V0append_lambda85, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn fold-right 76 74) (bruijn ##k.820 0 0) (bruijn append 76 75) '() (bruijn lsts 0 1))
V_CALL(VGetArg(upenv, 76-1, 74), runtime,
      _var0,
      VGetArg(upenv, 76-1, 75),
      VNULL,
      _varargs);
 }
}
void _V0append_lambda85(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0append_lambda85:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0append_lambda85\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0append_lambda85\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V0append_lambda85\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V0append_lambda85\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V0append_lambda85\n"
"    cmp " ARGC_REG ", 1\n"
"    jge _V20Case5__V0append_lambda85\n"
"    jmp _V20CaseError__V0append_lambda85\n"
);
static void _V0vanity_V0core_V20_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k80) (bruijn append 75 75) (close _V0append_lambda85))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k80, env)}),
      VEncodeInt(75l), VEncodeInt(75l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append_lambda85, env)})
    );
 }
}
static void _V0fold__right_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fold__right_k419" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fold__right_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold__right_k419, runtime, upenv, 1, argc, _var0) {
  // ((bruijn kons 6 1) (bruijn ##k.822 4 0) (bruijn ##x.824 2 0) (bruijn ##x.825 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0fold__right_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fold__right_k418" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fold__right_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold__right_k418, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 4 0) (close _V0fold__right_k419) (bruijn ##x.826 0 0))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold__right_k419, env)}),
      _var0);
 }
}
static void _V0fold__right_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fold__right_k417" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fold__right_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold__right_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 79 38) (close _V0fold__right_k418) (bruijn ks 2 1))
V_CALL(VGetArg(upenv, 79-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold__right_k418, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0fold__right_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fold__right_k416" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fold__right_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold__right_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.823 0 0) ((bruijn ##k.822 1 0) (bruijn knil 3 2)) ((bruijn car 78 37) (close _V0fold__right_k417) (bruijn ks 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
V_CALL(VGetArg(upenv, 78-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold__right_k417, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0fold__right_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0fold__right_lambda88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0fold__right_lambda88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold__right_lambda88, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 77 0) (close _V0fold__right_k416) (bruijn ks 0 1))
V_CALL(VGetArg(upenv, 77-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold__right_k416, env)}),
      _var1);
 }
}
static void _V0fold__right_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0fold__right_lambda87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0fold__right_lambda87, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold__right_lambda87, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 1 ((close _V0fold__right_lambda88)) ((bruijn loop 0 0) (bruijn ##k.821 1 0) (bruijn ks 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold__right_lambda88, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[3]);
    }
 }
}
static void _V0vanity_V0core_V20_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k79) (bruijn fold-right 74 74) (close _V0fold__right_lambda87))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k79, env)}),
      VEncodeInt(74l), VEncodeInt(74l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold__right_lambda87, env)})
    );
 }
}
static void _V0for__each_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0for__each_k420" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0for__each_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_k420, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.828 1 0) (##inline ##sys.cdr (bruijn xs 1 1)))
V_CALL(upenv->up->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr(
        upenv->vars[1]));
 }
}
static void _V0for__each_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0for__each_lambda90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0for__each_lambda90, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_lambda90, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.not (##inline ##sys.null? (bruijn xs 0 1))) ((bruijn f 2 1) (close _V0for__each_k420) (##inline ##sys.car (bruijn xs 0 1))) ((bruijn ##k.828 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlineNullP(
        _var1)))) {
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_k420, env)}),
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0for__each_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0for__each_k421" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0for__each_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_k421, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.835 1 0) (##inline ##sys.cdr (bruijn xs 1 1)) (##inline ##sys.cdr (bruijn ys 1 2)))
V_CALL(upenv->up->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr(
        upenv->vars[1]),
      VInlineCdr(
        upenv->vars[2]));
 }
}
static void _V0for__each_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0for__each_lambda91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0for__each_lambda91, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_lambda91, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.not (##inline ##sys.null? (bruijn xs 0 1))) ((bruijn f 2 1) (close _V0for__each_k421) (##inline ##sys.car (bruijn xs 0 1)) (##inline ##sys.car (bruijn ys 0 2))) ((bruijn ##k.835 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlineNullP(
        _var1)))) {
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_k421, env)}),
      VInlineCar(
        _var1),
      VInlineCar(
        _var2));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0for__each_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0for__each_k422" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0for__each_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_k422, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.844 1 0) (##inline ##sys.cdr (bruijn xs 1 1)) (##inline ##sys.cdr (bruijn ys 1 2)) (##inline ##sys.cdr (bruijn zs 1 3)))
V_CALL(upenv->up->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr(
        upenv->vars[1]),
      VInlineCdr(
        upenv->vars[2]),
      VInlineCdr(
        upenv->vars[3]));
 }
}
static void _V0for__each_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0for__each_lambda92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0for__each_lambda92, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_lambda92, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.not (##inline ##sys.null? (bruijn xs 0 1))) ((bruijn f 2 1) (close _V0for__each_k422) (##inline ##sys.car (bruijn xs 0 1)) (##inline ##sys.car (bruijn ys 0 2)) (##inline ##sys.car (bruijn zs 0 3))) ((bruijn ##k.844 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlineNullP(
        _var1)))) {
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_k422, env)}),
      VInlineCar(
        _var1),
      VInlineCar(
        _var2),
      VInlineCar(
        _var3));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0for__each_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0for__each_k425" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0for__each_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_k425, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 4 0) (bruijn ##k.855 3 0) (bruijn ##x.858 0 0))
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0for__each_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0for__each_k424" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0for__each_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_k424, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 78 72) (close _V0for__each_k425) (##intrinsic ##sys.cdr) (bruijn lsts 2 1))
V_CALL(VGetArg(upenv, 78-1, 72), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_k425, env)}),
      _V40_V10sys_Dcdr,
      upenv->up->vars[1]);
 }
}
static void _V0for__each_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0for__each_k423" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0for__each_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_k423, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn apply 77 135) (close _V0for__each_k424) (bruijn f 3 1) (bruijn ##x.859 0 0))
V_CALL(VGetArg(upenv, 77-1, 135), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_k424, env)}),
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V0for__each_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0for__each_lambda93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0for__each_lambda93, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_lambda93, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.not (##inline ##sys.null? (##inline ##sys.car (bruijn lsts 0 1)))) ((bruijn map 76 72) (close _V0for__each_k423) (##intrinsic ##sys.car) (bruijn lsts 0 1)) ((bruijn ##k.855 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlineNullP(
        VInlineCar(
        _var1))))) {
V_CALL(VGetArg(upenv, 76-1, 72), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_k423, env)}),
      _V40_V10sys_Dcar,
      _var1);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
__attribute__((used)) static void _V20CaseError__V0for__each_lambda89(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0for__each_lambda89 #t (3 (letrec 1 ((close _V0for__each_lambda90)) ((bruijn loop 0 0) (bruijn ##k.827 1 0) (bruijn xs 1 2)))) (4 (letrec 1 ((close _V0for__each_lambda91)) ((bruijn loop 0 0) (bruijn ##k.834 1 0) (bruijn xs 1 2) (bruijn ys 1 3)))) (5 (letrec 1 ((close _V0for__each_lambda92)) ((bruijn loop 0 0) (bruijn ##k.843 1 0) (bruijn xs 1 2) (bruijn ys 1 3) (bruijn zs 1 4)))) (2 + (letrec 1 ((close _V0for__each_lambda93)) ((bruijn loop 0 0) (bruijn ##k.854 1 0) (bruijn lsts 1 2)))))
 VError("Not enough arguments to _V0for__each_lambda89, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0for__each_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0for__each_lambda89" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0for__each_lambda89, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0for__each_lambda90)) ((bruijn loop 0 0) (bruijn ##k.827 1 0) (bruijn xs 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_lambda90, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2]);
    }
 }
}
__attribute__((used)) static void _V20Case1__V0for__each_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0for__each_lambda89" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0for__each_lambda89, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 1 ((close _V0for__each_lambda91)) ((bruijn loop 0 0) (bruijn ##k.834 1 0) (bruijn xs 1 2) (bruijn ys 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_lambda91, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
__attribute__((used)) static void _V20Case2__V0for__each_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0for__each_lambda89" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0for__each_lambda89, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 1 ((close _V0for__each_lambda92)) ((bruijn loop 0 0) (bruijn ##k.843 1 0) (bruijn xs 1 2) (bruijn ys 1 3) (bruijn zs 1 4)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_lambda92, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3],
      upenv->vars[4]);
    }
 }
}
__attribute__((used)) static void _V20Case3__V0for__each_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0for__each_lambda89" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0for__each_lambda89, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // (letrec 1 ((close _V0for__each_lambda93)) ((bruijn loop 0 0) (bruijn ##k.854 1 0) (bruijn lsts 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_lambda93, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2]);
    }
 }
}
void _V0for__each_lambda89(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0for__each_lambda89:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0for__each_lambda89\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0for__each_lambda89\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V0for__each_lambda89\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V0for__each_lambda89\n"
"    jmp _V20CaseError__V0for__each_lambda89\n"
);
static void _V0vanity_V0core_V20_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k78) (bruijn for-each 73 73) (close _V0for__each_lambda89))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k78, env)}),
      VEncodeInt(73l), VEncodeInt(73l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_lambda89, env)})
    );
 }
}
static void _V0map_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0map_k427" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0map_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_k427, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.863 2 0) (##inline ##sys.cons (bruijn ##x.865 1 0) (bruijn ##x.866 0 0)))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
        upenv->vars[0],
        _var0));
 }
}
static void _V0map_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0map_k426" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0map_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_k426, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 2 0) (close _V0map_k427) (##inline ##sys.cdr (bruijn xs 1 1)))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_k427, env)}),
      VInlineCdr(
        upenv->vars[1]));
 }
}
static void _V0map_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0map_lambda95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0map_lambda95, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_lambda95, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (bruijn xs 0 1)) ((bruijn ##k.863 0 0) '()) ((bruijn f 2 1) (close _V0map_k426) (##inline ##sys.car (bruijn xs 0 1))))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(_var0, runtime,
      VNULL);
} else {
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_k426, env)}),
      VInlineCar(
        _var1));
}
 }
}
static void _V0map_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0map_k429" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0map_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_k429, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.870 2 0) (##inline ##sys.cons (bruijn ##x.872 1 0) (bruijn ##x.873 0 0)))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
        upenv->vars[0],
        _var0));
 }
}
static void _V0map_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0map_k428" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0map_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_k428, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 2 0) (close _V0map_k429) (##inline ##sys.cdr (bruijn xs 1 1)) (##inline ##sys.cdr (bruijn ys 1 2)))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_k429, env)}),
      VInlineCdr(
        upenv->vars[1]),
      VInlineCdr(
        upenv->vars[2]));
 }
}
static void _V0map_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0map_lambda96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0map_lambda96, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_lambda96, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn xs 0 1)) ((bruijn ##k.870 0 0) '()) ((bruijn f 2 1) (close _V0map_k428) (##inline ##sys.car (bruijn xs 0 1)) (##inline ##sys.car (bruijn ys 0 2))))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(_var0, runtime,
      VNULL);
} else {
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_k428, env)}),
      VInlineCar(
        _var1),
      VInlineCar(
        _var2));
}
 }
}
static void _V0map_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0map_k431" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0map_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_k431, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.879 2 0) (##inline ##sys.cons (bruijn ##x.881 1 0) (bruijn ##x.882 0 0)))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
        upenv->vars[0],
        _var0));
 }
}
static void _V0map_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0map_k430" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0map_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_k430, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 2 0) (close _V0map_k431) (##inline ##sys.cdr (bruijn xs 1 1)) (##inline ##sys.cdr (bruijn ys 1 2)) (##inline ##sys.cdr (bruijn zs 1 3)))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_k431, env)}),
      VInlineCdr(
        upenv->vars[1]),
      VInlineCdr(
        upenv->vars[2]),
      VInlineCdr(
        upenv->vars[3]));
 }
}
static void _V0map_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0map_lambda97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0map_lambda97, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_lambda97, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn xs 0 1)) ((bruijn ##k.879 0 0) '()) ((bruijn f 2 1) (close _V0map_k430) (##inline ##sys.car (bruijn xs 0 1)) (##inline ##sys.car (bruijn ys 0 2)) (##inline ##sys.car (bruijn zs 0 3))))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(_var0, runtime,
      VNULL);
} else {
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_k430, env)}),
      VInlineCar(
        _var1),
      VInlineCar(
        _var2),
      VInlineCar(
        _var3));
}
 }
}
static void _V0map_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0map_k435" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0map_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_k435, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.890 4 0) (##inline ##sys.cons (bruijn ##x.892 2 0) (bruijn ##x.893 0 0)))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons(
        upenv->up->vars[0],
        _var0));
 }
}
static void _V0map_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0map_k434" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0map_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_k434, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 4 0) (close _V0map_k435) (bruijn ##x.894 0 0))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_k435, env)}),
      _var0);
 }
}
static void _V0map_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0map_k433" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0map_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_k433, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 77 72) (close _V0map_k434) (##intrinsic ##sys.cdr) (bruijn lsts 2 1))
V_CALL(VGetArg(upenv, 77-1, 72), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_k434, env)}),
      _V40_V10sys_Dcdr,
      upenv->up->vars[1]);
 }
}
static void _V0map_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0map_k432" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0map_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_k432, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn apply 76 135) (close _V0map_k433) (bruijn f 3 1) (bruijn ##x.895 0 0))
V_CALL(VGetArg(upenv, 76-1, 135), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_k433, env)}),
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V0map_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0map_lambda98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0map_lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_lambda98, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.car (bruijn lsts 0 1))) ((bruijn ##k.890 0 0) '()) ((bruijn map 75 72) (close _V0map_k432) (##intrinsic ##sys.car) (bruijn lsts 0 1)))
if(VDecodeBool(
VInlineNullP(
        VInlineCar(
        _var1)))) {
V_CALL(_var0, runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 75-1, 72), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_k432, env)}),
      _V40_V10sys_Dcar,
      _var1);
}
 }
}
__attribute__((used)) static void _V20CaseError__V0map_lambda94(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0map_lambda94 #t (3 (letrec 1 ((close _V0map_lambda95)) ((bruijn loop 0 0) (bruijn ##k.862 1 0) (bruijn xs 1 2)))) (4 (letrec 1 ((close _V0map_lambda96)) ((bruijn loop 0 0) (bruijn ##k.869 1 0) (bruijn xs 1 2) (bruijn ys 1 3)))) (5 (letrec 1 ((close _V0map_lambda97)) ((bruijn loop 0 0) (bruijn ##k.878 1 0) (bruijn xs 1 2) (bruijn ys 1 3) (bruijn zs 1 4)))) (2 + (letrec 1 ((close _V0map_lambda98)) ((bruijn loop 0 0) (bruijn ##k.889 1 0) (bruijn lsts 1 2)))))
 VError("Not enough arguments to _V0map_lambda94, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0map_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0map_lambda94" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0map_lambda94, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0map_lambda95)) ((bruijn loop 0 0) (bruijn ##k.862 1 0) (bruijn xs 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_lambda95, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2]);
    }
 }
}
__attribute__((used)) static void _V20Case1__V0map_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0map_lambda94" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0map_lambda94, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 1 ((close _V0map_lambda96)) ((bruijn loop 0 0) (bruijn ##k.869 1 0) (bruijn xs 1 2) (bruijn ys 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_lambda96, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
__attribute__((used)) static void _V20Case2__V0map_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0map_lambda94" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0map_lambda94, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 1 ((close _V0map_lambda97)) ((bruijn loop 0 0) (bruijn ##k.878 1 0) (bruijn xs 1 2) (bruijn ys 1 3) (bruijn zs 1 4)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_lambda97, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3],
      upenv->vars[4]);
    }
 }
}
__attribute__((used)) static void _V20Case3__V0map_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0map_lambda94" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0map_lambda94, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // (letrec 1 ((close _V0map_lambda98)) ((bruijn loop 0 0) (bruijn ##k.889 1 0) (bruijn lsts 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_lambda98, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2]);
    }
 }
}
void _V0map_lambda94(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0map_lambda94:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0map_lambda94\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0map_lambda94\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V0map_lambda94\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V0map_lambda94\n"
"    jmp _V20CaseError__V0map_lambda94\n"
);
static void _V0vanity_V0core_V20_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k77) (bruijn map 72 72) (close _V0map_lambda94))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k77, env)}),
      VEncodeInt(72l), VEncodeInt(72l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_lambda94, env)})
    );
 }
}
static void _V0list__ref_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__ref_k437" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__ref_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__ref_k437, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list-ref 74 71) (bruijn ##k.897 2 0) (##inline ##sys.cdr (bruijn lst 2 1)) (bruijn ##x.900 0 0))
V_CALL(VGetArg(upenv, 74-1, 71), runtime,
      upenv->up->vars[0],
      VInlineCdr(
        upenv->up->vars[1]),
      _var0);
 }
}
static void _V0list__ref_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__ref_k436" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__ref_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__ref_k436, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.898 0 0) ((bruijn ##k.897 1 0) (##inline ##sys.car (bruijn lst 1 1))) ((bruijn - 73 29) (close _V0list__ref_k437) (bruijn x 1 2) 1))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VInlineCar(
        upenv->vars[1]));
} else {
V_CALL(VGetArg(upenv, 73-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__ref_k437, env)}),
      upenv->vars[2],
      VEncodeInt(1l));
}
 }
}
static void _V0list__ref_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0list__ref_lambda99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0list__ref_lambda99, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__ref_lambda99, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 72 13) (close _V0list__ref_k436) (bruijn x 0 2) 0)
V_CALL(VGetArg(upenv, 72-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__ref_k436, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0core_V20_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k76) (bruijn list-ref 71 71) (close _V0list__ref_lambda99))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k76, env)}),
      VEncodeInt(71l), VEncodeInt(71l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__ref_lambda99, env)})
    );
 }
}
static void _V0length_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0length_k438" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0length_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0length_k438, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.902 1 0) (##inline ##sys.cdr (bruijn lst 1 1)) (bruijn ##x.905 0 0))
V_CALL(upenv->up->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr(
        upenv->vars[1]),
      _var0);
 }
}
static void _V0length_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0length_lambda101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0length_lambda101, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0length_lambda101, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn lst 0 1)) ((bruijn ##k.902 0 0) (bruijn i 0 2)) ((bruijn + 73 28) (close _V0length_k438) (bruijn i 0 2) 1))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(_var0, runtime,
      _var2);
} else {
V_CALL(VGetArg(upenv, 73-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0length_k438, env)}),
      _var2,
      VEncodeInt(1l));
}
 }
}
static void _V0length_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0length_lambda100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0length_lambda100, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0length_lambda100, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0length_lambda101)) ((bruijn loop 0 0) (bruijn ##k.901 1 0) (bruijn lst 1 1) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0length_lambda101, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeInt(0l));
    }
 }
}
static void _V0vanity_V0core_V20_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k75) (bruijn length 70 70) (close _V0length_lambda100))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k75, env)}),
      VEncodeInt(70l), VEncodeInt(70l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0length_lambda100, env)})
    );
 }
}
static void _V0list_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0list_lambda102" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0list_lambda102, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0list_lambda102, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn ##k.906 0 0) (bruijn args 0 1))
V_CALL(_var0, runtime,
      _varargs);
 }
}
static void _V0vanity_V0core_V20_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k74) (bruijn list 69 69) (close _V0list_lambda102))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k74, env)}),
      VEncodeInt(69l), VEncodeInt(69l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list_lambda102, env)})
    );
 }
}
static void _V0cddddr_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cddddr_lambda103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cddddr_lambda103, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddddr_lambda103, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.907 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCdr(
        VInlineCdr(
        VInlineCdr(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k73) (bruijn cddddr 68 68) (close _V0cddddr_lambda103))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k73, env)}),
      VEncodeInt(68l), VEncodeInt(68l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddddr_lambda103, env)})
    );
 }
}
static void _V0cdddar_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdddar_lambda104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdddar_lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdddar_lambda104, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.911 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCdr(
        VInlineCdr(
        VInlineCar(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k72) (bruijn cdddar 67 67) (close _V0cdddar_lambda104))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k72, env)}),
      VEncodeInt(67l), VEncodeInt(67l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdddar_lambda104, env)})
    );
 }
}
static void _V0cddadr_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cddadr_lambda105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cddadr_lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddadr_lambda105, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.915 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCdr(
        VInlineCar(
        VInlineCdr(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k71) (bruijn cddadr 66 66) (close _V0cddadr_lambda105))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k71, env)}),
      VEncodeInt(66l), VEncodeInt(66l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddadr_lambda105, env)})
    );
 }
}
static void _V0cddaar_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cddaar_lambda106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cddaar_lambda106, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddaar_lambda106, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.919 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCdr(
        VInlineCar(
        VInlineCar(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k70) (bruijn cddaar 65 65) (close _V0cddaar_lambda106))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k70, env)}),
      VEncodeInt(65l), VEncodeInt(65l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddaar_lambda106, env)})
    );
 }
}
static void _V0cdaddr_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdaddr_lambda107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdaddr_lambda107, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdaddr_lambda107, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.923 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCar(
        VInlineCdr(
        VInlineCdr(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k69) (bruijn cdaddr 64 64) (close _V0cdaddr_lambda107))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k69, env)}),
      VEncodeInt(64l), VEncodeInt(64l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdaddr_lambda107, env)})
    );
 }
}
static void _V0cdadar_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdadar_lambda108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdadar_lambda108, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdadar_lambda108, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.927 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCar(
        VInlineCdr(
        VInlineCar(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k68) (bruijn cdadar 63 63) (close _V0cdadar_lambda108))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k68, env)}),
      VEncodeInt(63l), VEncodeInt(63l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdadar_lambda108, env)})
    );
 }
}
static void _V0cdaadr_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdaadr_lambda109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdaadr_lambda109, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdaadr_lambda109, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.931 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCar(
        VInlineCar(
        VInlineCdr(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k67) (bruijn cdaadr 62 62) (close _V0cdaadr_lambda109))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k67, env)}),
      VEncodeInt(62l), VEncodeInt(62l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdaadr_lambda109, env)})
    );
 }
}
static void _V0cdaaar_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdaaar_lambda110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdaaar_lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdaaar_lambda110, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.935 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCar(
        VInlineCar(
        VInlineCar(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k66) (bruijn cdaaar 61 61) (close _V0cdaaar_lambda110))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k66, env)}),
      VEncodeInt(61l), VEncodeInt(61l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdaaar_lambda110, env)})
    );
 }
}
static void _V0cadddr_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cadddr_lambda111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cadddr_lambda111, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadddr_lambda111, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.939 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCdr(
        VInlineCdr(
        VInlineCdr(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k65) (bruijn cadddr 60 60) (close _V0cadddr_lambda111))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k65, env)}),
      VEncodeInt(60l), VEncodeInt(60l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadddr_lambda111, env)})
    );
 }
}
static void _V0caddar_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caddar_lambda112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caddar_lambda112, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caddar_lambda112, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.943 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCdr(
        VInlineCdr(
        VInlineCar(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k64) (bruijn caddar 59 59) (close _V0caddar_lambda112))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k64, env)}),
      VEncodeInt(59l), VEncodeInt(59l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caddar_lambda112, env)})
    );
 }
}
static void _V0cadadr_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cadadr_lambda113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cadadr_lambda113, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadadr_lambda113, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.947 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCdr(
        VInlineCar(
        VInlineCdr(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k63) (bruijn cadadr 58 58) (close _V0cadadr_lambda113))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k63, env)}),
      VEncodeInt(58l), VEncodeInt(58l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadadr_lambda113, env)})
    );
 }
}
static void _V0cadaar_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cadaar_lambda114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cadaar_lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadaar_lambda114, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.951 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCdr(
        VInlineCar(
        VInlineCar(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k62) (bruijn cadaar 57 57) (close _V0cadaar_lambda114))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k62, env)}),
      VEncodeInt(57l), VEncodeInt(57l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadaar_lambda114, env)})
    );
 }
}
static void _V0caaddr_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caaddr_lambda115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caaddr_lambda115, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caaddr_lambda115, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.955 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCar(
        VInlineCdr(
        VInlineCdr(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k61) (bruijn caaddr 56 56) (close _V0caaddr_lambda115))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k61, env)}),
      VEncodeInt(56l), VEncodeInt(56l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caaddr_lambda115, env)})
    );
 }
}
static void _V0caadar_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caadar_lambda116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caadar_lambda116, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caadar_lambda116, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.959 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCar(
        VInlineCdr(
        VInlineCar(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k60) (bruijn caadar 55 55) (close _V0caadar_lambda116))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k60, env)}),
      VEncodeInt(55l), VEncodeInt(55l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caadar_lambda116, env)})
    );
 }
}
static void _V0caaadr_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caaadr_lambda117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caaadr_lambda117, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caaadr_lambda117, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.963 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCar(
        VInlineCar(
        VInlineCdr(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k59) (bruijn caaadr 54 54) (close _V0caaadr_lambda117))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k59, env)}),
      VEncodeInt(54l), VEncodeInt(54l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caaadr_lambda117, env)})
    );
 }
}
static void _V0caaaar_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caaaar_lambda118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caaaar_lambda118, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caaaar_lambda118, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.967 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))))
V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCar(
        VInlineCar(
        VInlineCar(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k58) (bruijn caaaar 53 53) (close _V0caaaar_lambda118))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k58, env)}),
      VEncodeInt(53l), VEncodeInt(53l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caaaar_lambda118, env)})
    );
 }
}
static void _V0cdddr_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdddr_lambda119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdddr_lambda119, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdddr_lambda119, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.971 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1)))))
V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCdr(
        VInlineCdr(
        _var1))));
 }
}
static void _V0vanity_V0core_V20_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k57) (bruijn cdddr 52 52) (close _V0cdddr_lambda119))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k57, env)}),
      VEncodeInt(52l), VEncodeInt(52l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdddr_lambda119, env)})
    );
 }
}
static void _V0cddar_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cddar_lambda120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cddar_lambda120, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddar_lambda120, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.974 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1)))))
V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCdr(
        VInlineCar(
        _var1))));
 }
}
static void _V0vanity_V0core_V20_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k56) (bruijn cddar 51 51) (close _V0cddar_lambda120))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k56, env)}),
      VEncodeInt(51l), VEncodeInt(51l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddar_lambda120, env)})
    );
 }
}
static void _V0cdadr_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdadr_lambda121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdadr_lambda121, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdadr_lambda121, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.977 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1)))))
V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCar(
        VInlineCdr(
        _var1))));
 }
}
static void _V0vanity_V0core_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k55) (bruijn cdadr 50 50) (close _V0cdadr_lambda121))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k55, env)}),
      VEncodeInt(50l), VEncodeInt(50l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdadr_lambda121, env)})
    );
 }
}
static void _V0cdaar_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdaar_lambda122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdaar_lambda122, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdaar_lambda122, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.980 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1)))))
V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCar(
        VInlineCar(
        _var1))));
 }
}
static void _V0vanity_V0core_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k54) (bruijn cdaar 49 49) (close _V0cdaar_lambda122))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k54, env)}),
      VEncodeInt(49l), VEncodeInt(49l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdaar_lambda122, env)})
    );
 }
}
static void _V0caddr_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caddr_lambda123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caddr_lambda123, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caddr_lambda123, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.983 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1)))))
V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCdr(
        VInlineCdr(
        _var1))));
 }
}
static void _V0vanity_V0core_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k53) (bruijn caddr 48 48) (close _V0caddr_lambda123))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k53, env)}),
      VEncodeInt(48l), VEncodeInt(48l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caddr_lambda123, env)})
    );
 }
}
static void _V0cadar_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cadar_lambda124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cadar_lambda124, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadar_lambda124, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.986 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1)))))
V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCdr(
        VInlineCar(
        _var1))));
 }
}
static void _V0vanity_V0core_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k52) (bruijn cadar 47 47) (close _V0cadar_lambda124))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k52, env)}),
      VEncodeInt(47l), VEncodeInt(47l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadar_lambda124, env)})
    );
 }
}
static void _V0caadr_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caadr_lambda125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caadr_lambda125, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caadr_lambda125, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.989 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1)))))
V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCar(
        VInlineCdr(
        _var1))));
 }
}
static void _V0vanity_V0core_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k51) (bruijn caadr 46 46) (close _V0caadr_lambda125))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k51, env)}),
      VEncodeInt(46l), VEncodeInt(46l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caadr_lambda125, env)})
    );
 }
}
static void _V0caaar_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caaar_lambda126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caaar_lambda126, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caaar_lambda126, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.992 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1)))))
V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCar(
        VInlineCar(
        _var1))));
 }
}
static void _V0vanity_V0core_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k50) (bruijn caaar 45 45) (close _V0caaar_lambda126))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k50, env)}),
      VEncodeInt(45l), VEncodeInt(45l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caaar_lambda126, env)})
    );
 }
}
static void _V0cddr_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cddr_lambda127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cddr_lambda127, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddr_lambda127, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.995 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))
V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCdr(
        _var1)));
 }
}
static void _V0vanity_V0core_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k49) (bruijn cddr 44 44) (close _V0cddr_lambda127))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k49, env)}),
      VEncodeInt(44l), VEncodeInt(44l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddr_lambda127, env)})
    );
 }
}
static void _V0cdar_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdar_lambda128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdar_lambda128, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdar_lambda128, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.997 0 0) (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))
V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCar(
        _var1)));
 }
}
static void _V0vanity_V0core_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k48) (bruijn cdar 43 43) (close _V0cdar_lambda128))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k48, env)}),
      VEncodeInt(43l), VEncodeInt(43l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdar_lambda128, env)})
    );
 }
}
static void _V0cadr_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cadr_lambda129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cadr_lambda129, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadr_lambda129, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.999 0 0) (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))
V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCdr(
        _var1)));
 }
}
static void _V0vanity_V0core_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k47) (bruijn cadr 42 42) (close _V0cadr_lambda129))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k47, env)}),
      VEncodeInt(42l), VEncodeInt(42l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadr_lambda129, env)})
    );
 }
}
static void _V0caar_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caar_lambda130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caar_lambda130, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caar_lambda130, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1001 0 0) (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))
V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCar(
        _var1)));
 }
}
static void _V0vanity_V0core_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k46) (bruijn caar 41 41) (close _V0caar_lambda130))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k46, env)}),
      VEncodeInt(41l), VEncodeInt(41l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caar_lambda130, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k45) (bruijn set-cdr! 40 40) (##intrinsic ##sys.set-cdr!))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k45, env)}),
      VEncodeInt(40l), VEncodeInt(40l),
      _V40_V10sys_Dset__cdr_B
    );
 }
}
static void _V0vanity_V0core_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k44) (bruijn set-car! 39 39) (##intrinsic ##sys.set-car!))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k44, env)}),
      VEncodeInt(39l), VEncodeInt(39l),
      _V40_V10sys_Dset__car_B
    );
 }
}
static void _V0vanity_V0core_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k43) (bruijn cdr 38 38) (##intrinsic ##sys.cdr))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k43, env)}),
      VEncodeInt(38l), VEncodeInt(38l),
      _V40_V10sys_Dcdr
    );
 }
}
static void _V0vanity_V0core_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k42) (bruijn car 37 37) (##intrinsic ##sys.car))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k42, env)}),
      VEncodeInt(37l), VEncodeInt(37l),
      _V40_V10sys_Dcar
    );
 }
}
static void _V0vanity_V0core_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k41) (bruijn cons 36 36) (##intrinsic ##sys.cons))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k41, env)}),
      VEncodeInt(36l), VEncodeInt(36l),
      _V40_V10sys_Dcons
    );
 }
}
static void _V0min_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0min_k439" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k439, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1005 0 0) ((bruijn ##k.1004 1 0) (bruijn a 1 1)) ((bruijn ##k.1004 1 0) (bruijn b 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
}
 }
}
static void _V0min_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0min_k440" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k440, runtime, upenv, 1, argc, _var0) {
  // ((bruijn min 37 35) (bruijn ##k.1006 1 0) (bruijn ##x.1007 0 0) (bruijn c 1 3))
V_CALL(VGetArg(upenv, 37-1, 35), runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[3]);
 }
}
static void _V0min_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0min_k442" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k442, runtime, upenv, 1, argc, _var0) {
  // ((bruijn min 38 35) (bruijn ##k.1008 2 0) (bruijn ##x.1009 0 0) (bruijn d 2 4))
V_CALL(VGetArg(upenv, 38-1, 35), runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[4]);
 }
}
static void _V0min_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0min_k441" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k441, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn min 37 35) (close _V0min_k442) (bruijn ##x.1010 0 0) (bruijn c 1 3))
V_CALL(VGetArg(upenv, 37-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k442, env)}),
      _var0,
      upenv->vars[3]);
 }
}
static void _V0min_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0min_k446" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k446, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.1012 4 0) (bruijn ##x.1014 1 0) (bruijn ##x.1015 0 0))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0min_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0min_k445" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k445, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 41 38) (close _V0min_k446) (bruijn bs 5 2))
V_CALL(VGetArg(upenv, 41-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k446, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0min_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0min_k444" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k444, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn min 40 35) (close _V0min_k445) (bruijn a 4 1) (bruijn ##x.1016 0 0))
V_CALL(VGetArg(upenv, 40-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k445, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0min_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0min_k443" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k443, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1013 0 0) ((bruijn ##k.1012 1 0) (bruijn ret 1 1)) ((bruijn car 39 37) (close _V0min_k444) (bruijn bs 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 39-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k444, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0min_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0min_lambda132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0min_lambda132, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_lambda132, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 38 0) (close _V0min_k443) (bruijn bs 2 2))
V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k443, env)}),
      upenv->up->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V0min_lambda131(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0min_lambda131 #t (2 ((bruijn ##k.1003 0 0) (bruijn a 0 1))) (3 ((bruijn < 36 19) (close _V0min_k439) (bruijn a 0 1) (bruijn b 0 2))) (4 ((bruijn min 36 35) (close _V0min_k440) (bruijn a 0 1) (bruijn b 0 2))) (5 ((bruijn min 36 35) (close _V0min_k441) (bruijn a 0 1) (bruijn b 0 2))) (2 + (letrec 1 ((close _V0min_lambda132)) ((bruijn loop 0 0) (bruijn ##k.1011 1 0) (bruijn a 1 1) (bruijn bs 1 2)))))
 VError("Not enough arguments to _V0min_lambda131, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0min_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0min_lambda131" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0min_lambda131, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1003 0 0) (bruijn a 0 1))
V_CALL(_var0, runtime,
      _var1);
 }
}
__attribute__((used)) static void _V20Case1__V0min_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0min_lambda131" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0min_lambda131, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn < 36 19) (close _V0min_k439) (bruijn a 0 1) (bruijn b 0 2))
V_CALL(VGetArg(upenv, 36-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k439, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case2__V0min_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case2__V0min_lambda131" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0min_lambda131, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn min 36 35) (close _V0min_k440) (bruijn a 0 1) (bruijn b 0 2))
V_CALL(VGetArg(upenv, 36-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k440, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case3__V0min_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case3__V0min_lambda131" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0min_lambda131, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn min 36 35) (close _V0min_k441) (bruijn a 0 1) (bruijn b 0 2))
V_CALL(VGetArg(upenv, 36-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k441, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case4__V0min_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case4__V0min_lambda131" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0min_lambda131, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // (letrec 1 ((close _V0min_lambda132)) ((bruijn loop 0 0) (bruijn ##k.1011 1 0) (bruijn a 1 1) (bruijn bs 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_lambda132, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
    }
 }
}
void _V0min_lambda131(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0min_lambda131:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0min_lambda131\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0min_lambda131\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V0min_lambda131\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case3__V0min_lambda131\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case4__V0min_lambda131\n"
"    jmp _V20CaseError__V0min_lambda131\n"
);
static void _V0vanity_V0core_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k40) (bruijn min 35 35) (close _V0min_lambda131))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k40, env)}),
      VEncodeInt(35l), VEncodeInt(35l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_lambda131, env)})
    );
 }
}
static void _V0max_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0max_k447" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k447, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1019 0 0) ((bruijn ##k.1018 1 0) (bruijn a 1 1)) ((bruijn ##k.1018 1 0) (bruijn b 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
}
 }
}
static void _V0max_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0max_k448" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k448, runtime, upenv, 1, argc, _var0) {
  // ((bruijn max 36 34) (bruijn ##k.1020 1 0) (bruijn ##x.1021 0 0) (bruijn c 1 3))
V_CALL(VGetArg(upenv, 36-1, 34), runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[3]);
 }
}
static void _V0max_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0max_k450" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k450, runtime, upenv, 1, argc, _var0) {
  // ((bruijn max 37 34) (bruijn ##k.1022 2 0) (bruijn ##x.1023 0 0) (bruijn d 2 4))
V_CALL(VGetArg(upenv, 37-1, 34), runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[4]);
 }
}
static void _V0max_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0max_k449" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k449, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn max 36 34) (close _V0max_k450) (bruijn ##x.1024 0 0) (bruijn c 1 3))
V_CALL(VGetArg(upenv, 36-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k450, env)}),
      _var0,
      upenv->vars[3]);
 }
}
static void _V0max_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0max_k454" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k454, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.1026 4 0) (bruijn ##x.1028 1 0) (bruijn ##x.1029 0 0))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0max_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0max_k453" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k453, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 40 38) (close _V0max_k454) (bruijn bs 5 2))
V_CALL(VGetArg(upenv, 40-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k454, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0max_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0max_k452" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k452, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn max 39 34) (close _V0max_k453) (bruijn a 4 1) (bruijn ##x.1030 0 0))
V_CALL(VGetArg(upenv, 39-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k453, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0max_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0max_k451" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k451, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1027 0 0) ((bruijn ##k.1026 1 0) (bruijn ret 1 1)) ((bruijn car 38 37) (close _V0max_k452) (bruijn bs 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 38-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k452, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0max_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0max_lambda134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0max_lambda134, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_lambda134, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 37 0) (close _V0max_k451) (bruijn bs 2 2))
V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k451, env)}),
      upenv->up->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V0max_lambda133(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0max_lambda133 #t (2 ((bruijn ##k.1017 0 0) (bruijn a 0 1))) (3 ((bruijn > 35 21) (close _V0max_k447) (bruijn a 0 1) (bruijn b 0 2))) (4 ((bruijn max 35 34) (close _V0max_k448) (bruijn a 0 1) (bruijn b 0 2))) (5 ((bruijn max 35 34) (close _V0max_k449) (bruijn a 0 1) (bruijn b 0 2))) (2 + (letrec 1 ((close _V0max_lambda134)) ((bruijn loop 0 0) (bruijn ##k.1025 1 0) (bruijn a 1 1) (bruijn bs 1 2)))))
 VError("Not enough arguments to _V0max_lambda133, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0max_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0max_lambda133" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0max_lambda133, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1017 0 0) (bruijn a 0 1))
V_CALL(_var0, runtime,
      _var1);
 }
}
__attribute__((used)) static void _V20Case1__V0max_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0max_lambda133" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0max_lambda133, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn > 35 21) (close _V0max_k447) (bruijn a 0 1) (bruijn b 0 2))
V_CALL(VGetArg(upenv, 35-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k447, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case2__V0max_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case2__V0max_lambda133" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0max_lambda133, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn max 35 34) (close _V0max_k448) (bruijn a 0 1) (bruijn b 0 2))
V_CALL(VGetArg(upenv, 35-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k448, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case3__V0max_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case3__V0max_lambda133" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0max_lambda133, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn max 35 34) (close _V0max_k449) (bruijn a 0 1) (bruijn b 0 2))
V_CALL(VGetArg(upenv, 35-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k449, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case4__V0max_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case4__V0max_lambda133" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0max_lambda133, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // (letrec 1 ((close _V0max_lambda134)) ((bruijn loop 0 0) (bruijn ##k.1025 1 0) (bruijn a 1 1) (bruijn bs 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_lambda134, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
    }
 }
}
void _V0max_lambda133(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0max_lambda133:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0max_lambda133\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0max_lambda133\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V0max_lambda133\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case3__V0max_lambda133\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case4__V0max_lambda133\n"
"    jmp _V20CaseError__V0max_lambda133\n"
);
static void _V0vanity_V0core_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k39) (bruijn max 34 34) (close _V0max_lambda133))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k39, env)}),
      VEncodeInt(34l), VEncodeInt(34l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_lambda133, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k38) (bruijn remainder 33 33) (##intrinsic ##sys.remainder))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k38, env)}),
      VEncodeInt(33l), VEncodeInt(33l),
      _V40_V10sys_Dremainder
    );
 }
}
static void _V0vanity_V0core_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k37) (bruijn quotient 32 32) (##intrinsic ##sys.quotient))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k37, env)}),
      VEncodeInt(32l), VEncodeInt(32l),
      _V40_V10sys_Dquotient
    );
 }
}
static void _V0vanity_V0core_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k36) (bruijn / 31 31) (##intrinsic ##sys./))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k36, env)}),
      VEncodeInt(31l), VEncodeInt(31l),
      _V40_V10sys_D_W
    );
 }
}
static void _V0vanity_V0core_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k35) (bruijn * 30 30) (##intrinsic ##sys.*))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k35, env)}),
      VEncodeInt(30l), VEncodeInt(30l),
      _V40_V10sys_D_S
    );
 }
}
static void _V0vanity_V0core_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k34) (bruijn - 29 29) (##intrinsic ##sys.-))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k34, env)}),
      VEncodeInt(29l), VEncodeInt(29l),
      _V40_V10sys_D__
    );
 }
}
static void _V0vanity_V0core_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k33) (bruijn + 28 28) (##intrinsic ##sys.+))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k33, env)}),
      VEncodeInt(28l), VEncodeInt(28l),
      _V40_V10sys_D_P
    );
 }
}
static void _V0vanity_V0core_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k32) (bruijn complex? 27 27) (bruijn number? 27 26))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k32, env)}),
      VEncodeInt(27l), VEncodeInt(27l),
      VGetArg(upenv, 27-1, 26)
    );
 }
}
static void _V0number_Q_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0number_Q_k455" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0number_Q_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0number_Q_k455, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1032 0 0) ((bruijn ##k.1031 1 0) (bruijn ##p.1032 0 0)) (##sys.int? (bruijn ##k.1031 1 0) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
    V_CALL_FUNC(VIntP2, NULL, runtime,
      upenv->vars[0],
      upenv->vars[1]);
}
 }
}
static void _V0number_Q_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0number_Q_lambda135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0number_Q_lambda135, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0number_Q_lambda135, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##sys.double? (close _V0number_Q_k455) (bruijn x 0 1))
    V_CALL_FUNC(VDoubleP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0number_Q_k455, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k31) (bruijn number? 26 26) (close _V0number_Q_lambda135))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k31, env)}),
      VEncodeInt(26l), VEncodeInt(26l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0number_Q_lambda135, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k30) (bruijn exact->inexact 25 25) (bruijn inexact 25 24))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k30, env)}),
      VEncodeInt(25l), VEncodeInt(25l),
      VGetArg(upenv, 25-1, 24)
    );
 }
}
static void _V0inexact_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0inexact_lambda136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0inexact_lambda136, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inexact_lambda136, runtime, upenv, 2, argc, _var0, _var1) {
  // (##sys.+ (bruijn ##k.1033 0 0) (bruijn x 0 1) 0.000000)
    V_CALL_FUNC(VAdd2, NULL, runtime,
      _var0,
      _var1,
      VEncodeNumber(0.000000));
 }
}
static void _V0vanity_V0core_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k29) (bruijn inexact 24 24) (close _V0inexact_lambda136))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k29, env)}),
      VEncodeInt(24l), VEncodeInt(24l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inexact_lambda136, env)})
    );
 }
}
static void _V0_G_E_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_E_k462" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_E_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_k462, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.1035 7 0) (bruijn ##x.1038 0 0))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0_G_E_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_E_k461" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_E_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_k461, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1037 0 0) ((bruijn ##k.1035 6 0) #f) ((bruijn cdr 32 38) (close _V0_G_E_k462) (bruijn xs 6 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 32-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_k462, env)}),
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V0_G_E_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_E_k460" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_E_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_k460, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 31 13) (close _V0_G_E_k461) (bruijn ##x.1039 0 0) -1)
V_CALL(VGetArg(upenv, 31-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_k461, env)}),
      _var0,
      VEncodeInt(-1l));
 }
}
static void _V0_G_E_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_E_k459" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_E_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_k459, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##sys.cmp (close _V0_G_E_k460) (bruijn ##x.1040 1 0) (bruijn ##x.1041 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_k460, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0_G_E_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_E_k458" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_E_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_k458, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 29 42) (close _V0_G_E_k459) (bruijn xs 3 1))
V_CALL(VGetArg(upenv, 29-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_k459, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0_G_E_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_E_k457" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_E_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_k457, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1036 0 0) ((bruijn ##k.1035 2 0) #t) ((bruijn car 28 37) (close _V0_G_E_k458) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
V_CALL(VGetArg(upenv, 28-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_k458, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0_G_E_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_E_k456" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_E_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_k456, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 27 0) (close _V0_G_E_k457) (bruijn ##x.1042 0 0))
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_k457, env)}),
      _var0);
 }
}
static void _V0_G_E_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0_G_E_lambda138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0_G_E_lambda138, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_lambda138, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 26 38) (close _V0_G_E_k456) (bruijn xs 0 1))
V_CALL(VGetArg(upenv, 26-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_k456, env)}),
      _var1);
 }
}
static void _V0_G_E_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_E_k464" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_E_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_k464, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.1034 3 0) (bruijn ##x.1043 0 0))
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0_G_E_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_E_k463" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_E_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_k463, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 26 36) (close _V0_G_E_k464) (bruijn x0 2 1) (bruijn ##x.1044 0 0))
V_CALL(VGetArg(upenv, 26-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_k464, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0_G_E_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0_G_E_lambda137" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0_G_E_lambda137, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_lambda137, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0_G_E_lambda138)) ((bruijn cons 25 36) (close _V0_G_E_k463) (bruijn x1 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_lambda138, env)});
V_CALL(VGetArg(upenv, 25-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_k463, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V0vanity_V0core_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k28) (bruijn >= 23 23) (close _V0_G_E_lambda137))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k28, env)}),
      VEncodeInt(23l), VEncodeInt(23l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_lambda137, env)})
    );
 }
}
static void _V0_L_E_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_E_k471" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_E_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_k471, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.1046 7 0) (bruijn ##x.1049 0 0))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0_L_E_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_E_k470" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_E_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_k470, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1048 0 0) ((bruijn ##k.1046 6 0) #f) ((bruijn cdr 31 38) (close _V0_L_E_k471) (bruijn xs 6 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 31-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_k471, env)}),
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V0_L_E_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_E_k469" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_E_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_k469, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 30 13) (close _V0_L_E_k470) (bruijn ##x.1050 0 0) 1)
V_CALL(VGetArg(upenv, 30-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_k470, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0_L_E_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_E_k468" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_E_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_k468, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##sys.cmp (close _V0_L_E_k469) (bruijn ##x.1051 1 0) (bruijn ##x.1052 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_k469, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0_L_E_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_E_k467" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_E_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_k467, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 28 42) (close _V0_L_E_k468) (bruijn xs 3 1))
V_CALL(VGetArg(upenv, 28-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_k468, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0_L_E_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_E_k466" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_E_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_k466, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1047 0 0) ((bruijn ##k.1046 2 0) #t) ((bruijn car 27 37) (close _V0_L_E_k467) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
V_CALL(VGetArg(upenv, 27-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_k467, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0_L_E_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_E_k465" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_E_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_k465, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 26 0) (close _V0_L_E_k466) (bruijn ##x.1053 0 0))
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_k466, env)}),
      _var0);
 }
}
static void _V0_L_E_lambda140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0_L_E_lambda140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0_L_E_lambda140, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_lambda140, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 25 38) (close _V0_L_E_k465) (bruijn xs 0 1))
V_CALL(VGetArg(upenv, 25-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_k465, env)}),
      _var1);
 }
}
static void _V0_L_E_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_E_k473" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_E_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_k473, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.1045 3 0) (bruijn ##x.1054 0 0))
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0_L_E_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_E_k472" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_E_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_k472, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 25 36) (close _V0_L_E_k473) (bruijn x0 2 1) (bruijn ##x.1055 0 0))
V_CALL(VGetArg(upenv, 25-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_k473, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0_L_E_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0_L_E_lambda139" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0_L_E_lambda139, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_lambda139, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0_L_E_lambda140)) ((bruijn cons 24 36) (close _V0_L_E_k472) (bruijn x1 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_lambda140, env)});
V_CALL(VGetArg(upenv, 24-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_k472, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V0vanity_V0core_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k27) (bruijn <= 22 22) (close _V0_L_E_lambda139))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k27, env)}),
      VEncodeInt(22l), VEncodeInt(22l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_lambda139, env)})
    );
 }
}
static void _V0_G_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_k480" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_k480, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.1057 7 0) (bruijn ##x.1060 0 0))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0_G_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_k479" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_k479, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1059 0 0) ((bruijn cdr 30 38) (close _V0_G_k480) (bruijn xs 6 1)) ((bruijn ##k.1057 6 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 30-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_k480, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0_G_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_k478" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_k478, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 29 13) (close _V0_G_k479) (bruijn ##x.1061 0 0) 1)
V_CALL(VGetArg(upenv, 29-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_k479, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0_G_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_k477" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_k477, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##sys.cmp (close _V0_G_k478) (bruijn ##x.1062 1 0) (bruijn ##x.1063 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_k478, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0_G_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_k476" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_k476, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 27 42) (close _V0_G_k477) (bruijn xs 3 1))
V_CALL(VGetArg(upenv, 27-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_k477, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0_G_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_k475" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_k475, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1058 0 0) ((bruijn ##k.1057 2 0) #t) ((bruijn car 26 37) (close _V0_G_k476) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
V_CALL(VGetArg(upenv, 26-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_k476, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0_G_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_k474" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_k474, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 25 0) (close _V0_G_k475) (bruijn ##x.1064 0 0))
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_k475, env)}),
      _var0);
 }
}
static void _V0_G_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0_G_lambda142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0_G_lambda142, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_lambda142, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 24 38) (close _V0_G_k474) (bruijn xs 0 1))
V_CALL(VGetArg(upenv, 24-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_k474, env)}),
      _var1);
 }
}
static void _V0_G_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_k482" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_k482, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.1056 3 0) (bruijn ##x.1065 0 0))
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0_G_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_k481" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_k481, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 24 36) (close _V0_G_k482) (bruijn x0 2 1) (bruijn ##x.1066 0 0))
V_CALL(VGetArg(upenv, 24-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_k482, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0_G_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0_G_lambda141" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0_G_lambda141, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_lambda141, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0_G_lambda142)) ((bruijn cons 23 36) (close _V0_G_k481) (bruijn x1 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_lambda142, env)});
V_CALL(VGetArg(upenv, 23-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_k481, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V0vanity_V0core_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k26) (bruijn > 21 21) (close _V0_G_lambda141))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k26, env)}),
      VEncodeInt(21l), VEncodeInt(21l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_lambda141, env)})
    );
 }
}
static void _V0_E_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_E_k489" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_E_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_k489, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.1068 7 0) (bruijn ##x.1071 0 0))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0_E_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_E_k488" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_E_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_k488, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1070 0 0) ((bruijn cdr 29 38) (close _V0_E_k489) (bruijn xs 6 1)) ((bruijn ##k.1068 6 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 29-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_k489, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0_E_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_E_k487" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_E_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_k487, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 28 13) (close _V0_E_k488) (bruijn ##x.1072 0 0) 0)
V_CALL(VGetArg(upenv, 28-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_k488, env)}),
      _var0,
      VEncodeInt(0l));
 }
}
static void _V0_E_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_E_k486" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_E_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_k486, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##sys.cmp (close _V0_E_k487) (bruijn ##x.1073 1 0) (bruijn ##x.1074 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_k487, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0_E_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_E_k485" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_E_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_k485, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 26 42) (close _V0_E_k486) (bruijn xs 3 1))
V_CALL(VGetArg(upenv, 26-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_k486, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0_E_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_E_k484" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_E_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_k484, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1069 0 0) ((bruijn ##k.1068 2 0) #t) ((bruijn car 25 37) (close _V0_E_k485) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
V_CALL(VGetArg(upenv, 25-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_k485, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0_E_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_E_k483" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_E_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_k483, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 24 0) (close _V0_E_k484) (bruijn ##x.1075 0 0))
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_k484, env)}),
      _var0);
 }
}
static void _V0_E_lambda144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0_E_lambda144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0_E_lambda144, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_lambda144, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 23 38) (close _V0_E_k483) (bruijn xs 0 1))
V_CALL(VGetArg(upenv, 23-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_k483, env)}),
      _var1);
 }
}
static void _V0_E_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_E_k491" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_E_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_k491, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.1067 3 0) (bruijn ##x.1076 0 0))
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0_E_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_E_k490" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_E_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_k490, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 23 36) (close _V0_E_k491) (bruijn x0 2 1) (bruijn ##x.1077 0 0))
V_CALL(VGetArg(upenv, 23-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_k491, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0_E_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0_E_lambda143" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0_E_lambda143, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_lambda143, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0_E_lambda144)) ((bruijn cons 22 36) (close _V0_E_k490) (bruijn x1 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_lambda144, env)});
V_CALL(VGetArg(upenv, 22-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_k490, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V0vanity_V0core_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k25) (bruijn = 20 20) (close _V0_E_lambda143))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k25, env)}),
      VEncodeInt(20l), VEncodeInt(20l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_lambda143, env)})
    );
 }
}
static void _V0_L_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_k498" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_k498, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.1079 7 0) (bruijn ##x.1082 0 0))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0_L_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_k497" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_k497, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1081 0 0) ((bruijn cdr 28 38) (close _V0_L_k498) (bruijn xs 6 1)) ((bruijn ##k.1079 6 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 28-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_k498, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0_L_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_k496" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_k496, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 27 13) (close _V0_L_k497) (bruijn ##x.1083 0 0) -1)
V_CALL(VGetArg(upenv, 27-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_k497, env)}),
      _var0,
      VEncodeInt(-1l));
 }
}
static void _V0_L_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_k495" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_k495, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##sys.cmp (close _V0_L_k496) (bruijn ##x.1084 1 0) (bruijn ##x.1085 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_k496, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0_L_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_k494" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_k494, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 25 42) (close _V0_L_k495) (bruijn xs 3 1))
V_CALL(VGetArg(upenv, 25-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_k495, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0_L_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_k493" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_k493, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1080 0 0) ((bruijn ##k.1079 2 0) #t) ((bruijn car 24 37) (close _V0_L_k494) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
V_CALL(VGetArg(upenv, 24-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_k494, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0_L_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_k492" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_k492, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 23 0) (close _V0_L_k493) (bruijn ##x.1086 0 0))
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_k493, env)}),
      _var0);
 }
}
static void _V0_L_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0_L_lambda146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0_L_lambda146, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_lambda146, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 22 38) (close _V0_L_k492) (bruijn xs 0 1))
V_CALL(VGetArg(upenv, 22-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_k492, env)}),
      _var1);
 }
}
static void _V0_L_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_k500" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_k500, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.1078 3 0) (bruijn ##x.1087 0 0))
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0_L_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_k499" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_k499, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 22 36) (close _V0_L_k500) (bruijn x0 2 1) (bruijn ##x.1088 0 0))
V_CALL(VGetArg(upenv, 22-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_k500, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0_L_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0_L_lambda145" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0_L_lambda145, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_lambda145, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0_L_lambda146)) ((bruijn cons 21 36) (close _V0_L_k499) (bruijn x1 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_lambda146, env)});
V_CALL(VGetArg(upenv, 21-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_k499, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V0vanity_V0core_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k24) (bruijn < 19 19) (close _V0_L_lambda145))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k24, env)}),
      VEncodeInt(19l), VEncodeInt(19l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_lambda145, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k23) (bruijn not 18 18) (##intrinsic ##sys.not))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k23, env)}),
      VEncodeInt(18l), VEncodeInt(18l),
      _V40_V10sys_Dnot
    );
 }
}
static void _V0equal_Q_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k504" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k504, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1105 0 0) (##sys.blob=? (bruijn ##k.1104 1 0) (bruijn x 4 1) (bruijn y 4 2)) ((bruijn ##k.1104 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      upenv->up->up->up->vars[2]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0equal_Q_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k503" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k503, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1103 1 0) (##sys.blob? (close _V0equal_Q_k504) (bruijn y 3 2)) ((bruijn ##k.1104 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k504, env)}),
      upenv->up->up->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0equal_Q_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k507" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k507, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1098 0 0) ((bruijn equal? 23 17) (bruijn ##k.1096 1 0) (##inline ##sys.cdr (bruijn x 5 1)) (##inline ##sys.cdr (bruijn y 5 2))) ((bruijn ##k.1096 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 17), runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 5-1, 1)),
      VInlineCdr(
        VGetArg(upenv, 5-1, 2)));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0equal_Q_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k506" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k506, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn x 4 1)) (if (##inline ##sys.pair? (bruijn y 4 2)) ((bruijn equal? 22 17) (close _V0equal_Q_k507) (##inline ##sys.car (bruijn x 4 1)) (##inline ##sys.car (bruijn y 4 2))) ((bruijn ##k.1096 0 0) #f)) ((bruijn ##k.1096 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->up->up->up->vars[1]))) {
if(VDecodeBool(
VInlinePairP(
        upenv->up->up->up->vars[2]))) {
V_CALL(VGetArg(upenv, 22-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k507, env)}),
      VInlineCar(
        upenv->up->up->up->vars[1]),
      VInlineCar(
        upenv->up->up->up->vars[2]));
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
static void _V0equal_Q_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k510" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k510, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1094 0 0) ((bruijn vector=? 24 16) (bruijn ##k.1089 6 0) (bruijn x 6 1) (bruijn y 6 2)) ((bruijn ##k.1089 6 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 24-1, 16), runtime,
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 6-1, 1),
      VGetArg(upenv, 6-1, 2));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0equal_Q_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k509" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k509, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1093 0 0) (##sys.vector? (close _V0equal_Q_k510) (bruijn y 5 2)) ((bruijn ##k.1089 5 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VVectorP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k510, env)}),
      VGetArg(upenv, 5-1, 2));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0equal_Q_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k508" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k508, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1092 0 0) ((bruijn ##k.1089 4 0) (bruijn ##p.1092 0 0)) (##sys.vector? (close _V0equal_Q_k509) (bruijn x 4 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      _var0);
} else {
    V_CALL_FUNC(VVectorP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k509, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V0equal_Q_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k505" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k505, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1091 0 0) ((bruijn ##k.1089 3 0) (bruijn ##p.1091 0 0)) ((close _V0equal_Q_k506) (close _V0equal_Q_k508)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      _var0);
} else {
V_CALL_FUNC(_V0equal_Q_k506, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k508, env)}));
}
 }
}
static void _V0equal_Q_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k502" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k502, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0equal_Q_k503) (close _V0equal_Q_k505))
V_CALL_FUNC(_V0equal_Q_k503, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k505, env)}));
 }
}
static void _V0equal_Q_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k501" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k501, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1090 0 0) ((bruijn ##k.1089 1 0) (bruijn ##p.1090 0 0)) (##sys.blob? (close _V0equal_Q_k502) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
    V_CALL_FUNC(VBlobP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k502, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0equal_Q_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0equal_Q_lambda147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0equal_Q_lambda147, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_lambda147, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0equal_Q_k501) (##inline ##sys.eq? (bruijn x 0 1) (bruijn y 0 2)))
V_CALL_FUNC(_V0equal_Q_k501, env, runtime,
      VInlineEq(
        _var1,
        _var2));
 }
}
static void _V0vanity_V0core_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k22) (bruijn equal? 17 17) (close _V0equal_Q_lambda147))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k22, env)}),
      VEncodeInt(17l), VEncodeInt(17l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_lambda147, env)})
    );
 }
}
static void _V0vector_E_Q_k519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector_E_Q_k519" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector_E_Q_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_E_Q_k519, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.1108 5 0) (bruijn ##x.1111 0 0) (bruijn len 5 2))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0vector_E_Q_k518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector_E_Q_k518" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector_E_Q_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_E_Q_k518, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1110 0 0) ((bruijn + 27 28) (close _V0vector_E_Q_k519) (bruijn i 4 1) 1) ((bruijn ##k.1108 4 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 27-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_E_Q_k519, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vector_E_Q_k517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector_E_Q_k517" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector_E_Q_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_E_Q_k517, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn equal? 26 17) (close _V0vector_E_Q_k518) (bruijn ##x.1112 1 0) (bruijn ##x.1113 0 0))
V_CALL(VGetArg(upenv, 26-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_E_Q_k518, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vector_E_Q_k516(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector_E_Q_k516" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector_E_Q_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_E_Q_k516, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-ref 25 98) (close _V0vector_E_Q_k517) (bruijn y 8 2) (bruijn i 2 1))
V_CALL(VGetArg(upenv, 25-1, 98), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_E_Q_k517, env)}),
      VGetArg(upenv, 8-1, 2),
      upenv->up->vars[1]);
 }
}
static void _V0vector_E_Q_k515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector_E_Q_k515" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector_E_Q_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_E_Q_k515, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1109 0 0) ((bruijn ##k.1108 1 0) #t) ((bruijn vector-ref 24 98) (close _V0vector_E_Q_k516) (bruijn x 7 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(true));
} else {
V_CALL(VGetArg(upenv, 24-1, 98), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_E_Q_k516, env)}),
      VGetArg(upenv, 7-1, 1),
      upenv->vars[1]);
}
 }
}
static void _V0vector_E_Q_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vector_E_Q_lambda149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vector_E_Q_lambda149, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_E_Q_lambda149, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn = 23 20) (close _V0vector_E_Q_k515) (bruijn i 0 1) (bruijn len 0 2))
V_CALL(VGetArg(upenv, 23-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_E_Q_k515, env)}),
      _var1,
      _var2);
 }
}
static void _V0vector_E_Q_k520(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector_E_Q_k520" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector_E_Q_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_E_Q_k520, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.1106 6 0) 0 (bruijn ##x.1114 0 0))
V_CALL(upenv->vars[0], runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(0l),
      _var0);
 }
}
static void _V0vector_E_Q_k514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector_E_Q_k514" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector_E_Q_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_E_Q_k514, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1107 0 0) ((bruijn ##k.1106 4 0) #f) (letrec 1 ((close _V0vector_E_Q_lambda149)) ((bruijn vector-length 22 100) (close _V0vector_E_Q_k520) (bruijn x 5 1))))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
} else {
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_E_Q_lambda149, env)});
V_CALL(VGetArg(upenv, 22-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_E_Q_k520, env)}),
      VGetArg(upenv, 5-1, 1));
    }
}
 }
}
static void _V0vector_E_Q_k513(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector_E_Q_k513" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector_E_Q_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_E_Q_k513, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 20 18) (close _V0vector_E_Q_k514) (bruijn ##x.1115 0 0))
V_CALL(VGetArg(upenv, 20-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_E_Q_k514, env)}),
      _var0);
 }
}
static void _V0vector_E_Q_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector_E_Q_k512" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector_E_Q_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_E_Q_k512, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 19 20) (close _V0vector_E_Q_k513) (bruijn ##x.1116 1 0) (bruijn ##x.1117 0 0))
V_CALL(VGetArg(upenv, 19-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_E_Q_k513, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vector_E_Q_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector_E_Q_k511" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector_E_Q_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_E_Q_k511, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-length 18 100) (close _V0vector_E_Q_k512) (bruijn y 1 2))
V_CALL(VGetArg(upenv, 18-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_E_Q_k512, env)}),
      upenv->vars[2]);
 }
}
static void _V0vector_E_Q_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vector_E_Q_lambda148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vector_E_Q_lambda148, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_E_Q_lambda148, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn vector-length 17 100) (close _V0vector_E_Q_k511) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 17-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_E_Q_k511, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k21) (bruijn vector=? 16 16) (close _V0vector_E_Q_lambda148))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k21, env)}),
      VEncodeInt(16l), VEncodeInt(16l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_E_Q_lambda148, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k20) (bruijn eqv? 15 15) (##intrinsic ##sys.eqv?))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k20, env)}),
      VEncodeInt(15l), VEncodeInt(15l),
      _V40_V10sys_Deqv_Q
    );
 }
}
static void _V0vanity_V0core_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k19) (bruijn symbol=? 14 14) (##intrinsic ##sys.symbol=?))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k19, env)}),
      VEncodeInt(14l), VEncodeInt(14l),
      _V40_V10sys_Dsymbol_E_Q
    );
 }
}
static void _V0vanity_V0core_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k18) (bruijn eq? 13 13) (##intrinsic ##sys.eq?))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k18, env)}),
      VEncodeInt(13l), VEncodeInt(13l),
      _V40_V10sys_Deq_Q
    );
 }
}
static void _V0vanity_V0core_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k17) (bruijn real? 12 12) (##intrinsic ##sys.double?))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k17, env)}),
      VEncodeInt(12l), VEncodeInt(12l),
      _V40_V10sys_Ddouble_Q
    );
 }
}
static void _V0vanity_V0core_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k16) (bruijn inexact? 11 11) (##intrinsic ##sys.double?))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k16, env)}),
      VEncodeInt(11l), VEncodeInt(11l),
      _V40_V10sys_Ddouble_Q
    );
 }
}
static void _V0vanity_V0core_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k15) (bruijn integer? 10 10) (##intrinsic ##sys.int?))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k15, env)}),
      VEncodeInt(10l), VEncodeInt(10l),
      _V40_V10sys_Dint_Q
    );
 }
}
static void _V0vanity_V0core_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k14) (bruijn exact? 9 9) (##intrinsic ##sys.int?))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k14, env)}),
      VEncodeInt(9l), VEncodeInt(9l),
      _V40_V10sys_Dint_Q
    );
 }
}
static void _V0vanity_V0core_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k13) (bruijn char? 8 8) (##intrinsic ##sys.char?))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k13, env)}),
      VEncodeInt(8l), VEncodeInt(8l),
      _V40_V10sys_Dchar_Q
    );
 }
}
static void _V0vanity_V0core_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k12) (bruijn string? 7 7) (##intrinsic ##sys.string?))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k12, env)}),
      VEncodeInt(7l), VEncodeInt(7l),
      _V40_V10sys_Dstring_Q
    );
 }
}
static void _V0vanity_V0core_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k11) (bruijn symbol? 6 6) (##intrinsic ##sys.symbol?))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k11, env)}),
      VEncodeInt(6l), VEncodeInt(6l),
      _V40_V10sys_Dsymbol_Q
    );
 }
}
static void _V0vanity_V0core_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k10) (bruijn procedure? 5 5) (##intrinsic ##sys.procedure?))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k10, env)}),
      VEncodeInt(5l), VEncodeInt(5l),
      _V40_V10sys_Dprocedure_Q
    );
 }
}
static void _V0vanity_V0core_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k9) (bruijn vector? 4 4) (##intrinsic ##sys.vector?))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k9, env)}),
      VEncodeInt(4l), VEncodeInt(4l),
      _V40_V10sys_Dvector_Q
    );
 }
}
static void _V0vanity_V0core_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k8) (bruijn pair? 3 3) (##intrinsic ##sys.pair?))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k8, env)}),
      VEncodeInt(3l), VEncodeInt(3l),
      _V40_V10sys_Dpair_Q
    );
 }
}
static void _V0vanity_V0core_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k7) (bruijn eof-object? 2 2) (##intrinsic ##sys.eof-object?))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k7, env)}),
      VEncodeInt(2l), VEncodeInt(2l),
      _V40_V10sys_Deof__object_Q
    );
 }
}
static void _V0boolean_Q_k521(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0boolean_Q_k521" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0boolean_Q_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0boolean_Q_k521, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1119 0 0) ((bruijn ##k.1118 1 0) (bruijn ##p.1119 0 0)) ((bruijn ##k.1118 1 0) (##inline ##sys.eq? (bruijn x 1 1) #f)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
V_CALL(upenv->vars[0], runtime,
      VInlineEq(
        upenv->vars[1],
        VEncodeBool(false)));
}
 }
}
static void _V0boolean_Q_lambda150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0boolean_Q_lambda150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0boolean_Q_lambda150, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0boolean_Q_lambda150, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0boolean_Q_k521) (##inline ##sys.eq? (bruijn x 0 1) #t))
V_CALL_FUNC(_V0boolean_Q_k521, env, runtime,
      VInlineEq(
        _var1,
        VEncodeBool(true)));
 }
}
static void _V0vanity_V0core_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k6) (bruijn boolean? 1 1) (close _V0boolean_Q_lambda150))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k6, env)}),
      VEncodeInt(1l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0boolean_Q_lambda150, env)})
    );
 }
}
static void _V0vanity_V0core_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40, VWORD _var41, VWORD _var42, VWORD _var43, VWORD _var44, VWORD _var45, VWORD _var46, VWORD _var47, VWORD _var48, VWORD _var49, VWORD _var50, VWORD _var51, VWORD _var52, VWORD _var53, VWORD _var54, VWORD _var55, VWORD _var56, VWORD _var57, VWORD _var58, VWORD _var59, VWORD _var60, VWORD _var61, VWORD _var62, VWORD _var63, VWORD _var64, VWORD _var65, VWORD _var66, VWORD _var67, VWORD _var68, VWORD _var69, VWORD _var70, VWORD _var71, VWORD _var72, VWORD _var73, VWORD _var74, VWORD _var75, VWORD _var76, VWORD _var77, VWORD _var78, VWORD _var79, VWORD _var80, VWORD _var81, VWORD _var82, VWORD _var83, VWORD _var84, VWORD _var85, VWORD _var86, VWORD _var87, VWORD _var88, VWORD _var89, VWORD _var90, VWORD _var91, VWORD _var92, VWORD _var93, VWORD _var94, VWORD _var95, VWORD _var96, VWORD _var97, VWORD _var98, VWORD _var99, VWORD _var100, VWORD _var101, VWORD _var102, VWORD _var103, VWORD _var104, VWORD _var105, VWORD _var106, VWORD _var107, VWORD _var108, VWORD _var109, VWORD _var110, VWORD _var111, VWORD _var112, VWORD _var113, VWORD _var114, VWORD _var115, VWORD _var116, VWORD _var117, VWORD _var118, VWORD _var119, VWORD _var120, VWORD _var121, VWORD _var122, VWORD _var123, VWORD _var124, VWORD _var125, VWORD _var126, VWORD _var127, VWORD _var128, VWORD _var129, VWORD _var130, VWORD _var131, VWORD _var132, VWORD _var133, VWORD _var134, VWORD _var135, VWORD _var136, VWORD _var137, VWORD _var138, VWORD _var139, VWORD _var140, VWORD _var141, VWORD _var142, VWORD _var143, VWORD _var144, VWORD _var145, VWORD _var146, VWORD _var147, VWORD _var148, VWORD _var149, VWORD _var150, VWORD _var151, VWORD _var152, VWORD _var153, VWORD _var154, VWORD _var155, VWORD _var156, VWORD _var157, VWORD _var158) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda3" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda3, runtime, upenv, 159, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31, _var32, _var33, _var34, _var35, _var36, _var37, _var38, _var39, _var40, _var41, _var42, _var43, _var44, _var45, _var46, _var47, _var48, _var49, _var50, _var51, _var52, _var53, _var54, _var55, _var56, _var57, _var58, _var59, _var60, _var61, _var62, _var63, _var64, _var65, _var66, _var67, _var68, _var69, _var70, _var71, _var72, _var73, _var74, _var75, _var76, _var77, _var78, _var79, _var80, _var81, _var82, _var83, _var84, _var85, _var86, _var87, _var88, _var89, _var90, _var91, _var92, _var93, _var94, _var95, _var96, _var97, _var98, _var99, _var100, _var101, _var102, _var103, _var104, _var105, _var106, _var107, _var108, _var109, _var110, _var111, _var112, _var113, _var114, _var115, _var116, _var117, _var118, _var119, _var120, _var121, _var122, _var123, _var124, _var125, _var126, _var127, _var128, _var129, _var130, _var131, _var132, _var133, _var134, _var135, _var136, _var137, _var138, _var139, _var140, _var141, _var142, _var143, _var144, _var145, _var146, _var147, _var148, _var149, _var150, _var151, _var152, _var153, _var154, _var155, _var156, _var157, _var158) {
  struct { VEnv env; VWORD argv[159]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 159, 159, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  env->vars[7] = _var7;
  env->vars[8] = _var8;
  env->vars[9] = _var9;
  env->vars[10] = _var10;
  env->vars[11] = _var11;
  env->vars[12] = _var12;
  env->vars[13] = _var13;
  env->vars[14] = _var14;
  env->vars[15] = _var15;
  env->vars[16] = _var16;
  env->vars[17] = _var17;
  env->vars[18] = _var18;
  env->vars[19] = _var19;
  env->vars[20] = _var20;
  env->vars[21] = _var21;
  env->vars[22] = _var22;
  env->vars[23] = _var23;
  env->vars[24] = _var24;
  env->vars[25] = _var25;
  env->vars[26] = _var26;
  env->vars[27] = _var27;
  env->vars[28] = _var28;
  env->vars[29] = _var29;
  env->vars[30] = _var30;
  env->vars[31] = _var31;
  env->vars[32] = _var32;
  env->vars[33] = _var33;
  env->vars[34] = _var34;
  env->vars[35] = _var35;
  env->vars[36] = _var36;
  env->vars[37] = _var37;
  env->vars[38] = _var38;
  env->vars[39] = _var39;
  env->vars[40] = _var40;
  env->vars[41] = _var41;
  env->vars[42] = _var42;
  env->vars[43] = _var43;
  env->vars[44] = _var44;
  env->vars[45] = _var45;
  env->vars[46] = _var46;
  env->vars[47] = _var47;
  env->vars[48] = _var48;
  env->vars[49] = _var49;
  env->vars[50] = _var50;
  env->vars[51] = _var51;
  env->vars[52] = _var52;
  env->vars[53] = _var53;
  env->vars[54] = _var54;
  env->vars[55] = _var55;
  env->vars[56] = _var56;
  env->vars[57] = _var57;
  env->vars[58] = _var58;
  env->vars[59] = _var59;
  env->vars[60] = _var60;
  env->vars[61] = _var61;
  env->vars[62] = _var62;
  env->vars[63] = _var63;
  env->vars[64] = _var64;
  env->vars[65] = _var65;
  env->vars[66] = _var66;
  env->vars[67] = _var67;
  env->vars[68] = _var68;
  env->vars[69] = _var69;
  env->vars[70] = _var70;
  env->vars[71] = _var71;
  env->vars[72] = _var72;
  env->vars[73] = _var73;
  env->vars[74] = _var74;
  env->vars[75] = _var75;
  env->vars[76] = _var76;
  env->vars[77] = _var77;
  env->vars[78] = _var78;
  env->vars[79] = _var79;
  env->vars[80] = _var80;
  env->vars[81] = _var81;
  env->vars[82] = _var82;
  env->vars[83] = _var83;
  env->vars[84] = _var84;
  env->vars[85] = _var85;
  env->vars[86] = _var86;
  env->vars[87] = _var87;
  env->vars[88] = _var88;
  env->vars[89] = _var89;
  env->vars[90] = _var90;
  env->vars[91] = _var91;
  env->vars[92] = _var92;
  env->vars[93] = _var93;
  env->vars[94] = _var94;
  env->vars[95] = _var95;
  env->vars[96] = _var96;
  env->vars[97] = _var97;
  env->vars[98] = _var98;
  env->vars[99] = _var99;
  env->vars[100] = _var100;
  env->vars[101] = _var101;
  env->vars[102] = _var102;
  env->vars[103] = _var103;
  env->vars[104] = _var104;
  env->vars[105] = _var105;
  env->vars[106] = _var106;
  env->vars[107] = _var107;
  env->vars[108] = _var108;
  env->vars[109] = _var109;
  env->vars[110] = _var110;
  env->vars[111] = _var111;
  env->vars[112] = _var112;
  env->vars[113] = _var113;
  env->vars[114] = _var114;
  env->vars[115] = _var115;
  env->vars[116] = _var116;
  env->vars[117] = _var117;
  env->vars[118] = _var118;
  env->vars[119] = _var119;
  env->vars[120] = _var120;
  env->vars[121] = _var121;
  env->vars[122] = _var122;
  env->vars[123] = _var123;
  env->vars[124] = _var124;
  env->vars[125] = _var125;
  env->vars[126] = _var126;
  env->vars[127] = _var127;
  env->vars[128] = _var128;
  env->vars[129] = _var129;
  env->vars[130] = _var130;
  env->vars[131] = _var131;
  env->vars[132] = _var132;
  env->vars[133] = _var133;
  env->vars[134] = _var134;
  env->vars[135] = _var135;
  env->vars[136] = _var136;
  env->vars[137] = _var137;
  env->vars[138] = _var138;
  env->vars[139] = _var139;
  env->vars[140] = _var140;
  env->vars[141] = _var141;
  env->vars[142] = _var142;
  env->vars[143] = _var143;
  env->vars[144] = _var144;
  env->vars[145] = _var145;
  env->vars[146] = _var146;
  env->vars[147] = _var147;
  env->vars[148] = _var148;
  env->vars[149] = _var149;
  env->vars[150] = _var150;
  env->vars[151] = _var151;
  env->vars[152] = _var152;
  env->vars[153] = _var153;
  env->vars[154] = _var154;
  env->vars[155] = _var155;
  env->vars[156] = _var156;
  env->vars[157] = _var157;
  env->vars[158] = _var158;
  // (set! (close _V0vanity_V0core_V20_k5) (bruijn null? 0 0) (##intrinsic ##sys.null?))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k5, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      _V40_V10sys_Dnull_Q
    );
 }
}
static void _V0vanity_V0core_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda2, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0core_V20_lambda3) #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f)
V_CALL_FUNC(_V0vanity_V0core_V20_lambda3, env, runtime,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false));
 }
}
static void _V0vanity_V0core_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_lambda2) (bruijn ##x.3 1 0) (bruijn ##x.4 0 0))
V_CALL_FUNC(_V0vanity_V0core_V20_lambda2, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0core_V20_k4) '##vcore.mutator)
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k4, env)}),
      _V10vcore_Dmutator);
 }
}
static void _V0vanity_V0core_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0core_V20_k3) '##vcore.setter)
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k3, env)}),
      _V10vcore_Dsetter);
 }
}
static void _V0vanity_V0core_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0core_V20_k2) (##string ##string.1140) (bruijn ##x.1120 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k2, env)}),
      VEncodePointer(&_V10string_D1140.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0core_V20_k1) (##string ##string.1141))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k1, env)}),
      VEncodePointer(&_V10string_D1141.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0core_V20 = (VFunc)_V0vanity_V0core_V20_lambda1;
